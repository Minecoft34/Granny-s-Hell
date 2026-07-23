using UnityEngine;

public class BlockButton : MonoBehaviour
{
    public BlockManager blockManager;

    public void OnClick()
    {
        blockManager.blockContact();
    }
}