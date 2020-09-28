using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public struct PhaseInfo {
    public float moveChance;
    public int enemiesThisPhase;
    public float enemySpeed;
    public float spawnRate;
    public float enemyDifficulty;

}

public class PhaseManager : MonoBehaviour
{
    public static PhaseInfo info;

    public int currentPhase;

    public int nEnemiesLeftThisPhase;


    [SerializeField]
    AnimationCurve spawnRateCurve;
    [SerializeField]
    AnimationCurve enemySpeedCuve;
    [SerializeField]
    AnimationCurve enemyMoveChanceCurve;
    [SerializeField]
    AnimationCurve enemiesPerPhaseCurve;
    
    [SerializeField]
    AnimationCurve enemiesDifficultyCurve;

    private EnemySpawner[] spawners;

    // Start is called before the first frame update
    public void Start() {
        spawners = GameObject.FindObjectsOfType<EnemySpawner>();
    }
    public void Restart()
    {
        currentPhase = 0;
        NextPhase();
        
    }

    // Update is called once per frame
    void Update()
    {
        NextPhase();
    }

    public void EnemyDefeated() {
        nEnemiesLeftThisPhase--;
        if (nEnemiesLeftThisPhase <= 0) {
            NextPhase();
        }
    }

    private void NextPhase(){
        //currentPhase++;

         float meters = GameManager.meters;

        PhaseManager.info = new PhaseInfo {
            enemySpeed          =    enemySpeedCuve.Evaluate(meters),
            spawnRate           =    spawnRateCurve.Evaluate(meters),
            moveChance          =    enemyMoveChanceCurve.Evaluate(meters),
            enemiesThisPhase    =    (int)enemiesPerPhaseCurve.Evaluate(meters),
            enemyDifficulty    =     enemiesDifficultyCurve.Evaluate(meters),
        };

        nEnemiesLeftThisPhase = info.enemiesThisPhase;
        //foreach (EnemySpawner spawner in spawners){
        //    spawner.SetRate(info.spawnRate);
        //}

        GameManager.UpdateBaseGameSpeed(info.enemySpeed, info.spawnRate);

    }
}
