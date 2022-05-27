using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Tapestry;
using System;
using Mapbox.Utils;

public class TutorialManager : MonoBehaviour
{
    [SerializeField] private InfluencerGuides influencerGuides;

    #region Coins
    [SerializeField] private int amountOfCoins = 5;
    [SerializeField] private float radius = 20.0f;
    #endregion

    private MapObjectManager mapObjectManager;

    private void Start() {
        SubscribeMethods();

        mapObjectManager = FindObjectOfType<MapObjectManager>();
    }

    private void SubscribeMethods () {
        TapestryEventRegistry.OnIntroductionComplete.SubscribeMethod(OnIntroductionCompleteListener, false);
        TapestryEventRegistry.OnCoinClicked.SubscribeMethod(OnCoinClickedListener, false);
        TapestryEventRegistry.OnVirtualCharacterEnter.SubscribeMethod(OnVirtualCharacterEnterListener, false);
        TapestryEventRegistry.OnMinigameComplete.SubscribeMethod(OnMinigameCompleteListener, false);
        TapestryEventRegistry.OnVirtualCharacterExit.SubscribeMethod(OnVirtualCharacterExitListener, false);
        TapestryEventRegistry.OnPartnerLocationEnter.SubscribeMethod(OnPartnerLocationEnterListener, false);
        TapestryEventRegistry.OnPartnerLocationExit.SubscribeMethod(OnPartnerLocationExitListener, false);
        TapestryEventRegistry.OnAssetContainerEnter.SubscribeMethod(OnAssetContainerEnterListener, false);
        TapestryEventRegistry.OnAssetContainerExit.SubscribeMethod(OnAssetContainerExitListener, false);

        TapestryEventRegistry.OnTutorialEnded.SubscribeMethod(OnTutorialEndedListener, false);

        TapestryEventRegistry.OnGoTo.SubscribeMethod(OnPlayerTeleportedListener, false);
        
        TapestryEventRegistry.OnEasterEggEnter.SubscribeMethod(OnEasterEggEnterListener,false);
    }

    //
    // For now I will call each guide in case we need extra actions, instead of controlling them with an index 
    //

    private void OnIntroductionCompleteListener () {
        // Show Guide1
        // Reset all deals for demo
        DealManager.Instance.ResetAllDeals();
        influencerGuides.ResetAllGuides();
        ShowInfluencerGuide("Guide1", delegate { 
            TapestryEventRegistry.OnTutorialStarted.Invoke();
            mapObjectManager.SpawnTutorialCoins(amountOfCoins, radius); 
        });
    }

    private void OnCoinClickedListener(bool inInteractionRange = false) {
        // Show Guide2
        ShowInfluencerGuide("Guide2", delegate {
            mapObjectManager.SpawnTutorialVirtualCharacters();
        });
    }

    private void OnVirtualCharacterEnterListener() {
        // Show Guide3
        ShowInfluencerGuide("Guide3");
    }

    private void OnMinigameCompleteListener() {
        // Show Guide4
        ShowInfluencerGuide("Guide4");
    }

    private void OnVirtualCharacterExitListener() {
        // Show Guide5
        ShowInfluencerGuide("Guide5", delegate {
            mapObjectManager.SpawnTutorialPartnerLocation();
            StartDeals();
        });
    }

    private void OnPartnerLocationEnterListener() {
        // Show Guide6
        ShowInfluencerGuide("Guide6");
    }

    private void OnPartnerLocationExitListener() {
        // Show Guide7
        ShowInfluencerGuide("Guide7", delegate {
            mapObjectManager.SpawnTutorialAssetContainer();
        });
    }

    private void OnAssetContainerEnterListener() {
        // Show Guide8
        ShowInfluencerGuide("Guide8");
    }

    private void OnAssetContainerExitListener() {
        // Show Guide9
        if (!influencerGuides.isTutorialCompleted)
        {
            ShowInfluencerGuide("Guide9");
            TapestryEventRegistry.OnTutorialEnded.Invoke();
        }
    }

    private void OnTutorialEndedListener() {
        // Completing all guides here in case we skip the tutorial
        influencerGuides.CompleteAllGuides();
        // Starting this one here so we have a Hot Deal active in case we skip the tutorial
        StartDeals();
    }

    private void ShowInfluencerGuide (string guideID, Action afterShowAction = null) {
        InfluencerGuideInfo influencerGuideInfo = influencerGuides.GetInfluencerGuide(guideID);
        if (influencerGuideInfo.guideCompleted == false) {
            PopupManager.Instance.ShowInfluencerGuidePopup(influencerGuideInfo);
            influencerGuideInfo.guideCompleted = true;
            afterShowAction?.Invoke();
        }
    }
    
    private void OnEasterEggEnterListener(string eggGuideID) {
        // Show Guide8
        ShowEasterEggGuide(eggGuideID, delegate
        {
            CurrencyManager.Instance.AddMultipleCoins(10);
        });
    }
    
    private void ShowEasterEggGuide (string guideID, Action afterShowAction = null) {
        InfluencerGuideInfo influencerGuideInfo = influencerGuides.GetEasterEggGuide(guideID);
        PopupManager.Instance.ShowInfluencerGuidePopup(influencerGuideInfo, false);
        //influencerGuideInfo.guideCompleted = true;
        afterShowAction?.Invoke();
    }

    private void StartDeals () {
        DealManager.Instance.StartAllDeals();
        /*DealManager.Instance.StartDeal("Starbucks");
        DealManager.Instance.StartDeal("Shibuya 109");
        DealManager.Instance.StartDeal("McDonald's");
        DealManager.Instance.StartDeal("APA Hotel");*/
    }

    private void OnPlayerTeleportedListener (Vector2d position) {
        // In case the player teleports during the tutorial

        if (!influencerGuides.isTutorialCompleted) {
            OnIntroductionCompleteListener();
        }
        
    }

}
