using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Tapestry;

public class VoiceChatUser : MonoBehaviour
{
    public uint userID;
    public Text userIDText;

    public Image userImage;

    public GameObject muteButton;
    public GameObject unmuteButton;

    public GameObject volumeIndicator;
    
    private void Awake()
    {
        //TapestryEventRegistry.OnUserMuteVoiceChat.SubscribeMethod(SetMuteButtonsState, false);
    }
    
    public void SetData(uint id, Sprite userSprite, string userName)
    {
        userID = id;

        bool userIsMe = id.Equals(VoiceChatManager.Instance.personalID);

        userIDText.text = userIsMe ? "(Me) Makoto" : $"User: {id}";

        //Leave sprite as default makoto image if userIsMe
        if (!userIsMe)
        {
            userImage.sprite = userSprite;
        }
    }

    public void SetVolumeIndicatorState(bool state)
    {
        volumeIndicator.SetActive(state);
    }
    
    /*private void SetMuteButtonsState(uint id, bool isMuted)
    {
        if (id != userID)
        {
            return;
        }
        muteButton.SetActive(!isMuted);
        unmuteButton.SetActive(isMuted);
    }
    
    private void OnDestroy()
    {
        TapestryEventRegistry.OnUserMuteVoiceChat.RemoveRepeatingMethod(SetMuteButtonsState);
    }*/
}
