using DG.Tweening;
using Doozy.Engine.Soundy;
using JfranMora.Inspector;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScreenshotController : MonoBehaviour
{
#if UNITY_5_3_OR_NEWER

    [SerializeField] private GameObject screenshotParent;
    [SerializeField] private GameObject shareParent;
    [SerializeField] private GameObject previewParent;
    [SerializeField] private GameObject previewContainer;
    [SerializeField] private Text previewText;
    [SerializeField] private Image imagePreview;
    [SerializeField] private CaptureAndSave snapShot;

    #region Flash
    [Space(10.0f)]
    [Header("Flash")]
    [SerializeField] private CanvasGroup flash;
    [SerializeField] private Ease flashEase;
    [SerializeField] private float flashDuration;
    [SerializeField] private string flashSoundDatabaseName = "SoundDatabase_ExampleSlides";
    [SerializeField] private string flashSoundName = "Camera Shot";
    #endregion

    public Camera targetCamera;

    public Camera targetCameraAr;

    private Texture2D previousTexture;

    private enum ScreenshotViews {
        Invalid = -1,

        screenshot = 0,
        preview = 1,
        share = 2
    }

    void OnEnable() {
        CaptureAndSaveEventListener.onError += OnError;
        CaptureAndSaveEventListener.onSuccess += OnSuccess;
        CaptureAndSaveEventListener.onScreenShot += OnScreenshotReady;
    }

    void OnDisable() {
        CaptureAndSaveEventListener.onError -= OnError;
        CaptureAndSaveEventListener.onSuccess -= OnSuccess;
        CaptureAndSaveEventListener.onScreenShot -= OnScreenshotReady;
    }

    private void Start() {
        SetViews(ScreenshotViews.screenshot);
        flash.gameObject.SetActive(false);
    }

    private void SetViews (ScreenshotViews screens) {
        screenshotParent.SetActive(screens == ScreenshotViews.screenshot);
        previewParent.SetActive(screens == ScreenshotViews.preview);
        shareParent.SetActive(screens == ScreenshotViews.share);
        imagePreview.gameObject.SetActive(previewParent.activeSelf || shareParent.activeSelf);
        previewContainer.SetActive(previewParent.activeSelf || shareParent.activeSelf);
        if (screens == ScreenshotViews.preview) {
            previewText.text = "Preview";
        }
    }

    private void OnError(string error) {
        Debug.LogError($"Error: {error}");
    }

    private void OnSuccess(string msg) {
        Debug.Log($"Screenshot Success");
    }

    private void OnScreenshotReady(Texture2D tex) {
        previousTexture = tex;
        if (imagePreview != null) {
            imagePreview.sprite = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), Vector2.zero);
            SetViews(ScreenshotViews.preview);
        }
    }

    private void DoFlash () {
        flash.gameObject.SetActive(true);
        SoundyManager.Play(flashSoundDatabaseName, flashSoundName);
        flash.DOFade(0, flashDuration)
             .SetEase(flashEase)
             .OnComplete(delegate 
             {
                 ResetFlash();
                 TakeScreenshot();
             });
    }

    private void ResetFlash() {
        flash.gameObject.SetActive(false);
        flash.alpha = 1;
    }

    private void TakeScreenshot() {
        int w = Screen.width;
        int h = Screen.height;

        imagePreview.preserveAspect = true;

        // Removes all screens to take the screenshot
        SetViews(ScreenshotViews.Invalid);

        Camera cameraToUse = null;

        if (targetCamera != null)
        {
            if (targetCameraAr != null)
            {
                cameraToUse = targetCamera.gameObject.activeInHierarchy ? targetCamera : targetCameraAr;
            }
            else
            {
                cameraToUse = targetCamera;
            }
        }
        else
        {
            cameraToUse = Camera.main;
        }

        if (cameraToUse == null)
        {
            Debug.LogError("Screenshot Popup Error: Wrong Camera or not tagged as MainCamera");
            return;
        }

        snapShot.GetScreenShot(w, h, cameraToUse, ImageType.JPG);
    }

    #region UI Referenced
    public void OnScreenshotButtonClick() {
        DoFlash();
    }

    public void OnSaveButtonClick() {
        if (previousTexture != null) {
            snapShot.SaveTextureToGallery(previousTexture, ImageType.JPG);
            Debug.Log($"Screenshot saved");
            previewText.text = "Saved in Gallery!";
        }
    }

    public void OnShareButtonClick() {
        if (previousTexture == null) {
            return;
            //SetViews(ScreenshotViews.share);
        }

        new NativeShare().AddFile(previousTexture)
        .SetCallback((result, shareTarget) => Debug.Log("Share result: " + result + ", selected app: " + shareTarget))
        .Share();
    }

    public void OnCancelPreview() {
        SetViews(ScreenshotViews.screenshot);
    }

    public void OnCancelShare() {
        SetViews(ScreenshotViews.preview);
    }
    #endregion

    #region Debug
    [Button(HideInEditMode = true)]//Show debug button at bottom of inspector for runtime testing in editor
    public void TestFlash() {
        DoFlash();
    }
    #endregion

#endif
}
