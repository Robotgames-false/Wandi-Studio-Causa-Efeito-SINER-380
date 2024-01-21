using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wandiHome : MonoBehaviour
{
    public string carregarSistema;
    public int startSistemaNumber;
    public float esperarPraEntrar;
    // Start is called before the first frame update..
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyUp(KeyCode.Space)){
            StartCoroutine(processEntrySystem());
        }
    }

    /*
    public void iniciarSistema(){
        Application.LoadLevel("Wandi Studio Scene");
    }

    public void loadSistema(string loadingSistema){
        Application.LoadLevel(loadingSistema);
    }

    public void loadNumberSistema(){
        Application.LoadLevel(startSistemaNumber);
    }
    */

    public void encerrarSoftware(){
        Application.Quit();
    }

    IEnumerator processEntrySystem(){
        yield return new WaitForSeconds(esperarPraEntrar);
        Application.LoadLevel(carregarSistema);

    }
}
