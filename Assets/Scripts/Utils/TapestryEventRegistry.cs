using Mapbox.Utils;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace Tapestry
{

    public class TapestryEventRegistry
    {

        #region Startup Events
        public static TapestryEvent OnDataManagerLoaded;
        /// <summary>
        /// Reports when Map objects are instantiated
        /// </summary>
        public static TapestryEvent<MapObject> OnMapObjectSpawned;
        #endregion

        #region AR Events
        /// <summary>
        /// Reports when the player enters AR
        /// </summary>
        public static TapestryEvent OnEnterAR;
        /// <summary>
        /// Reports when the player leaves AR
        /// </summary>
        public static TapestryEvent OnLeaveAR;
        /// <summary>
        #endregion

        #region Camera Events
        /// <summary>
        /// Reports when the center camera on player
        /// </summary>
        public static TapestryEvent OnCenterPlayer;
        /// <summary>
        /// Reports when toggling map mode
        /// </summary>
        public static TapestryEvent OnToggleMapMode;
        /// <summary>
        /// Reports when zooming in to an object
        /// </summary>
        public static TapestryEvent<Camera> OnTrackIn;
        /// <summary>
        /// Reports when zooming back out to the original pos
        /// </summary>
        public static TapestryEvent OnTrackOut;

        #endregion

        #region Currency
        /// <summary>
        /// Reports when a coin has been clicked
        /// </summary>
        public static TapestryEvent<bool> OnCoinClicked;
        
        #endregion
        
        #region Partner Deals
        /// <summary>
        /// Reports when a deal has been activated
        /// </summary>
        public static TapestryEvent<PartnerLocationInfo> OnShowPartnerLocationInfo;
        
        #endregion
        
        #region Avatar
        /// <summary>
        /// Reports when the center camera on player
        /// </summary>
        public static TapestryEvent<AvatarParameters> OnAvatarSelected;
        /// <summary>
        /// Reports when to change the state of the avatar show/hide
        /// </summary>
        public static TapestryEvent<bool> OnSetAvatarState;
        /// <summary>
        /// Reports when to move the avatar to a vector2d
        /// </summary>
        public static TapestryEvent<Vector2d> OnGoTo;

        #endregion

        #region Tutorial Triggers
        /// <summary>
        /// Reports when the Introduction part is completed
        /// </summary>
        public static TapestryEvent OnIntroductionComplete;
        /// <summary>
        /// Reports when the tutorial started
        /// </summary>
        public static TapestryEvent OnTutorialStarted;
        /// <summary>
        /// Reports when entering a virtual character
        /// </summary>
        public static TapestryEvent OnVirtualCharacterEnter;
        /// <summary>
        /// Reports when leaving a virtual character
        /// </summary>
        public static TapestryEvent OnVirtualCharacterExit;
        /// <summary>
        /// Reports when finishing a minigame
        /// </summary>
        public static TapestryEvent OnMinigameComplete;
        /// <summary>
        /// Reports when entering a partner location
        /// </summary>
        public static TapestryEvent OnPartnerLocationEnter;
        /// <summary>
        /// Reports when leaving a partner location
        /// </summary>
        public static TapestryEvent OnPartnerLocationExit;
        /// <summary>
        /// Reports when entering a asset container
        /// </summary>
        public static TapestryEvent OnAssetContainerEnter;
        /// <summary>
        /// Reports when leaving a asset container
        /// </summary>
        public static TapestryEvent OnAssetContainerExit;
        /// <summary>
        /// Reports when the tutorial ended
        /// </summary>
        public static TapestryEvent OnTutorialEnded;
        /// <summary>
        /// Reports when spawning a tutorial object
        /// </summary>
        public static TapestryEvent<MapObject[]> OnTutorialObjectSpawned;

        #endregion

        #region VoiceChat

        /// <summary>
        /// Reports when Joined a voice Chat Channel
        /// </summary>
        public static TapestryEvent OnJoinVoiceChat;
        /// <summary>
        /// Reports when Joined a voice Chat Channel
        /// </summary>
        public static TapestryEvent OnLeaveVoiceChat;
        /// <summary>
        /// Reports when User Joined a voice Chat Channel
        /// </summary>
        public static TapestryEvent<uint> OnUserJoinedChannel;
        /// <summary>
        /// Reports when User Leaves a voice Chat Channel
        /// </summary>
        public static TapestryEvent<uint> OnUserLeavesChannel;
        /// <summary>
        /// Reports when User Joined a voice Chat Channel
        /// </summary>
        public static TapestryEvent<uint, bool> OnUserMuteVoiceChat;
        /// <summary>
        /// Reports when Muting a voice Chat Channel
        /// </summary>
        public static TapestryEvent<bool> OnMuteVoiceChat;
        /// <summary>
        /// Reports the volume information of users
        /// </summary>
        public static TapestryEvent<uint, int> OnVolumeIndication;
        #endregion

        #region POI Events

        /// <summary>
        /// Reports when Entering an Asset Container to send Info for the View
        /// Change MapObjectDataEntry for real info about the container
        /// </summary>
        public static TapestryEvent<MapObjectDataEntry> OnAssetContainerInfo;

        /// <summary>
        /// Reports when clicked an easter egg
        /// </summary>
        public static TapestryEvent<string> OnEasterEggEnter;
        
        #endregion

        static TapestryEventRegistry()
        {
            CreateTapestryEvents();
        }

        private static void CreateTapestryEvents() {

            #region Startup Events
            OnDataManagerLoaded = new TapestryEvent();
            OnMapObjectSpawned = new TapestryEvent<MapObject>();
            #endregion

            #region AR Events
            OnEnterAR = new TapestryEvent();
            OnLeaveAR = new TapestryEvent();
            #endregion

            #region Camera Events
            OnCenterPlayer = new TapestryEvent();
            OnToggleMapMode = new TapestryEvent();
            OnTrackIn = new TapestryEvent<Camera>();
            OnTrackOut = new TapestryEvent();
            #endregion

            #region Currency
            OnCoinClicked = new TapestryEvent<bool>();
            #endregion

            #region Partner Deals
            OnShowPartnerLocationInfo = new TapestryEvent<PartnerLocationInfo>();
            #endregion

            #region Avatar
            OnAvatarSelected = new TapestryEvent<AvatarParameters>();
            OnSetAvatarState = new TapestryEvent<bool>();
            OnGoTo = new TapestryEvent<Vector2d>();
            #endregion

            #region Tutorial Triggers
            OnIntroductionComplete = new TapestryEvent();
            OnTutorialStarted = new TapestryEvent();
            OnVirtualCharacterEnter = new TapestryEvent();
            OnMinigameComplete = new TapestryEvent();
            OnVirtualCharacterExit = new TapestryEvent();
            OnPartnerLocationEnter = new TapestryEvent();
            OnPartnerLocationExit = new TapestryEvent();
            OnAssetContainerEnter = new TapestryEvent();
            OnAssetContainerExit = new TapestryEvent();
            OnTutorialEnded = new TapestryEvent();
            OnTutorialObjectSpawned = new TapestryEvent<MapObject[]>();
            #endregion
            
            #region VoiceChat

            OnJoinVoiceChat = new TapestryEvent();
            OnLeaveVoiceChat = new TapestryEvent();
            OnMuteVoiceChat = new TapestryEvent<bool>();
            OnUserJoinedChannel = new TapestryEvent<uint>();
            OnUserLeavesChannel = new TapestryEvent<uint>();
            OnUserMuteVoiceChat = new TapestryEvent<uint, bool>();
            OnVolumeIndication = new TapestryEvent<uint, int>();

            #endregion
            
            #region POI Events
            
            OnAssetContainerInfo = new TapestryEvent<MapObjectDataEntry>();
            OnEasterEggEnter = new TapestryEvent<string>();

            #endregion
        }

        public static void OnDestroy () {
            // Creates new events to clear the old ones
            CreateTapestryEvents();
        }
    }
}