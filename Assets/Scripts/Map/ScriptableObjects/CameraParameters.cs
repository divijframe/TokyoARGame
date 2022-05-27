using System;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/CameraParameters", order = 1)]
public class CameraParameters : ScriptableObject
{
    public float yaw = 0;
    public float pitch = 0;
    public float defaultTether = 100f;
    public float tether = 200;
    public bool trackingGPS = false;
    public bool recenterYaw = true;
    public bool recenterCam = false;
    public float recenterSpeed = 500.0f;
    public bool trackingPlayer = true;
    public Vector3 targetMapOffset = Vector3.zero;
    // Is map zoomed out
    [SerializeField]
    private bool isWorldMap = false;
    public bool IsWorldMap
    {
        get
        {
            return isWorldMap;
        }
        set
        {
            if (value == isWorldMap)
            {
                return;
            }
            isWorldMap = value ;
            OnWorldMapValueChanged?.Invoke(value);
        }    
    }

    private Action<bool> OnWorldMapValueChanged;

    public void AddWorldMapListener(Action<bool> onValueChange)
    {
        if (onValueChange != null)
        {
            OnWorldMapValueChanged += onValueChange;
        }
    }
    
    public void RemoveWorldMapListener (Action<bool> onValueChange)
    {
        if (onValueChange != null)
        {
            OnWorldMapValueChanged -= onValueChange;
        }
    }
}