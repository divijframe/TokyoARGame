using System;
using System.Collections;
using System.Collections.Generic;
using Tapestry;
using UnityEngine;

public class FrustumScale : MonoBehaviour
{
    public Transform uiMarker1;
    public Camera camera;
    public float markerOriginalHeight = 0.5f;
    public float desiredScreenScale = 0.5f;

    private void Start()
    {
        camera = Camera.main;
    }

    void LateUpdate ()
    {
        float distance = Vector3.Distance(uiMarker1.position, camera.transform.position);
        var frustumHeight = 2.0f * distance * Mathf.Tan(camera.fieldOfView * 0.5f * Mathf.Deg2Rad);

        float heightToMatch = frustumHeight * desiredScreenScale;

        float newScale = heightToMatch / markerOriginalHeight;

        uiMarker1.localScale = new Vector3(newScale, newScale, newScale);
    }

}
