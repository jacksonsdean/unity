using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    Rigidbody rb;

    [SerializeField]
    float maxVelocity = 0.0f;

    [SerializeField]
    LayerMask hitLayers = 0;


    [SerializeField]
    float damage = 10;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.velocity = Vector3.up * maxVelocity;

    }



    private void OnCollisionEnter(Collision col)
    {
        if (((1 << col.gameObject.layer) & hitLayers) != 0)
        {
            Enemy enemy = col.transform.GetComponent<Enemy>();
            if (enemy != null)
            {
                enemy.hurt(damage, col.contacts[0].point);
                Destroy(this.gameObject);
            }
        }
    }
}
