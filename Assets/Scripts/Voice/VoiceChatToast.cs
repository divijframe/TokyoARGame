using System.Collections;
using System.Collections.Generic;
using Tapestry;
using UnityEngine;

public class VoiceChatToast : MonoBehaviour
{
    public void OnOptionsButtonClick()
    {
        VoiceChatManager.Instance.ShowVoiceOptions();
    }
}
