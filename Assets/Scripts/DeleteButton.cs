using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeleteButton : MonoBehaviour
{
    public GameObject galleryManagerRef;

    public void onClick() {
        if (galleryManagerRef != null) {
            GalleryManager galleryManager = galleryManagerRef.GetComponent<GalleryManager>();
            if (galleryManager != null) {
                galleryManager.deleteSelected();
            }
        }
    }
}
