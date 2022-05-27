using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Tapestry
{
    public class CurrencyWidget : MonoBehaviour
    {
        [SerializeField] private PlayerParameters playerParameters;
        [SerializeField] private Text coinsCurrencyLabel;
        [SerializeField] private Text gemsCurrencyLabel;

        private void Start()
        {
            TapestryEventRegistry.OnCoinClicked.SubscribeMethod(SetLabels, false);
            SetLabels();
        }

        private void SetLabels(bool inInteractionRange = false)
        {
            coinsCurrencyLabel.text = playerParameters.coinsAmount.ToString();
            gemsCurrencyLabel.text = playerParameters.gemsAmount.ToString();
        }
    }
}
