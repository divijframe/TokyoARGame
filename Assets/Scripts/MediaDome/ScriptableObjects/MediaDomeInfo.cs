using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class MediaDomeInfo
{
    public string id;
    public ContentType contentType;
    public Texture2D iconMaterial;
    public GameObject ambientFX;
    public List<Texture2D> contentImages;
    public AudioClip ambientSFX;
}
