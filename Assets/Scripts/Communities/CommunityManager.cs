using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CommunityManager : MonoBehaviour
{
    [SerializeField] private CommunitiesList communitiesList;

    #region Community List
    [Space(5.0f)]
    [Header("Community List")]
    public CommunityWidget communityWidget;
    public Transform communityWidgetsContainer;
    #endregion
    
    #region Community Progression
    [Space(5.0f)] 
    [Header("Community Progression")]
    public Text progressionTitle;
    public Image bannerImage;
    public Button feedButton;
    public VoiceChatTrigger voiceChatTrigger;
    #endregion
    
    #region Community Feed
    [Space(5.0f)] 
    [Header("Community Feed")]
    public Text feedTitle;
    public List<Image> feedImages;
    #endregion
    
    
    private void Awake()
    {
        FillCommunitiesList();
    }

    private void FillCommunitiesList()
    {
        DestroyAllChilds();
        foreach (CommunityInfo communityInfo in communitiesList.communities)
        {
            InstantiateCommunityWidget(communityInfo);
        }
    }

    private void InstantiateCommunityWidget(CommunityInfo info)
    {
        CommunityWidget newCommunity = Instantiate(communityWidget, Vector3.zero, Quaternion.identity, communityWidgetsContainer);
        newCommunity.SetData(info, OnCommunityProgressionClickAction);
    }

    private void OnCommunityProgressionClickAction(CommunityInfo info)
    {
        progressionTitle.text = info.creatorName;
        bannerImage.sprite = info.bannerImage;
        feedButton.onClick.AddListener(delegate
        {
            OnFeedClickAction(info);
        });
        voiceChatTrigger.targetChannelName = info.id;
    }

    private void OnFeedClickAction (CommunityInfo info)
    {
        feedTitle.text = info.creatorName;

        for (int i = 0; i < feedImages.Count; i++)
        {
            // For now assuming they all have 2
            feedImages[i].sprite = info.feedImages[i];
        }
    }

    private void DestroyAllChilds()
    {
        foreach (Transform communityWidget in communityWidgetsContainer) {
            Destroy(communityWidget.gameObject);
        }
    }
}
