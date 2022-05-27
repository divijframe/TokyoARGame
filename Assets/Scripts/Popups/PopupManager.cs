using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Doozy.Engine;
using UnityEngine;
using Doozy.Engine.UI;
using Mapbox.Unity.Utilities;
using JfranMora.Inspector;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Tapestry
{
    public class PopupManager : MonoBehaviour
    {
        public static PopupManager Instance = null;

        private const string POI_PREFAB_PREFIX_ID = "POIPopup_";
        private const string AR_GAME_COMPLETE_PREFAB_ID = "ARGameCompletePopup";
        private const string AR_GAME_COMPLETE_REWARDS_PREFAB_ID = "ARGameCompleteRewardsPopup";
        private const string NOTIFICATION_PREFAB_ID = "Popup_Notification";

        private void Awake()
        {
            Debug.Assert (Instance == null);
            Instance = this;
        }

        public void OnObjectTap(MapObjectDataEntry mapObjectDataEntry, bool inInteractionRange)
        {
            if (mapObjectDataEntry.type == MapObjectType.Invalid)
            {
                Debug.LogError("Map Object should have a valid type!");
            }
            else
            {
                PrepareToShowPoiPopup(mapObjectDataEntry, inInteractionRange);
            }
        }

        public void ShowPopup(string popupID, UnityAction buttonAction = null)
        {
            UIPopup popup = UIPopup.GetPopup(popupID);
            
            if (popup == null) return;

            if (buttonAction != null)
            {
                popup.Data.SetButtonsCallbacks(buttonAction);
            }
            
            popup.Show();
        }

        public void ShowVoiceChatOptionsPopup(List<uint> users)
        {
            UIPopup popup = UIPopup.GetPopup(PopupIDs.VOICE_CHAT_OPTIONS_POPUP_ID);
            
            if (popup == null) return;
            
            popup.GetComponent<VoiceChatOptionsController>().FillChannelUsers(users);
            
            popup.Show();
        }

        public void ShowScreenshotPopup (Camera camera = null, Camera camera2 = null, UnityAction buttonAction = null) {

            UIPopup popup = UIPopup.GetPopup(PopupIDs.SCREENSHOT_PREFAB_ID);

            if (popup == null) return;

            if (buttonAction != null) {
                popup.Data.SetButtonsCallbacks(buttonAction);
            }



            popup.GetComponentInChildren<ScreenshotController>().targetCamera = camera;

            popup.GetComponentInChildren<ScreenshotController>().targetCameraAr = camera2;


            popup.Show();
        }

        public void ShowNotification (string notificationMessage)
        {
            UIPopup popup = UIPopup.GetPopup(NOTIFICATION_PREFAB_ID);
            
            if (popup == null) return;

            // Doozy stores Labels as GOs and this one has a text component
            popup.Data.Labels[0].GetComponent<Text>().text = notificationMessage;

            popup.Show();
        }

        private void PrepareToShowPoiPopup(MapObjectDataEntry mapObjectDataEntry, bool inInteractionRange)
        {
            ShowPoiPopup(mapObjectDataEntry, inInteractionRange);

            /*if (ARManager.Instance.ARActive) {
                ShowARPoiPopup(mapObjectDataEntry, inInteractionRange);
            } else {
            }*/
        }

        private void ShowPoiPopup (MapObjectDataEntry mapObjectDataEntry, bool inInteractionRange) {
            UIPopup popup = UIPopup.GetPopup($"{POI_PREFAB_PREFIX_ID}{mapObjectDataEntry.type.ToString()}");

            if (popup == null) return;

            switch (mapObjectDataEntry.type) {
                case MapObjectType.Coin:
                    break;
                case MapObjectType.Character:
                    // Only interactable in range
                    if (!inInteractionRange) {
                        popup.Data.SetButtonsLabels("Out of Range");
                        popup.Data.SetButtonsCallbacks(delegate {
                            popup.Hide();
                        });
                    } else {
                        popup.Data.SetButtonsCallbacks(delegate {
                            OnCharacterInteractionCallback(popup);
                        });
                    }
                    break;
                case MapObjectType.PartnerLocation:
                    popup.Data.Labels[0].GetComponent<Text>().text = mapObjectDataEntry.id;
                    popup.Data.Labels[1].GetComponent<Text>().text = "Check in to get coins and rewards!";
                        //$"Some preview description about {mapObjectDataEntry.id}";
                    if (!inInteractionRange) {
                        popup.Data.SetButtonsLabels("Out of Range");
                        popup.Data.SetButtonsCallbacks(delegate {
                            popup.Hide();
                        });
                    } else {
                        popup.Data.SetButtonsCallbacks(delegate {
                            CurrencyManager.Instance.AddMultipleCoins(5);
                            OnPartnerLocationInteractionCallback(popup, mapObjectDataEntry);
                        });
                        TapestryEventRegistry.OnPartnerLocationEnter.Invoke();
                    }
                    break;
                case MapObjectType.AssetContainer:
                    // Interactable in and out of range
                    popup.Data.SetButtonsCallbacks(delegate {
                        OnAssetContainerInteractionCallback(popup);
                        TapestryEventRegistry.OnAssetContainerInfo.Invoke(mapObjectDataEntry);
                    });
                    break;
            }
            popup.Show();
        }

        private void ShowARPoiPopup (MapObjectDataEntry mapObjectDataEntry, bool inInteractionRange) {
            UIPopup popup = UIPopup.GetPopup(PopupIDs.AR_PARTNER_LOCATION_POPUP_ID);

            if (popup == null) return;

            switch (mapObjectDataEntry.type) {
                case MapObjectType.Invalid:
                    return;
                case MapObjectType.Coin:
                    return;
                case MapObjectType.Character:
                    return;
                case MapObjectType.AssetContainer:
                    return;
                case MapObjectType.PartnerLocation:
                    TapestryEventRegistry.OnTrackIn.Invoke(null);
                    break;
                case MapObjectType.Station:
                    return;
                default:
                    break;
            }
            popup.Show();
        }

        private void OnCharacterInteractionCallback(UIPopup popup)
        {
            // Show Character View
            popup.Hide();
            Debug.Log("<color=green> Show Character View </color>");
            UIManager.Instance.ShowMinigame();
        }
        
        private void OnPartnerLocationInteractionCallback(UIPopup popup, MapObjectDataEntry mapObjectDataEntry)
        {
            // Show Partner Location View
            popup.Hide();
            Debug.Log("<color=green> Show Partner Location View </color>");
            UIManager.Instance.ShowPartnerLocation(mapObjectDataEntry);
        }
        
        private void OnAssetContainerInteractionCallback(UIPopup popup)
        {
            // Show AssetContainer View
            popup.Hide();
            Debug.Log("<color=green> Show AssetContainer View </color>");
            UIManager.Instance.ShowAssetContainer();
        }
        
        public void ShowARPopups()
        {
            ShowARGameCompletePopup();
            ShowARRewardsPopup();
        }

        public void ShowARRewardsPopup()
        {
            ShowPopup(AR_GAME_COMPLETE_REWARDS_PREFAB_ID, delegate
            {
                TapestryEventRegistry.OnVirtualCharacterExit.Invoke();
                CurrencyManager.Instance.AddMultipleCoins(5);
            });
        }

        public void ShowDomeOffer(Texture2D imageTexture,string price, string offerName)
        {
            UIPopup popup = UIPopup.GetPopup(PopupIDs.MEDIA_DOME_OFFER_POPUP_ID);
            
            if (popup == null) return;

            popup.Data.Images[0].sprite = Sprite.Create(imageTexture, new Rect(0,0,imageTexture.width,imageTexture.height), Vector2.zero);
            popup.Data.SetButtonsCallbacks(delegate {
                // Add purchase screen when we move forward with this
            });

            popup.Data.Labels[0].GetComponent<Text>().text = price.ToString();
            popup.Data.Labels[1].GetComponent<Text>().text = offerName;

            popup.Show();
        }
        
        private void ShowARGameCompletePopup()
        {
            // Placeholder once we have the hook for it
            UIPopup popup = UIPopup.GetPopup(AR_GAME_COMPLETE_PREFAB_ID);
            
            if (popup == null) return;
            
            UIPopupManager.ShowPopup(popup, popup.AddToPopupQueue, false);

            //popup.Show();
        }

        public void ShowInfluencerGuidePopup(InfluencerGuideInfo influencerGuideInfo, bool showSkip = true)
        {

            UIPopup popup = UIPopup.GetPopup(PopupIDs.INFLUENCER_GUIDE_PREFAB_ID);
            
            if (popup == null) return;
            
            popup.Data.SetButtonsCallbacks(null, delegate {
                TapestryEventRegistry.OnTutorialEnded.Invoke();
            });

            popup.GetComponent<InfluencerGuideView>().SetVideoData(influencerGuideInfo, showSkip);

            popup.Show();
        }

        public void ShowGoToPopup() 
        {
            ShowPopup(PopupIDs.GO_TO_POPUP_ID);
        }

        [Button(HideInEditMode = true)]//Show debug button at bottom of inspector for runtime testing in editor
        public void TestShowScreenshot() {
            ShowScreenshotPopup();
        }
    }
}
