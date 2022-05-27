using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RadialPointer : MonoBehaviour
{
    public Transform target;
    public SpriteRenderer arrowSprite;

    public float minDistance = 100.0f;
    public float maxDistance = 200.0f;

    private bool startTracking = false;

    private void Update() {
        if (startTracking) {
            if (target == null) {
                gameObject.SetActive(false);
                return;
            }
            var toTarget = transform.position - target.position;
            toTarget.y = 0;
            if (toTarget != Vector3.zero) {
                transform.rotation = Quaternion.LookRotation(toTarget);
            }

            float distanceApart = Vector3.Distance(transform.position, target.position);
            float insideDistance = Vector3.Distance(transform.position, arrowSprite.transform.position);
            Color lerpColor = arrowSprite.color;

            if (distanceApart < insideDistance) {
                lerpColor.a = 0.0f;
            } else {
                float lerp = mapValue(distanceApart, minDistance, maxDistance, 0f, 1f);
                lerpColor.a = Mathf.Lerp(1, 0, lerp);
            }
            arrowSprite.color = lerpColor;
        }
    }

    public void SetPointer (Transform _target, Color _color) {
        transform.localPosition = Vector3.zero;
        target = _target;
        arrowSprite.color = _color;
        startTracking = true;
    }
    private float mapValue(float mainValue, float inValueMin, float inValueMax, float outValueMin, float outValueMax) {
        return (mainValue - inValueMin) * (outValueMax - outValueMin) / (inValueMax - inValueMin) + outValueMin;
    }

}
