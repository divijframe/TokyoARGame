using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CommunityWidget : MonoBehaviour
{
    public Image communityPicture;
    public Text nameText;
    public Text categoryText;
    public Button button;
    
    private CommunityInfo _info;
    
    public void SetData(CommunityInfo info, Action<CommunityInfo> onClickAction)
    {
        _info = info;

        button.onClick.AddListener(delegate
        {
            onClickAction?.Invoke(info);
        });
        communityPicture.sprite = Sprite.Create(info.communityPicture, new Rect(0,0, info.communityPicture.width, info.communityPicture.height), Vector2.zero);
        nameText.text = info.creatorName;
        categoryText.text = info.contentType.ToString();
    }
}
