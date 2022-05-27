using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using JfranMora.Inspector;
using UnityEngine;

namespace Tapestry
{
    public class DealManager : MonoBehaviour
    {
        public static DealManager Instance = null;
        
        [SerializeField] private PartnerLocationVariants partnerLocationVariants;
        private List<Deal> activeDeals = new List<Deal>();

        private void Awake()
        {
            Debug.Assert (Instance == null);
            Instance = this;
        }
        
        private void Start()
        {
            TapestryEventRegistry.OnMapObjectSpawned.SubscribeMethod(SetPartnerLocation, false);
        }
        
        private void Update()
        {
            for (int i = 0; i < activeDeals.Count; i++)
            {
                Deal deal = activeDeals[i];
                if (!deal.active)
                {
                    activeDeals.Remove(deal);
                } 
            }
            
            foreach (Deal deal in activeDeals)
            {
                if (deal.timeRemaining > 0)
                {
                    deal.timeRemaining -= Time.deltaTime;
                }
                else
                {
                    Debug.Log($"<color=red> Deal: {deal.title} - Ended </color>");
                    deal.active = false;
                    deal.timeRemaining = 0;
                }
            }
        }

        private void SetPartnerLocation(MapObject mapObject)
        {
            if (mapObject.DataEntry.type != MapObjectType.PartnerLocation) {
                return;
            }

            //StartDeal(mapObject.DataEntry.id);
            TapestryEventRegistry.OnShowPartnerLocationInfo.Invoke(GetPartnerLocationInfo(mapObject.DataEntry.id));
        }

        public void StartDeal(string partnerLocationID)
        {
            PartnerLocationInfo partnerLocationInfo = GetPartnerLocationInfo(partnerLocationID);
            Deal deal = partnerLocationInfo.deals[0];

            if (deal.active)
            {
                Debug.Log($"<color=red> Deal at: {partnerLocationInfo.id} already in progress - " +
                                 $"Seconds Remaining: {deal.timeRemaining} </color>");
            } 
            else
            {
                deal.StartDeal();
                Debug.Log($"<color=red> Starting Deal at: {partnerLocationInfo.id}</color>");
            }
            TapestryEventRegistry.OnShowPartnerLocationInfo.Invoke(partnerLocationInfo);
            if (!activeDeals.Contains(deal))
            {
                activeDeals.Add(deal);
            }
        }

        private PartnerLocationInfo GetPartnerLocationInfo (string partnerLocationID) {
            PartnerLocationInfo partnerLocationInfo = partnerLocationVariants.GetPartnerLocationInfo(partnerLocationID);

            if (partnerLocationInfo == null) {
                return null;
            }

            if (partnerLocationInfo.deals[0] == null) {
                return null;
            }

            return partnerLocationInfo;
        }

        public void ResetAllDeals () {
            partnerLocationVariants.ResetAllDeals();
        }

        public void StartAllDeals()
        {
            activeDeals.Clear();
            activeDeals = partnerLocationVariants.StartAllDeals();
        }
    }
}
