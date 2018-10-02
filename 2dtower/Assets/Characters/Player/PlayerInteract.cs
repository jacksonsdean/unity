using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInteract : MonoBehaviour {
	private Player player;
	private Animator anim;

	private bool interacting = false;
	
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
		// return if there is no target or we are already interacting
		if(player.target == null || interacting){
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
			StartCoroutine(ChopTree(dir));
		}
	}


	private IEnumerator ChopTree(string dir){
		interacting = true;
		anim.Play("axe_"+dir);
		player.addWood(5);
		yield return new WaitForSeconds(player.chopTime);
		player.target = null;
		interacting = false;
		if (Input.GetMouseButton(0)){
			StartCoroutine(ChopTree(dir));
		}
	}


}
