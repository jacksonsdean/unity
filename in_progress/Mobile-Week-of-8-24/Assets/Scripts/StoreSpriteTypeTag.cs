﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoreSpriteTypeTag : MonoBehaviour
{
    [SerializeField]
    string type = null;
    public string Get() { return type; }
}
