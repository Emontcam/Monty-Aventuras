using System.Reflection;
using UnityEngine;
using UnityEngine.UI;

public class vidas1 : MonoBehaviour
{
    public Sprite tresVidas;
    public Sprite dosVidas;
    public Sprite unaVida;
    public Sprite ceroVidas;

    public Text textoPuntos;

    public Image vidasImagen; //Referencia a la imagen de vidas del canvaDatos

    private Sprite[] lista;


    void Start()
    {
        lista = new Sprite[] { ceroVidas, unaVida, dosVidas, tresVidas };
    }



    void OnCollisionEnter2D(Collision2D collision)
    {
       
        if (collision.gameObject.tag == "mortal")
        {   
         
            vidasImagen.sprite = lista[0];
            
        }

    }

}

