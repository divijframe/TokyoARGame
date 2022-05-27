using UnityEngine;
using System.Collections;

public class RandomAnimStartFrame : MonoBehaviour {

  private Animator animator;

	// Use this for initialization
	void Start () {
	
	}

  void Awake(){
    animator = transform.GetComponent<Animator>();
  }
	
	// Update is called once per frame
	void Update () {
	
	}

  void OnEnable(){
    animator.playbackTime = Random.value;
    animator.Play("Idle", -1, Random.value);
  }
}
