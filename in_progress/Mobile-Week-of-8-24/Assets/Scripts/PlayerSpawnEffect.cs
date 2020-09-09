using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSpawnEffect : MonoBehaviour
{

    [SerializeField]
    LayerMask hitLayers;

    private void Start()
    {
        
    }

    private void OnCollisionEnter(Collision col)
    {
        if (((1 << col.gameObject.layer) & hitLayers) != 0)
        {
            Enemy enemy = col.transform.GetComponent<Enemy>();
            if (enemy != null)
            {
                enemy.hurt(float.MaxValue, col.contacts[0].point, false);
            }
        }
    }
}
