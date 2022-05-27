using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Tapestry;

public class ARGlassSquare : MonoBehaviour
{
    public MeshRenderer glassMeshRenderer;
    public GameObject infoContainer;
    public ARGlassSquareType type;

    public Text productName;
    public Text productPrice;
    private Material imageMaterial => glassMeshRenderer.materials[1];
    public Texture2D textureRef = null;
    private Action _onClickAction;

    public Action onClickAction
    {
        get => _onClickAction;
        set => _onClickAction = value;
    }


    public enum ARGlassSquareType
    {
        Invalid = -1,
        
        Logo,
        Product
    }

    private void Start()
    {
        SetInfoState(false);
    }

    public void SetMaterial(Texture2D imageTexture)
    {
        textureRef = imageTexture;
        imageMaterial.mainTexture = imageTexture;
    }

    public void SetProductValues(Deal deal)
    {
        productName.text = deal.title;
        // Add price to scriptable
        productPrice.text = "¥ 450";
    }

    public void SetInfoState(bool state)
    {
        if (type == ARGlassSquareType.Product)
        {
            if (infoContainer != null)
            {
                infoContainer.SetActive(state);
            }
        }
    }

    public void OnClickAction()
    {
        if (type == ARGlassSquareType.Logo)
        {
            onClickAction?.Invoke();
        }
        else
        {
            SetInfoState(true);
            PopupManager.Instance.ShowDomeOffer(textureRef, productPrice.text, productName.text);
        } 
    }
    
    public void OnFocusAction()
    {
        SetInfoState(true);
    }
}
