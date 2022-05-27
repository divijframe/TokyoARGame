using System;
using System.Collections;
using System.Collections.Generic;
using Doozy.Engine;
using Doozy.Engine.UI;
using JfranMora.Inspector;
using Tapestry;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    public static UIManager Instance = null;

    [SerializeField] private List<ScreenBase> screens = new List<ScreenBase>();
    [SerializeField] private PartnerLocationVariants partnerLocationVariants;
    [SerializeField] private PartnerLocationView partnerLocationView;
    
    private void Awake () {
        Debug.Assert (Instance == null);
        Instance = this;
        HideAll();
    }

    private void Start()
    {
        // Move this when we have the flow going, for now it will always show the introduction
        Show<IntroductionScreen>();
        //Show<MapScreen>();
        TapestryEventRegistry.OnTrackIn.SubscribeMethod(OnTrackInListener, false);
        TapestryEventRegistry.OnTrackOut.SubscribeMethod(OnTrackOutListener, false);
    }

    private void HideAll()
    {
        foreach (var screen in screens)
        {
            screen.Hide();
        }
    }

    public void Show<T>(bool hideAll = true) where T : ScreenBase
    {
        ScreenBase screen = GetScreen<T>();
        if (screen == null)
        {
            return;
        }

        if (hideAll)
        {
            HideAll();
        }
        screen.Show();
    }
    
    public void Hide<T>() where T : ScreenBase
    {
        ScreenBase screen = GetScreen<T>();
        if (screen == null)
        {
            return;
        }
        screen.Hide();
    }

    public void ShowAssetContainer()
    {
        GetScreen<MapScreen>().graphController.GoToNodeByName("AssetContainer");
        TapestryEventRegistry.OnAssetContainerEnter.Invoke();
    }

    public void ShowMinigame()
    {
        GetScreen<MapScreen>().graphController.GoToNodeByName("Minigame");
        TapestryEventRegistry.OnVirtualCharacterEnter.Invoke();
    }
    
    public void ShowPartnerLocation(MapObjectDataEntry mapObjectDataEntry)
    {
        UIView.HideView("MapUi", false);
        GetScreen<MapScreen>().graphController.GoToNodeByName("PartnerLocation");
        PartnerLocationInfo partnerLocationInfo = partnerLocationVariants.GetPartnerLocationInfo(mapObjectDataEntry.id);
        partnerLocationView.SetViewInfo(partnerLocationInfo);
    }

    private ScreenBase GetScreen<T>() where T : ScreenBase
    {
        ScreenBase screen = null;
        screen = screens.Find(x => x.GetType() == typeof(T));
        if (screen == null)
        {
            Debug.LogError($"Screen not found: {typeof(T)}");
        }

        return screen;
    }
    
    private void OnEnable()
    {
        Message.AddListener<GameEventMessage>(OnMessageListener);
    }

    private void OnDisable()
    {
        Message.RemoveListener<GameEventMessage>(OnMessageListener);
    }
    
    private void OnMessageListener (GameEventMessage message)
    {
        if (message == null)
        {
            return;
        }

        if (GameEventIDs.INTRODUCTION_ENDED_EVENT_ID.Equals(message.EventName))
        {
            Show<MapScreen>();
            GetScreen<MapScreen>().graphController.GoToNodeByName("AvailableMissions");
            return;
        }
        
        if (GameEventIDs.INTRODUCTION_CUSTOMIZATION_COMPLETE_EVENT_ID.Equals(message.EventName))
        {
            // We will do something else when the customization is complete (set the avatar and stuff)
            Show<MapScreen>(false);
            return;
        }
            
        if (GameEventIDs.INTRODUCTION_MISSION_ACCEPTED_EVENT_ID.Equals(message.EventName))
        {
            Show<MapScreen>();
            PopupManager.Instance.ShowPopup(PopupIDs.MISSION_ACCEPTED_POPUP_ID, delegate {
                OnIntroductionCompleted();
            });
            // Introduction Ended
            return;
        }

        if (GameEventIDs.LOGGED_IN_SHOW_MAP_EVENT_ID.Equals(message.EventName))
        {
            //Debug.LogError("andy LOGGED_IN_SHOW_MAP_EVENT_ID");
            Show<MapScreen>();
            // Introduction Ended
            OnIntroductionCompleted();
            return;
        }
        
        if (GameEventIDs.WIN_MINIGAME_EVENT_ID.Equals(message.EventName))
        {
            PopupManager.Instance.ShowARRewardsPopup();
        }
            
        if (GameEventIDs.COMPLETE_COMMUNITY_MISSION_EVENT_ID.Equals(message.EventName))
        {
            PopupManager.Instance.ShowPopup(PopupIDs.MISSION_COMPLETED_POPUP_ID, delegate
            {
                PopupManager.Instance.ShowPopup(PopupIDs.COMMUNITY_lEVEL_UP_POPUP_ID);
            });
        }
    }

    private void OnIntroductionCompleted () {
        TapestryEventRegistry.OnIntroductionComplete.Invoke();
    }

    public void GoToCurrentMissions()
    {
        // Temp method to go to Current Missions, Change to a more generic wait to jump to Nodes in Doozy Controllers
        GetScreen<MapScreen>().graphController.GoToNodeByName("CurrentMissions");
    }

    private void OnTrackInListener(Camera refCamera)
    {
        GetScreen<MapScreen>().HideViews();
    }
    
    private void OnTrackOutListener()
    {
        GetScreen<MapScreen>().ShowViews();
    }


    #region Debug Methods

    [Button(HideInEditMode = true)]//Show debug button at bottom of inspector for runtime testing in editor
    public void TestShowIntroductionScreen()
    {
        Show<IntroductionScreen>();
    }
    
    [Button(HideInEditMode = true)]//Show debug button at bottom of inspector for runtime testing in editor
    public void TestShowPostARGameScreen()
    {
        Show<ARGameScreen>();
    }
    
    [Button(HideInEditMode = true)]//Show debug button at bottom of inspector for runtime testing in editor
    public void TestShowMapScreen()
    {
        Show<MapScreen>();
    }
    
    #endregion

}
