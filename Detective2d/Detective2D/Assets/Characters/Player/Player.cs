using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Player : MonoBehaviour {
	[System.Serializable]
	public struct BuildableItem {
     	public string name;
     	public Texture2D image;
 	}
 	public BuildableItem[] buildableItems;

	private Dictionary <string, Texture2D> itemDictionary;
	public Grid grid;

	public WorldTile target;
	public GameManager gameManager;

	private PlayerMovement playerMovement;
	private Animator anim;

	public GameObject resourcePanel;

	public GameObject buildMenu;

	public int woodVal;

	public float chopTime = 1.2f;

	void Awake(){
		playerMovement = gameObject.GetComponent<PlayerMovement>();

		if (!anim)
        {
            anim = GetComponentInChildren<Animator>();
        }

		buildMenu.SetActive(false);
		itemDictionary = new Dictionary<string, Texture2D>();

		foreach(BuildableItem bi in buildableItems){
			itemDictionary[bi.name] = bi.image;
		}

	}

	// Use this for initialization
	void Start () {
		
	}

	// Update is called once per frame
	void Update()
	{
		if (Input.GetMouseButtonDown(0) && !EventSystem.current.IsPointerOverGameObject())
		{
			Vector3 moveTar = Camera.main.ScreenToWorldPoint(Input.mousePosition);
			playerMovement.SetTar(moveTar); // set the target to mouse location

			Vector2Int goalCell = new Vector2Int(grid.WorldToCell(moveTar).x, grid.WorldToCell(moveTar).y);

			GameObject[,] nodes = gameManager.nodes;

			for (int x = 0; x < nodes.GetLength(0) - 1; x++)
			{
				for (int y = 0; y < nodes.GetLength(1) - 1; y++)
				{
					if (nodes[x, y].GetComponent<WorldTile>().gridX == goalCell.x && nodes[x, y].GetComponent<WorldTile>().gridY == goalCell.y)
					{
						target = nodes[x, y].GetComponent<WorldTile>();
					}

				}
			}
		}

		if(Input.GetButtonDown("BuildMenu")){
			buildMenu.SetActive(!buildMenu.activeSelf);
		}
	}

	public void addWood(int amt){
		woodVal += amt;
		UpdateResourceVals();

	}
	public void subtractWood(int amt){
		woodVal -= amt;
		UpdateResourceVals();
	}


	private void UpdateResourceVals(){
		foreach (ResourceText t in resourcePanel.GetComponentsInChildren<ResourceText>()){
			t.UpdateVal();
		}
	}

	public void Build(string item){
		if(item == "fence"){
			if(woodVal >= 35){
				buildMenu.SetActive(false);
				Cursor.SetCursor(itemDictionary[item],new Vector2(0,0),CursorMode.Auto);
				StartCoroutine(PlaceItem(item));
			}
			else{
				print("Not enough wood to build a fence");
			}
		}
	}

	private IEnumerator PlaceItem(string item){
		yield return new WaitForSeconds(.3f);
		if(Input.GetMouseButtonUp(0)){
			// check if this is a valid target, etc..
			Cursor.SetCursor(null,new Vector2(0,0),CursorMode.Auto);
			subtractWood(35);
			print("Placing " + item);
		}
		else {

			yield return null;
			}
			
		
	}
}
