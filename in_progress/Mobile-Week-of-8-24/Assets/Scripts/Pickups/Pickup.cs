using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[RequireComponent (typeof(BoxCollider))]
public abstract class Pickup : MonoBehaviour

{
    [SerializeField]
    GameObject collectFX;

    [SerializeField]
    AudioClip[] clips;

    protected virtual void Awake(){
        GetComponent<BoxCollider>().isTrigger = true;
    }

    protected virtual void OnTriggerEnter(Collider other){
        if (other.CompareTag("Player")) {
            Collect();
        }
    }

    protected virtual void Collect() {
        GameObject g = Instantiate(collectFX, transform.position, Quaternion.identity, null);
        g.GetComponent<AudioSource>().PlayOneShot(clips[UnityEngine.Random.Range(0, clips.Length - 1)]);
        Destroy(this.gameObject);
    }
}
