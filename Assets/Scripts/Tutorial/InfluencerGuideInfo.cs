using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

[Serializable]
public class InfluencerGuideInfo
{
    public string id;
    public VideoClip videoClip;
    [TextArea(5,5)]
    public string description;
    public string buttonLabel;
    // Will use once we need 1 time only guides
    public bool guideCompleted;
}
