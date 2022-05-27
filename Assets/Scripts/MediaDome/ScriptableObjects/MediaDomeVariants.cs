using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "MediaDomeVariants", menuName = "ScriptableObjects/MediaDomeVariants", order = 1)]
public class MediaDomeVariants : ScriptableObject
{
    public List<MediaDomeInfo> mediaDomes;

    public MediaDomeInfo GetMediaDomeInfo(string domeID)
    {
        MediaDomeInfo mediaDomeInfo = mediaDomes.Find(x => x.id.Equals(domeID));
        if (mediaDomeInfo == null)
        {
            Debug.Log($"<color=red> Couldn't Find Media Dome Info with ID: {domeID} </color>");
        }
        return mediaDomeInfo;
    }
}
