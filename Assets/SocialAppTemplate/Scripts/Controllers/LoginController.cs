using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SocialApp;
using System;
using Doozy.Engine;

namespace SocialApp
{
    public class LoginController : MonoBehaviour
    {

        [SerializeField]
        private InputField EmailInput = default;
        [SerializeField]
        private InputField PasswordInput = default;

        public event Action OnLoginEvent;
        public event Action OnLogoutEvent;

        private void OnEnable()
        {
            ClearFields();
        }

        public void SendLogIn()
        {
            //Debug.LogError("_andyp _ SendLogIn");

            if (CheckError())
                return;
            string _login = EmailInput.text.Trim();
            string _password = PasswordInput.text.Trim();
            OnLogin(_login, _password);
        }

        public void AutoLogin(string _mail, string _password)
        {
            //Debug.LogError("_andyp _ AutoLogin: " + _mail + " : " + _password);
            
            OnLogin(_mail, _password);
        }

        private void OnLogin(string _mail, string _password)
        {
            //Debug.LogError("_andyp _ OnLogin");

            AppManager.VIEW_CONTROLLER.ShowLoading();
            AppManager.FIREBASE_CONTROLLER.LogIn(_mail, _password, OnLoginSuccess);
        }

        public void OnRegistration()
        {
            //Debug.LogError("_andyp _ OnRegistration");

            AppManager.VIEW_CONTROLLER.HideLogin();
            AppManager.VIEW_CONTROLLER.ShowRegistration();
        }

        public void OnLoginSuccess(LoginMessage _msg)
        {
            //Debug.LogError("_andyp _ OnLoginSuccess AAA");

            if (_msg.IsSuccess)
            {
                //Debug.LogError("_andyp _ OnLoginSuccess BBB");
                if (!string.IsNullOrEmpty(EmailInput.text))
                {
                    //Debug.LogError("_andyp _ OnLoginSuccess CCC");
                    PlayerPrefs.SetString(AppSettings.LoginSaveKey, EmailInput.text.Trim());
                    PlayerPrefs.SetString(AppSettings.PasswordSaveKey, PasswordInput.text.Trim());
                    PlayerPrefs.Save();
                }
                else if (!string.IsNullOrEmpty(AppManager.REGISTRATION_CONTROLLER.EmailInput.text))
                {
                    //Debug.LogError("_andyp _ OnLoginSuccess DDD");
                    PlayerPrefs.SetString(AppSettings.LoginSaveKey, AppManager.REGISTRATION_CONTROLLER.EmailInput.text.Trim());
                    PlayerPrefs.SetString(AppSettings.PasswordSaveKey, AppManager.REGISTRATION_CONTROLLER.PasswordInput.text.Trim());
                    PlayerPrefs.Save();
                }
                AppManager.USER_PROFILE.FIREBASE_USER = _msg.FUser;
                //AppManager.VIEW_CONTROLLER.HideLogin();
                AppManager.VIEW_CONTROLLER.HideLoading();
                //AppManager.NAVIGATION.ShowUserProfile();
                //AppManager.VIEW_CONTROLLER.ShowNavigationPanel();
                AppManager.DEVICE_CONTROLLER.StartOnlineChecker();
                AppManager.FIREBASE_CONTROLLER.InitPushNotificationEvents();

                GameEventMessage.SendEvent(GameEventIDs.LOGGED_IN_EVENT_ID);

                OnLoginEvent?.Invoke();
            }
            else
            {
                //Debug.LogError("_andyp _ OnLoginSuccess EEE");

                PopupMessage msg = new PopupMessage();
                msg.Title = "Error";
                msg.Message = _msg.ErrorMessage;
                AppManager.VIEW_CONTROLLER.ShowPopupMessage(msg);
                AppManager.VIEW_CONTROLLER.HideLoading();
            }
        }

        private void ClearFields()
        {
            //Debug.LogError("_andyp _ ClearFields");

            EmailInput.text = string.Empty;
            PasswordInput.text = string.Empty;
        }

        private bool CheckError()
        {
            //Debug.LogError("_andyp _ CheckError");

            bool IsError = false;
            if (string.IsNullOrEmpty(EmailInput.text))
            {
                AppManager.VIEW_CONTROLLER.ShowPopupMSG(MessageCode.EmptyEmail);
                IsError = true;
            }
            else if (string.IsNullOrEmpty(PasswordInput.text))
            {
                AppManager.VIEW_CONTROLLER.ShowPopupMSG(MessageCode.EmptyPassword);
                IsError = true;
            }
            else if (!EmailInput.text.Contains(AppManager.APP_SETTINGS.EmailValidationCharacter))
            {
                AppManager.VIEW_CONTROLLER.ShowPopupMSG(MessageCode.EmailNotValid);
                IsError = true;
            }
            else if (PasswordInput.text.Length < AppManager.APP_SETTINGS.MinAllowPasswordCharacters)
            {
                AppManager.VIEW_CONTROLLER.ShowPopupMSG(MessageCode.SmallPassword);
                IsError = true;
            }
            return IsError;
        }

        public void OnSignOut()
        {
            //Debug.LogError("_andyp _ OnSignOut");

            OnLogoutEvent?.Invoke();
        }
    }
}
