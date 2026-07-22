using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GalleryManager : MonoBehaviour
{
    List<GalleryImage> images = new List<GalleryImage>();
    public void handleSelection(GalleryImage image) {
        if (images.Contains(image))
        {
            images.Remove(image);
            image.setSelected(false);
        }
        else {
            images.Add(image);
            image.setSelected(true);
        }
    }

    public void deleteSelected() {
        foreach (GalleryImage image in images) {
            Destroy(image.gameObject);
        }
        images.Clear();
    }

    public void clearSelection() {
        foreach (GalleryImage image in images) {
            image.setSelected(false);
        }
        images.Clear();
    }
}
