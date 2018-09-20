using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class WorldTile : MonoBehaviour
{
	public int gCost;
	public Grid grid;
	public int hCost;
	public int gridX, gridY;
	public bool walkable = true;
	public List<WorldTile> myNeighbours;
	public WorldTile parent;

	public WorldTile last;


	public int distance = 9999;
	public bool visited = false;
   
	public Vector3 worldPos 
	{
        get
		{
			return grid.GetCellCenterWorld(new Vector3Int(gridX, gridY, 0));
		}

	}

	public int fCost
	{
		get
		{
			return gCost + hCost;
		}

	}

	//private Canvas canvas;
	private Text text;

	void Awake(){
		//canvas = gameObject.AddComponent<Canvas>();
		text = GetComponentInChildren<Text>();
		text.enabled = false;
        
		                   

	}

	void Update(){
	}

	private void OnDrawGizmos(){
		text.enabled = true;
		if (!walkable) { text.color = Color.red; }
		text.text = gridX.ToString() + "," + gridY.ToString();

	}


}
