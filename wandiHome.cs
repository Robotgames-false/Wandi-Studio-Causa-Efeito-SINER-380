using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wandiHome : MonoBehaviour
{
    public string nomeDaCena;
    // Start is called before the first frame update.
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
    
    }

    public void iniciarSistema(){
        Application.LoadLevel(nomeDaCena);
    }
}
