using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// copied from the interwebs, should probably replace this
public class Spinner : MonoBehaviour 
    {
    public float rotation_speed_x = 0f;
    public float rotation_speed_y = 1f;
    public float rotation_speed_z = 0f;

    void Update() {
        this.transform.Rotate(rotation_speed_x, rotation_speed_y, rotation_speed_z, Space.Self);
    }
}