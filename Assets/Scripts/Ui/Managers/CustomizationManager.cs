using System;
using System.Collections;
using System.Collections.Generic;
using Doozy.Engine.UI;
using Tapestry;
using UnityEngine;

public class CustomizationManager : MonoBehaviour
{
    public AvatarVariants avatarVariants;

    public List<AvatarParameters> cachedAvatars = new List<AvatarParameters>();

    [Header("Buttons")]
    [Space(10)]
    public UIButton maleButton;
    public UIButton femaleButton;

    private AvatarParameters selectedAvatar;
    
    private void Start()
    {
        SetInitialAvatar();
    }

    private void SetInitialAvatar()
    {
        // Using PlayerPrefs until we have a better save system
        AvatarGender gender = (AvatarGender)PlayerPrefs.GetInt("AvatarGender", (int)AvatarGender.Male);
        SwitchAvatarGender(gender);
        SendAvatarSelected();
    }

    private AvatarParameters GetAvatar (AvatarGender avatarGender)
    {
        AvatarParameters avatar = avatarVariants.avatars.Find(x => x.avatarGender == avatarGender);
        if (avatar == null)
        {
            Debug.LogError($"Avatar not found: {avatarGender.ToString()}");
        }
        return avatar;
    }

    private void SwitchAvatarGender(AvatarGender avatarGender)
    {
        AvatarParameters cachedAvatar = cachedAvatars.Find(x => x.avatarGender == avatarGender);
        if (cachedAvatar == null)
        {
            AvatarParameters avatar = GetAvatar(avatarGender);
            cachedAvatar = new AvatarParameters
            {
                avatarGender = avatarGender,
                prefabReference = avatar.prefabReference
            };
            cachedAvatars.Add(avatar);
        }
        foreach (var avatar in cachedAvatars)
        {
            avatar.prefabReference.SetActive(false);
        }
        cachedAvatar.prefabReference.SetActive(true);

        selectedAvatar = cachedAvatar;
        
        SendAvatarSelected();
        
        SwitchButtons(avatarGender);
    }

    private void SwitchButtons(AvatarGender avatarGender)
    {
        switch (avatarGender)
        {
            case AvatarGender.Male:
                maleButton.gameObject.SetActive(true);
                femaleButton.gameObject.SetActive(false);
                break;
            case AvatarGender.Female:
                maleButton.gameObject.SetActive(false);
                femaleButton.gameObject.SetActive(true);
                break;
            default:
                Debug.LogError($"Invalid Gender: {avatarGender.ToString()}");
                break;
        }
    }

    private void SendAvatarSelected()
    {
        PlayerPrefs.SetInt("AvatarGender", (int)selectedAvatar.avatarGender);
        TapestryEventRegistry.OnAvatarSelected.Invoke(selectedAvatar);
    }

    // Attached to UI Accept Button
    public void OnCustomizationAccepted()
    {
        SendAvatarSelected();
    }
    
    // Attached to UI Gender Button
    public void OnMaleButtonClick()
    {
        SwitchAvatarGender(AvatarGender.Female);
    }
    
    // Attached to UI Gender Button
    public void OnFemaleButtonClick()
    {
        SwitchAvatarGender(AvatarGender.Male);
    }
}
