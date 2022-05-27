using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FriendsListManager : MonoBehaviour
{
    [SerializeField] private FriendInfo testFriendGroup;
    
    [SerializeField] private FriendsList friendsList;

    public FriendWidget friendWidgetPrefab;
    public Transform friendWidgetsContainer;
    
    private void Awake()
    {
        FillFriendsList();
    }

    private void FillFriendsList()
    {
        DestroyAllFriends();
        // REMOVE this for a more suitable friend group manager
        InstantiateFriend(testFriendGroup, true);
        foreach (FriendInfo friendInfo in friendsList.friends)
        {
            InstantiateFriend(friendInfo, false);
        }
    }

    private void InstantiateFriend(FriendInfo info, bool usesVoiceChat)
    {
        FriendWidget newFriend = Instantiate(friendWidgetPrefab, Vector3.zero, Quaternion.identity, friendWidgetsContainer);
        newFriend.SetData(info, usesVoiceChat);
    }

    private void DestroyAllFriends()
    {
        foreach (Transform friend in friendWidgetsContainer) {
            Destroy(friend.gameObject);
        }
    }
    
}
