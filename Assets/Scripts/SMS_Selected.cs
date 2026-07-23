using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SMS_Selected : MonoBehaviour
{
    private SelectionManager selectionManager;
    public Image bubbleBackground;

    private Color originalColor;
    public Color selectedColor;

    private void Awake()
    {
        selectionManager = FindObjectOfType<SelectionManager>();
        originalColor = bubbleBackground.color;
    }

    public void onClick() {
        selectionManager.handleSelection(this);
    }

    public void setSelected(bool selected) {
        if (selected) {
            bubbleBackground.color = selectedColor;
        } else {
            bubbleBackground.color = originalColor;
        }
    }
}
