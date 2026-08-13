using UnityEngine;
using UnityEngine.EventSystems;

public class FullscreenWarning : MonoBehaviour, IPointerClickHandler
{
    [SerializeField] private GameObject canvasToDestroy;

    private void Start()
    {
        CheckFullscreen();
    }

    private void CheckFullscreen()
    {
        if (Screen.fullScreen)
        {
            Destroy(canvasToDestroy);
        }
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        Destroy(canvasToDestroy);
    }
}