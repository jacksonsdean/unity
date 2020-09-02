using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildButton : MonoBehaviour {

	public enum BuildSelect{
		fence
	};

	private Player player;
	public BuildSelect myType;

	private void Awake() {
		player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
	}
	public void OnClick(){
		if (myType == BuildSelect.fence){
			player.Build("fence");
		}

	}
	
}
