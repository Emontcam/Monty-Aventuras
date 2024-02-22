using System;
using UnityEngine;
using UnityEngine.UI;

public class Movimiento : MonoBehaviour
{
    public float moveSpeed = 10f;
    public float fuerzaSalto = 15f;
    public Text textoPuntos;

    private int puntos = 0;
    private bool enSuelo = true;
    private bool enPlataforma = false;
    private Vector2 coordenadas;

    private Rigidbody2D rb;
    
    Animator anim;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>(); // Obtener el componente Rigidbody2D al inicio
        anim = GetComponentInChildren<Animator>();
    }

    void Update()
        
    {
      coordenadas = transform.position;
        // Movimiento horizontal
        bool saltando = ComprobarMovHorizontal();

        // Salto
        bool andando = ComprobarSalto();
        //actualizamos los puntos
        puntos = int.Parse(textoPuntos.text);
        if (enPlataforma)
        {
            
        }
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "floor" || collision.gameObject.tag == "Plataforma")
        {
            enSuelo = true; // Marcar que el jugador está en el suelo cuando colisiona con el suelo
            anim.SetFloat("movimientos", 0f);
        }

        if (collision.gameObject.tag == "Money")
        {
           
            puntos++;
            textoPuntos.text = puntos.ToString();
            Destroy(collision.gameObject);
        }

        if (collision.gameObject.tag == "Plataforma")
        {
            enPlataforma = true;
            coordenadas.x = collision.transform.position.x;
            transform.position = coordenadas;
        }
    }

    bool ComprobarMovHorizontal()
    {
        // Movimiento horizontal
        float movHorizontal = Input.GetAxis("Horizontal");

        if ((movHorizontal > 0f || movHorizontal < 0f) )
        {
            //negativo
            if (movHorizontal < 0f)
            {
                rb.velocity = new Vector2(movHorizontal * moveSpeed, rb.velocity.y); // Aplicar movimiento horizontal
                anim.SetFloat("movimientos", 0.5f);

            }//positivo
            else
            {
                rb.velocity = new Vector2(movHorizontal * moveSpeed, rb.velocity.y); // Aplicar movimiento horizontal
                anim.SetFloat("movimientos", 0.25f);

            }
            
            return true;
        }else if (enSuelo)
        {
            anim.SetFloat("movimientos", 0f);
            return false;
        }
        else
        {
            if (movHorizontal < 0f)
            {
                anim.SetFloat("movimientos", 1f);
            }
            else
            {
                anim.SetFloat("movimientos", 0.75f);
            }
            
            return false;
        }
    }

    bool ComprobarSalto()
    {
        // Salto
        if (Input.GetKeyDown(KeyCode.UpArrow) && enSuelo)
        {
            rb.velocity = new Vector2(rb.velocity.x, fuerzaSalto); // Aplicar fuerza de salto vertical
            enSuelo = false;
            anim.SetFloat("movimientos", 0.75f);
            return true;
        }
        else
        {
            return false;
        }

    }

    private void OnCollisionStay(Collision collision)
    {
        if (collision.gameObject.CompareTag("Plataforma"))
        {
            Debug.Log("argdfhhsfhsfgh");
            coordenadas.x = collision.transform.position.x;
            transform.position = coordenadas;
        }
    }
}
