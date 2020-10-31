using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyCliff : Enemy
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    protected override void FixedUpdate()
    {
        MoveDown();
        
        float xMove = 0.0f;
        if (moves)
        {
            xMove = Mathf.Sin(Time.time) / 2.0f;
        }
        transform.Translate(Vector3.right * xMove * speed * Time.deltaTime, Space.World);

        CheckEdges();

    }
}
