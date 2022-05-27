using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RescueTraceNode : MonoBehaviour {
    public bool isNodeMissed = false;
    public bool isNodeHit = false;
    public bool isNodeEnabled = false;

    public GameObject stateObjDefault;
    public GameObject stateObjHit;
    public GameObject stateObjMissed;

    void Awake(){
        stateObjDefault.SetActive (false);
        stateObjHit.SetActive (false);
        stateObjMissed.SetActive (false);
    }

    public bool SetNodeMissed(){
        if(!isNodeHit && !isNodeMissed){//Do nothing if is already set to either state
            isNodeMissed = true;

            stateObjDefault.SetActive (false);
            stateObjHit.SetActive (false);
            stateObjMissed.SetActive (true);
            return true;
        }
        return false;
    }

    public bool SetNodeHit(){
        if(!isNodeHit && !isNodeMissed){//Do nothing if is already set to either state
            //Debug.LogError ("SetNodeHit: " + gameObject.name);
            isNodeHit = true;

            stateObjDefault.SetActive (false);
            stateObjHit.SetActive (true);
            stateObjMissed.SetActive (false);
            return true;
        }
        return false;
    }

    public void ResetState(){
        isNodeHit = false;
        isNodeMissed = false;
        isNodeEnabled = false;

        stateObjDefault.SetActive (false);
        stateObjHit.SetActive (false);
        stateObjMissed.SetActive (false);

        StopAllCoroutines(); //Need this here otherwise nodes might show themselves after being disabled
    }

    public bool SetNodeEnabled(bool enable, float delay){
        if (!isActiveAndEnabled)
        {
            return false;
        }
        if(!isNodeEnabled && enable == true){//Do nothing if is already set to either state
            isNodeEnabled = true;
            StartCoroutine (SetEnabledNodeVisuals (delay));
            return true;
        } else if(isNodeEnabled && enable == false){//Do nothing if is already set to either state
            isNodeEnabled = false;
            stateObjDefault.SetActive (false);
            stateObjHit.SetActive (false);
            stateObjMissed.SetActive (false);
            return true;
        }
        return false;
    }

    IEnumerator SetEnabledNodeVisuals(float delay){
        //FIXME!!! (andyp) make scale state to make local scale of effect be 0 so the vfx dont show before the icon should be visible
        yield return new WaitForSeconds(delay);
        if (!isNodeHit && !isNodeMissed) {
            stateObjDefault.SetActive (true);
            stateObjHit.SetActive (false);
            stateObjMissed.SetActive (false);
        }
        //image.enabled = true; (andyp) from old structure. test to see if anything needs to actually be set enabled here.
        GetComponent<Animator>().Play ("Show", -1, 0);
    }

    public void StopParticles(){
        ParticleSystem[] childrenParticleSytems;
        childrenParticleSytems = gameObject.GetComponentsInChildren< ParticleSystem >();

        foreach( ParticleSystem childPS in childrenParticleSytems )
        {
            childPS.Stop ();
        }
    }

    public void ShowTallyHitState(){
        //(andyp) TODO. make animation indicating the node was successfull. call attention to it during tally then fade away.
        ResetState ();
    }

    public void ShowTallyMissedState(){
        //(andyp) TODO. make animation indicating the node was missed. call attention to it during tally then fade away.
        ResetState();
    }

    void OnDestroy(){
        StopAllCoroutines();
    }
}
