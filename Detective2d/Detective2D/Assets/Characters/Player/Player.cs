using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {

	public Grid grid;

	public WorldTile target;
	public GameManager gameManager;

	private PlayerMovement playerMovement;
	private Animator anim;

	


	void Awake(){
		playerMovement = gameObject.GetComponent<PlayerMovement>();

		if (!anim)
        {
            anim = GetComponentInChildren<Animator>();
        }
	}

	// Use this for initialization
	void Start () {
		
	}

	// Update is called once per frame
	void Update()
	{
		if (Input.GetMouseButtonUp(0))
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
	}
}
