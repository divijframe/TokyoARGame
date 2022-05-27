using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Tapestry;
using UnityEngine;

public class MediaDomeMapObject : MapObject
{
    [SerializeField] private MediaDomeVariants mediaDomeVariants;

    public MeshRenderer iconMeshRenderer;
    public List<DomeOfferElement> contentElements;
    public Transform ambientFXParent;
    public AudioSource ambientAudioSource;
    
    public Transform domeTransform;

    private Tween iconShowTween = null;
    private Tween domeShowTween = null;
    private Tween iconHideTween = null;
    private Tween domeHideTween = null;

    private GameObject ambientFX;
    
    public override void SetProximityListeners()
    {
        proximityTrigger.SetProximityTriggers(delegate
        {
            if (!cameraParameters.IsWorldMap)
            {
                ShowDome();
            }
        }, delegate
        {
            if (!cameraParameters.IsWorldMap)
            {
                HideDome();
            }
        });
    }

    public override void SetWorldMapValueChangedListeners(bool isWorldMap)
    {
        if (isWorldMap)
        {
            HideDome(true);
        }
        else
        {
            if (proximityTrigger.isPlayerInside)
            {
                ShowDome();
            }
        }
    }

    public override void HandleTap(bool inInteractionRange)
    {
        base.HandleTap(inInteractionRange);
        Debug.Log("Tapped on Media Dome " + inInteractionRange);
    }
    
    public override void Initialize(MapObjectDataEntry entry)
    {
        base.Initialize(entry);
        SetDomeData(mediaDomeVariants.GetMediaDomeInfo(entry.id));
        cameraParameters.AddWorldMapListener(SetWorldMapValueChangedListeners);
        HideDome(true);
        SetProximityListeners();
    }

    private void SetDomeData(MediaDomeInfo domeInfo)
    {
        iconMeshRenderer.material.mainTexture = domeInfo.iconMaterial;
        ambientAudioSource.clip = domeInfo.ambientSFX;

        if (domeInfo.ambientFX != null)
        {
            ambientFX = Instantiate(domeInfo.ambientFX, Vector3.zero, Quaternion.identity, ambientFXParent);
            ambientFX.transform.localPosition = Vector3.zero;
        }

        int contentAmount = domeInfo.contentImages.Count;
        int amountOfSlots = contentElements.Count;
        
        for (int i = 0; i < amountOfSlots; i++)
        {
            if (i <= contentAmount - 1)
            {
                contentElements[i].SetMaterial(domeInfo.contentImages[i]);
                contentElements[i].gameObject.SetActive(true);
            }
            else
            {
                contentElements[i].gameObject.SetActive(false);
                contentElements.RemoveAt(i);
            }
        }
    }
    
    private void ShowDome()
    {
        /*if (cameraParameters.IsWorldMap)
        {
            return;
        }*/
        
        StopHide();
        domeTransform.gameObject.SetActive(true);
        SetDomeMusic(false,true);
        ambientFX.SetActive(true);

        iconShowTween = iconMeshRenderer.transform.DOLocalMove(new Vector3(0, 75, 0), 1.5f);
        domeShowTween = domeTransform.DOScale(Vector3.one * 10, 2).OnComplete(delegate
        {
            foreach (ARGlassSquare contentElement in contentElements)
            {
                contentElement.gameObject.SetActive(true);
            }
        });
    }
    
    private void HideDome(bool isInstant = false)
    {
        /*if (cameraParameters.IsWorldMap)
        {
            return;
        }*/
        
        StopShow();
        SetDomeMusic(isInstant,false);
        ambientFX.SetActive(false);
        foreach (ARGlassSquare contentElement in contentElements)
        {
            contentElement.gameObject.SetActive(false);
        }
        
        iconHideTween = iconMeshRenderer.transform.DOLocalMove(new Vector3(0, 15, 0), isInstant ? 0 : 2);
        domeHideTween = domeTransform.DOScale(Vector3.zero, isInstant ? 0 : 2).OnComplete(delegate
        {
            domeTransform.gameObject.SetActive(false);
        });
    }

    private void StopShow()
    {
        if (iconShowTween == null || domeShowTween == null)
        {
            return;
        }
        iconShowTween.Kill();
        domeShowTween.Kill();
    }

    private void StopHide()
    {
        if (iconHideTween == null || domeHideTween == null)
        {
            return;
        }
        iconHideTween.Kill();
        domeHideTween.Kill();
    }

    private void SetDomeMusic(bool isInstant, bool state)
    {
        if (state)
        {
            ambientAudioSource.Play();
            ambientAudioSource.volume = 0;
            ambientAudioSource.DOFade(1, 5);
        }
        else
        {
            ambientAudioSource.DOFade(0, isInstant ? 0 : 2).OnComplete(delegate
            {
                ambientAudioSource.Pause();
            });
        }
    }
}
