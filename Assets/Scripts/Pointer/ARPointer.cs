using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARPointer : MonoBehaviour
{
    public Transform target;

    private void Update() {
        if (target == null) {
            Destroy(gameObject);
            return;
        }
        var toTarget = transform.position - target.position;
        toTarget.y = 0;
        if (toTarget != Vector3.zero) {
            transform.rotation = Quaternion.LookRotation(toTarget);
        }
        transform.localPosition = Vector3.zero;
    }
}
