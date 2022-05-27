using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using BRB_ARGeo;
using UiDrawLine;

public class RescueTraceController : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler {

    //public RescueManager rescueManager;
    public Animator containerAnimator;
    private float speed = 1.5f;
    public GameObject closestObj;
    // Root object for trace nodes
    public GameObject nodesRoot;
    public Transform cursorTrans;
    public GameObject cursorHitAreaFullscreen;//Used for resuming a trace from anywhere on the screen after letting go initially.(andyp)
    public RescueTraceTimerRing timerRingObj;
    public CanvasGroup TimerFullscreenEdgeGlow;
    private int highestHitIndex = -1;
    private int nodeAmountToLeadWith = 4;
    private int extraAmountToLeadLineWith = 4;
    private float nodeShowDelayOffsetBeforeTrace = 0.1f;
    private float nodeShowDelayOffsetDuringTrace = 0.05f;
    private float traceLineWidth = 100f;
    private float minDistanceForHit = 50f;//Max distance you can be from node to trigger hit
    private float timerMissAmount = 0.4f;
    private float timerGainAmount = 0.2f;
    private float timerGainAmountDefault = 0.2f;
    public Text distanceText1;
    public Text timerText1;
    public Text resultText1;
    public Text scoreText1;

    private bool stayHidden = false;

    private List<RescueTraceNode> nodesList;

    private bool canDrag = false;
    private bool traceDragStarted = false;

    private Transform startPosition;

    private float initialCountdownTime = 2.0f;
    private float countdownTimerMaxClamp = 10.0f;
    private float countdownTimerHighestSoFar = 0.0f;
    private float countdownTimer = 0.0f;

    private float captureCooldown = 1.0f;

    private bool screenInitialized = false;
    public bool captureCanContinue = true;//FIXME!! (andyp) is this ever used?

    private WandController wandController;

    public GameObject wandTipTransform;

    public DooberFactory dooberFactory;
    public RectTransform dooberContainer;

    private int traceHitIndex = 0;

    public GameObject TraceIdleFX;

    private UIMeshLine traceGuideLine;

    public float guideTrailScaleMultiplier = 1.0f;

    public RescueTraceNode rescueTraceNodePrefab;

    private GemType currentGemType = GemType.Regular;

    [SerializeField]
    Camera rescueCamera;

    [SerializeField]
    Camera uiCamera;

    [HideInInspector]public bool rescueEnabled = true;//Used for debug panel to keep player from continuing and allow repeat testing of trace line settings (andyp)

    //public RescueDebugPanel rescueDebugPanel;

    [HideInInspector]public CurveNodeContainer curveNodeContainer;

    // Use this for initialization
    void Start ()
    {
        // Get the wand controller
        wandController = GameObject.FindObjectOfType<WandController>();    
    }

    /// <summary>
    /// This function is called when the object becomes enabled and active.
    /// </summary>
    void OnEnable()
    {
        //Reset this to true to undo debug setting from previous rescue session
        rescueEnabled = true;
    }

    void Update()
    {
        if (traceDragStarted)
        {
            countdownTimer -= Time.deltaTime;
            float _time = Mathf.Clamp01(countdownTimer / countdownTimerHighestSoFar);
            timerRingObj.SetTimerAmount(_time);
            TimerFullscreenEdgeGlow.alpha = 1 - _time;
            if (countdownTimer <= 0)
            {
                countdownTimer = 0;
                ShowTraceFail();
            }

            /*
            //TODO: BAD HACK FOR NOW BECAUSE DRAGON DOESNT HAVE A CHARACTER ANIMATOR
            if (SceneManager.instance.currentScreen == SceneManager.ScreenID.Rescue)
            {
                rescueManager.UpdateLookDrawPos();
            }
            */
        }
        timerText1.text = countdownTimer.ToString();

        if(nodesList != null && traceGuideLine != null){
            float nodeListCount = nodesList.Count;
            float setRatio = Mathf.Lerp(traceGuideLine.lengthRatio, Mathf.Clamp01((highestHitIndex + nodeAmountToLeadWith + extraAmountToLeadLineWith) / nodeListCount), 0.1f) * guideTrailScaleMultiplier;
            traceGuideLine.lengthRatio = setRatio;
            Color lineColor = new Color (0.25f, 0.0f, 0.9f);

            //float alpha = 1.0f;
            Gradient gradient = new Gradient();
            gradient.SetKeys(
                new GradientColorKey[] { new GradientColorKey(lineColor, 0.0f)},
                new GradientAlphaKey[] { new GradientAlphaKey(0.5f, setRatio - 0.1f), new GradientAlphaKey(0.0f, setRatio) }
            );

            traceGuideLine.gradient = gradient;
        }
    }

    public IEnumerator HideForSeconds(float inSeconds)
    {
        containerAnimator.Play("Init", -1, 0);//(andyp) TODO! Change this to use "Hide" instead of "Init" after fixing order of operations so vsuals of next trace do not show up until after the current trace has faded to 0 alpha
        yield return new WaitForSeconds(inSeconds);
        if(!stayHidden)
        {
            containerAnimator.Play("Show", -1, 0);
        }
    }

    public void HidePermanent()
    {
        StopNodeParticles ();
        //FIXME!! TODO! (andyp) trigger more hide animations here
        //containerAnimator.Play("Hide", -1, 0);
        stayHidden = true;
    }

    public void StopNodeParticles(){
        for(int i=0; i<nodesList.Count; i++){
            nodesList[i].StopParticles();
        }
    }

    public void SetGemType(GemType gemType)
    {
        currentGemType = gemType;
    }

    public IEnumerator TweenNodeStarsToWand(){

        //FIXME!!! TODO (andyp) this isn't animating to the correct position currently so don't enable yet.  Figure out why it isn't working.

        float tweenDur = 1.0f;
        int trailsPerItem = 1;

        Vector3 wandTipPos = wandTipTransform.transform.position;
        //Camera rescueCamera = rescueManager.rescueCamera;
        //Camera uiCamera = BRB_ARGeo.SceneManager.instance.uiCamera;

        Vector2 destScreenPos = RectTransformUtility.WorldToScreenPoint(rescueCamera, wandTipPos);
        Vector2 localDestPoint = Vector2.zero;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(dooberContainer, destScreenPos, uiCamera, out localDestPoint);
        Vector3 destUiPos = transform.TransformPoint((Vector3)localDestPoint);

        DooberFactory.DooberType dooberType;

        dooberType = DooberFactory.DooberType.BLUE;

        //currentGemType = rescueManager.gemSelected;
        int toInteger = (int)currentGemType;
        dooberType = (DooberFactory.DooberType)toInteger;

        float delayOffset = 0.02f;
        int successfulNodeIndex = 0;
        for(int i=0; i<nodesList.Count; i++){

            yield return new WaitForSeconds(delayOffset);
            if(nodesList[i].isNodeHit){
                //rewardFeedbackHud.ShowRewardTrail(1, 0, nodesList[i].transform.position, wandTipPos.transform.position);
                Vector3 originPos = nodesList[i].transform.position;
                //Vector2 originScreenPos = RectTransformUtility.WorldToScreenPoint(uiCamera, originPos);
                //Vector2 localOriginPoint = Vector2.zero;
                //RectTransformUtility.ScreenPointToLocalPointInRectangle(dooberContainer, originScreenPos, uiCamera, out localOriginPoint);
                //originPos = transform.TransformPoint((Vector3)localOriginPoint);

                //Debug.LogError ("TWEEN FROM: " + originPos + " to " + destUiPos);

                //float delay = Random.Range (0.0f, 2.0f);
                nodesList[i].ShowTallyHitState();

                //TODO. (andyp) clean this up to use universal enums





                dooberFactory.FireMultiple(originPos, wandTipPos, tweenDur, dooberType, trailsPerItem);
                BRBAudioManager.instance.PlayCollectionZipSFX();
                StartCoroutine(PlayDooberHitSFX(successfulNodeIndex, tweenDur));
                ++successfulNodeIndex;

            } else if (nodesList[i].isNodeMissed){
                nodesList[i].ShowTallyMissedState();
                //(andyp) TODO. show blip on missed nodes showing they are failure points
            }
        }
        yield break;
    }

    IEnumerator PlayDooberHitSFX(int index, float waitDur)
    {
        yield return new WaitForSeconds(waitDur);
        BRBAudioManager.instance.PlayCollectionHitSFX(index);
    }

    //Used for other components triggering the activation 
    public IEnumerator ManualActivate(float timer)
    {
        if (timer > 0.0f)
        {
            yield return new WaitForSeconds(timer);
        }
        screenInitialized = true;
        containerAnimator.Play("Show", -1, 0);
        TraceIdleFX.SetActive(true);
        yield break;
    }

    public void InitializePattern(DifficultyInformationHolder.SymbolInformation symbolInfo)
    {
        GameObject pattern = symbolInfo.Pattern;
        DifficultyInformationHolder.DifficultyInformation difficulty = DifficultyInformationHolder.instance.DifficultiesByID[symbolInfo.Difficulty];
        timerMissAmount = difficulty.TimePenalty;
        initialCountdownTime = difficulty.StartTime;
        traceLineWidth = difficulty.lineWidth;
        minDistanceForHit = traceLineWidth/2;
        timerGainAmount = timerGainAmountDefault;
        Debug.Log("Initialize pattern with initial " + initialCountdownTime + " and penalty of " + timerMissAmount);
        //TODO: Change art based on difficulty level

        //SEND VALUES TO DEBUG PANEL
        //rescueDebugPanel.intialCountdownTimerSlider.value = difficulty.StartTime;
        //rescueDebugPanel.lineWidthSlider.value = difficulty.lineWidth;
        //rescueDebugPanel.timeAddedPerHitSlider.value = timerGainAmountDefault;
        //rescueDebugPanel.timePenaltyPerMissSlider.value = difficulty.TimePenalty;        

        SetTracePattern(pattern);
    }

    public void SetDebugTraceValues(float _intialCountdownTimer, float _timeAddedPerHit, float _timePenaltyPerMiss, float _lineWidth){
        initialCountdownTime = _intialCountdownTimer;
        timerMissAmount = _timePenaltyPerMiss;
        timerGainAmount = _timeAddedPerHit;
        traceLineWidth = _lineWidth;
        if(curveNodeContainer){
            curveNodeContainer.traceGuideLine.lineWidth = traceLineWidth;
        }
        minDistanceForHit = _lineWidth/2;
    }

    public void SetTracePattern(GameObject pattern){
        ClearPattern ();
        GameObject newPattern = Instantiate(pattern);
        newPattern.transform.SetParent(nodesRoot.transform, false);
        curveNodeContainer = newPattern.GetComponentInChildren<CurveNodeContainer>();
        if (curveNodeContainer != null)
        {
            curveNodeContainer.SpawnNodes (rescueTraceNodePrefab);
            nodesList = curveNodeContainer.nodesList;
            startPosition = curveNodeContainer.startPosition;
            traceGuideLine = curveNodeContainer.traceGuideLine;
            curveNodeContainer.traceGuideLine.lineWidth = traceLineWidth;
        }
        else
        {
            Debug.LogError("Could not find CurveNodeContainer in pattern");
        }
        ResetTrace();
    }

    public void ClearPattern(){
        if (nodesRoot.transform.childCount > 0)
        {
            Destroy(nodesRoot.transform.GetChild(0).gameObject);
        }
    }

    void OnDisable()
    {
        StopAllCoroutines();
        screenInitialized = false;
    }

    public void SetToStartPosition(){
        //Fix for sometimes when this is called after startposition has been destroyed
        if (startPosition != null) {
            transform.position = startPosition.position;
            canDrag = true;
            timerRingObj.SetTimerEnabled (true);
        }
    }

    void FindClosestNode()
    {
        float lowestDist = Mathf.Infinity;
        int closestIndex = -1;


        int highestNodeIndexToShow = Mathf.Min (highestHitIndex + nodeAmountToLeadWith, nodesList.Count - 1);

        for(int i=highestHitIndex + 1; i<=highestNodeIndexToShow; i++){
            float dist = Vector3.Distance(nodesList[i].transform.position, cursorTrans.position);//FIXME!!! make this check in rect space, not global position. or else do mult with canvas scaler to keep consistant on different aspect ratios

            if (dist<lowestDist)
            {
                lowestDist = dist;
                closestObj = nodesList[i].gameObject;
                closestIndex = i;
            }
        }

        float rootCanvasScale = GetComponentInParent<Canvas>().rootCanvas.transform.localScale.x;

        lowestDist =  lowestDist / rootCanvasScale;// * (1/rootCanvasScale);

        distanceText1.text = lowestDist.ToString ();
        if(lowestDist < minDistanceForHit){
            SetNodeAsHit (closestIndex);
        }
    }

    void SetNodeAsHit(int index){
        bool isNewlySet = nodesList [index].SetNodeHit ();
        if (isNewlySet) {
            //Debug.LogError ("NODE HIT: " + index + "ishit: " + nodesList [index].isNodeHit);
            traceHitIndex++;
            SetHitOnTimer ();
            bool didAnyMiss = MarkSkippedNodesAsMissed (index);
            highestHitIndex = index;
            SetEnabledNodes ();
            //Check if this is the last node
            if (index + 1 == nodesList.Count) {
                if (countdownTimer > 0) {
                    ShowTraceSuccess ();
                }
            }
            if (didAnyMiss)
            {
                traceHitIndex = 0;
                BRBAudioManager.instance.PlayTraceMissSFX();
            }
            else
            {
                //TODO @jchau: Pending trace unification do an ugly hack on the current screen
                if (true)//SceneManager.instance.currentScreen == SceneManager.ScreenID.CoopRescue)
                {
                    BRBAudioManager.instance.PlayRaidTraceHitSFX(traceHitIndex);
                }
                else
                {
                    BRBAudioManager.instance.PlayTraceHitSFX(traceHitIndex);
                }

            }
        }
    }

    bool SetNodeAsMissed(int index){
        bool didAnyMiss = false;
        if (nodesList [index].SetNodeMissed ()) {
            //Debug.LogError ("NODE MISSED");
            SetMissOnTimer ();
            didAnyMiss = true;
        }
        return didAnyMiss;
    }

    bool MarkSkippedNodesAsMissed(int latestIndexHit){
        //Go through indexes between previous hit and current hit and mark them as missed
        bool didAnyMiss = false;
        for(int i=highestHitIndex+1; i<latestIndexHit; i++){
          didAnyMiss = SetNodeAsMissed(i);
        }
        return didAnyMiss;
    }

    void SetHitOnTimer(){
        countdownTimer += timerGainAmount;
        countdownTimerHighestSoFar = Mathf.Max (countdownTimer, countdownTimerHighestSoFar);
    }

    void SetMissOnTimer(){
        countdownTimer -= timerMissAmount;
    }

    void ShowTraceFail(){
        //Debug.LogError("TRACE FAILED");
        canDrag = false;
        timerRingObj.SetTimerEnabled (false);
        traceDragStarted = false;
        cursorHitAreaFullscreen.SetActive(false);

        if(!rescueEnabled){
            ResetTrace ();
            //SceneManager.instance.rescueScreenRoot.PlayCharacterAnim(RescueManager.CharacterAnimations.Fail);
            return;
        }

        float percentage = 80;

        //BRBLog.Log(LogChannel.RESCUE, "Error percentage: " + percentage);
        BRBEventRegistry.OnTraceCompleted(percentage);
        //TODO: Get rid of percentage. Holdover from old system, we have absolute success/failure now. 
    }

    void ShowTraceSuccess(){
        //Debug.LogError("TRACE SUCCEEDED");
        canDrag = false;
        timerRingObj.SetTimerEnabled (false);
        traceDragStarted = false;
        cursorHitAreaFullscreen.SetActive(false);

        if(!rescueEnabled){
            ResetTrace ();
            //SceneManager.instance.rescueScreenRoot.PlayCharacterAnim(RescueManager.CharacterAnimations.Success);
            return;
        }

        float percentage = 50;

        //BRBLog.Log(LogChannel.RESCUE, "Error percentage: " + percentage);
        BRBEventRegistry.OnTraceCompleted(percentage);
    }

    public void ResetTrace(){
        // Reset Sound
        traceHitIndex = 0;

        // Check if not set yet
        if (nodesList == null){
            return;
        }

        SetToStartPosition ();

        //Reset nodes
        for(int i=0; i<nodesList.Count; i++){
            if (nodesList [i] != null) {
                nodesList [i].ResetState ();
            }
        }
        if (wandController != null)
            wandController.SetAiming(false);

        stayHidden = false;
        highestHitIndex = -1;

        //RESET TIMER
        //TODO: Set timer to corresponding difficulty entry
        countdownTimer = initialCountdownTime;

        countdownTimerHighestSoFar = initialCountdownTime;
        timerRingObj.SetTimerAmount(initialCountdownTime);
        TraceIdleFX.SetActive(true);
        TimerFullscreenEdgeGlow.alpha = 0;

        SetEnabledNodes ();
    }

    void SetEnabledNodes(){
        int highestNodeIndexToShow = Mathf.Min (highestHitIndex + nodeAmountToLeadWith, nodesList.Count - 1);
        int indexForDelayOffset = 0;
        //Use slower delay for showing the first few nodes before the user starts tracing.
        bool isInitialNodes = nodeAmountToLeadWith > highestNodeIndexToShow;
        float delayOffset = isInitialNodes ? nodeShowDelayOffsetBeforeTrace : nodeShowDelayOffsetDuringTrace;
        for(int i=highestHitIndex + 1; i<=highestNodeIndexToShow; i++){
            if(nodesList[i] != null){
                float delay = indexForDelayOffset * delayOffset;
                if(isInitialNodes){
                    delay += captureCooldown;
                }
                nodesList[i].SetNodeEnabled(true, delay);
            }

            indexForDelayOffset++;
        }
    }


    ///////////////////////////////DRAG DEMO START
    /// 
    /// 


    public bool dragOnSurfaces = true;

    private GameObject m_DraggingIcon;
    private RectTransform m_DraggingPlane;

    public void OnBeginDrag(PointerEventData eventData)
    {
        if (!canDrag) {
            return;
        }
        traceDragStarted = true;
        cursorHitAreaFullscreen.SetActive(true);

        if (wandController != null)
            wandController.SetAiming(true);
        m_DraggingIcon = gameObject;

        if (dragOnSurfaces)
            m_DraggingPlane = transform as RectTransform;
        else
            m_DraggingPlane = GetComponentInParent<Canvas>().rootCanvas.transform as RectTransform;

        TraceIdleFX.SetActive(false);
        SetDraggedPosition(eventData);
    }

    public void OnDrag(PointerEventData data)
    {
        if(canDrag && traceDragStarted){
            SetDraggedPosition(data);
            FindClosestNode ();
        }
        //Debug.LogError ("DRAGGING");
    }

    private void SetDraggedPosition(PointerEventData data)
    {
        if (dragOnSurfaces && data.pointerEnter != null && data.pointerEnter.transform as RectTransform != null)
            m_DraggingPlane = data.pointerEnter.transform as RectTransform;

        // Aim the wand at the touch position
        if (wandController != null)
            wandController.SetTarget(new Vector3(data.position.x, data.position.y, 1000.0f));
        // Tell the animator blendspace about the point
        Vector2 viewPos = (Vector2.Scale(data.position, new Vector2(1.0f / Screen.width, 1.0f / Screen.height)) - new Vector2(0.5f, 0.5f)) * 4.0f;
        //TODO: BAD HACK
        /*
        if (SceneManager.instance.currentScreen == SceneManager.ScreenID.Rescue)
        {
            rescueManager.SetPlayerDrawPoint(viewPos.x, viewPos.y);
        }
        */
        
        var rt = m_DraggingIcon.GetComponent<RectTransform>();
        Vector3 globalMousePos;
        if (RectTransformUtility.ScreenPointToWorldPointInRectangle(m_DraggingPlane, data.position, data.pressEventCamera, out globalMousePos))
        {
            rt.position = globalMousePos;
            rt.rotation = m_DraggingPlane.rotation;

        }

    }

    public void OnEndDrag(PointerEventData eventData)
    {
        if(traceDragStarted && canDrag){
            //FIXME!!! TODO (andyp) this isn't animating to the correct position currently so don't enable yet.  Figure out why it isn't working.
            //TweenNodeStarsToWand ();

            //ShowTraceFail ();
            //TODO(andyp) RUN CHECK FOR FAIL HERE.  CHECK IF USER WENT OVER A CERTAIN DISTANCE BEFORE COUNTING IT AS A FAIL.  do this to prevent accidental loss of single tap
        }
        //isDragging = false;
        if (wandController != null)
            wandController.SetAiming(false);
    }


    ///////////////////////////////DRAG DEMO END

}
