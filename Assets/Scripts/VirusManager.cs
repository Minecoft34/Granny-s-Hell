using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VirusManager : MonoBehaviour
{
    public GameObject virusPrefab; // Prefab del virus
    public RectTransform Content_Parent; // Área donde se pueden generar los virus
    private int virusesToGenerate; // Número de virus a generar (entre 5 y 10)
    private int virusesAlive = 0; // Contador de virus vivos
    private int virusesGenerated = 0;

    private MinigameManager minigameManager;

    void Start()
    {
        minigameManager = FindObjectOfType<MinigameManager>();
        virusesToGenerate = Random.Range(5, 10); // Generar un número aleatorio de virus entre 5 y 10
        StartCoroutine(GenerateViruses());
    }

    IEnumerator GenerateViruses()
    {
        for (int i = 0; i < virusesToGenerate; i++)
        {
            float waitTime = Random.Range(0f, 6f);
            yield return new WaitForSeconds(waitTime);

            int chosenBorder = Random.Range(0, 4); // Elegir un borde aleatorio (0: izquierda, 1: derecha, 2: arriba, 3: abajo)
            float width = Content_Parent.rect.width;
            float height = Content_Parent.rect.height;

            RectTransform virusRect = virusPrefab.GetComponent<RectTransform>();

            float virusWidth = virusRect.rect.width;
            float virusHeight = virusRect.rect.height;

            float x = 0, y = 0;

            switch (chosenBorder)
            {
                case 0: // Izquierda
                    x = -width / 2 - virusWidth / 2 - 15;
                    y = Random.Range(-height / 2 + virusHeight / 2, height / 2 - virusHeight / 2);
                    break;
                case 1: // Derecha
                    x = width / 2 + virusWidth / 2 + 15;
                    y = Random.Range(-height / 2 + virusHeight / 2, height / 2 - virusHeight / 2);
                    break;
                case 2: // Arriba
                    x = Random.Range(-width / 2 + virusWidth / 2, width / 2 - virusWidth / 2);
                    y = height / 2 + virusHeight / 2 + 15;
                    break;
                case 3: // Abajo
                    x = Random.Range(-width / 2 + virusWidth / 2, width / 2 - virusWidth / 2);
                    y = -height / 2 - virusHeight / 2 - 15;
                    break;
            }

            GameObject virus = Instantiate(virusPrefab, Content_Parent);

            virus.GetComponent<RectTransform>().localPosition = new Vector3(x, y, 0);

            virus.GetComponent<Virus>().startGame(Content_Parent);
            virusesGenerated++;
            virusesAlive++;
        }
    }

    public void virusDied() {
        virusesAlive--;
        if (virusesAlive == 0 && virusesGenerated == virusesToGenerate) {
            minigameManager.siguienteEscena();
        }
    }
}
