using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickupCoin : Pickup
{
    protected override void Collect(){
        GameManager.Instance.addScore(1);
        base.Collect(); 
    }
}
