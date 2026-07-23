using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectionManager : MonoBehaviour
{
    List<SMS_Selected> messages = new List<SMS_Selected>();
    public void handleSelection(SMS_Selected message) {
        if (messages.Contains(message))
        {
            messages.Remove(message);
            message.setSelected(false);
        }
        else {
            messages.Add(message);
            message.setSelected(true);
        }
    }

    public void deleteSelected() {
        foreach (SMS_Selected message in messages) {
            Destroy(message.gameObject);
        }
        messages.Clear();
    }

    public void clearSelection() {
        foreach (SMS_Selected message in messages) {
            message.setSelected(false);
        }
        messages.Clear();
    }
}
