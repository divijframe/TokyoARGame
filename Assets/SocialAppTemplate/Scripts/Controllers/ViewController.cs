using UnityEngine;
using System;
using Doozy.Engine;

namespace SocialApp
{
    public class ViewController : MonoBehaviour
    {

        [SerializeField]
        private Camera MainCamera = default;
        [SerializeField]
        private GameObject LoadingScreen = default;
        [SerializeField]
        private GameObject PopupObject = default;
        [SerializeField]
        private GameObject RegistrationObject = default;
        [SerializeField]
        private GameObject UserProfileObject = default;
        [SerializeField]
        private GameObject WorldNewsObject = default;
        [SerializeField]
        private GameObject FriendsNewsObject = default;
        [SerializeField]
        private GameObject LoginObject = default;
        [SerializeField]
        private GameObject FeedPreviewObject = default;
        [SerializeField]
        private GameObject FriendListObject = default;
        [SerializeField]
        private GameObject SettingsObject = default;
        [SerializeField]
        private GameObject NavigationPanelObject = default;
        [SerializeField]
        private GameObject AnotherUserProfileObject = default;
        [SerializeField]
        private GameObject UserFriendsіListObject = default;
        [SerializeField]
        private GameObject MessegesListObject = default;
        [SerializeField]
        private GameObject MessegingObject = default;
        [SerializeField]
        private GameObject CommentsObject = default;
        [SerializeField]
        private GameObject AddNewShatObject = default;
        [SerializeField]
        private GameObject FeedPopupObject = default;
        [SerializeField]
        private GameObject CallWindowObject = default;

        // camera
        public Camera GetMainCamera()
        {
            return MainCamera;
        }

        // popup
        public void ShowPopupMessage(PopupMessage _msg)
        {
            PopupObject.SetActive(true);
            PopupObject.GetComponent<PopupController>().ShowMessage(_msg);
        }

        public void HidePopupMessage()
        {
            PopupObject.SetActive(false);
        }

        // loading
        public void ShowLoading()
        {
            //Debug.LogError("andyp _ ShowLoading");
            LoadingScreen.SetActive(true);
        }

        public void HideLoading()
        {
            //Debug.LogError("andyp _ HideLoading");
            LoadingScreen.SetActive(false);
        }

        // registration
        public void ShowRegistration()
        {
            //Debug.LogError("andyp _ ShowRegistration");
            RegistrationObject.SetActive(true);
        }

        public void HideRegistration()
        {
            //Debug.LogError("andyp _ HideRegistration");
            RegistrationObject.SetActive(false);
        }

        // login
        public void ShowLogin()
        {
            //Debug.LogError("andyp _ ShowLogin");
            GameEventMessage.SendEvent(GameEventIDs.NOT_LOGGED_IN_EVENT_ID);
            //LoginObject.SetActive(true);
        }

        public void HideLogin()
        {
            //Debug.LogError("andyp _ HideLogin");
            //LoginObject.SetActive(false);
        }

        // user profile
        public void ShowUserProfile()
        {
            UserProfileObject.SetActive(true);
        }

        public void HideUserProfile()
        {
            UserProfileObject.SetActive(false);
        }

        // message list
        public void ShowMessageList()
        {
            MessegesListObject.SetActive(true);
        }

        public void HideMessageList()
        {
            MessegesListObject.SetActive(false);
        }

        // another user profile
        public void ShowAnotherUserProfile(string _id)
        {
            AnotherUserProfileObject.SetActive(true);
            AnotherUserProfileObject.GetComponentInChildren<UserProfileLoader>().LoadUserInfo(_id);
            AnotherUserProfileObject.GetComponentInChildren<FeedsDataLoader>().LoadUserContent(_id);
        }

        public void HideAnotherUserProfile()
        {
            AnotherUserProfileObject.SetActive(false);
        }

        // show user friends
        public void ShowUserFriend(string _id)
        {
            UserFriendsіListObject.SetActive(true);
            UserFriendsіListObject.GetComponentInChildren<FriendsListLoader>().LoadUserFriends(_id);
        }

        public void HideUserFriends()
        {
            UserFriendsіListObject.SetActive(false);
        }

        // feed preview
        public void ShowFeedPreview(FeedPreviewRequest _request)
        {
            FeedPreviewObject.SetActive(true);
            FeedPreviewObject.GetComponent<FeedPreviewController>().DisplayPreview(_request);
        }

        public void HideFeedPreview()
        {
            FeedPreviewObject.SetActive(false);
        }

        // friend list
        public void ShowFriendsList()
        {
            FriendListObject.SetActive(true);
        }

        public void HideFriendsList()
        {
            FriendListObject.SetActive(false);
        }

        // settings
        public void ShowSettings()
        {
            SettingsObject.SetActive(true);
        }

        public void HideSettings()
        {
            SettingsObject.SetActive(false);
        }

        // navigation
        public void ShowNavigationPanel()
        {
            if (NavigationPanelObject != null)
            {
                NavigationPanelObject.SetActive(true);
                AppManager.NAVIGATION.AddListeners();
            }
        }

        public void HideNavigationPanel()
        {
            if (NavigationPanelObject != null)
            {
                NavigationPanelObject.SetActive(false);
                AppManager.NAVIGATION.RemoveListeners();
            }
        }

        // world news
        public void ShowWorldNews()
        {
            WorldNewsObject.SetActive(true);
        }

        public void HideWorldNews()
        {
            WorldNewsObject.SetActive(false);
        }

        // friends news
        public void ShowFriendsNews()
        {
            FriendsNewsObject.SetActive(true);
        }

        public void HideFriendsNews()
        {
            FriendsNewsObject.SetActive(false);
        }

        // show messages with
        public void ShowMessagingWith(string _id)
        {
            HideNavigationPanel();
            MessegingObject.SetActive(true);
            MessegingObject.GetComponentInChildren<MessagesDataLoader>().LoadUserMessages(_id);
        }

        public void ShowMessagingWith(MessageGroupInfo _groupID)
        {
            HideNavigationPanel();
            MessegingObject.SetActive(true);
            MessegingObject.GetComponentInChildren<MessagesDataLoader>().LoadMessageGroup(_groupID);
        }

        public void HideUserMessanging()
        {
            MessegingObject.SetActive(false);
        }

        // show post comments
        public void ShowPostComments(Feed _feed)
        {
            HideNavigationPanel();
            CommentsObject.SetActive(true);
            CommentsObject.GetComponentInChildren<MessagesDataLoader>().LoadPostComments(_feed);
        }

        public void HidePostComments()
        {
            CommentsObject.SetActive(false);
        }

        // show add chat window
        public void ShowAddNewChat()
        {
            AddNewShatObject.SetActive(true);
            AddNewShatObject.GetComponentInChildren<SelectFromFriendsLoader>().LoadWindow(AddNewChatType.ADD_NEW_CHAT);
            HideNavigationPanel();
        }

        public void ShowAddNewChatMembers(MessageGroupInfo _group)
        {
            AddNewShatObject.SetActive(true);
            AddNewShatObject.GetComponentInChildren<SelectFromFriendsLoader>().LoadWindow(AddNewChatType.ADD_NEW_MEMBERS, _group);
        }

        public void ShowChatMembers(MessageGroupInfo _group)
        {
            AddNewShatObject.SetActive(true);
            AddNewShatObject.GetComponentInChildren<SelectFromFriendsLoader>().LoadWindow(AddNewChatType.SHOW_CHAT_MEMBERS, _group);
        }

        public void HideAddNEwChat()
        {
            AddNewShatObject.SetActive(false);
        }

        public void ShowFeedPopup(Action<FeedPopupAction> _action)
        {
            FeedPopupObject.SetActive(true);
            FeedPopupObject.GetComponent<FeedPopupViewController>().SetupWindows(_action);
        }

        public void HideFeedPopup()
        {
            FeedPopupObject.SetActive(false);
        }

        public void StartCall(IncommingType _type, CallObject _call)
        {
            CallWindowObject.SetActive(true);
            CallWindowObject.GetComponent<CallController>().ShowIncomming(_type, _call);
        }

        public void HideCall()
        {
            CallWindowObject.SetActive(false);
        }

        public bool IsCallWindowActive()
        {
            return CallWindowObject.activeInHierarchy;
        }

        // all
        public void HideAllScreen()
        {
            //Debug.LogError("_andyp _ HideAllScreen");
            return;

            HideLogin();
            HidePopupMessage();
            HideRegistration();
            HideLoading();
            HideFeedPreview();
            HideUserProfile();
            HideSettings();
            HideFriendsList();
            HideNavigationPanel();
            HideWorldNews();
            HideFriendsNews();
            HideAnotherUserProfile();
            HideUserFriends();
            HideUserMessanging();
            HidePostComments();
            HideAddNEwChat();
            HideFeedPopup();
            HideCall();
        }

        // hide navigation group objects
        public void HideNavigationGroup()
        {
            //Debug.LogError("_andyp _ HideNavigationGroup");

            
            return;

            HideUserProfile();
            HideSettings();
            HideFriendsList();
            HideWorldNews();
            HideFriendsNews();
            HideAnotherUserProfile();
            HideUserFriends();
            HideMessageList();
            HideUserMessanging();
            HidePostComments();
        }

        public void ShowPopupMSG(MessageCode _code, Action _callback = null)
        {
            PopupMessage msg = new PopupMessage();
            msg.Callback = _callback;
            switch (_code)
            {
                case MessageCode.EmptyEmail:
                    msg.Title = "Error";
                    msg.Message = "Email is empty";
                    break;
                case MessageCode.EmptyFirstName:
                    msg.Title = "Error";
                    msg.Message = "First Name is empty";
                    break;
                case MessageCode.EmptyLastName:
                    msg.Title = "Error";
                    msg.Message = "Last Name is empty";
                    break;
                case MessageCode.EmptyPassword:
                    msg.Title = "Error";
                    msg.Message = "Password is empty";
                    break;
                case MessageCode.PasswordNotMatch:
                    msg.Title = "Error";
                    msg.Message = "Passwords do not match";
                    break;
                case MessageCode.EmailNotValid:
                    msg.Title = "Error";
                    msg.Message = "Email is not valid";
                    break;
                case MessageCode.SmallPassword:
                    msg.Title = "Error";
                    msg.Message = "Password is too small. Min value is " + AppManager.APP_SETTINGS.MinAllowPasswordCharacters.ToString();
                    break;
                case MessageCode.RegistrationSuccess:
                    msg.Title = "Success";
                    msg.Message = "Registration Success!";
                    break;
                case MessageCode.RegistrationSuccessWithConfirm:
                    msg.Title = "Success";
                    msg.Message = "Registration Success! Please confirm your email address";
                    break;
                case MessageCode.VideoProcessing:
                    msg.Title = "Error";
                    msg.Message = "Video processing ...";
                    break;
                case MessageCode.MaxVideoSize:
                    msg.Title = "Error";
                    msg.Message = "Max allowed size is " + AppManager.APP_SETTINGS.MaxUploadVideoSizeMB.ToString() + " mb";
                    break;
                case MessageCode.FailedUploadFeed:
                    msg.Title = "Error";
                    msg.Message = "Fail to upload feed. Try again";
                    break;
                case MessageCode.EmailConfirm:
                    msg.Title = "Error";
                    msg.Message = "Please confirm your email address";
                    break;
                case MessageCode.FailedUploadImage:
                    msg.Title = "Error";
                    msg.Message = "Fail to upload image. Try again";
                    break;
                case MessageCode.SuccessPost:
                    msg.Title = "Success";
                    msg.Message = "Post add success";
                    break;
                case MessageCode.DeleteFeedOwnerError:
                    msg.Title = "Error";
                    msg.Message = "You are not the owner of this post";
                    break;
                case MessageCode.CallIsBisy:
                    msg.Title = "Line is bisy";
                    msg.Message = "User cannot speak now";
                    break;
                default:
                    Debug.Log("NOTHING");
                    break;
            }
            ShowPopupMessage(msg);
        }
    }

    public enum MessageCode
    {
        EmptyEmail,
        EmptyFirstName,
        EmptyLastName,
        EmptyPassword,
        PasswordNotMatch,
        EmailNotValid,
        SmallPassword,
        RegistrationSuccess,
        RegistrationSuccessWithConfirm,
        VideoProcessing,
        MaxVideoSize,
        FailedUploadFeed,
        FailedUploadImage,
        SuccessPost,
        EmailConfirm,
        DeleteFeedOwnerError,
        CallIsBisy
    }
}