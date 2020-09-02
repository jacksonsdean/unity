using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Build : MonoBehaviour {
	private Player player;

	private void Awake() {
		player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
	}

}
