using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInteract : MonoBehaviour {
	private Player player;
	private Animator anim;


	// Use this for initialization
	void Awake () {
		player = GetComponent<Player>();
		anim = GetComponent<Animator>();

		if (!anim)
		{
			anim = GetComponentInChildren<Animator>();
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void Interact(string dir) {
		if(player.target == null){
			return;
		}

		if(dir == null){
			if(anim.GetFloat("X") < 0){
				dir = "left";
			}
			else if (anim.GetFloat("X") > 0){
				dir = "right";
			}
			else if (anim.GetFloat("Y") < 0){
				dir = "down";
			}
			else if (anim.GetFloat("Y") > 0){
				dir = "up";
			}

		}

		if (player.target.resource == "Trees_Interactable"){
			ChopTree(dir);
		}
	}

	private void ChopTree(string dir){
		print("Chopping " + dir);
		anim.Play("axe_"+dir);
		player.target = null;
	}
}
