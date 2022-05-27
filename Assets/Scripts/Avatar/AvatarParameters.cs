using System;
using UnityEngine;

[Serializable]
public class AvatarParameters
{
    public AvatarGender avatarGender;
    public GameObject prefabReference;

    public AvatarParameters()
    {
    }
}

public enum AvatarGender
{
    Invalid = -1,
    
    Male = 0,
    Female = 1
}
