using UnityEngine;
using System.Collections;

public class Animation1 : MonoBehaviour {
    [SerializeField]
    Transform from, to;

    [SerializeField]
    float speed = 5f;

	// Update is called once per frame
	void Update () {
        transform.position = Vector3.MoveTowards(transform.position, to.position, speed * Time.deltaTime);

        if(Vector3.Distance(transform.position, to.position) < 0.5f)
        {
            Transform temp = to;
            to = from;
            from = temp;
        }

	}
}
