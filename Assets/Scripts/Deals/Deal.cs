using System;
using System.Collections;
using UnityEngine;

[Serializable]
public class Deal
{
    public string title;
    public Texture2D icon;
    public float duration;
    public float timeRemaining;
    public bool active = false;

    public void StartDeal()
    {
        timeRemaining = duration;
        active = true;
    }
}
