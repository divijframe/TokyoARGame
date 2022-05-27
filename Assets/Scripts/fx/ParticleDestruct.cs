//
//  particleDestruct.cs
// script authored by Ryan VanMeter
// THIS SCRIPT IS NOW OBSOLETE AS OF UNITY 2017.3.1f1
// PARTICLESYSTEM HAS A STOP ACTION THAT CAN BE SET TO DESTROY
//

using UnityEngine;
using System.Collections;

// this kills particles so they don't live forever
public class ParticleDestruct : MonoBehaviour {

	private ParticleSystem particleComponent;
	private float duration;
	private bool killMe = false;

	void Awake () {
		particleComponent = GetComponent<ParticleSystem>();
		var main = particleComponent.main;
		duration = main.duration;
	}

	void Update() {
		if (killMe == false && gameObject.activeInHierarchy == true) {
			Destroy (this.gameObject, duration);
			killMe = true;
		}
	}
}