using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MapFriendWidget : MonoBehaviour
{
    // This class will have more information about the friend
    public Image profilePicture;

    private void Update()
    {
        if (!Camera.main)
        {
            return;
        }
        Transform camT = Camera.main.transform;
        // Face camera direction by simply matching the roatation of the camera, don't use lookat
        transform.rotation = camT.rotation;
    }

    public void SetData(FriendInfo friendInfo)
    {
        profilePicture.sprite = Sprite.Create(friendInfo.profilePicture, new Rect(0,0, friendInfo.profilePicture.width, friendInfo.profilePicture.height), Vector2.zero);
    }
}
