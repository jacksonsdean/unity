using UnityEngine;
using UnityEditor;
using UnityEngine.UI;
using System.Collections;
using System.IO;

public class ModelCamera : MonoBehaviour
{

    public Camera Camera3D;
    public int ImageSize;


    private Sprite Result;

    private RenderTexture mRenderTexture;

    [SerializeField]
    Transform target;

#if UNITY_EDITOR
    public void SetTarget()
    {
        if (!Debug.isDebugBuild) return;

        mRenderTexture = new RenderTexture(ImageSize, ImageSize, 32);
        Camera3D.targetTexture = mRenderTexture;
        transform.SetParent(target, false);
        Camera3D.Render();
        transform.SetParent(null, false);
    }

    private void OnPostRender()
    {
        //DoPostRender();
    }

    IEnumerator UpdateImport(string path)
    {
        if (!Debug.isDebugBuild) yield return null;

        //yield return new WaitForSeconds(2.0f);
        AssetDatabase.Refresh();
        AssetDatabase.ImportAsset(path);
        TextureImporter importer = (TextureImporter)AssetImporter.GetAtPath(path);
        if (importer)
        {
            Debug.Log("Done importing new photo");
            importer.textureType = TextureImporterType.Sprite;
            importer.alphaIsTransparency = true;
        }
        else
        {
            Debug.LogError("Error: no importer");
        }
        AssetDatabase.WriteImportSettingsIfDirty(path);
        yield return null;
    }

    private void DoPostRender()
    {
        if (!Debug.isDebugBuild) return;
        if (mRenderTexture != null)
        {
            RenderTexture.active = mRenderTexture;
            var virtualPhoto = new Texture2D(ImageSize, ImageSize, TextureFormat.RGBA32, false);
            virtualPhoto.ReadPixels(new Rect(0, 0, ImageSize, ImageSize), 0, 0);
            virtualPhoto.Apply();

            RenderTexture.active = null;
            Camera3D.targetTexture = null;

            Result = Sprite.Create(virtualPhoto, new Rect(Vector2.zero, new Vector2(ImageSize, ImageSize)), Vector2.zero);
            Result.texture.alphaIsTransparency = true;


            //string filename = target.GetComponentInChildren<MeshRenderer>().name + ".png";
            string filename = target.GetChild(0).GetChild(0).name + ".png";
            string path = Path.Combine(Application.dataPath, "Resources", "Store", filename);

            byte[] bytes;
            bytes = virtualPhoto.EncodeToPNG();

            if (bytes.Length > 0)
            {
                System.IO.File.WriteAllBytes(path, bytes);
                StartCoroutine(UpdateImport(Path.Combine("Assets", "Resources", "Store", filename)));
                StartCoroutine(UpdateImport(Path.Combine("Assets", "Resources", "Store", filename)));


            }
            else
            {
                Debug.LogError("Error: bytes empty");

            }

            mRenderTexture = null;
        }
    }
    public void TakePhoto() {
        Debug.Log("Taking Photo");
        SetTarget();
        DoPostRender();
    }
#endif
}