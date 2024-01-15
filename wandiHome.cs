using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wandiHome : MonoBehaviour
{
    public string carregarSistema;

    public int startSistemaNumber;
    // Start is called before the first frame update.
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyUp(KeyCode.Space)){
            Application.LoadLevel(carregarSistema);
        }
    }

    public void iniciarSistema(){
        Application.LoadLevel("Wandi Studio Scene");
    }

    public void loadSistema(string loadingSistema){
        Application.LoadLevel(loadingSistema);
    }

    public void loadNumberSistema(){
        Application.LoadLevel(startSistemaNumber);
    }
}
