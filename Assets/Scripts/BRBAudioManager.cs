using BRB_ARGeo;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BRBAudioManager : MonoBehaviour {

    private AudioSource musicSource;
    private AudioSource sfxSource;

    [SerializeField]
    AudioClip mapMusic_Fantasy;
    [SerializeField]
    AudioClip mapMusic_Spooky;
    [SerializeField]
    AudioClip mapMusic_Pirate;
    [SerializeField]
    AudioClip rescueMusic;
    [SerializeField]
    AudioClip raidMusic;

    public static bool MusicActive = true;
    public static bool SFXActive = true;

    /*
    public static void SetMusicActive(bool on)
    {
        MusicActive = on;
        PlayerPrefs.SetInt("MusicMuted", on ? 0 : 1);
        if (on == false)
            instance.StopMusic();
        else
            instance.PlayMusic(BRB_ARGeo.SceneManager.instance.currentScreen);
    }
    */

    public static void SetSFXActive(bool on)
    {
        SFXActive = on;
        PlayerPrefs.SetInt("SFXMuted", on ? 0 : 1);
    }

    /*
    public void PlayMusic(BRB_ARGeo.SceneManager.ScreenID screen)
    {
        if (!MusicActive)
            return;

        AudioClip newClip = null;
        switch (screen)
        {
            case BRB_ARGeo.SceneManager.ScreenID.Rescue:
                newClip = rescueMusic;
                break;

            case BRB_ARGeo.SceneManager.ScreenID.CoopRescue:
                newClip = raidMusic;
                break;
            
            case BRB_ARGeo.SceneManager.ScreenID.Map:
            default:
                 //TODO @jchau: This breaks the principles of dependency injection.
                 //* Eventually, if the game gets complicated enough, we should have a 
                 //* GameContext structure that stores the relevant context of the game state
                 //* that other structures can query to determine their theme specific logic.
                 //* For now, it's okay to have the audio manager be a slightly coupled to the 
                 //* rest of the game state.

                if (BRBPlayerPosition.Instance != null && BRBPlayerPosition.Instance.Neighborhood != null)
                {
                    BRBGlobals.MapThemes curTheme = BRBPlayerPosition.Instance.Neighborhood.Theme;
                    // Special Handling for tutorial
                    if (TutorialController.Instance.Phase < TutorialPhase.FIRSTMINEAPPEARS)
                        curTheme = BRBGlobals.MapThemes.Fantasy;
                    else if (TutorialController.Instance.Phase < TutorialPhase.DONE)
                        curTheme = BRBGlobals.MapThemes.Spooky;
                    switch (curTheme)
                    {

                        case BRBGlobals.MapThemes.Spooky:
                            newClip = mapMusic_Spooky;
                            break;
                        case BRBGlobals.MapThemes.Pirate:
                            newClip = mapMusic_Pirate;
                            break;
                        case BRBGlobals.MapThemes.Fantasy:
                        default:
                            newClip = mapMusic_Fantasy;
                            break;
                    }
                }
                else
                {
                    // default if the system hasn't started up yet
                    newClip = mapMusic_Fantasy;
                }
                break;
        }
        if (newClip != musicSource.clip)
        {
            musicSource.clip = newClip;
            musicSource.loop = true;
            musicSource.Play();
        }
    }
    */


    public void SetMusicVolume(float newVol)
    {
        musicSource.volume = Mathf.Clamp(newVol, 0.0f, 1.0f);
    }
    public void StopMusic()
    {
        musicSource.Stop();
        musicSource.clip = null;
    }

    public void PlaySFX(AudioClip clip, float vol)
    {
        if (!SFXActive)
            return;
        sfxSource.PlayOneShot(clip, vol);
    }

    [SerializeField]
    AudioClip sfx_CharacterSpawnIn;
    public void PlayCharacterSpawnSFX()
    {
        if (!SFXActive)
            return;
        //sfxSource.PlayOneShot(sfx_CharacterSpawnIn, 1.0f);
        sfxSource.PlayOneShot(sfx_CharacterSpawnIn, 0.5f);
    }

    [SerializeField]
    AudioClip sfx_CharacterRescue;
    [SerializeField]
    AudioClip sfx_CharacterRunaway;
    public void PlayRescueSFX(bool success)
    {
        if (!SFXActive)
            return;
        sfxSource.PlayOneShot((success ? sfx_CharacterRescue : sfx_CharacterRunaway));
    }

    [SerializeField]
    AudioClip sfx_RaidComplete;
    [SerializeField]
    AudioClip sfx_RaidCompletePlus;
    public void PlayRaidCompleteSFX(int index)
    {
        if (!SFXActive)
            return;
        switch(index)
        {
            case 0:
                sfxSource.PlayOneShot(sfx_RaidComplete);
                break;

            case 1:
            default:
                sfxSource.PlayOneShot(sfx_RaidCompletePlus);
                break;
        }
    }
    [SerializeField]
    AudioClip sfx_TracingFail;
    [SerializeField]
    AudioClip sfx_TracingSuccess;
    public void PlayTracingResultSFX(bool success)
    {
        if (!SFXActive)
            return;
        sfxSource.PlayOneShot((success ? sfx_TracingSuccess : sfx_TracingFail));
    }
    [SerializeField]
    AudioClip sfx_RaidTracingFail;
    [SerializeField]
    AudioClip sfx_RaidTracingSuccess;
    public void PlayRaidTracingResultSFX(bool success)
    {
        if (!SFXActive)
            return;
        sfxSource.PlayOneShot((success ? sfx_RaidTracingSuccess : sfx_RaidTracingFail));
    }
    [SerializeField]
    AudioClip UI_BackButton_01;
    [SerializeField]
    AudioClip UI_BackButton_02;
    [SerializeField]
    AudioClip UI_BackButton_03;
    [SerializeField]
    AudioClip UI_BackButton_04;
    public void PlayBackButtonSFX(int index)
    {
        if (!SFXActive)
            return;
        switch (index)
        {
            case 1:
                sfxSource.PlayOneShot(UI_BackButton_01);
                break;
            case 2:
                sfxSource.PlayOneShot(UI_BackButton_02);
                break;
            case 3:
                sfxSource.PlayOneShot(UI_BackButton_03);
                break;
            case 4:
                sfxSource.PlayOneShot(UI_BackButton_04);
                break;
            default:
                sfxSource.PlayOneShot(UI_BackButton_01);
                break;
        }
    }
    [SerializeField]
    AudioClip UI_ButtonDown_01;
    [SerializeField]
    AudioClip UI_ButtonDown_02;
    [SerializeField]
    AudioClip UI_ButtonDown_03;
    [SerializeField]
    AudioClip UI_ButtonDown_04;
    public void PlayButtonDownSFX(int index)
    {
        if (!SFXActive)
            return;
        switch (index)
        {
            case 1:
                sfxSource.PlayOneShot(UI_ButtonDown_01);
                break;
            case 2:
                sfxSource.PlayOneShot(UI_ButtonDown_02);
                break;
            case 3:
                sfxSource.PlayOneShot(UI_ButtonDown_03);
                break;
            case 4:
                sfxSource.PlayOneShot(UI_ButtonDown_04);
                break;
            default:
                sfxSource.PlayOneShot(UI_ButtonDown_01);
                break;
        }
    }
    [SerializeField]
    AudioClip UI_ButtonUp_01;
    [SerializeField]
    AudioClip UI_ButtonUp_02;
    [SerializeField]
    AudioClip UI_ButtonUp_03;
    [SerializeField]
    AudioClip UI_ButtonUp_04;
    public void PlayButtonUpSFX(int index)
    {
        if (!SFXActive)
            return;
        switch (index)
        {
            case 1:
                sfxSource.PlayOneShot(UI_ButtonUp_01);
                break;
            case 2:
                sfxSource.PlayOneShot(UI_ButtonUp_02);
                break;
            case 3:
                sfxSource.PlayOneShot(UI_ButtonUp_03);
                break;
            case 4:
                sfxSource.PlayOneShot(UI_ButtonUp_04);
                break;
            default:
                sfxSource.PlayOneShot(UI_ButtonUp_01);
                break;
        }
    }

    [SerializeField]
    AudioClip crystal_select_01;
    [SerializeField]
    AudioClip crystal_select_02;
    [SerializeField]
    AudioClip crystal_select_03;
    public void PlayCrystalSelectSFX(int index)
    {
        if (!SFXActive)
            return;
        switch (index)
        {
            case 1:
                sfxSource.PlayOneShot(crystal_select_01);
                break;

            case 2:
                sfxSource.PlayOneShot(crystal_select_02);
                break;

            case 3:
                sfxSource.PlayOneShot(crystal_select_03);
                break;

            default:

                break;
        }
    }

    [SerializeField]
    AudioClip raid_crystal_select_01;
    [SerializeField]
    AudioClip raid_crystal_select_02;
    [SerializeField]
    AudioClip raid_crystal_select_03;
    public void PlayRaidCrystalSelectSFX(int index)
    {
        if (!SFXActive)
            return;
        switch (index)
        {
            case 1:
                sfxSource.PlayOneShot(raid_crystal_select_01);
                break;

            case 2:
                sfxSource.PlayOneShot(raid_crystal_select_02);
                break;

            case 3:
                sfxSource.PlayOneShot(raid_crystal_select_03);
                break;

            default:

                break;
        }
    }


    [SerializeField]
    AudioClip pickup_gemstone;
    public void PlayCrystalPickupSFX()
    {
        if (!SFXActive)
            return;
        sfxSource.PlayOneShot(pickup_gemstone, 0.25f);
    }


    [SerializeField]
    List<AudioClip> trace_tones = new List<AudioClip>();
    /// <summary>
    /// Played when correctly hitting a node during trace. Constantly ascends but
    /// resets when missing a node. If reach the end, just keep repeating the last index.
    /// Up to caller to pass correct index. 
    /// </summary>
    /// <param name="index"></param>
    public void PlayTraceHitSFX(int index)
    {
        if (!SFXActive)
            return;
        int _index = (index >= trace_tones.Count ? trace_tones.Count - 1 : index);
        sfxSource.PlayOneShot(trace_tones[_index]);
    }

    [SerializeField]
    List<AudioClip> raid_trace_tones = new List<AudioClip>();
    /// <summary>
    /// Played when correctly hitting a node during trace. Constantly ascends but
    /// resets when missing a node. If reach the end, just keep repeating the last index.
    /// Up to caller to pass correct index. 
    /// </summary>
    /// <param name="index"></param>
    public void PlayRaidTraceHitSFX(int index)
    {
        if (!SFXActive)
            return;
        int _index = (index >= raid_trace_tones.Count ? raid_trace_tones.Count - 1 : index);
        sfxSource.PlayOneShot(raid_trace_tones[_index], 0.2f);
    }

    [SerializeField]
    AudioClip trace_tone_miss;
    public void PlayTraceMissSFX()
    {
        if (!SFXActive)
            return;
        sfxSource.PlayOneShot(trace_tone_miss);
    }

    [SerializeField]
    List<AudioClip> collection_zip_tones = new List<AudioClip>();
    /// <summary>
    /// Played when nodes fly from pattern to wand. Selected at random. Up to caller to pass 
    /// correct index. 
    /// </summary>
    /// <param name="index"></param>
    int lastZipIndex = 0;
    public void PlayCollectionZipSFX()
    {
        if (!SFXActive)
            return;
        System.Random rand = new System.Random();
        int index = 0;
        do
        {
            index = rand.Next(0, collection_zip_tones.Count);
        } while (index == lastZipIndex);
        lastZipIndex = index;
        Debug.Log("Zip played " + index);
        sfxSource.PlayOneShot(collection_zip_tones[index]);
    }

    [SerializeField]
    List<AudioClip> collection_hit_tones = new List<AudioClip>();
    /// <summary>
    /// Played when nodes hit wand from flying. 
    /// </summary>
    /// <param name="index"></param>
    public void PlayCollectionHitSFX(int index)
    {
        if (!SFXActive)
            return;
        int _index = (index >= collection_hit_tones.Count ? collection_hit_tones.Count - 1 : index);
        sfxSource.PlayOneShot(collection_hit_tones[_index]);
    }

    [SerializeField]
    AudioClip wand_charge_sfx;
    public void PlayWandChargeSFX()
    {
        if (!SFXActive)
            return;
        sfxSource.PlayOneShot(wand_charge_sfx);
    }

    [SerializeField]
    AudioClip wand_discharge_sfx;
    public void PlayWandDischargeSFX()
    {
        if (!SFXActive)
            return;
        sfxSource.PlayOneShot(wand_discharge_sfx);
    }

    ////////
    public static BRBAudioManager instance = null;

    private void Awake()
    {
        Debug.Assert(instance == null);
        instance = this;
    }

    // Use this for initialization
    void Start () {
        MusicActive = PlayerPrefs.GetInt("MusicMuted") == 0;
        SFXActive = PlayerPrefs.GetInt("SFXMuted") == 0;

        musicSource = gameObject.AddComponent<AudioSource>() as AudioSource;
        sfxSource = gameObject.AddComponent<AudioSource>() as AudioSource;
        //        sfxSource.volume = 0.5f;
    }
}
