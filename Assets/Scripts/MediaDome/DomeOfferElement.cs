using System.Collections;
using System.Collections.Generic;
using Tapestry;
using UnityEngine;

public class DomeOfferElement : ARGlassSquare
{
    // Adding this here for now since Domes were suppose to be AR only but now they are not, change to independent class
    public void ShowDomeOffer()
    {
        PopupManager.Instance.ShowDomeOffer(textureRef, "¥ 300", "");
    }
}
