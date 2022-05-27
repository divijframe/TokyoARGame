using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/PlayerParameters", order = 1)]
public class PlayerParameters : ScriptableObject
{
    // World pos of avatar and gps
    public Vector3 avatarPos;
    public Vector3 gpsPos;
    public Vector3 gpsEulerAngles;
    public Vector3 targetPos;
    public bool followingGPS = true;
    public Mapbox.Utils.Vector2d gpsLatLng;
    public Mapbox.Utils.Vector2d avatarLatLng;

    #region Currency

    public int coinsAmount;
    public int gemsAmount;

    #endregion
}