using System;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/AvatarVariants", order = 1)]
public class AvatarVariants : ScriptableObject
{
    public List<AvatarParameters> avatars;
}
