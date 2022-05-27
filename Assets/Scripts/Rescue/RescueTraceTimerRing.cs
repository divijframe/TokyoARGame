using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RescueTraceTimerRing : MonoBehaviour {

    private float minTimerScale = 1.0f;
    private float maxTimerScale = 2.0f;
    public Gradient gradient;
    public Image image;
    public Image image2;
    public GameObject cursorTrail;

    public void SetTimerAmount(float amount){
        transform.localScale = Vector3.one * Mathf.Lerp (minTimerScale, maxTimerScale, amount);
        Color color = gradient.Evaluate (amount);
        image.color = color;
        color.a = 1;
        image2.color = color;
    }

    public void SetTimerEnabled(bool enable){
        image.gameObject.SetActive (enable);
        image2.gameObject.SetActive (enable);
        if(cursorTrail != null){
            cursorTrail.SetActive (enable);
        }

    }
}
