using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Quit : MonoBehaviour {
    public void Exit()
    {
        Debug.Log("Application is quitting...");
        Application.Quit();
    }
}
