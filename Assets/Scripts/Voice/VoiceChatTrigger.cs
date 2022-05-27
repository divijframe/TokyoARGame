using System.Collections;
using System.Collections.Generic;
using Tapestry;
using UnityEngine;

public class VoiceChatTrigger : MonoBehaviour
{
    // Change this to a more Fancy way to handle channel names
    public string targetChannelName;
    
    public void OnVoiceChatButtonClick()
    {
        if (string.IsNullOrEmpty(targetChannelName))
        {
            Debug.LogError("Assign a Target Channel Name to Join Voice Chat");
            return;
        }
        
        VoiceChatManager.Instance.JoinChannel(targetChannelName);
    }
}
