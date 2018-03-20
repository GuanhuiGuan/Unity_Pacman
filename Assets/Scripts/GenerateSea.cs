using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateSea : MonoBehaviour {

    // size of one square
    public int size = 200;
    // size of the whole plane
    public int grid_size = 200;
    private int vert_size;

    // get mesh with meshfilter component
    private MeshFilter filter;


	// Use this for initialization
	void Start () {
        // vertex count is 1 greater than grid size
        vert_size = grid_size + 1;

        // get mesh
        filter = GetComponent<MeshFilter>();
        filter.mesh = GenerateMesh();
	}

    // Return a mesh
    Mesh GenerateMesh()
    {
        // 1. Generate vertices, normals, uvs
        var vertices = new List<Vector3>();
        var normals = new List<Vector3>();
        var uvs = new List<Vector2>();

        for(int x = 0; x < vert_size; x++)
        {
            for(int z = 0; z < vert_size; z++)
            {
                // -0.5grid_szie let the whole grid's center be equal to origin
                vertices.Add(new Vector3((x / (float)grid_size - 0.5f) * size, 0, (z / (float)grid_size - 0.5f) * size));
                // equal to (0, 1, 0)
                normals.Add(Vector3.up);
                // uv is usually projected to the first quadrant
                uvs.Add(new Vector2(x / (float)grid_size, z / (float)grid_size));
            }
        }

        Debug.Log("First step done");

        // 2. Generate triangles list(every three indices of vertices form a triangle)
        var triangles = new List<int>();

        // skip the top row
        for(int i = 0; i < vert_size * vert_size - vert_size; i++)
        {
            // skip the rightmost column
            if((i + 1) % vert_size == 0)
            {
                continue;
            }

            // build two triangles
            /*
             * i+vert_size----i+vert_size+1
             * |\              |
             * |   \           |
             * |       \       |
             * |            \  |
             * i--------------i+1
             * 
             * 
             */
            triangles.AddRange(new List<int>()
            {
                i+vert_size+1, i+vert_size, i,
                i, i+1, i+vert_size+1
                
            });
        }

        Debug.Log("Second step done");

        // 3. Pass variables to mesh
        Mesh mesh = new Mesh();
        


        mesh.SetVertices(vertices);
        mesh.SetNormals(normals);
        // channel 0
        mesh.SetUVs(0, uvs);
        // submesh 0
        mesh.SetTriangles(triangles, 0);

        Debug.Log("Third step done");
        return mesh;
    }


	
	// Update is called once per frame
	void Update () {
		
	}
}
