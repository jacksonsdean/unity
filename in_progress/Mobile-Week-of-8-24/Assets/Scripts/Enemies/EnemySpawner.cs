using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
public class EnemySpawner : MonoBehaviour
{
    const string PREFAB_FOLDER = "Enemies";
    const string DIFFICULTY_0 = "Easy";
    const string DIFFICULTY_1 = "Medium";
    const string DIFFICULTY_2 = "Hard";

    int nDifficultyLevels = 3;

    [Serializable]
    public struct TierArray
    {
        [SerializeField]
        public GameObject[] prefabs;

        public int Count() { return prefabs.Length; }
    };


    [SerializeField]
    float rate;


    [SerializeField]
    TierArray[] enemyPrefabsOverride;

    public TierArray[] enemyPrefabs;

    [SerializeField]
    bool overrideEnemies = false;

    float invRate;

    float lastTime;

    [SerializeField]
    public float aboveScreenOffset;

    private void Awake()
    {
        if (overrideEnemies)
        {
            enemyPrefabs = enemyPrefabsOverride;
            nDifficultyLevels = enemyPrefabs.Length;
        }
        else {

            enemyPrefabs = new TierArray[nDifficultyLevels];
            enemyPrefabs[0].prefabs = Resources.LoadAll<GameObject>(PREFAB_FOLDER + "/" + DIFFICULTY_0);
            enemyPrefabs[1].prefabs = Resources.LoadAll<GameObject>(PREFAB_FOLDER + "/" + DIFFICULTY_1);
            enemyPrefabs[2].prefabs = Resources.LoadAll<GameObject>(PREFAB_FOLDER + "/" + DIFFICULTY_2);

        }
    }

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

            //if (Random.Range(0, 1.0f) < PhaseManager.info.enemyDifficulty){
            //    difficulty = Random.Range(minHardDifficulty, enemyPrefabs.Length);
            //}
            //else {
            //    difficulty = Random.Range(0,minHardDifficulty);
            //}

            difficulty = Mathf.RoundToInt(Random.Range(0, PhaseManager.info.enemyDifficulty-1));
            difficulty = Mathf.Clamp(difficulty, 0, nDifficultyLevels-1);
            index = Random.Range(0, enemyPrefabs[difficulty].Count());
            
            prefab = enemyPrefabs[difficulty].prefabs[index];

        }
        GameObject go = Instantiate(prefab, position, Quaternion.identity, transform);
        
        
        go.SetActive(true);
    }

    //internal void SetRate(float amt){
    //    rate = amt;
    //    invRate = 1 / rate;
    //}

    private void UpdateRate() {
        rate = GameManager.spawnRate;
        invRate = 1 / rate;
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.cyan;
        Ray ray = Camera.main.ViewportPointToRay(new Vector3(.5f, 1, 0));
        Gizmos.DrawRay(ray);
    }

    private void OnEnable()
    {
        GameManager.OnUpdateGameSpeed += UpdateRate;
    }
    private void OnDisable()
    {
        GameManager.OnUpdateGameSpeed -= UpdateRate;
        
    }
}
