using UnityEngine;
using System.Collections;

public class Animation2 : MonoBehaviour {

    [SerializeField]
    float speed = 45f;

	// Update is called once per frame
	void Update () {
        transform.Rotate(Vector3.up * speed * Time.deltaTime);
	}
}
