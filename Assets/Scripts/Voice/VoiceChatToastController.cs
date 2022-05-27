using System;
using System.Collections;
using System.Collections.Generic;
using Tapestry;
using UnityEngine;

public class VoiceChatToastController : MonoBehaviour
{
    public VoiceChatToast voiceChatToast;

    private void Start()
    {
        HideVoiceChatToast();
        TapestryEventRegistry.OnJoinVoiceChat.SubscribeMethod(ShowVoiceChatToast, false);
        TapestryEventRegistry.OnLeaveVoiceChat.SubscribeMethod(HideVoiceChatToast, false);
    }

    private void ShowVoiceChatToast()
    {
        voiceChatToast.gameObject.SetActive(true);
    }
    
    private void HideVoiceChatToast()
    {
        voiceChatToast.gameObject.SetActive(false);
    }
}
