using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "InfluencerGuides", menuName = "ScriptableObjects/InfluencerGuides", order = 1)]
public class InfluencerGuides : ScriptableObject
{
    public List<InfluencerGuideInfo> guides;
    public List<InfluencerGuideInfo> easterEggGuides;

    public bool isTutorialCompleted {
        get {
            return CheckIfCompleted();
        }
    }
    
    public InfluencerGuideInfo GetInfluencerGuide(string guideId)
    {
        InfluencerGuideInfo influencerGuideInfo = guides.Find(x => x.id.Equals(guideId));
        if (influencerGuideInfo == null)
        {
            Debug.Log($"<color=red> Couldn't Find Influencer Guide Info with ID: {guideId} </color>");
        }
        return influencerGuideInfo;
    }
    
    public InfluencerGuideInfo GetEasterEggGuide(string guideId)
    {
        InfluencerGuideInfo influencerGuideInfo = easterEggGuides.Find(x => x.id.Equals(guideId));
        if (influencerGuideInfo == null)
        {
            Debug.Log($"<color=red> Couldn't Find Easter Egg Guide Info with ID: {guideId} </color>");
        }
        return influencerGuideInfo;
    }
    
    public void ResetAllGuides()
    {
        foreach (InfluencerGuideInfo influencerGuideInfo in guides)
        {
            influencerGuideInfo.guideCompleted = false;
        }
    }

    public void CompleteAllGuides() {
        foreach (InfluencerGuideInfo influencerGuideInfo in guides) {
            influencerGuideInfo.guideCompleted = true;
        }
    }

    private bool CheckIfCompleted() {
        foreach (InfluencerGuideInfo influencerGuideInfo in guides) {
            if (influencerGuideInfo.guideCompleted == false) {
                return false;
            }
        }
        return true;
    }
}
