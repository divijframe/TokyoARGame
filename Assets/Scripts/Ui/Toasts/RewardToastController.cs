using JfranMora.Inspector;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RewardToastController : MonoBehaviour {

    // Set up singleton pattern for manager
    public static RewardToastController instance = null;

    public RewardToastItem rewardToastItemPrefab;
    public RewardToastItem rewardToastFullscreenItemPrefab;
    public Transform toastListContainer;
    public Transform toastFullscreenContainer;
    bool allowToasts = true;

    public Sprite itemSprite1;
    public Sprite itemSprite2;
    public Sprite itemSprite3;

    // Use this for initialization
    void Start () {
        Debug.Assert (instance == null);
        instance = this;

        //BRBEventRegistry.OnSomeEvent += AddToastItem;


        //Clear out dummy list items from editor
        foreach(Transform child in toastListContainer.transform){
            Destroy (child.gameObject);
        }
	}

    public void AllowRewardToasts(bool allow){
        allowToasts = allow;
        if(allow){
            //Show all queued toasts.
            foreach(Transform child in toastListContainer.transform){
                child.gameObject.SetActive (true);
            }
        }
    }

    public void AddToastItem(int amountAdded, Sprite sprite, string itemName, bool fullscreen = true)
    {
        RewardToastItem toastItem = CreateToast(fullscreen);
        toastItem.SetData(itemName, amountAdded, sprite);
    }

    private RewardToastItem CreateToast(bool fullscreen = false)
    {
        RewardToastItem toastItem;
        if (fullscreen)
        {
            toastItem = Instantiate(rewardToastFullscreenItemPrefab);
            toastItem.transform.SetParent(toastFullscreenContainer.transform, false);
        }
        else
        {
            toastItem = Instantiate(rewardToastItemPrefab);
            toastItem.transform.SetParent(toastListContainer.transform, false);
        }
        toastItem.gameObject.SetActive (allowToasts);
        return toastItem;
    }

    [Button(HideInEditMode = true)]//Show debug button at bottom of inspector for runtime testing in editor
    public void TestDummyToast()
    {
        AddToastItem(123123, itemSprite1, "Dummy Toast Item");
    }
}
