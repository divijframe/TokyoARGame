using BRB_ARGeo;
//using GameSparks.Api.Responses;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;
using UnityEngine;


/// <summary>
/// Data component for rescue target prefabs
/// </summary>
public class RescueTarget : MonoBehaviour {

	//BRBGlobals.Character _character;
    //public BRBGlobals.Character Character { get { return _character; } }

    void GSOnRescueAttempted(bool escaped)
    {
        if (escaped)
        {
            if (gameObject != null)
            {
                gameObject.SetActive(false);
            }
            BRBEventRegistry.GSOnRescueAttempted -= GSOnRescueAttempted;
        }
    }

    void GSOnRescueCompleted(bool success)
    {
        BRBEventRegistry.GSOnRescueCompleted -= GSOnRescueCompleted;
        BRBEventRegistry.GSOnRescueAttempted -= GSOnRescueAttempted;
    }

    // Use this for initialization
    void Start () {
        BRBEventRegistry.GSOnRescueAttempted += GSOnRescueAttempted; //This is flawed. If they exit the screen, these stick around
        BRBEventRegistry.GSOnRescueCompleted += GSOnRescueCompleted;

    }

    void OnDestroy()
    {
        BRBEventRegistry.GSOnRescueCompleted -= GSOnRescueCompleted;
        BRBEventRegistry.GSOnRescueAttempted -= GSOnRescueAttempted;
    }

    // Update is called once per frame
    void Update () {
    }
}
