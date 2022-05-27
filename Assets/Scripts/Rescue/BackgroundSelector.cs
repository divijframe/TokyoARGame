namespace BRB_ARGeo
{
    using System.Collections;
    using System.Collections.Generic;
    using UnityEngine;

    // Selects the background based on the current theme
    public class BackgroundSelector : MonoBehaviour {
        [SerializeField]
        GameObject[] backgroundRoot;

        /*
        void OnEnable()
        {
            // Background is spooky for boss in tutorial
            if (SceneManager.instance.TutorialMode)
            {
                for (int i = 0; i < backgroundRoot.Length; i++)
                {
                    if (TutorialController.Instance.Phase >= TutorialPhase.SOLODRAGONOPENED && TutorialController.Instance.Phase < TutorialPhase.DONE)
                    {
                        backgroundRoot[i].SetActive(i == 1);
                    }
                    else
                    {
                        backgroundRoot[i].SetActive(i == 0);
                    }

                }
            }
            else
            {
                for (int i = 0; i < backgroundRoot.Length; i++)
                {
                    backgroundRoot[i].SetActive(i == (int)BRBPlayerPosition.Instance.Neighborhood.Theme);
                }

            }
        }
        */
    }
}
