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

    // Sound effects
    private AudioSource audioSource;
    public AudioClip colSound;
    public AudioClip victory;
    public AudioClip failure;
    public AudioClip powerUp;
    public AudioClip powerUpExpired;
    public AudioClip eatFood;
    public AudioClip eatGhost;


    // UI
    public Text countText;
    public Text endGameText;
    private bool ended = false, defeated = false;


    // awake
    private void Awake()
    {
        audioSource = GetComponent<AudioSource>();
    }


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
        
            // check if taken capsule and still valid
            CheckInvincibility();
            
            // update UI
            UpdatePoint(0);
            UpdateEndGame();
        }
	}


    // Physics update
    private void FixedUpdate()
    {
        if(!ended)
        {
            float movHor = Input.GetAxis("Horizontal");
            float movVer = Input.GetAxis("Vertical");

            // update force
            Vector3 force = new Vector3(movHor, 0.0f, movVer);
            rb.AddForce(intensity * force);
        }
    }




    // check if invincible
    private void CheckInvincibility()
    {
        if (timer > 0)
        {
            // invincible = true;
            timer -= Time.deltaTime;

            if(timer <= 0)
            {
                invincible = false;
                Debug.Log("Capsule expired!");
                timer = 0;
                intensity = Init_Intensity;
                playerGlow.gameObject.SetActive(false);
                audioSource.PlayOneShot(powerUpExpired);
            }
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

            
            audioSource.PlayOneShot(powerUp);
            UpdatePoint(10);
        }

        // food: add 5 points
        else if(other.gameObject.CompareTag("Food"))
        {
            Debug.Log("Food taken!");
            other.gameObject.SetActive(false);
            count++;

            audioSource.PlayOneShot(eatFood, 0.6f);
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

                audioSource.PlayOneShot(eatGhost, 0.8f);
                UpdatePoint(100);
            }

            else
            {
                Debug.Log("Defeated!");
                UpdatePoint(-1000);
                defeated = true;
            }
            
        }

        else if(other.gameObject.CompareTag("Wall"))
        {
            // float vol = collision.relativeVelocity.magnitude * baseVol;
            float vol = 1.0f;
            //audioSource.PlayOneShot(colSound, vol);
        }
    }


    // collision detection to get relative speed
    private void OnCollisionEnter(Collision collision)
    {
        float baseVol = 0.3f;
        
        if(!ended)
        {
            if(collision.gameObject.CompareTag("Wall"))
            {
                
                float vol = collision.relativeVelocity.magnitude * baseVol;
                audioSource.PlayOneShot(colSound, vol);
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
            audioSource.PlayOneShot(victory);
            endGameText.text = "You Won!\nYour score is " + point.ToString() + "\nPress 'Esc' to restart";
        }

        // eaten by ghost
        if(defeated)
        {
            ended = true;
            rend.enabled = false;
            // gameObject.SetActive(false);

            Debug.Log("You lost!");
            audioSource.PlayOneShot(failure);
            endGameText.text = "You Lost!\nYour score is " + point.ToString() + "\nPress 'Esc' to restart";

        }
    }



    // reloading the game
    private void Reload()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Debug.Log("Scene Reloaded!");
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        }
    }
}
