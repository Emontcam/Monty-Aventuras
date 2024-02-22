using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.SceneManagement;


public class controlUI : MonoBehaviour
{
    public GameObject opciones;//referencia al panel de opciones del juego

    private string menu = "elegir nivel";
    // Update is called once per frame
    void Update()
    {
        
    }

    // Método para pausar el juego
    public void PauseGame()
    {
        Time.timeScale = 0f; // Se establece el timeScale a 0 para detener el tiempo en el juego

        opciones.SetActive(true);
    }

    // Método para reanudar el juego
    public void ResumeGame()
    {
        Time.timeScale = 1f; // Se restablece el timeScale a 1 para reanudar el tiempo en el juego

        opciones.SetActive(false);
    
    }
    public void Salir()
    {
        Application.Quit();
        Time.timeScale = 0f;
        
    }

    public void VolverAlMenu()
    {
        Time.timeScale = 1f; // Se restablece el timeScale a 1 para reanudar el tiempo en el juego
        SceneManager.LoadScene(menu);
        opciones.SetActive(false);
    }
}
