using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Virus : MonoBehaviour
{
    public void onClick() {
        //Aqui la logica de destruir el gameobject del virus y restar vida al jugador
        Destroy(gameObject);
    }
}
