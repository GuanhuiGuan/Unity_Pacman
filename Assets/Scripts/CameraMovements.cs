using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovements : MonoBehaviour {

    public GameObject player;
    private Vector3 offset;

	// Use this for initialization
	void Start () {
        // find the correct offset of player and camera
        offset = transform.position - player.transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    // use late update to let others be loaded first; camera pos = offset + current player position
    private void LateUpdate()
    {
        transform.position = player.transform.position + offset;
    }
}
