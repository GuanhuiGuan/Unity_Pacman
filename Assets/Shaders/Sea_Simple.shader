// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/Sea_Simple"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
		// wave properties
	    _waveH ("Wave Height", Range(-50.0, 50.0)) = 5.0
		_wx ("Scale X", Range(-1.0, 1.0)) = 0.9
		_wz("Scale Z", Range(-1.0, 1.0)) = 0.7
		_phi("Frequency", Range(-50.0, 50.0)) = 0.5
		// transparent property
		_Transparency ("Transparency", Range(0.0, 0.8)) = 0.5
	}
	SubShader
	{
		// Tags { "RenderType"="Opaque" }
		// transparent
		Tags{ "Queue" = "Transparent" "RenderType" = "Transparent" }
		LOD 100

		ZWrite Off
		Blend SrcAlpha OneMinusSrcAlpha

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			// make fog work
			#pragma multi_compile_fog
			
			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				UNITY_FOG_COORDS(1)
				float4 vertex : SV_POSITION;

			};

			sampler2D _MainTex;
			float4 _MainTex_ST;
			float _waveH, _wx, _wz, _phi;

			float rand(float ori)
			{
				return frac(sin(dot(ori, 12.9898)) * 43758.5453);
			}
			
			v2f vert (appdata v)
			{
				v2f o;
				// o.vertex = UnityObjectToClipPos(v.vertex);

				// make waves
				float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
				float ry = rand(worldPos.y);
				float rt = rand(_Time.w);
				v.vertex.y = _waveH * ry * sin(_wx * worldPos.x + _wz * worldPos.z + _phi * (_Time.w + 0.1 * rt));

				o.vertex = UnityObjectToClipPos(v.vertex);


				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				UNITY_TRANSFER_FOG(o,o.vertex);
				return o;
			}


			// transparent params
			float _Transparency;
			
			fixed4 frag (v2f i) : SV_Target
			{
				// sample the texture
				fixed4 col = tex2D(_MainTex, i.uv);

				// transparent
				col.a = _Transparency;

				// apply fog
				UNITY_APPLY_FOG(i.fogCoord, col);

				return col;
			}
			ENDCG
		}
	}
}

