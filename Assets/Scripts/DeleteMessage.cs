using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeleteMessage : MonoBehaviour
{
    public GameObject selectionManagerRef;

    public void onClick() {
        if (selectionManagerRef != null) {
            SelectionManager selectionManager = selectionManagerRef.GetComponent<SelectionManager>();
            if (selectionManager != null) {
                selectionManager.deleteSelected();
            }
        }
    }
}
