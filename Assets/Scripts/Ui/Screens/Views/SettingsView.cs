using System.Collections;
using System.Collections.Generic;
using Tapestry;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SettingsView : MonoBehaviour
{
    [SerializeField] private PartnerLocationVariants partnerLocationVariants;
    [SerializeField] private InfluencerGuides influencerGuides;

    public void OnRestartClicked () {
        partnerLocationVariants.ResetAllDeals();
        influencerGuides.ResetAllGuides();
        TapestryEventRegistry.OnDestroy();
        SceneManager.LoadScene("Main", LoadSceneMode.Single);
    }
}
