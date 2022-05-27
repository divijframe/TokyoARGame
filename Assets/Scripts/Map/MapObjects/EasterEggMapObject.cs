using System.Collections;
using System.Collections.Generic;
using Tapestry;
using UnityEngine;

public class EasterEggMapObject : MapObject
{
    public GameObject spinningThing;
    private float spin_speed_default;

    void Start() {
        if (spinningThing != null) {
            spin_speed_default = spinningThing.GetComponent<Spinner>().rotation_speed_y;
        }
    }

    public override void HandleTap(bool inInteractionRange)
    {
        base.HandleTap(inInteractionRange);
        Debug.Log("Tapped on Easter Egg" + inInteractionRange);
        
        if (inInteractionRange)
        {
            TapestryEventRegistry.OnEasterEggEnter.Invoke(DataEntry.id);
            cameraParameters.RemoveWorldMapListener(SetWorldMapValueChangedListeners);
            Destroy(gameObject, 0.01f);
        }
        else
        {
            PopupManager.Instance.ShowNotification("Out of Range");
        }
    }
    
    public override void Initialize(MapObjectDataEntry entry)
    {
        base.Initialize(entry);
        SetProximityListeners();
        cameraParameters.AddWorldMapListener(SetWorldMapValueChangedListeners);
    }
        
    public override void SetProximityListeners()
    {
        proximityTrigger.SetProximityTriggers(OnPlayerEnter, OnPlayerExit);
    }
    
    public override void SetWorldMapValueChangedListeners(bool isWorldMap)
    {
        if (isWorldMap)
        {
            OnPlayerExit();
        }
        else
        {
            if (proximityTrigger.isPlayerInside)
            {
                OnPlayerEnter();
            }
        }
    }

    private void OnPlayerExit()
    {
        SetProximityFXState(false);
        if (spinningThing != null) {
            spinningThing.GetComponent<Spinner>().rotation_speed_y = spin_speed_default;
        }
    }
        
    private void OnPlayerEnter()
    {
        if (cameraParameters.IsWorldMap)
        {
            SetProximityFXState(false);
            return;
        }
        
        SetProximityFXState(true);
        if (spinningThing != null) {
            spinningThing.GetComponent<Spinner>().rotation_speed_y = spin_speed_default * 4;
        }
    }
}
