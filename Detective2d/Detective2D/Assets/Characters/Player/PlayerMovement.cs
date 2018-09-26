using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using UnityEngine;
using UnityEngine.Tilemaps;
using System.Linq;

public class PlayerMovement : MonoBehaviour
{
	public float moveSpeed = .02f;
	public Grid grid;
	public GameManager gameManager;

	private Animator anim;

	private Vector2 moveTar;
	private Vector2 nextMoveTar;
	Vector3Int moveCell;

	Vector3 destination;
	private Vector2 posBeforeMove;
	private float preColX, preColY;
	private bool collided;
	private Vector2 origMoveTar;

	private List<WorldTile> path = new List<WorldTile>();

	private PlayerInteract playerInteract;
	private void Awake()
	{
		path.Add(new WorldTile());
		destination = transform.position;
		playerInteract = GetComponent<PlayerInteract>();

		anim = GetComponent<Animator>();

		if (!anim)
		{
			anim = GetComponentInChildren<Animator>();
		}

		moveTar = gameObject.transform.position;


	}


	private void OnTriggerEnter2D(Collider2D col)
	{
		preColX = anim.GetFloat("X");
		preColY = anim.GetFloat("Y");
		origMoveTar = moveTar;
		collided = true;
		moveTar = grid.GetCellCenterWorld(grid.WorldToCell(transform.position));

	}



	private void Update()
	{
		if (destination != transform.position)
		{
			anim.SetBool("Walking", true);
			posBeforeMove = gameObject.transform.position;

			nextMoveTar = grid.GetCellCenterWorld(new Vector3Int(path[0].gridX, path[0].gridY, 0));
			transform.position = Vector2.MoveTowards(transform.position, nextMoveTar, moveSpeed * Time.deltaTime);

			if (nextMoveTar == new Vector2(transform.position.x, transform.position.y))
			{
				path.RemoveAt(0);

			}
			else
			{
				anim.SetFloat("X", nextMoveTar.x - gameObject.transform.position.x);
				anim.SetFloat("Y", nextMoveTar.y - gameObject.transform.position.y);

			}

		}
		else // Done walking
		{
			// If we are still not looking in the target direction (IE we clicked on an obstacle and the last movement was not directly towards it)
			if (Mathf.Abs(moveCell.x - grid.WorldToCell(transform.position).x) > .1f) 
			{
				anim.SetFloat("X", moveCell.x - grid.WorldToCell(transform.position).x);
			}
			if (Mathf.Abs(moveCell.y - grid.WorldToCell(transform.position).y) > .1f)
			{
				anim.SetFloat("Y", moveCell.y - grid.WorldToCell(transform.position).y);
			}

			anim.SetBool("Walking", false);
			// null is we dont know direction
			playerInteract.Interact(null);

		}

	}


	/*
     DIJKSTRA'S ALGORITHM
        1. Mark all nodes unvisited. Create a set of all the unvisited nodes called the unvisited set.
        2. Assign to every node a tentative distance value: set it to zero for our initial node and to infinity for all other nodes. 
            Set the initial node as current.
        3. For the current node, consider all of its unvisited neighbors and calculate their tentative distances through the current node. 
            Compare the newly calculated tentative distance to the current assigned value and assign the smaller one. For example, if the 
            current node A is marked with a distance of 6, and the edge connecting it with a neighbor B has length 2, then the distance to B 
            through A will be 6 + 2 = 8. If B was previously marked with a distance greater than 8 then change it to 8. Otherwise, 
            keep the current value.
        4. When we are done considering all of the unvisited neighbors of the current node, mark the current node as visited and remove it 
            from the unvisited set. A visited node will never be checked again.
        5. If the destination node has been marked visited (when planning a route between two specific nodes) or if the smallest tentative 
            distance among the nodes in the unvisited set is infinity (when planning a complete traversal; occurs when there is no connection 
            between the initial node and remaining unvisited nodes), then stop. The algorithm has finished.
        6. Otherwise, select the unvisited node that is marked with the smallest tentative distance, set it as the new "current node", 
            and go back to step 3.
      
     
     */
	private List<WorldTile> FindPath(Vector3 start, Vector3 goal)
	{
		List<WorldTile> total_path = new List<WorldTile>();
		GameObject[,] nodes = gameManager.nodes;
		Vector3Int startCell = grid.WorldToCell(start);
		Vector3Int goalCell = grid.WorldToCell(goal);

		WorldTile startTile = null;
		WorldTile goalTile = null;

		for (int x = 0; x < nodes.GetLength(0) - 1; x++)
		{
			for (int y = 0; y < nodes.GetLength(1) - 1; y++)
			{
				if (nodes[x, y].GetComponent<WorldTile>().gridX == startCell.x && nodes[x, y].GetComponent<WorldTile>().gridY == startCell.y)
				{
					startTile = nodes[x, y].GetComponent<WorldTile>();
				}
				if (nodes[x, y].GetComponent<WorldTile>().gridX == goalCell.x && nodes[x, y].GetComponent<WorldTile>().gridY == goalCell.y)
				{
					goalTile = nodes[x, y].GetComponent<WorldTile>();
				}

			}
		}

		WorldTile current;
		current = startTile;
		int index = 0;
		while (current != goalTile)
		{
			index++;
			if (index > 800) { break; }
			WorldTile currentNextTile = current;
			List<KeyValuePair<WorldTile, float>> tileDists = new List<KeyValuePair<WorldTile, float>>();

			foreach (WorldTile neighbor in current.myNeighbours)
			{
				tileDists.Add(new KeyValuePair<WorldTile, float>(neighbor, Vector2.Distance(neighbor.transform.position, goalTile.transform.position)));
				if (neighbor == goalTile)
				{
					if (neighbor.walkable)
					{

						total_path.Add(neighbor);
						return total_path;
					}
					else
					{
						return total_path;
					}
				}
			}

			tileDists.Sort((x, y) => x.Value.CompareTo(y.Value));
			foreach (KeyValuePair<WorldTile, float> tile in tileDists)
			{
				if (tile.Key.walkable) // can we move there?
				{
					currentNextTile = tile.Key;
					break; // hoorah we found the closest walkable tile
				}
			}

			current = currentNextTile;
			total_path.Add(currentNextTile);
			if (total_path.Contains(goalTile)) break;
		}
		print(index);
		return total_path;


	}


	private void OnDrawGizmos()
	{
		Gizmos.color = Color.blue;
		try
		{
			Gizmos.DrawLine(
							transform.position,
							grid.GetCellCenterWorld(new Vector3Int(path[0].gridX, path[0].gridY, 0))
						   );
			for (int i = 1; i < path.Count; i++)
			{
				Gizmos.DrawLine(
								grid.GetCellCenterWorld(new Vector3Int(path[i - 1].gridX, path[i - 1].gridY, 0)),
								grid.GetCellCenterWorld(new Vector3Int(path[i].gridX, path[i].gridY, 0))
							   );
			}
			Gizmos.DrawWireSphere(grid.GetCellCenterWorld(new Vector3Int(path[path.Count - 1].gridX, path[path.Count - 1].gridY, 0)), .5f);

		}
		catch { }
	}

	public void SetTar(Vector2 moveTar)
	{
		// here is where we would check if we could move there: 
		moveCell = grid.WorldToCell(moveTar);

		moveTar = grid.GetCellCenterWorld(moveCell);
		path = FindPath(transform.position, moveTar);

		if (path.Count == 0)
		{
			anim.SetFloat("X", moveTar.x - gameObject.transform.position.x);
			anim.SetFloat("Y", moveTar.y - gameObject.transform.position.y);
		}
		else
		{
			destination = path[path.Count - 1].worldPos;
		}

	}

}
