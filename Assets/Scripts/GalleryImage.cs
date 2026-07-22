using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GalleryImage : MonoBehaviour
{
    public GalleryManager galleryManager;
    public GameObject selectionOverlay;

    public void onClick() {
        galleryManager.handleSelection(this);
    }

    public void setSelected(bool selected) {
        if (selected) {
            selectionOverlay.SetActive(true);
        } else {
            selectionOverlay.SetActive(false);
        }
    }
}
