using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBoat : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Instantiate(PlayerPrefabManager.current, transform.position, transform.rotation, this.transform);
    }

   
}
