using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EscapeButton : MonoBehaviour
{
    public RectTransform Content_Parent;
    public EscapeManager escapeManager;

    public void onClick()
    {
        escapeManager.manageClicks();
    }

    public void Move() {
        //Dejamos esto vacio de momento
        Debug.Log("El botón se ha movido");

        float width = Content_Parent.rect.width;
        float height = Content_Parent.rect.height;

        float buttonWidth = GetComponent<RectTransform>().rect.width;
        float buttonHeight = GetComponent<RectTransform>().rect.height;

        float x = Random.Range(-width / 2 + buttonWidth / 2, width / 2 - buttonWidth / 2);
        float y = Random.Range(-height / 2 + buttonHeight / 2, height / 2 - buttonHeight / 2);

        transform.localPosition = new Vector3(x, y, 0);
    }

}
