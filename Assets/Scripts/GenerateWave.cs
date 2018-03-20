using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class GenerateWave : MonoBehaviour {

    // wave input params
    public float height = 2.0f;
    public float freq = 1.7f;
    public float wx = 0.09f;
    public float wz = 0.13f;

    private MeshFilter filter;
    private float cur_time;

	// Use this for initialization
	void Start () {
        filter = GetComponent<MeshFilter>();
        cur_time = Time.time;
        GenerateWaves();
	}
	
	// Update is called once per frame
	void Update () {
        GenerateWaves();
        cur_time = Time.time;
    }

    // Generate waves with sine function
    void GenerateWaves()
    {
        Vector3[] vertices = filter.mesh.vertices;
        for(int i = 0;i < vertices.Length; i++)
        {
            vertices[i].y = GetWaveHeight(vertices[i].x, vertices[i].z);
        }
        filter.mesh.vertices = vertices;
    }

    // Get the value of y = sin(wx * x + wz * z + freq * time)
    float GetWaveHeight(float x, float z)
    {
        float rh = UnityEngine.Random.Range(-1.0f, 1.0f);
        float rx = UnityEngine.Random.Range(-1.0f, 1.0f);
        float rz = UnityEngine.Random.Range(-1.0f, 1.0f);
        float rf = UnityEngine.Random.Range(-1.0f, 1.0f);
        return (height * Mathf.Sin(wx * x + wz * z + freq * cur_time));
    }
}
