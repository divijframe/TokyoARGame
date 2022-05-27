using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FriendWidget : MonoBehaviour
{
    public Image profilePicture;
    public Text name;
    public VoiceChatTrigger voiceChatTrigger;
    
    private FriendInfo _info;
    
    public void SetData(FriendInfo info, bool usesVoiceChat)
    {
        _info = info;

        profilePicture.sprite = Sprite.Create(info.profilePicture, new Rect(0,0, info.profilePicture.width, info.profilePicture.height), Vector2.zero);
        name.text = info.name;
        voiceChatTrigger.targetChannelName = info.id;
        voiceChatTrigger.gameObject.SetActive(usesVoiceChat);
    }
}
