using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using JfranMora.Inspector;
using Tapestry;
using UnityEngine;

public class ARMapObjectWidget : MonoBehaviour
{
    public PartnerLocationInfo partnerInfo;

    public GameObject content;
    public ARGlassSquare logo;
    public List<ARGlassSquare> offers;
    public float tweenDuration;
    public float timeBetweenShowingOffers;
    public Ease tweenEase;
    public GameObject activateFX;
    public GameObject deactivateFX;

    private Vector3 initialPosition;
    private bool checkVisibility = false;
    private Plane[] planes;
    private Collider logoCollider;
    private Action OnHideAction;
    private void Start()
    {
        logoCollider = logo.GetComponentInChildren<Collider>();
        if (!ARManager.Instance.ARActive)
        {
            content.SetActive(false);
        }
    }

    private void Update()
    {
        if (!checkVisibility)
        {
            return;
        }
        planes = GeometryUtility.CalculateFrustumPlanes(ARManager.Instance.ARCamera);
        if (!GeometryUtility.TestPlanesAABB(planes, logoCollider.bounds) && ARManager.Instance.ARActive)
        {
            Hide();
        }
    }

    public void Show(PartnerLocationInfo partnerLocationInfo, Transform refPos, Camera ARCamera, Action onHideAction = null)
    {
        content.SetActive(true);
        SetOffersInfoState(false, null);
        SetValues(partnerLocationInfo);
        OnHideAction = onHideAction;
        
        var t = transform;
        initialPosition = t.position;
        t.rotation = ARCamera.transform.rotation;
        t.localScale = Vector3.zero;

        TweenPositionAndScale(refPos.position, Vector3.one * 2, delegate
        {
            TweenOffers(Vector3.one);
            checkVisibility = true;
        });
        activateFX.transform.LookAt(ARCamera.transform);
        SetVXFState(true);
    }

    public void Hide()
    {
        checkVisibility = false;
        TweenOffers(Vector3.zero, delegate
        {
            TweenPositionAndScale(initialPosition, Vector3.zero, delegate
            {
                content.SetActive(false);
                OnHideAction?.Invoke();
            });
        });
        SetVXFState(false);
    }

    private void SetVXFState(bool isShowing)
    {
        if (deactivateFX != null && activateFX != null)
        {
            activateFX.SetActive(isShowing);
            deactivateFX.SetActive(!isShowing);
        }
    }

    private void TweenPositionAndScale (Vector3 endPos, Vector3 endScale, TweenCallback onCompleteAction = null)
    {
        transform.DOMove(endPos, tweenDuration).SetEase(tweenEase);
        transform.DOScale(endScale, tweenDuration).SetEase(tweenEase).OnComplete(onCompleteAction);
    }

    private void TweenOffers(Vector3 endScale, TweenCallback onCompleteAction = null)
    {
        StartCoroutine(TweenOfferCr(endScale, onCompleteAction));
    }

    private IEnumerator TweenOfferCr(Vector3 endScale, TweenCallback onCompleteAction = null)
    {
        foreach (var offer in offers)
        {
            if (offer.gameObject.activeSelf)
            {
                Transform offerT = offer.transform;
                offerT.DOScale(endScale, tweenDuration/2).SetEase(tweenEase);
                yield return new WaitForSeconds(timeBetweenShowingOffers);
            }
        }
        onCompleteAction?.Invoke();
    }

    private void SetValues(PartnerLocationInfo partnerLocationInfo)
    {
        logo.SetMaterial(partnerLocationInfo.logo);
        logo.onClickAction = Hide;

        int amountOfDeals = partnerLocationInfo.deals.Count;
        int amountOfSlots = offers.Count;
        
        for (int i = 0; i < amountOfSlots; i++)
        {
            if (i <= amountOfDeals - 1)
            {
                offers[i].SetMaterial(partnerLocationInfo.deals[i].icon);
                offers[i].SetProductValues(partnerLocationInfo.deals[i]);
                offers[i].gameObject.SetActive(true);
                offers[i].transform.localScale = Vector3.zero;
            }
            else
            {
                offers[i].gameObject.SetActive(false);
            }
        }
    }

    public void SetOffersInfoState(bool state, ARGlassSquare ignoreSelected)
    {
        if (ignoreSelected != null && ignoreSelected.type == ARGlassSquare.ARGlassSquareType.Logo)
        {
            return;
        }
        foreach (ARGlassSquare offer in offers)
        {
            if (ignoreSelected != null)
            {
                offer.SetInfoState(ignoreSelected.Equals(offer) ? !state : state);
            }
            else
            {
                offer.SetInfoState(state);
            }
            
        }
    }

    [Button(HideInEditMode = true)]//Show debug button at bottom of inspector for runtime testing in editor
    public void TestShow() {
        Show(partnerInfo, ARManager.Instance.refPosition, ARManager.Instance.ARCamera);
    }
    
    [Button(HideInEditMode = true)]//Show debug button at bottom of inspector for runtime testing in editor
    public void TestHide() {
        Hide();
    }
}
