using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[ExecuteInEditMode]
public class PlayerLine : MonoBehaviour
{
    [SerializeField]
    Transform[] tail = null;


    LineRenderer lr;
    // Start is called before the first frame update
    void OnEnable()
    {
        lr = GetComponent<LineRenderer>();
    }

    // Update is called once per frame
    void Update(){
        Vector3[] tailPos = new Vector3[tail.Length+1];
        tailPos[0] = transform.position;
        for (int i = 0; i < tail.Length; i++){
            tailPos[i+1] = tail[i].position;
        }

        lr.positionCount = tailPos.Length;
        lr.SetPositions(tailPos);

        //Animate();
    }


    int uvAnimationTileX = 2;
    int uvAnimationTileY = 4;

    float framesPerSecond = 30.0f;

    void Animate()
    {
        // Calculate index
        int index = (int)(Time.time * framesPerSecond);
        // repeat when exhausting all frames
        index = index % (uvAnimationTileX * uvAnimationTileY);

        // Size of every tile
        var size = new Vector2(1.0f / uvAnimationTileX, 1.0f / uvAnimationTileY);

        // split into horizontal and vertical index
        var uIndex = index % uvAnimationTileX;
        var vIndex = index / uvAnimationTileX;

        // build offset
        // v coordinate is the bottom of the image in opengl so we need to invert.
        var offset = new Vector2(uIndex * size.x, 1.0f - size.y - vIndex * size.y);

       lr.material.SetTextureOffset("_MainTex", offset);
       lr.material.SetTextureScale("_MainTex", size);
    }
}
