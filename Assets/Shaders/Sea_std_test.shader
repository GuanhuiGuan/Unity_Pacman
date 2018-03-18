Shader "Custom/Sea_std_test" {
	Properties {
		_Color ("Color", Color) = (1,1,1,1)
		_MainTex ("Albedo (RGB)", 2D) = "white" {}
		_Glossiness("Smoothness", Range(0,1)) = 0.5
		_Metallic("Metallic", Range(0,1)) = 0.0


		// wave
		_WaveHeight("Wave Height", Range(-100,100)) = 5.0
		_WaveFrequency("Wave Freq", Range(-100,100)) = 2.5
	}
	SubShader {
		Tags { "RenderType"="Opaque" }
		LOD 200

		CGPROGRAM
		// Physically based Standard lighting model, and enable shadows on all light types
		#pragma surface surf Standard fullforwardshadows

		// Use shader model 3.0 target, to get nicer looking lighting
		#pragma target 3.0

		#pragma vertex vert
		#pragma multi_compile_fog

		sampler2D _MainTex;
		float _WaveHeight, _WaveFrequency;

		struct Input {
			float2 uv_MainTex;
		};

		// appdata
		struct appdata
		{
			float4 vertex : POSITION;
			float2 uv: TEXCOORD0;
		};

		// vertex
		struct v2f {
			float4 vertex : SV_POSITION;
			float2 uv : TEXCOORD0;
			UNITY_FOG_COORDS(1)
		};
		//rand
		float rand(float ori)
		{
			return frac(sin(dot(ori, 12.9898)) * 43758.5453);
		}

		// vertex update
		v2f vert (appdata v)
		{
			v2f o;

			// make waves
			float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
			// h ~= height * sine(wx * x + wz * z + freq * time)
			r = rand(_Time.w);
			v.vertex.y = _WaveHeight * r * sin(
				r * worldPos.x + 
				worldPos.z + 
				_WaveFrequency * (_Time.w + 0.1 * r));

			// transform to output
			o.vertex = UnityObjectToClipPos(v.vertex);
			o.uv = TRANSFORM_TEX(v.uv, _MainTex);
			UNITY_TRANSFER_FOG(o, o.vertex);
			return o;

		}



		half _Glossiness;
		half _Metallic;
		fixed4 _Color;

		// Add instancing support for this shader. You need to check 'Enable Instancing' on materials that use the shader.
		// See https://docs.unity3d.com/Manual/GPUInstancing.html for more information about instancing.
		// #pragma instancing_options assumeuniformscaling
		UNITY_INSTANCING_BUFFER_START(Props)
			// put more per-instance properties here
		UNITY_INSTANCING_BUFFER_END(Props)

		void surf (Input IN, inout SurfaceOutputStandard o) {
			// Albedo comes from a texture tinted by color
			fixed4 c = tex2D (_MainTex, IN.uv_MainTex) * _Color;
			o.Albedo = c.rgb;
			// Metallic and smoothness come from slider variables
			o.Metallic = _Metallic;
			o.Smoothness = _Glossiness;
			o.Alpha = c.a;
		}
		ENDCG
	}
	FallBack "Diffuse"
}
