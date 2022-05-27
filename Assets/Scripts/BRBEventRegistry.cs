//using GameSparks.Api.Responses;
//using GameSparks.Core;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Public single point of access for global event broadcasting.
/// </summary>
public class BRBEventRegistry : MonoBehaviour {
    //GS Events
    //public static System.Action<System.Collections.Generic.List<GameSparks.Core.GSData>> GSOnPositionUpdated;
    public static System.Action GSOnInit;
    public static System.Action GSOnDisplayNameChanged;
    public static System.Action GSOnBeginRescueSuccess;
    public static System.Action GSOnBeginRescueFailure;
    public static System.Action GSOnAttemptRescueSuccess;
    public static System.Action GSOnAttemptRescueFailure;
    public static System.Action GSOnInventoryUpdated;
    public static System.Action GSOnAccountDetailsRetrieved;
    public static System.Action<bool> GSOnRescueAttempted; //TODO: These are messy when separate. Do they really need to be?
    public static System.Action<bool> GSOnRescueCompleted;
    public static System.Action GSOnCrystalSelectSuccessful;
    public static System.Action GSOnCrystalSelectFailure;
    public static System.Action<string, int> GSOnCrystalAdded;
    public static System.Action<int> GSOnDiamondAdded;
    public static System.Action GSOnDustAndCharmsAdded;
    public static System.Action<string, int> GSOnItemPurchased;
    public static System.Action GSOnCharacterUpgraded;
    public static System.Action GSDebugOnCharmsSet;
    public static System.Action GSDebugOnAllCharactersGranted;
    public static System.Action GSOnRaidSessionBegan;
    public static System.Action GSOnRaidSessionRetrieved;
    public static System.Action GSOnRaidSessionAttempted;
    public static System.Action GSOnRaidRewardsRetrieved;
    public static System.Action GSOnNeighborhoodRetrieved;
    public static System.Action GSOnNeighborhoodDataSet;
    public static System.Action GSOnHomeNeighborhoodSet;
    public static System.Action<int> GSOnBuildingMaterialAdded;
    public static System.Action GSOnActivityConstructionSuccess;
    public static System.Action GSOnActivityConstructionFailure;
    public static System.Action GSOnActivityRetrieved;
    public static System.Action GSOnActivityCharacterAttached;
    public static System.Action<string, int> GSOnCrystalDebited;
    public static System.Action GSOnCheckThemeHasChanged;

    //Rescue abstraction
    public static System.Action<float> OnTraceCompleted;

    //Loading spinner
    public static System.Action OnNetworkCallStarted;
    public static System.Action OnNetworkCallCompleted;

    //Misc UI Events
    //public static System.Action<BRB_ARGeo.SceneManager.ScreenID> OnSceneChanged;
    public static System.Action<string> OnCrystalSelected;
    public static System.Action<string> OnPlayerNameChanged;
    public static System.Action<int> OnDustGained;
    public static System.Action<int, long> OnCharmsGained;
    public static System.Action<string, int> OnCrystalGained; //For popping reward toasts
    public static System.Action<int> OnDiamondGained; //For popping reward toasts
    //public static System.Action<BRBGlobals.Character> OnCharacterSelectedFromInventory;
    public static System.Action<long> OnRaidPartyMemberDisabled;
    public static System.Action<int> OnBuildingMaterialGained; //For popping reward toasts

    //Timing events (usually these need to happen after one of the network calls)
    public static System.Action OnRaidValuesUpdated;
    //public static System.Action<bool, GSData> OnRaidFinishedExternally; //TODO: Need a cleaner way to do this than just tacking the GSData onto the end

    //Map Events (things that can happen on map that objects need to know about
    //public static System.Action<BRBGlobals.MapThemes> OnMapThemeChanged;
    public static System.Action OnSetHomeIDCache;//(andyp) Using this instead of GSOnHomeNeighborhoodSet for castle "home" icons since it messes up in some cases due to unknown reasons.  Possibly order of operations.

    //Fake tutorial events
    public static System.Action<string> OnFakeCrystalSelected;
    public static System.Action OnFakeCrystalCollected;
    public static System.Action OnFakeRescueOpened;
    public static System.Action OnFakeRescueCompleted;
    public static System.Action OnCharacterScreenClosed;
    public static System.Action OnFakeActivityOpened;
    public static System.Action OnFakeActivityCharacterSelected;
    public static System.Action OnFakeActivityTimerComplete;
    public static System.Action OnFakeActivityCollected;
    public static System.Action<bool> OnFakeRaidAttempted;

    // Use this for initialization
    void Start () {
        
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
