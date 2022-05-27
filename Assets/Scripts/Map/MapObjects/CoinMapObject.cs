using DG.Tweening;
using JfranMora.Inspector;
using UnityEngine;

namespace Tapestry
{
    public class CoinMapObject : MapObject
    {
        [SerializeField] private float shrinkDuration;
        [SerializeField] private Ease  shrinkEase;
        [SerializeField] private Transform  pivot;
        [SerializeField] private GameObject geoCoin;
        [SerializeField] private ParticleSystem coinFX;
        [SerializeField] private GameObject selectCoinFX;

        private bool tapRegistered = false;
        private Animator coinController;
        private float coinSpinnerOriginalSpeed;
        private float coinSpinnerFastSpeed;

        void Start() {
            if(geoCoin != null) {
                coinController = geoCoin.gameObject.GetComponent<Animator>();
                coinSpinnerOriginalSpeed = geoCoin.gameObject.GetComponent<Spinner>().rotation_speed_y;
                coinSpinnerFastSpeed = coinSpinnerOriginalSpeed * 2;
            }
            if (coinFX != null)
                coinFX.Stop(true, ParticleSystemStopBehavior.StopEmitting);
        }
        
        public override void Initialize(MapObjectDataEntry entry)
        {
            base.Initialize(entry);
            SetProximityListeners();
            cameraParameters.AddWorldMapListener(SetWorldMapValueChangedListeners);
        }
        
        public override void SetProximityListeners()
        {
            proximityTrigger.SetProximityTriggers(OnPlayerEnter, OnPlayerExit);
        }
        
        public override void SetWorldMapValueChangedListeners(bool isWorldMap)
        {
            if (isWorldMap)
            {
                OnPlayerExit();
            }
            else
            {
                if (proximityTrigger.isPlayerInside)
                {
                    OnPlayerEnter();
                }
            }
        }

        private void OnPlayerExit()
        {
            if(coinController != null)
                coinController.SetTrigger("notInRange");
            if (coinSpinnerOriginalSpeed != null && geoCoin != null)
                geoCoin.gameObject.GetComponent<Spinner>().rotation_speed_y = coinSpinnerOriginalSpeed;
            if (coinFX != null)
                coinFX.Stop(true, ParticleSystemStopBehavior.StopEmitting);
        }
        
        private void OnPlayerEnter()
        {
            if (cameraParameters.IsWorldMap)
            {
                return;
            }
            
            if (coinController != null)
                coinController.SetTrigger("inRange");
            if (coinSpinnerFastSpeed != null && geoCoin != null)
                geoCoin.gameObject.GetComponent<Spinner>().rotation_speed_y = coinSpinnerFastSpeed;
            if (coinFX != null)
                coinFX.Play(true);
        }

        public override void HandleTap(bool inInteractionRange)
        {
            base.HandleTap(inInteractionRange);
            Debug.Log("Tapped on Coin " + inInteractionRange);

            if (inInteractionRange)
            {
                if (tapRegistered)
                {
                    return;
                }
                
                tapRegistered = true;
                TapestryEventRegistry.OnCoinClicked.Invoke(inInteractionRange);
                if (selectCoinFX != null) {
                    selectCoinFX.SetActive(true);
                    selectCoinFX.transform.parent = null;
                }
                Shrink();
            }
            else
            {
                PopupManager.Instance.ShowNotification("Out of Range");
            }
        }
        
        private void Shrink()
        {
            Vector3 coinPos = transform.localPosition;
            Vector3 pivotPos = pivot.localPosition;
            Vector3 newScale = Vector3.zero;
            Vector3 pivotDif = coinPos - pivotPos;
            float relativeScale = newScale.x / transform.localScale.x;
            
            Vector3 finalPosition = pivotPos + pivotDif * relativeScale;
            finalPosition.z = coinPos.z;
            finalPosition.x = coinPos.x;

            transform.DOMove(finalPosition, shrinkDuration)
                .SetEase(shrinkEase);

            transform.DOScale(Vector3.zero, shrinkDuration)
                .SetEase(shrinkEase)
                .OnComplete(DestroyCoin);
        }

        private void DestroyCoin()
        {
            cameraParameters.RemoveWorldMapListener(SetWorldMapValueChangedListeners);
            Destroy(gameObject);
        }
        
        [Button(HideInEditMode = true)]//Show debug button at bottom of inspector for runtime testing in editor
        public void TestShrink()
        {
           Shrink();
        }
    }
}