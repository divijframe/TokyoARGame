using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VoiceChatAudioRouteController : MonoBehaviour
{
    public GameObject speakersButton;
    public GameObject headphonesButton;
    
    private void Start()
    {
        SetAudioRouteButtonsState(true);
    }

    // UI Button Event
    public void SetSpeakersAudioRoute()
    {
        VoiceChatManager.Instance.SetAudioRoute(true);
        SetAudioRouteButtonsState(true);
    }
    
    // UI Button Event
    public void SetHeadphonesAudioRoute()
    {
        VoiceChatManager.Instance.SetAudioRoute(false);
        SetAudioRouteButtonsState(false);
    }

    private void SetAudioRouteButtonsState(bool isSpeakerPhone)
    {
        speakersButton.SetActive(isSpeakerPhone);
        headphonesButton.SetActive(!isSpeakerPhone);
    }
}
