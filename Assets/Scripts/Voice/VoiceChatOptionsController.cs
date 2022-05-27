using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Tapestry;

public class VoiceChatOptionsController : MonoBehaviour
{
    public VoiceChatUser voiceChatUserPrefab;
    public Transform usersContainer;
    private List<VoiceChatUser> createdUsers = new List<VoiceChatUser>();
    [SerializeField]
    private List<UserDataDummy> userDataDummyList = new List<UserDataDummy>();

    private void Start()
    {
        FillChannelUsers(VoiceChatManager.Instance.usersInChannel);
        TapestryEventRegistry.OnUserJoinedChannel.SubscribeMethod(CreateUniqueChannelUser, false);
        TapestryEventRegistry.OnUserLeavesChannel.SubscribeMethod(RemoveUser, false);
        TapestryEventRegistry.OnVolumeIndication.SubscribeMethod(SetVolumeIndicators, false);
        TapestryEventRegistry.OnUserMuteVoiceChat.SubscribeMethod(SetUserMuted, false);
    }

    public void OnLeaveChannelButtonClick()
    {
        VoiceChatManager.Instance.LeaveChannel();
    }

    public void FillChannelUsers(List<uint> users)
    {
        foreach (uint userID in users)
        {
            CreateUniqueChannelUser(userID);
        }
    }

    private void RemoveUser(uint userID)
    {
        VoiceChatUser user = createdUsers.Find(x => x.userID == userID);
        if (user != null)
        {
            createdUsers.Remove(user);
            Destroy(user.gameObject);
        }
    }

    private void CreateUniqueChannelUser(uint userID)
    {
        VoiceChatUser user = createdUsers.Find(x => x.userID == userID);
        if (user == null)
        {
            VoiceChatUser newUser = Instantiate(voiceChatUserPrefab, Vector3.zero, Quaternion.identity, usersContainer);
            var randomUserDummyData = UnityEngine.Random.Range(0, userDataDummyList.Count); ;
            newUser.SetData(userID, userDataDummyList[randomUserDummyData].userSprite, userDataDummyList[randomUserDummyData].userName);
            createdUsers.Add(newUser);
        }
    }
    
    private void SetVolumeIndicators(uint id, int volume)
    {
        /*VoiceChatUser user = createdUsers.Find(x => x.userID == id);
        if (user != null)
        {
            user.SetVolumeIndicatorState(volume > 50);
        }*/

        foreach (VoiceChatUser voiceChatUser in createdUsers)
        {
            if (voiceChatUser.userID.Equals(id))
            {
                voiceChatUser.SetVolumeIndicatorState(volume > 50);
            }
            else
            {
                voiceChatUser.SetVolumeIndicatorState(false);
            }
        }
    }

    private void SetUserMuted(uint id, bool isMuted)
    {
        VoiceChatUser user = createdUsers.Find(x => x.userID == id);
        if (user != null)
        {
            user.SetVolumeIndicatorState(false);
        } 
    }
    
    private void OnDestroy()
    {
        TapestryEventRegistry.OnUserJoinedChannel.RemoveRepeatingMethod(CreateUniqueChannelUser);
        TapestryEventRegistry.OnUserLeavesChannel.RemoveRepeatingMethod(RemoveUser);
        TapestryEventRegistry.OnVolumeIndication.RemoveRepeatingMethod(SetVolumeIndicators);
        TapestryEventRegistry.OnUserMuteVoiceChat.RemoveRepeatingMethod(SetUserMuted);
    }
}

[Serializable]
public class UserDataDummy
{
    [SerializeField]
    public string userName;
    [SerializeField]
    public Sprite userSprite;
}