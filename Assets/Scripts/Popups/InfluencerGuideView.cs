using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class InfluencerGuideView : MonoBehaviour
{
    public VideoPlayer videoPlayer;
    public Text description;
    public Text buttonLabel;
    public GameObject skipButton;
    
    public void SetVideoData(InfluencerGuideInfo info, bool showSkip)
    {
        videoPlayer.clip = info.videoClip;
        description.text = info.description;
        buttonLabel.text = info.buttonLabel;
        skipButton.SetActive(showSkip);
    }

    public void OnHideView()
    {
        videoPlayer.targetTexture.Release();
    }
}
