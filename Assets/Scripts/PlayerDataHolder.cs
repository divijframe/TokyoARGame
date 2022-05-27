using UnityEngine;
using System.Collections;
//using GameSparks.Api.Responses;

public class PlayerDataHolder : MonoBehaviour {

    // Global singleton access pattern
    public static PlayerDataHolder Instance = null;

    [SerializeField]
    PlayerParameters playerParameters;

    private string playerName = "Nameless";
    public string PlayerName { get { return playerName; } }

    public int Gems { get { return playerParameters.gemsAmount; } }

    public int Coins { get { return playerParameters.coinsAmount; } }

    private int dust = 0;
    public int Dust { get { return dust; } }
    // Allow override of dust for local cache
    public void SetCachedDust(int _dust) { dust = _dust; }

    private int homeNeighborhoodID = 0;
    public int HomeNeightborhoodID { get { return homeNeighborhoodID; } }
    // Updated local cache when you hit it
    public void SetHomeIDCache(int homeId)
    {
        homeNeighborhoodID = homeId;
        if (BRBEventRegistry.OnSetHomeIDCache != null)
            BRBEventRegistry.OnSetHomeIDCache();
    }

    private void Awake()
    {
        Debug.Assert(Instance == null);
        Instance = this;
    }

    void Start()
    {
        BRBEventRegistry.OnPlayerNameChanged += OnPlayerNameChanged;
        BRBEventRegistry.GSOnDiamondAdded += GSOnDiamondAdded;
        BRBEventRegistry.GSOnCrystalAdded += GSOnCrystalAdded;
        //BRBEventRegistry.GSOnAccountDetailsRetrieved += GSOnAccountDetailsRetrieved;
        BRBEventRegistry.GSOnItemPurchased += GSOnItemPurchased;
        BRBEventRegistry.GSOnCrystalDebited += GSOnCrystalDebited;
    }

    void OnPlayerNameChanged(string newName)
    {
        playerName = newName;
    }

    void GSOnCrystalAdded(string crystalType, int amount)
    {
    }

    void GSOnCrystalDebited(string crystalType, int amount)
    {
        switch(crystalType)
        {
            case "Gem":
                playerParameters.gemsAmount -= amount;
                break;

            case "Coin":
                playerParameters.coinsAmount -= amount;
                break;
        }
    }

    //TODO: These are split b/c eventually the server will follow different code paths
    //      For now they just do the same thing. 
    void GSOnDiamondAdded(int amount)
    {
    }

    void GSOnItemPurchased(string crystalType, int amount)
    {
        switch (crystalType)
        {
            case "Gem":
                playerParameters.gemsAmount += amount;
                Debug.Log("Gem: " + playerParameters.gemsAmount);
                break;
            case "Coin":
                playerParameters.coinsAmount += amount;
                Debug.Log("Coin Total: " + playerParameters.coinsAmount);
                break;
        }
    }

}
