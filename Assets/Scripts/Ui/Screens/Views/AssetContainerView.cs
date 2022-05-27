using SocialApp;
using System;
using System.Collections;
using System.Collections.Generic;
using Tapestry;
using UnityEngine;

public class AssetContainerView : MonoBehaviour
{
    // This class will have references to Ui elements and data injection

    public VoiceChatTrigger voiceChatTrigger;

    [SerializeField]
    private GameObject addMediaButton;

    [SerializeField]
    private GameObject selectMediaTypeMenu;

    private void Awake()
    {
        TapestryEventRegistry.OnAssetContainerInfo.SubscribeMethod(SetInfo, false);
    }

    private void OnEnable()
    {
        ToggleSelectMediaTypeMenu(false);
    }

    private void SetInfo(MapObjectDataEntry mapObjectDataEntry)
    {
        voiceChatTrigger.targetChannelName = mapObjectDataEntry.id;
    }

    public void OnHide() {
        TapestryEventRegistry.OnAssetContainerExit.Invoke();
    }

    public void OnUploadClicked () {
        PopupManager.Instance.ShowPopup(PopupIDs.UPLOAD_POPUP_ID);
    }

    public void ToggleSelectMediaTypeMenu(bool show)
    {
        addMediaButton.SetActive(!show);
        selectMediaTypeMenu.SetActive(show);
    }
}
