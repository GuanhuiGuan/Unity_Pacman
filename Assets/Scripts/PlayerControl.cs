using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerControl : MonoBehaviour {
    // rigidbody of the player
    private Rigidbody rb;
    // intensity of the force applied
    public float Init_Intensity = 10;
    private float intensity;
    // timer after having capsule
    private float timer = 0;
    private bool invincible = false;
    private Renderer rend;
    public Light playerGlow;
    // game point
    private int point = 0, count = 0;
    private float runTime = 0.0f;
    private int allFood;

    // UI
    public Text countText;
    public Text endGameText;
    private bool ended = false, defeated = false;

	// Use this for initialization
	void Start () {
        // get the component of current gameobject
        intensity = Init_Intensity;
        rb = GetComponent<Rigidbody>();
        rend = GetComponent<Renderer>();

        // UI init
        UpdatePoint(0);
        allFood = GameObject.FindGameObjectsWithTag("Food").Length;
        endGameText.text = "";

	}
	
	// Update is called once per frame
	void Update () {
        // check if reload is called
        Reload();

        if (!ended)
        {
            float movHor = Input.GetAxis("Horizontal");
            float movVer = Input.GetAxis("Vertical");

            // check if taken capsule and still valid
            CheckInvincibility();

            // update force
            Vector3 force = new Vector3(movHor, 0.0f, movVer);
            rb.AddForce(intensity * force);

            // update UI
            UpdatePoint(0);
            UpdateEndGame();
        }
	}




    // check if invincible
    private void CheckInvincibility()
    {
        if (timer <= 0)
        {
            invincible = false;
            Debug.Log("Capsule expired!");
            timer = 0;
            intensity = Init_Intensity;
            playerGlow.gameObject.SetActive(false);
        }
        else
        {
            // invincible = true;
            timer -= Time.deltaTime;
        }
    }


    // when collide with trigger objects
    private void OnTriggerEnter(Collider other)
    {
        // only detect when game is not ended
        if (ended) return;

        // capsule: double speed for 10s; add 10 points
        if(other.gameObject.CompareTag("Capsule"))
        {
            Debug.Log("Capsule taken!");
            other.gameObject.SetActive(false);
            timer = 10.0f;
            intensity *= 2;
            invincible = true;
            playerGlow.gameObject.SetActive(true);

            UpdatePoint(10);
        }

        // food: add 5 points
        else if(other.gameObject.CompareTag("Food"))
        {
            Debug.Log("Food taken!");
            other.gameObject.SetActive(false);
            count++;

            UpdatePoint(5);
        }

        // ghost: eat or lost
        else if(other.gameObject.CompareTag("Ghost"))
        {
            Debug.Log("Meet Ghost!!!");

            if(invincible)
            {
                Debug.Log("Ghost defeated!");
                other.gameObject.SetActive(false);

                UpdatePoint(100);
            }

            else
            {
                Debug.Log("Defeated!");
                UpdatePoint(-1000);
                defeated = true;
            }
            
        }
    }


    // update point and UI
    private void UpdatePoint(int delta)
    {
        // -1 for every elapsed second
        runTime += Time.deltaTime;
        if(runTime >= 1.0f)
        {
            point -= 1;
            runTime -= (int)runTime;
        }

        // other changes
        point += delta;

        countText.text = "Score: " + point.ToString();
    }

    private void UpdateEndGame()
    {
        // eat all food dots
        if(count == allFood)
        {
            ended = true;
            Debug.Log("You won!");
            endGameText.text = "You Won!\nYour score is " + point.ToString() + "\nPress 'Esc' to restart";
        }

        // eaten by ghost
        if(defeated)
        {
            ended = true;
            rend.enabled = false;
            // gameObject.SetActive(false);

            Debug.Log("You lost!");
            endGameText.text = "You Lost!\nYour score is " + point.ToString() + "\nPress 'Esc' to restart";

        }
    }



    // reloading the game
    private void Reload()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        }
    }
}
