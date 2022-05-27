using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TransformCameraFollow : MonoBehaviour
{
    private void Update()
    {
        if (!Camera.main)
        {
            return;
        }
        Transform camT = Camera.main.transform;
        transform.rotation = camT.rotation;
    }
}
