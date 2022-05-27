using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Tapestry;

public class VoiceChatMuteController : MonoBehaviour
{
    public GameObject muteButton;
    public GameObject unmuteButton;
    
    private void Awake()
    {
        TapestryEventRegistry.OnMuteVoiceChat.SubscribeMethod(SetMuteButtonsState, false);
    }

    private void Start()
    {
        SetMuteButtonsState(VoiceChatManager.Instance.IsMuted);
    }

    // UI Button Event
    public void SetMuteState(bool isMuted)
    {
        VoiceChatManager.Instance.SetMuteState(isMuted);
    }

    private void SetMuteButtonsState(bool isMuted)
    {
        muteButton.SetActive(!isMuted);
        unmuteButton.SetActive(isMuted);
    }

    private void OnDestroy()
    {
        TapestryEventRegistry.OnMuteVoiceChat.RemoveRepeatingMethod(SetMuteButtonsState);
    }
}
