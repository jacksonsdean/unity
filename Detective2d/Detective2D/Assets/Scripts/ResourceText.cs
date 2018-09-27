using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ResourceText : MonoBehaviour {
	public enum ResourceType{
		wood
	};

	private Player player;
	public ResourceType myType;

	private Text text;
	private void Awake() {
		text = GetComponent<Text>();
		player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
	}

	public void UpdateVal(){
		if (myType == ResourceType.wood)
		{
			text.text = player.woodVal.ToString();
		}
	}

}
