using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBoat : MonoBehaviour
{
    GameObject current = null;
    // Start is called before the first frame update
    void Start()
    {
        SpawnBoat();
    }

    void SpawnBoat() {
        current = Instantiate(PlayerPrefabManager.current, transform.position, transform.rotation, this.transform);
        
    }

    public void Change() {
        Destroy(current);
        SpawnBoat();

    }
}
