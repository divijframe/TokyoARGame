using Mapbox.Utils;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry {
    public class GoToController : MonoBehaviour {

        public void OnGoToButtonClick (int index) {

            Vector2d position = Vector2d.zero;
            switch (index) {
                case 0:
                    // Aoyama-Itchome Station
                    position = new Vector2d(35.67280634751722, 139.7239623738931);
                    break;
                case 1:
                    // Shibuya Station
                    position = new Vector2d(35.659508372606595, 139.7005238652844);
                    break;
                case 2:
                    // Shinjuku Station
                    position = new Vector2d(35.689084518081714, 139.70041599234506);
                    break;
                case 3:
                    // Roppongi Station
                    position = new Vector2d(35.66282634601038, 139.73116857587777);
                    break;
                case 4:
                    // User gps Lat/Lng
                    position = new Vector2d(0,0);
                    break;
                default:
                    return;
            }
            TapestryEventRegistry.OnGoTo.Invoke(position);
        }

        public void LoadSocialMediaAppTestScene()
        {
            UnityEngine.SceneManagement.SceneManager.LoadScene(1);
        }
    }
}
