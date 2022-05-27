using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "PartnerLocationVariants", menuName = "ScriptableObjects/PartnerLocationVariants", order = 1)]
public class PartnerLocationVariants : ScriptableObject
{
    public List<PartnerLocationInfo> partnerLocations;
    
    public PartnerLocationInfo GetPartnerLocationInfo(string partnerID)
    {
        PartnerLocationInfo partnerLocationInfo = partnerLocations.Find(x => x.id.Equals(partnerID));
        if (partnerLocationInfo == null)
        {
            Debug.Log($"<color=red> Couldn't Find Partner Location Info with ID: {partnerID} </color>");
        }
        return partnerLocationInfo;
    }
    
    public void ResetAllDeals()
    {
        foreach (PartnerLocationInfo partnerLocationInfo in partnerLocations)
        {
            foreach (Deal deal in partnerLocationInfo.deals) {
                deal.active = false;
                deal.timeRemaining = 0;
            }
        }
    }
    
    public List<Deal> StartAllDeals()
    {
        List<Deal> activatedDeals = new List<Deal>();
        foreach (PartnerLocationInfo partnerLocationInfo in partnerLocations)
        {
            foreach (Deal deal in partnerLocationInfo.deals) {
                deal.active = true;
                deal.timeRemaining = deal.duration;
                activatedDeals.Add(deal);
            }
        }

        return activatedDeals;
    }
}

