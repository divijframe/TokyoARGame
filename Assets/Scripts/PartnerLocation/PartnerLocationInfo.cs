using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class PartnerLocationInfo
{
    // This will have more information about the partner location such as
    // Logos, Visual "Avatar", Raw Images
    public string id;
    public string name;
    public string description;
    public Texture2D logo;
    public List<Deal> deals;

}
