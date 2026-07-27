using UnityEngine;

public class ClickManager : MonoBehaviour
{
    public static ClickManager Instance;
    public AudioClip clickSound;
    private AudioSource audioSource;

    void Awake() {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);
    }
    void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            audioSource.pitch = Random.Range(0.9f, 1.1f); // Variación del 5%
            audioSource.PlayOneShot(clickSound);
        }
    }
}