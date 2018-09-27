using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
	public GameObject[,] nodes;
	public Grid grid;

	public Player player;

    // Use this for initialization
    void Start()
    {
       
    }

	private void Awake()
    {
		player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
		CreateNodesFromTilemaps cnftm = GetComponent<CreateNodesFromTilemaps>();
        cnftm.generateNodes();
        nodes = cnftm.nodes;
		for (int x = 0; x < nodes.GetLength(0)-1; x++)
		{
			for (int y = 0; y < nodes.GetLength(1)-1; y++)
			{
				nodes[x, y].GetComponent<WorldTile>().gridX = grid.WorldToCell(nodes[x, y].transform.position).x;
				nodes[x, y].GetComponent<WorldTile>().gridY = grid.WorldToCell(nodes[x, y].transform.position).y;

			}
		}


    }

}
