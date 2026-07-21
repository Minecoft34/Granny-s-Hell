using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InicioJuego : MonoBehaviour
{
    public CanvasGroup fadePanel;
    public float fadeDuration = 1f;
    public CanvasGroup buttonGroup;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void inicioJuego()
    {
        StartCoroutine(FadeToScene("PrimeraEscena"));
        buttonGroup.interactable = false; // Disable button interaction
    }

    private IEnumerator FadeToScene(string sceneName)
    {
        // Fade out before loading scene
        yield return StartCoroutine(FadeOut());
        
        // Load the scene
        UnityEngine.SceneManagement.SceneManager.LoadScene(sceneName);
    }

    private IEnumerator FadeOut()
    {
        float elapsedTime = 0f;
        
        while (elapsedTime < fadeDuration)
        {
            elapsedTime += Time.deltaTime;
            float progress = Mathf.Clamp01(elapsedTime / fadeDuration);
            fadePanel.alpha = progress;                 
            buttonGroup.alpha = 1f - progress;        

            yield return null;
        }
        
        fadePanel.alpha = 1f;
        buttonGroup.alpha = 0f;
    }

    // Update is called once per frame
    void Update()
    {
    }
}
