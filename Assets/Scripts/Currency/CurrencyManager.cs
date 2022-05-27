using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry
{
    public class CurrencyManager : MonoBehaviour
    {
        public static CurrencyManager Instance = null;

        [SerializeField] private PlayerParameters playerParameters;
        [SerializeField] private Sprite  coinSprite;
        
        private void Awake()
        {
            Debug.Assert (Instance == null);
            Instance = this;
        }
        
        private void Start()
        {
            TapestryEventRegistry.OnCoinClicked.SubscribeMethod(AddCoin, false);
        }

        public void AddCoin(bool inInteractionRange = false)
        {
            playerParameters.coinsAmount++;
            RewardToastController.instance.AddToastItem(1, coinSprite, "Super Massive Coin");
            BRBAudioManager.instance.PlayCrystalPickupSFX();
        }

        public void AddMultipleCoins(int amount)
        {
            playerParameters.coinsAmount+= amount;
            RewardToastController.instance.AddToastItem(amount, coinSprite, "Super Massive Coin");
            BRBAudioManager.instance.PlayCrystalPickupSFX();
        }
    }
}
