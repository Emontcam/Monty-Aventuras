using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class cambiarScenas : MonoBehaviour
{

    private string escapar = "escapar";
    private string saltar = "saltar";

    private void OnTriggerEnter2D(Collider2D collision)
    {
        // Verificamos si el personaje ha colisionado con la puerta
        if (collision.gameObject.tag == "nivelEscapar")
        {
            EscaparNivel();

        }else if (collision.gameObject.tag == "nivelSalto")
        {
           SaltarNivel();
        }

    }
    private void EscaparNivel()
    {
        SceneManager.LoadScene(escapar);
    }

    private void SaltarNivel()
    {
        SceneManager.LoadScene(saltar);
    }


}
