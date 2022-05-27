using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/FriendsList", order = 1)]
public class FriendsList : ScriptableObject
{
    public List<FriendInfo> friends;
    
    public FriendInfo GetFriendInfo(string friendID)
    {
        FriendInfo friendInfo = friends.Find(x => x.id.Equals(friendID));
        if (friendInfo == null)
        {
            Debug.Log($"<color=red> Couldn't Find Friend Info with ID: {friendID} </color>");
        }
        return friendInfo;
    }
}
