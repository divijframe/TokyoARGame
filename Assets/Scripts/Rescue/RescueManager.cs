namespace BRB_ARGeo
{
    using Doozy.Engine;
    using System.Collections;
    using System.Collections.Generic;
    using Tapestry;
    using UnityEngine;
    using UnityEngine.UI;
    using UnityEngine.XR.ARFoundation;
   using UnityEngine.XR.ARSubsystems;

    //using BRB;
    //using GameSparks.Api.Responses;

    /// <summary>
    /// Manager for the Rescue scene
    /// </summary>
    public class RescueManager : MonoBehaviour {

        private float captureCooldown = 1.0f;

        public Canvas uiCanvas;

        [SerializeField]
        Text nameUI;

        [SerializeField]
        Sprite imageUI;

        [SerializeField]
        GameObject statusBar;

        [SerializeField]
        GameObject rescueButton;

        [SerializeField]
        GameObject exitButton;

        [SerializeField]
        GameObject characterRoot;

        [SerializeField]
        GameObject DEBUGPercentage;

        [SerializeField]
        GameObject StatsWindow;

        [SerializeField]
        GameObject ARCamRoot;

        [SerializeField]
        Camera ARCamRef;

        [SerializeField]
        GameObject MainCamRoot;

        [SerializeField]
        GameObject UICamera;

        [SerializeField]
        GameObject SpawnFX;

        [SerializeField]
        GameObject SucceedFX;

        [SerializeField]
        GameObject FleeFX;

        [SerializeField]
        GameObject FleeRightFX;

        [SerializeField]
        GameObject WandRoot;

        [SerializeField]
        GameObject GroundARButton;

        [SerializeField]
        GameObject selectCrystalContainer;
        [SerializeField]
        ARRaycastManager raycastManager;

        public RescueTraceController rescueTraceController;

        public static RescueManager Instance = null;
        
        public static string poiName = "UNSET";

        public Camera rescueCamera;

        bool wasGrounded = false;

        [SerializeField]
        GameObject[] uiElementsToHide;

        UnityEngine.XR.ARFoundation.ARPlaneManager planeManager;
        bool drawPlanes = false;
        //TODO: Bad, redo eventually, public static is evil
        //[System.NonSerialized]
        //public static BRBGlobals.Character CurrentRescueCharacter;
        [System.NonSerialized]
        public Texture2D HiResSymbol;
        [System.NonSerialized]
        public Texture2D LowResSymbol;
        [System.NonSerialized]
        public static int NumRequiredSymbols; //Is this necessary?
        [System.NonSerialized]
        public static string RescueSessionID; // current rescue session ID

        public static int CurrentSymbolID = 0;
        public float CurrentSymbolErrorThreshold = 0.0f;
        private float userAttemptError = 0.0f;
        public float UserAttemptError { get { return userAttemptError; } }

        private bool ARMode = false;
		public bool GetARMode(){return ARMode;}


        private Vector3 wandStartPos;
        private Quaternion wandStartRot;

        private Vector2 traceLookTarget;
        private Vector2 traceLookPos;

		public GemType gemSelected;

		public Light directionalLight;

        //TEMP variables to be tied into global values in better centralized manager

        [SerializeField]
        private List<GameObject> tempCharacterPrefabs;

        private Animator characterAnimator = null;

        private int currentCharacterInt = 0;

        private int remainingRounds = 1;//Rounds remaining of tracing shapes

        private int maxRounds = 1;//Max rounds of tracing shapes


        // Use this for initialization
        void Start () {
            Debug.Assert(Instance == null);
            Instance = this;
            BRBEventRegistry.GSOnAttemptRescueSuccess += GSOnAttemptRescueSuccess;
            BRBEventRegistry.GSOnAttemptRescueFailure += GSOnAttemptRescueFailure;
            BRBEventRegistry.OnCrystalSelected += CrystalButtonOnClick;
            BRBEventRegistry.GSOnCrystalSelectSuccessful += GSOnCrystalSelectSuccessful;
            BRBEventRegistry.OnTraceCompleted += AttemptRescue;
            BRBEventRegistry.GSOnCrystalSelectFailure += GSOnCrystalSelectFailure;
            wandStartPos = new Vector3(-0.598f, 0.417f, -3.651167f);  // WandRoot.transform.position;
            wandStartRot = Quaternion.Euler(266.3f, -90.0f, -90.0f);  //  WandRoot.transform.rotation;
            CurrentSymbolID = Random.Range(0, 9);
        }

        private void OnDestroy()
        {
            BRBEventRegistry.GSOnAttemptRescueSuccess -= GSOnAttemptRescueSuccess;
            BRBEventRegistry.GSOnAttemptRescueFailure -= GSOnAttemptRescueFailure;
            BRBEventRegistry.OnCrystalSelected -= CrystalButtonOnClick;
            BRBEventRegistry.GSOnCrystalSelectSuccessful -= GSOnCrystalSelectSuccessful;
            BRBEventRegistry.OnTraceCompleted -= AttemptRescue;
            BRBEventRegistry.GSOnCrystalSelectFailure -= GSOnCrystalSelectFailure;
        }

        /// <summary>
        /// Control became visible so set up the character
        /// </summary>
        void OnEnable()
        {
			//Debug.Log("RescueManager:OnEnable '" + CurrentRescueCharacter.characterID + "' " + CurrentRescueCharacter.classID);

			if (directionalLight != null)
			{
				Light sun = RenderSettings.sun.GetComponent<Light>();
				if (sun != null)
				{
					directionalLight.color = sun.color;
				}
				RenderSettings.sun = directionalLight;
			}

            //reset trace shapes rounds amount
            remainingRounds = maxRounds;


            SpawnCharacter(currentCharacterInt);
            //rescueTraceController.rescueDebugPanel.characterSelectDropdown.value = currentCharacterInt;

            //StatsWindow.GetComponentInChildren<Text>().text = "Wonder: " + CurrentRescueCharacter.wonder
            //+ "\nMusic " + CurrentRescueCharacter.music
            //+ "\nAction " + CurrentRescueCharacter.action;
            characterAnimator = characterRoot.GetComponentInChildren<Animator>();
            if(characterAnimator != null)
            {
                characterAnimator.SetFloat("DragX", 0);
                characterAnimator.SetFloat("DragY", 0);
            }

            gemSelected = GemType.Transparent;
            //WandRoot.GetComponent<ColorFX>().AssignStartColor(gemSelected);
            //WandRoot.SetActive(false);
            
            traceLookPos = Vector2.zero;
            traceLookTarget = Vector2.zero;
            rescueTraceController.TraceIdleFX.SetActive(false);

            //Remove all pattern nodes from previous session
            rescueTraceController.ClearPattern ();
            selectCrystalContainer.SetActive(true);

            StartCoroutine(EnableExit());
            wasGrounded = false;

            bool defaultARMode = PlayerPrefs.GetInt("ARMode") == 1;
            if (ARMode != defaultARMode)
                ToggleARMode();

            if (ARMode)
            {
                ARSession arsession = ARCamRoot.GetComponentInChildren<ARSession>();
                if (arsession)
                {
                    Debug.Log("Resetting AR Session");
                    arsession.Reset();
                }
                //Invoke("CheckGrounding", 1.0f);
            }
        }

        void CheckGrounding()
        {
            RegroundAR();
            if (ARMode && !wasGrounded)
            {
                Invoke("CheckGrounding", 1.0f);
            }
        }

        public void SpawnCharacter(int charId){
            //Debug.LogError("(andyp) SPAWNCHARACTER : fix me to function correctly");

            characterRoot.SetActive(true);
            // Destroy all children of the character root
            foreach (Transform child in characterRoot.transform)
            {
                GameObject.Destroy(child.gameObject);
            }

            GameObject character = Instantiate(tempCharacterPrefabs[charId], Vector3.zero, Quaternion.identity);
			character.layer = characterRoot.layer;
            foreach (Transform trans in character.GetComponentsInChildren<Transform>(true))
            {
                trans.gameObject.layer = characterRoot.layer;
            }

            //character.transform.GetChild(0).gameObject.layer = character.layer;
            character.transform.SetParent(characterRoot.transform,false);
            
            Instantiate(SpawnFX, characterRoot.transform.position, Quaternion.Euler(new Vector3(-90,0,0)));
            BRBAudioManager.instance.PlayCharacterSpawnSFX();
        }

        IEnumerator EnableExit()
        {
            yield return new WaitForSeconds(captureCooldown);
            exitButton.SetActive(true);
        }

        public void CrystalButtonOnClick(string CrystalType)
        {
            if (!isActiveAndEnabled)
            {
                return;
            }
            Debug.Log(CrystalType + " Clicked!");
            switch(CrystalType)
            {
                case "Gem":
                    if (PlayerDataHolder.Instance.Gems > 0)
                    {
                        BRBAudioManager.instance.PlayCrystalSelectSFX(1);
                        // gemSelected will be passed to ColorFX.cs
					    gemSelected = GemType.Regular;
                        BRBEventRegistry.GSOnCrystalDebited("Gem", 1);
                    }
                    else
                    {
                        // TODO: Popup dialog asking if they want to buy some
                        return;
                    }
                    break;
                case "Coin":
                    if (PlayerDataHolder.Instance.Coins > 0)
                    {
                        BRBAudioManager.instance.PlayCrystalSelectSFX(2);
                        // gemSelected will be passed to ColorFX.cs
					    gemSelected = GemType.Greater;
                        BRBEventRegistry.GSOnCrystalDebited("Coin", 1);
                    }
                    else
                    {
                        // TODO: Popup dialog asking if they want to buy some
                        statusBar.GetComponentInChildren<Text>().text = "You need a coin";
                        return;
                    }
                    break;

                default:
                    Debug.Log("INVALID: " + CrystalType + " Clicked!");
                    return;
            }
            //BRBNetworkShim.GSSelectCrystal(RescueSessionID, CrystalType);
            BRBEventRegistry.GSOnCrystalSelectSuccessful();
            statusBar.GetComponentInChildren<Text>().text = "Trace the shape for access";
            rescueTraceController.ResetTrace ();
        }

        /*
        public void UpdatePOIName()
        {
            if (nameUI != null)
            {
                Debug.Log("Rescue poi = " + poiName);
                //nameUI.text = poiName;
                nameUI.text = BRBGlobals.CharacterName[(int)CurrentRescueCharacter.classID];
            }
            statusBar.GetComponentInChildren<Text>().text = "Select a crystal to use";
        }
        */



        /// <summary>
        /// Determine the pattern to be used by the curve matcher and set relevant member data
        /// </summary>
        public void InitializeCurveMatcher(int SymbolID)
        {
            if (!isActiveAndEnabled)
            {
                return;
            }
            Debug.Log("Initializing curve with symbol ID " + SymbolID);
            DifficultyInformationHolder.SymbolInformation difficulty = DifficultyInformationHolder.instance.SymbolsByID[SymbolID];
            rescueTraceController.InitializePattern(difficulty);
        }

        /// <summary>
        /// Handles when player fills out a pattern for rescue
        /// </summary>
        public void AttemptRescue(float errorPercentage)
        {
            if (!isActiveAndEnabled)
            {
                return;
            }
            userAttemptError = (float)errorPercentage;
            StartCoroutine(rescueTraceController.HideForSeconds(captureCooldown));
            DEBUGPercentage.GetComponentInChildren<Text>().text = "Error: "+ System.Math.Round(errorPercentage, 3) + "%";
            DEBUGPercentage.GetComponentInChildren<Text>().color = (errorPercentage >= 61.0 ? Color.red : Color.white);

            BRBEventRegistry.GSOnAttemptRescueSuccess();
            //BRBNetworkShim.GSAttemptRescue(RescueSessionID, (int)errorPercentage);
        }

        IEnumerator FlashStatusText(string newText, float duration)
        {
            string oldText = statusBar.GetComponentInChildren<Text>().text;
            statusBar.GetComponentInChildren<Text>().text = newText;
            if (duration > 0)
            {
                yield return new WaitForSeconds(duration);
                statusBar.GetComponentInChildren<Text>().text = oldText;
            }
            yield break;
        }

        public void DebugForceSelectCrystal(){
            selectCrystalContainer.SetActive(false);
            gemSelected = GemType.Regular;

            InitializeCurveMatcher(CurrentSymbolID);
            StartCoroutine(rescueTraceController.ManualActivate(captureCooldown));
            Invoke("PlayerStartedDrawing", 1.0f);

            statusBar.GetComponentInChildren<Text>().text = "DEBUG TRACE MODE";
        }

        void GSOnCrystalSelectSuccessful()
        {
            if (!isActiveAndEnabled)
            {
                return;
            }
            InitializeCurveMatcher(CurrentSymbolID);
            Debug.Log("Crystal Select successful. Initializing with symbol: " + CurrentSymbolID);
            StartCoroutine(rescueTraceController.ManualActivate(captureCooldown));
            Invoke("PlayerStartedDrawing", 1.0f);
        }

        void GSOnCrystalSelectFailure()
        {
            InitializeCurveMatcher(CurrentSymbolID);
            StartCoroutine(rescueTraceController.ManualActivate(captureCooldown));
            Invoke("PlayerStartedDrawing", 1.0f);
        }

        void GSOnAttemptRescueSuccess()
        {
            if (true)//!response.HasErrors)
            {
                bool? success = true;// response.ScriptData.GetBoolean("Success");
                bool? escaped = false;// response.ScriptData.GetBoolean("RanAway");
                //bool? success = response.ScriptData.GetBoolean("Success");
                //bool? escaped = response.ScriptData.GetBoolean("RanAway");
                Debug.Log("Rescue success =" + success);
                if (success == true)
                {
                    remainingRounds--;

                    bool? captured = remainingRounds < 1;// response.ScriptData.GetBoolean("Rescued");
                    //Debug.LogError("(andyp) force captured successful");
                    if (captured == true)
                    {
                        rescueTraceController.captureCanContinue = false; //TODO: messy
                        StartCoroutine(FlashStatusText("Success!!", -1.0f));
                        //int dustRec = (int)response.ScriptData.GetInt("Dust");
                        // Update the player cache of dust based on the what you received
                        //PlayerDataHolder.Instance.SetCachedDust(dustRec);
                        //int charmsGained = (int)response.ScriptData.GetInt("CharmsGained");
                        //int dustGained = (int)response.ScriptData.GetInt("DustGained");
                        //BRBEventRegistry.OnDustGained(dustGained);
                        //BRBEventRegistry.OnCharmsGained(charmsGained, currentCharacterInt);
                        // Fire the success animation
                        //rescueTraceController.HidePermanent();
                        StartCoroutine(AnimateWandAndCharacter(true));
						if (ARMode)
							ARMode = !ARMode;
                    }
                    else
                    {
                        BRBAudioManager.instance.PlayTracingResultSFX(true);
                        int? remainingSymbols = remainingRounds;//response.ScriptData.GetInt("RemainingSymbols");
                        NumRequiredSymbols = (int)remainingSymbols;
                        Debug.Log("Remaining symbols: " + NumRequiredSymbols);
                        Debug.Log("Select random trace shape based on difficulty");//22 is the current static max count in DifficultyInformationHolder.  Make this pull from real numbers instead of being baked here.
                        int? nextSymbol = Random.Range(0, 22);//response.ScriptData.GetGSData("CurrentSymbol").GetInt("SymbolID");
                        InitializeCurveMatcher((int)nextSymbol);
                        StartCoroutine(FlashStatusText(NumRequiredSymbols + " more to go!", -1.0f));
                        
                        rescueTraceController.ResetTrace ();
                    }
                    rescueButton.SetActive(false);
                }
                else
                {
                    StartCoroutine(AnimateWandAndCharacter(false));
                    //string FleeMessage = "Flee chance: " + response.ScriptData.GetFloat("FleeChance") + " Flee Roll: " + response.ScriptData.GetFloat("FleeRoll");
                    //BRBLog.Log(LogChannel.IG_RESCUE | LogChannel.RESCUE, FleeMessage);
                    if (escaped == true)
                    {
                        //statusBar.GetComponentInChildren<Text>().text = "Your friend ran away!";
                        // Fire the run animation
                        statusBar.GetComponentInChildren<Text>().text = "";
                        PlayCharacterAnim(CharacterAnimations.Run);
                        Invoke("RunAway", 1.7f);
                        rescueTraceController.HidePermanent();
                        rescueTraceController.captureCanContinue = false;
                        BRBEventRegistry.GSOnRescueCompleted(escaped == true);
                        BRBAudioManager.instance.PlayRescueSFX(false);
                    }
                    else
                    {
                        // Fire the fail animation
                        PlayCharacterAnim(CharacterAnimations.Fail);

                        //statusBar.GetComponentInChildren<Text>().text = "Rescue Failed";
                        StartCoroutine(FlashStatusText("Try again",captureCooldown));

                        BRBAudioManager.instance.PlayTracingResultSFX(false);
                        rescueTraceController.ResetTrace ();
                    }
                }
                if (BRBEventRegistry.GSOnRescueAttempted != null)
                {
                    BRBEventRegistry.GSOnRescueAttempted(escaped != null ? (bool)escaped : false);
                }
            }
        }

        public enum CharacterAnimations{
            Idle,
            Success,
            Fail,
            Run,
            Rescue
        }

        public void PlayCharacterAnim(CharacterAnimations anim){
            Animator charAnimator = characterRoot.GetComponentInChildren<Animator>();
            if (charAnimator != null)
            {
                switch (anim)
                {
                    case CharacterAnimations.Idle:
                        characterRoot.GetComponentInChildren<Animator>().SetTrigger("Idle");
                        break;
                    case CharacterAnimations.Success:
                        characterRoot.GetComponentInChildren<Animator>().SetTrigger("Success");
                        break;
                    case CharacterAnimations.Fail:
                        characterRoot.GetComponentInChildren<Animator>().SetTrigger("Fail");
                        break;
                    case CharacterAnimations.Run:
                        characterRoot.GetComponentInChildren<Animator>().SetTrigger("Run");
                        break;
                    case CharacterAnimations.Rescue:
                        characterRoot.GetComponentInChildren<Animator>().SetTrigger("Rescue");
                        break;

                }
            }
        }

        public void PlayCharacterFail(){
            //
        }

        public void PlayCharacterRun(){
            //
        }

        IEnumerator AnimateWandAndCharacter(bool success)
        {
            //TODO: Clean up scoping issues, have all the animations be handled here
            if (success)
            {
                //Debug.LogError ("ADD STARS TO WAND ANIMATION HERE. andyp");
                //FIXME!! TODO(andyp) add animation of node stars flying to wand here

                yield return StartCoroutine(rescueTraceController.TweenNodeStarsToWand());

                rescueTraceController.HidePermanent();
                //yield return new WaitForSeconds(2.0f);

                PlayCharacterAnim(CharacterAnimations.Idle);
                //WandRoot.SetActive(true);
                //WandRoot.GetComponent<ColorFX>().AssignStartColor(gemSelected);
                //WandRoot.GetComponent<Animator>().SetTrigger("Success");
                yield return new WaitForSeconds(0.5f);
                PlayCharacterAnim(CharacterAnimations.Success);
                Instantiate(SucceedFX, characterRoot.transform.position, Quaternion.Euler(new Vector3(-90, 0, 0)));
                BRBAudioManager.instance.PlayRescueSFX(true);
                //TODO(andyp) Add success messaging and screen transition here

                characterAnimator.SetTrigger("Dance");

                Invoke("ShowScreenshotOffer", 2.5f);
                //Debug.LogError("(andyp) reenable following line? Make character show success animation");
                //BRBEventRegistry.GSOnRescueCompleted(true);
            }
            else
            {
                //WandRoot.GetComponent<Animator>().SetTrigger("Failure");
            }
        }

        private void ShowScreenshotOffer()
        {
            SetUiElements(false);
            Button _exitButton = exitButton.GetComponent<Button>();
            _exitButton.enabled = false;
            _exitButton.interactable = false;

            Tapestry.PopupManager.Instance.ShowScreenshotPopup(rescueCamera, ARCamRef, delegate
            {
                // Back button delegate
                CancelInvoke("ShowRewards");
                Invoke("ShowRewards", 1.5f);
            });
            TapestryEventRegistry.OnMinigameComplete.Invoke();
        }

        private void ShowRewards() {
            GameEventMessage.SendEvent(SystemGameEvent.Back);
            GameEventMessage.SendEvent(GameEventIDs.WIN_MINIGAME_EVENT_ID);
            ExitRescue();
        }

        private void SetUiElements (bool state) {
            foreach (GameObject go in uiElementsToHide) {
                go.SetActive(state);
            }
        }

        void GSOnAttemptRescueFailure()
        {
            //TODO: Don't let us reenter a rescue that has no attempts remaining
            //BRBLog.Log(LogChannel.RESCUE, "Error with rescue attempt " + response.Errors.JSON);
            //statusBar.GetComponentInChildren<Text>().text = response.Errors.JSON.ToString();
            rescueTraceController.captureCanContinue = false;
            //GetComponent<CurveMatcher>().captureCanContinue = false;//(andyp) clean this up
            Invoke("ExitRescue", 2.0f);
            Debug.LogError("(andyp) show tooltip 'An Error has occurred'");
            //SceneManager.instance.mapScreenRoot.ShowTooltip("An Error has occurred");
        }

        // Fire the run away effect and make him disappear
        public void RunAway()
        {
            StartCoroutine(FlashStatusText("Your friend ran away!", -1.0f));
            if (currentCharacterInt < 11)
                Instantiate(FleeFX, characterRoot.transform.position, Quaternion.Euler(new Vector3(-90, 0, 0)));
            else
                Instantiate(FleeRightFX, characterRoot.transform.position, Quaternion.Euler(new Vector3(-90, 180, 0)));
            characterRoot.SetActive(false);
            Invoke("ExitRescue", 2.0f);
        }

        /*
        // Jump to the character screen after a successful capture
        public void GotoCharacter()
        {
            rescueTraceController.ClearPattern ();
            //characterRoot.SetActive(false);
            DEBUGPercentage.GetComponentInChildren<Text>().text = "PERCENTAGE";
            DEBUGPercentage.GetComponentInChildren<Text>().color = Color.white;
            //We don't need to reflect data back up to the server because the server increments charms on its own.
            //This is purely for our local display. May need to be fixed later if we ever increment by more than one.
            if (InventoryDataHolder.instance.InventoryCharactersByID.ContainsKey((int)CurrentRescueCharacter.classID))
            {
                InventoryData iData = InventoryDataHolder.instance.InventoryCharactersByID[(int)CurrentRescueCharacter.classID];
                CurrentRescueCharacter.level = iData.level;
                CurrentRescueCharacter.charms = ++iData.charms;
                CurrentRescueCharacter.rescues = ++iData.rescueNumber;
            }
            else
            {
                InventoryDataHolder.instance.AddLocalCharacter((int)CurrentRescueCharacter.classID);
                CurrentRescueCharacter.charms = 1;
                CurrentRescueCharacter.rescues = 1;
            }
            CharacterViewController.curCharacter = CurrentRescueCharacter;
            CharacterViewController.isOpeningFromRescue = true;
            SceneManager.instance.SetScreen(SceneManager.ScreenID.Character);
        }
        */

        /// <summary>
        /// Handles when player hits exit button
        /// </summary>
        public void ExitRescue()
        {
            CancelInvoke("ExitRescue");//Cancelling invoke incase user clicks exit before auto exit happens
            //DEBUGPercentage.GetComponentInChildren<Text>().text = "PERCENTAGE";
            //DEBUGPercentage.GetComponentInChildren<Text>().color = Color.white;
            //SceneManager.instance.SetScreen(SceneManager.ScreenID.Map);
            Debug.LogError("(andyp) show map screen. hide rescue screen");
            GameEventMessage.SendEvent(SystemGameEvent.Back);
        }

        public void ToggleARMode()
        {
            ARMode = !ARMode;
            if (ARMode)
            {
                PlayerPrefs.SetInt("ARMode", 1);
                ARCamRoot.SetActive(true);
//                planeManager = ARCamRoot.GetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>();
                //if (planeManager != null)
                //{
                //    planeManager.enabled = false;
                //}
                wasGrounded = false;
                UICamera.SetActive(false);
                GroundARButton.SetActive(true);
                MainCamRoot.SetActive(false);
				//WandRoot.transform.parent = MainCamRoot.transform;
                // Make Big D bigger in AR mode

                    characterRoot.transform.localScale = new Vector3(4.0f, 4.0f, 4.0f);
                characterRoot.transform.localRotation = Quaternion.Euler(0, 180, 0);

                //WandRoot.transform.SetParent(MainCamRoot.transform);
                //WandRoot.transform.localPosition = new Vector3(-0.598f, -1.203598f, 3.052388f);
                //WandRoot.transform.localRotation = Quaternion.Euler(258.402f, -18.72198f, -161.634f);


                Vector3 cameraForward = ARCamRef.transform.forward;
                cameraForward.y = 0;
                cameraForward.Normalize();
                characterRoot.transform.position = ARCamRef.transform.position + cameraForward * 0.4f + new Vector3(0, -0.2f, 0);
                UICamera.SetActive(true);

                Invoke("CheckGrounding", 1.0f);
                //Debug.LogError("(andyp) fix missing PlaceOnCloudPoint script");
                //ARCamRoot.GetComponentInChildren<PlaceOnCloudPoint>().LandingOnPoint();
            }
            else
            {
                //IKAnimEvent aimIK = FindObjectOfType<IKAnimEvent>();
                //if (aimIK != null)
                //{
                //    aimIK.DisableAimIK();
                //}

                PlayerPrefs.SetInt("ARMode", 0);
                UICamera.SetActive(false);
                //WandRoot.transform.SetParent(gameObject.transform);
                //WandRoot.transform.position = wandStartPos;
                //WandRoot.transform.rotation = wandStartRot;

                ARCamRoot.SetActive(false);
                GroundARButton.SetActive(false);
                MainCamRoot.SetActive(true);
				//WandRoot.transform.parent = MainCamRoot.transform;
                characterRoot.transform.localScale = new Vector3(40.0f, 40.0f, 40.0f);
                characterRoot.transform.localRotation = Quaternion.Euler(0, 180, 0);
                characterRoot.transform.localPosition = Vector3.zero;
                UICamera.SetActive(true);
            }
        }

        public void RegroundAR()
        {
            Debug.Log("Checking AR Ground");
            if (raycastManager)
            {

                List<ARRaycastHit> hits = new List<ARRaycastHit>();
                Vector3 startPos = ARCamRef.transform.position + ARCamRef.transform.forward * 0.4f + new Vector3(0, 5.0f, 0);
                Vector3 direction = new Vector3(0, -1.0f, 0);
                Ray groundRay = new Ray(startPos, direction);
                if (raycastManager.Raycast(groundRay, hits, TrackableType.PlaneWithinPolygon))
                {
                    characterRoot.transform.position = hits[0].pose.position;
                    Vector3 flatForward = ARCamRef.transform.forward;
                    flatForward.y = 0;
                    flatForward.Normalize();
                    characterRoot.transform.rotation = Quaternion.LookRotation(-flatForward);
                    wasGrounded = true;
                    Debug.Log("Found AR Ground");
                }
                else{
                    Vector3 cameraForward = ARCamRef.transform.forward;
                    cameraForward.y = 0;
                    cameraForward.Normalize();
                    characterRoot.transform.position = ARCamRef.transform.position + cameraForward * 0.4f + new Vector3(0, -0.2f, 0);
                    characterRoot.transform.rotation = Quaternion.LookRotation(-cameraForward);
                }
            }
        }


        public void PlayerStartedDrawing()
        {
            Debug.Log("Player started");
            // Fire the fail animation
            PlayCharacterAnim(CharacterAnimations.Rescue);
        }

        public void SetPlayerDrawPoint(float x, float y)
        {
            traceLookTarget = new Vector2(x, y);
        }

        // Update the anim controller with draw look target
        public void UpdateLookDrawPos()
        {
            traceLookPos = Vector2.MoveTowards(traceLookPos, traceLookTarget, Time.deltaTime * 1.0f);
            characterRoot.GetComponentInChildren<Animator>().SetFloat("DragX", traceLookPos.x);
            characterRoot.GetComponentInChildren<Animator>().SetFloat("DragY", traceLookPos.y);
        }

        void Update()
        {
            //    if (Input.touchCount > 2 && (Input.GetTouch(0).phase == TouchPhase.Began || Input.GetTouch(1).phase == TouchPhase.Began || Input.GetTouch(2).phase == TouchPhase.Began))
            //    {
            //        if (planeManager != null)
            //        {
            //            drawPlanes = !drawPlanes;
            //            planeManager.enabled = drawPlanes;
            //        }
            //    }
            //
        }

    }
}