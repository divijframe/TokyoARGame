using BRB_ARGeo;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CrystalConsumable : Activatable {

    public string CrystalType;
    public GameObject AmountObject;

    int consumableCount = 0;

    // Use this for initialization
    void Start () {
        BRBEventRegistry.GSOnCrystalSelectSuccessful += GSOnCrystalSelectSuccessful;
        BRBEventRegistry.GSOnCrystalSelectFailure += GSOnCrystalSelectFailure;
        //BRBEventRegistry.GSOnAccountDetailsRetrieved += GSOnAccountDetailsRetrieved;
        BRBEventRegistry.GSOnRaidSessionAttempted += GSOnRaidSessionAttempted;

        //BRBEventRegistry.OnFakeCrystalSelected += OnFakeCrystalSelected;
        BRBEventRegistry.OnFakeRaidAttempted += OnFakeRaidAttempted;
        BRBEventRegistry.GSOnCrystalDebited += GSOnCrystalDebited;

        GetComponent<Button>().onClick.AddListener(ClickCrystal);
    }

    private void OnDestroy()
    {
        BRBEventRegistry.GSOnCrystalSelectSuccessful -= GSOnCrystalSelectSuccessful;
        BRBEventRegistry.GSOnCrystalSelectFailure -= GSOnCrystalSelectFailure;
        //BRBEventRegistry.GSOnAccountDetailsRetrieved -= GSOnAccountDetailsRetrieved;
        BRBEventRegistry.GSOnRaidSessionAttempted -= GSOnRaidSessionAttempted;

        //BRBEventRegistry.OnFakeCrystalSelected -= OnFakeCrystalSelected;
        BRBEventRegistry.OnFakeRaidAttempted -= OnFakeRaidAttempted;
        BRBEventRegistry.GSOnCrystalDebited -= GSOnCrystalDebited;
    }

    private void OnEnable()
    {
        UpdateCrystalAmount();
    }

    void ClickCrystal()
    {
        BRBEventRegistry.OnCrystalSelected(CrystalType);
        //BRBEventRegistry.GSOnCrystalSelectSuccessful();
    }

    //Adapted from: https://stackoverflow.com/questions/2134161/format-number-like-stack-overflow-rounded-to-thousands-with-k-suffix
    string FormatNumber(int num)
    {
        if (num >= 1000000)
            return (num / 1000000D).ToString("0.#") + "M";
        if (num >= 100000)
            return (num / 1000).ToString() + "K";
        return num.ToString("#,0");
    }

    void SetAmount(int amount)
    {
        AmountObject.GetComponent<Text>().text = FormatNumber(amount);
        consumableCount = amount;
    }

    /*
    void GSOnAccountDetailsRetrieved(AccountDetailsResponse response)
    {
        //Debug.LogError ("GSOnAccountDetailsRetrieved: " + response);
        if (!response.HasErrors)
        {
            SetAmount((int)response.Currencies.GetInt(CrystalType));
        }
        else
        {
            Debug.Log("Error with retrieving account details: " + response.JSONString);
        }
    }
    */

    void UpdateCrystalAmount()
    {
        switch(CrystalType)
        {
            case "Gem":
                SetAmount(PlayerDataHolder.Instance.Gems);
                break;
            case "Coin":
                SetAmount(PlayerDataHolder.Instance.Coins);
                break;
        }
    }

    void GSOnCrystalSelectSuccessful()
    {
        gameObject.SetActive(false);
    }

    void GSOnCrystalSelectFailure()
    {
        //TODO: Brittle error string comparison
        //We already have a valid rescue session, so just use it
        gameObject.SetActive(false);
    }

    void GSOnRaidSessionAttempted()
    {
        gameObject.SetActive(true);
    }

    void GSOnCrystalDebited(string crystalType, int amount)
    {
        gameObject.SetActive(false);
    }

    void OnFakeCrystalSelected(string inCrystalType)
    {
        gameObject.SetActive(false);
    }

    void OnFakeRaidAttempted(bool _continue)
    {
        UpdateCrystalAmount();
        gameObject.SetActive(_continue);
    }

    public override IEnumerator Activate()
    {
        //Debug.LogError ("Activate: " + CrystalType);
        gameObject.SetActive(true);
        //GetComponentInChildren<Image>().enabled = false;
        UpdateCrystalAmount();
        yield break;
    }

    public override IEnumerator Deactivate()
    {
        //Debug.LogError ("Deactivate: " + CrystalType);
        yield break;
    }
}
