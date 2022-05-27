using System;
using System.Collections;
using System.Collections.Generic;
using Tapestry;
using UnityEngine;

public class ProximityTrigger : MonoBehaviour
{
    private Action onPlayerEnterAction;
    private Action onPlayerExitAction;

    public bool isPlayerInside = false;
    
    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<AvatarManager>())
        {
            onPlayerEnterAction?.Invoke();
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.GetComponent<AvatarManager>())
        {
            isPlayerInside = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.GetComponent<AvatarManager>())
        {
            onPlayerExitAction?.Invoke();
            isPlayerInside = false;
        }
    }

    public void SetProximityTriggers(Action onEnter, Action onExit)
    {
        if (onEnter != null)
        {
            onPlayerEnterAction += onEnter;
        }

        if (onExit != null)
        {
            onPlayerExitAction += onExit;
        }
    }
}
