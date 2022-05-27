using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Windows.Input;
using Tapestry;
#if(UNITY_2018_3_OR_NEWER)
using UnityEngine.Android;
#endif
using agora_gaming_rtc;

public class VoiceChatManager : MonoBehaviour
{
    public static VoiceChatManager Instance = null;
    
    public bool IsMuted { get; private set; }
    
    private IRtcEngine mRtcEngine = null;
    private const string AppID = "b73713ae8c4f45cfb3dd846b96926e07";
    private string testChannelName = "test123";
    public uint personalID;
    
    public List<uint> usersInChannel = new List<uint>();
    
    [SerializeField] private bool debugStats = false;
    
    private void Awake()
    {
        Debug.Assert (Instance == null);
        Instance = this;
    }
    
    private void Start()
    {
        
#if (UNITY_2018_3_OR_NEWER)
			if (Permission.HasUserAuthorizedPermission(Permission.Microphone))
			{
			
			} 
			else 
			{
				Permission.RequestUserPermission(Permission.Microphone);
			}
#endif

        mRtcEngine = IRtcEngine.GetEngine(AppID);
        SetMuteState(false);

        mRtcEngine.OnJoinChannelSuccess += (string channelName, uint uid, int elapsed) =>
        {
            Debug.Log($"VoiceChatManager: Join Channel Success uid: {uid}, channel: {channelName}");
            personalID = uid;
            TapestryEventRegistry.OnJoinVoiceChat.Invoke();
            SetMuteState(false);
            usersInChannel.Add(uid);
        };

        mRtcEngine.OnLeaveChannel += (RtcStats stats) =>
        {
            Debug.Log($"VoiceChatManager: Left Channel duration {stats.duration}, tx: {stats.txBytes}, rx: {stats.rxBytes}, tx kbps: {stats.txKBitRate}, rx kbps: {stats.rxKBitRate}");
            TapestryEventRegistry.OnLeaveVoiceChat.Invoke();
            usersInChannel.Clear();
        };

        mRtcEngine.OnUserJoined += (uint uid, int elapsed) =>
        {
            Debug.Log($"VoiceChatManager: User Joined Channel uid: {uid}, elapsed: {elapsed}");
            usersInChannel.Add(uid);
            TapestryEventRegistry.OnUserJoinedChannel.Invoke(uid);
        };

        mRtcEngine.OnUserOffline += (uint uid, USER_OFFLINE_REASON reason) =>
        {
            Debug.Log($"VoiceChatManager: User Offline uid: {uid}, reason: {reason}");
            usersInChannel.Remove(uid);
            TapestryEventRegistry.OnUserLeavesChannel.Invoke(uid);
        };

        mRtcEngine.OnVolumeIndication += (AudioVolumeInfo[] speakers, int speakerNumber, int totalVolume) =>
        {
            if (speakerNumber == 0 || speakers == null)
            {
                //Debug.Log($"VoiceChatManager: onVolumeIndication only local {totalVolume}");
                //TapestryEventRegistry.OnVolumeIndication.Invoke(personalID, totalVolume);
            }

            for (int idx = 0; idx < speakerNumber; idx++)
            {
                Debug.Log($"VoiceChatManager: {speakerNumber} onVolumeIndication  {speakers[idx].uid} {speakers[idx].volume}");
                if (speakers[idx].uid == 0)
                {
                    TapestryEventRegistry.OnVolumeIndication.Invoke(personalID, totalVolume);
                }
                else
                {
                    TapestryEventRegistry.OnVolumeIndication.Invoke(speakers[idx].uid, totalVolume);
                }
            }
        };

        mRtcEngine.OnUserMutedAudio += (uint uid, bool muted) =>
        {
            Debug.Log($"VoiceChatManager: User Muted uid: {uid}, muted: {muted}");
            TapestryEventRegistry.OnUserMuteVoiceChat.Invoke(uid, muted);
        };
            
        mRtcEngine.OnRemoteAudioStateChanged += (uint uid, REMOTE_AUDIO_STATE state, REMOTE_AUDIO_STATE_REASON reason, int elapsed) =>
        {
            Debug.Log($"VoiceChatManager: User uid: {uid} Audio State Changed: {state}");
            if (state == REMOTE_AUDIO_STATE.REMOTE_AUDIO_STATE_STOPPED || state == REMOTE_AUDIO_STATE.REMOTE_AUDIO_STATE_FROZEN)
            {
                Debug.Log($"VoiceChatManager: User Muted uid: {uid}, muted: {true}");
                TapestryEventRegistry.OnUserMuteVoiceChat.Invoke(uid, true);
            }
        };

        mRtcEngine.OnWarning += (int warn, string msg) =>
        {
            string description = IRtcEngine.GetErrorDescription(warn);
            Debug.Log($"VoiceChatManager: Warning: {warn}, msg: {msg}, description: {description}");
        };

        mRtcEngine.OnError += (int error, string msg) =>
        {
            string description = IRtcEngine.GetErrorDescription(error);
            Debug.Log($"VoiceChatManager: Error: {error}, msg: {msg}, description: {description}");
        };

        mRtcEngine.OnRtcStats += (RtcStats stats) =>
        {
            if (!debugStats)
            {
                return;
            }
            
            string rtcStatsMessage = string.Format("onRtcStats callback duration {0}, tx: {1}, rx: {2}, tx kbps: {3}, rx kbps: {4}, tx(a) kbps: {5}, rx(a) kbps: {6} users {7}",
                stats.duration, stats.txBytes, stats.rxBytes, stats.txKBitRate, stats.rxKBitRate, stats.txAudioKBitRate, stats.rxAudioKBitRate, stats.userCount);
            Debug.Log($"VoiceChatManager: {rtcStatsMessage}");

            int lengthOfMixingFile = mRtcEngine.GetAudioMixingDuration();
            int currentTs = mRtcEngine.GetAudioMixingCurrentPosition();

            string mixingMessage = string.Format("Mixing File Meta {0}, {1}", lengthOfMixingFile, currentTs);
            Debug.Log($"VoiceChatManager: {mixingMessage}");

        };

        mRtcEngine.OnAudioRouteChanged += (AUDIO_ROUTE route) =>
        {
            Debug.Log($"VoiceChatManager: Audio Route Changed: {route}");
        };

        mRtcEngine.OnRequestToken += () =>
        {
            Debug.Log("VoiceChatManager: Requesting Token");
        };

        mRtcEngine.OnConnectionInterrupted += () =>
        {
            Debug.Log("VoiceChatManager: Connection Interrupted");
        };

        mRtcEngine.OnConnectionLost += () =>
        {
            Debug.Log("VoiceChatManager: Connection Lost");
        };

        mRtcEngine.SetLogFilter(LOG_FILTER.INFO);
        mRtcEngine.SetChannelProfile(CHANNEL_PROFILE.CHANNEL_PROFILE_COMMUNICATION);
        mRtcEngine.SetDefaultAudioRouteToSpeakerphone(true);
        mRtcEngine.EnableAudioVolumeIndication(200, 3, true);
    }

    private void SetDefaultAudioValues()
    {
        mRtcEngine.EnableAudioVolumeIndication(200, 3);
        
        mRtcEngine.AdjustRecordingSignalVolume(100);
        mRtcEngine.AdjustPlaybackSignalVolume(100); 
        mRtcEngine.AdjustAudioMixingVolume(100);

        //mRtcEngine.SetDefaultAudioRouteToSpeakerphone(true);
        //mRtcEngine.AdjustAudioMixingPlayoutVolume(100); // 100 default value
        //mRtcEngine.AdjustAudioMixingPublishVolume(100); // 100 default value
        //mRtcEngine.SetChannelProfile (CHANNEL_PROFILE.CHANNEL_PROFILE_LIVE_BROADCASTING);
        //mRtcEngine.SetClientRole (CLIENT_ROLE.BROADCASTER);
    }

    public void JoinChannel (string channelName)
    {
        if (string.IsNullOrEmpty(channelName))
        {
            return;
        }
        LeaveChannel();

        Debug.Log($"VoiceChatManager: Joining Channel: {channelName}");
        mRtcEngine.JoinChannel(channelName, "extra", 0);
    }

    public void LeaveChannel()
    {
        Debug.Log($"VoiceChatManager: Left Channel");
        mRtcEngine.LeaveChannel();
    }

    public void SetMuteState (bool isMuted)
    {
        Debug.Log($"VoiceChatManager: Mute: {isMuted}");
        mRtcEngine.EnableLocalAudio(!isMuted);
        IsMuted = isMuted;
        TapestryEventRegistry.OnMuteVoiceChat.Invoke(isMuted);
        TapestryEventRegistry.OnUserMuteVoiceChat.Invoke(personalID, isMuted);
    }

    public void SetAudioRoute(bool isSpeakerPhone)
    {
        mRtcEngine.SetEnableSpeakerphone(isSpeakerPhone);
        Debug.Log($"VoiceChatManager: Audio Route: {(isSpeakerPhone ? "Speaker" : "Earpiece")}");
    }

    public void ShowVoiceOptions()
    {
        // Get All the info and pass it to the popup
        PopupManager.Instance.ShowVoiceChatOptionsPopup(usersInChannel);
    }

    public string getSdkVersion()
    {
        return IRtcEngine.GetSdkVersion();
    }
    
    private void OnApplicationQuit()
    {
        if (mRtcEngine != null)
        {
            IRtcEngine.Destroy();
        }
    }
    
    //[Button(HideInEditMode = true)]//Show debug button at bottom of inspector for runtime testing in editor
    public void TestUser()
    {
        uint rand = (uint)Random.Range(-1000000, 1000000);
        usersInChannel.Add(rand);
        TapestryEventRegistry.OnUserJoinedChannel.Invoke(rand);
    }
}


