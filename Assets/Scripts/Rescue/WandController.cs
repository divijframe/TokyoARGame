using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WandController : MonoBehaviour {

    Quaternion startRotation;
    Quaternion rotation;
    Vector3 targetPoint;

    bool aiming = false;

    public void SetAiming(bool _aiming)
    {
        aiming = _aiming;
    }

    public void SetTarget(Vector3 _target)
    {
        targetPoint = _target;
    }

    // Use this for initialization
    void Start () {
        startRotation = transform.rotation;
        rotation = startRotation;
    }
	
	// Update is called once per frame
	void Update () {
		//if (aiming)
  //      {

  //          Quaternion rot = Quaternion.LookRotation(targetPoint.normalized) * startRotation;
  //          rotation = Quaternion.RotateTowards(rotation, rot, 10.0f);
  //          transform.localRotation = rotation;
  //         // Debug.Log("Wand rotation = " + targetPoint);
  //      }
  //      else
  //      {
  //          rotation = Quaternion.RotateTowards(rotation, startRotation, 10.0f);
  //          transform.localRotation = rotation;
  //      }
    }

    public void PlayChargeSFX()
    {
        BRBAudioManager.instance.PlayWandChargeSFX();
    }

    public void PlayDischargeSFX()
    {
        BRBAudioManager.instance.PlayWandDischargeSFX();
    }
}
