using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;




public class EnemySpawner : MonoBehaviour
{

    [Serializable]
    struct TierArray
    {
        [SerializeField]
        public GameObject[] arr;

        public int Count() { return arr.Length; }
    };


    [SerializeField]
    float rate;


    [SerializeField]
    TierArray[] enemyPrefabs;

    [SerializeField]
    int minHardDifficulty = 2;

    float invRate;

    float lastTime;

    [SerializeField]
    private float aboveScreenOffset;



    // Start is called before the first frame update
    void Start(){
        invRate = 1 / rate;
        lastTime = Time.time;
    }

    // Update is called once per frame
    void Update()
    {
        if (!GameManager.Instance.playing) return;
        if (Time.time > lastTime + invRate) {
            spawnOne();
        }

    }

    private void spawnOne(){
        lastTime = Time.time;
        float x = UnityEngine.Random.Range(GameManager.screenEdges.minX+3.0f, GameManager.screenEdges.maxX-3.0f);
        float y = GameManager.screenEdges.maxY + aboveScreenOffset;
        float z = transform.position.z;

        Vector3 position = new Vector3(x, y, z);


        GameObject prefab = null;
        while (prefab == null) {
            int difficulty = 0;
            int index = 0;
            if (Random.Range(0, 1.0f) < PhaseManager.info.enemyDifficulty){
                difficulty = Random.Range(minHardDifficulty, enemyPrefabs.Length);
            }
            else {
                difficulty = Random.Range(0,minHardDifficulty);
            } 

            index = Random.Range(0, enemyPrefabs[difficulty].Count());
            prefab = enemyPrefabs[difficulty].arr[index];

        }
        GameObject go = Instantiate(prefab, position, Quaternion.identity, transform);
        
        
        go.SetActive(true);
    }

    internal void SetRate(float amt){
        rate = amt;
        invRate = 1 / rate;
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.cyan;
        Ray ray = Camera.main.ViewportPointToRay(new Vector3(.5f, 1, 0));
        Gizmos.DrawRay(ray);
    }
}
