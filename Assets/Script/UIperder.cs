using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UIperder : MonoBehaviour
{

    private string menu = "elegir nivel";

    public void RecargarEscena()
    {
        Time.timeScale = 1f; // Se restablece el timeScale a 1 para reanudar el tiempo en el juego
        // Recargamos la escena actual
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);

    }

    public void VolverAlMenu()
    {
        Time.timeScale = 1f; // Se restablece el timeScale a 1 para reanudar el tiempo en el juego
        SceneManager.LoadScene(menu);
    }

}
