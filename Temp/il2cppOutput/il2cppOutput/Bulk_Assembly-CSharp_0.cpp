#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// CameraMovements
struct CameraMovements_t1328894509;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// GhostControl
struct GhostControl_t2720259509;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t1276799816;
// PlayerControl
struct PlayerControl_t1977005294;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Collision
struct Collision_t4262080450;
// Quit
struct Quit_t4140085638;
// Rotation
struct Rotation_t2762746343;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t872956888;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Light
struct Light_t3756812086;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t CameraMovements_Start_m721644644_MetadataUsageId;
extern const uint32_t CameraMovements_LateUpdate_m4021481949_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532_RuntimeMethod_var;
extern const uint32_t GhostControl_Start_m1679560894_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const uint32_t PlayerControl_Awake_m4290033393_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var;
extern String_t* _stringLiteral3564307913;
extern const uint32_t PlayerControl_Start_m1810228875_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral2984908384;
extern const uint32_t PlayerControl_FixedUpdate_m3074637687_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral257032069;
extern const uint32_t PlayerControl_CheckInvincibility_m348363582_MetadataUsageId;
extern String_t* _stringLiteral2354153751;
extern String_t* _stringLiteral3526933424;
extern String_t* _stringLiteral2262231842;
extern String_t* _stringLiteral3492135306;
extern String_t* _stringLiteral1826520767;
extern String_t* _stringLiteral436283841;
extern String_t* _stringLiteral1297590910;
extern String_t* _stringLiteral1201842183;
extern const uint32_t PlayerControl_OnTriggerEnter_m3497806540_MetadataUsageId;
extern const uint32_t PlayerControl_OnCollisionEnter_m489355850_MetadataUsageId;
extern String_t* _stringLiteral2183717477;
extern const uint32_t PlayerControl_UpdatePoint_m205815262_MetadataUsageId;
extern String_t* _stringLiteral1433350145;
extern String_t* _stringLiteral3864356973;
extern String_t* _stringLiteral3788953861;
extern String_t* _stringLiteral2335726155;
extern String_t* _stringLiteral2365343066;
extern const uint32_t PlayerControl_UpdateEndGame_m951012012_MetadataUsageId;
extern String_t* _stringLiteral4290816562;
extern const uint32_t PlayerControl_Reload_m3781447657_MetadataUsageId;
extern String_t* _stringLiteral2333038580;
extern const uint32_t Quit_Exit_m3568895151_MetadataUsageId;
extern const uint32_t Rotation_Update_m4244688278_MetadataUsageId;
struct ContactPoint_t3758755253 ;

struct GameObjectU5BU5D_t3328599146;


#ifndef U3CMODULEU3E_T692745544_H
#define U3CMODULEU3E_T692745544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745544 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745544_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef COLLISION_T4262080450_H
#define COLLISION_T4262080450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t4262080450  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t3722313464  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1773347010 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t872956888* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Impulse_0)); }
	inline Vector3_t3722313464  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t3722313464 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t3722313464  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_RelativeVelocity_1)); }
	inline Vector3_t3722313464  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t3722313464 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t3722313464  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Rigidbody_2)); }
	inline Rigidbody_t3916780224 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t3916780224 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t3916780224 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Collider_3)); }
	inline Collider_t1773347010 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t1773347010 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t872956888* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t872956888** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t872956888* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_com
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
#endif // COLLISION_T4262080450_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef NAVMESHAGENT_T1276799816_H
#define NAVMESHAGENT_T1276799816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshAgent
struct  NavMeshAgent_t1276799816  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVMESHAGENT_T1276799816_H
#ifndef LIGHT_T3756812086_H
#define LIGHT_T3756812086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Light
struct  Light_t3756812086  : public Behaviour_t1437897464
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_2;

public:
	inline static int32_t get_offset_of_m_BakedIndex_2() { return static_cast<int32_t>(offsetof(Light_t3756812086, ___m_BakedIndex_2)); }
	inline int32_t get_m_BakedIndex_2() const { return ___m_BakedIndex_2; }
	inline int32_t* get_address_of_m_BakedIndex_2() { return &___m_BakedIndex_2; }
	inline void set_m_BakedIndex_2(int32_t value)
	{
		___m_BakedIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHT_T3756812086_H
#ifndef CAMERAMOVEMENTS_T1328894509_H
#define CAMERAMOVEMENTS_T1328894509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraMovements
struct  CameraMovements_t1328894509  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject CameraMovements::player
	GameObject_t1113636619 * ___player_2;
	// UnityEngine.Vector3 CameraMovements::offset
	Vector3_t3722313464  ___offset_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(CameraMovements_t1328894509, ___player_2)); }
	inline GameObject_t1113636619 * get_player_2() const { return ___player_2; }
	inline GameObject_t1113636619 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1113636619 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((&___player_2), value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(CameraMovements_t1328894509, ___offset_3)); }
	inline Vector3_t3722313464  get_offset_3() const { return ___offset_3; }
	inline Vector3_t3722313464 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t3722313464  value)
	{
		___offset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAMOVEMENTS_T1328894509_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef PLAYERCONTROL_T1977005294_H
#define PLAYERCONTROL_T1977005294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerControl
struct  PlayerControl_t1977005294  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody PlayerControl::rb
	Rigidbody_t3916780224 * ___rb_2;
	// System.Single PlayerControl::Init_Intensity
	float ___Init_Intensity_3;
	// System.Single PlayerControl::intensity
	float ___intensity_4;
	// System.Single PlayerControl::timer
	float ___timer_5;
	// System.Boolean PlayerControl::invincible
	bool ___invincible_6;
	// UnityEngine.Renderer PlayerControl::rend
	Renderer_t2627027031 * ___rend_7;
	// UnityEngine.Light PlayerControl::playerGlow
	Light_t3756812086 * ___playerGlow_8;
	// System.Int32 PlayerControl::point
	int32_t ___point_9;
	// System.Int32 PlayerControl::count
	int32_t ___count_10;
	// System.Single PlayerControl::runTime
	float ___runTime_11;
	// System.Int32 PlayerControl::allFood
	int32_t ___allFood_12;
	// UnityEngine.AudioSource PlayerControl::audioSource
	AudioSource_t3935305588 * ___audioSource_13;
	// UnityEngine.AudioClip PlayerControl::colSound
	AudioClip_t3680889665 * ___colSound_14;
	// UnityEngine.AudioClip PlayerControl::victory
	AudioClip_t3680889665 * ___victory_15;
	// UnityEngine.AudioClip PlayerControl::failure
	AudioClip_t3680889665 * ___failure_16;
	// UnityEngine.AudioClip PlayerControl::powerUp
	AudioClip_t3680889665 * ___powerUp_17;
	// UnityEngine.AudioClip PlayerControl::powerUpExpired
	AudioClip_t3680889665 * ___powerUpExpired_18;
	// UnityEngine.AudioClip PlayerControl::eatFood
	AudioClip_t3680889665 * ___eatFood_19;
	// UnityEngine.AudioClip PlayerControl::eatGhost
	AudioClip_t3680889665 * ___eatGhost_20;
	// UnityEngine.UI.Text PlayerControl::countText
	Text_t1901882714 * ___countText_21;
	// UnityEngine.UI.Text PlayerControl::endGameText
	Text_t1901882714 * ___endGameText_22;
	// System.Boolean PlayerControl::ended
	bool ___ended_23;
	// System.Boolean PlayerControl::defeated
	bool ___defeated_24;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___rb_2)); }
	inline Rigidbody_t3916780224 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody_t3916780224 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody_t3916780224 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier((&___rb_2), value);
	}

	inline static int32_t get_offset_of_Init_Intensity_3() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___Init_Intensity_3)); }
	inline float get_Init_Intensity_3() const { return ___Init_Intensity_3; }
	inline float* get_address_of_Init_Intensity_3() { return &___Init_Intensity_3; }
	inline void set_Init_Intensity_3(float value)
	{
		___Init_Intensity_3 = value;
	}

	inline static int32_t get_offset_of_intensity_4() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___intensity_4)); }
	inline float get_intensity_4() const { return ___intensity_4; }
	inline float* get_address_of_intensity_4() { return &___intensity_4; }
	inline void set_intensity_4(float value)
	{
		___intensity_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}

	inline static int32_t get_offset_of_invincible_6() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___invincible_6)); }
	inline bool get_invincible_6() const { return ___invincible_6; }
	inline bool* get_address_of_invincible_6() { return &___invincible_6; }
	inline void set_invincible_6(bool value)
	{
		___invincible_6 = value;
	}

	inline static int32_t get_offset_of_rend_7() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___rend_7)); }
	inline Renderer_t2627027031 * get_rend_7() const { return ___rend_7; }
	inline Renderer_t2627027031 ** get_address_of_rend_7() { return &___rend_7; }
	inline void set_rend_7(Renderer_t2627027031 * value)
	{
		___rend_7 = value;
		Il2CppCodeGenWriteBarrier((&___rend_7), value);
	}

	inline static int32_t get_offset_of_playerGlow_8() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___playerGlow_8)); }
	inline Light_t3756812086 * get_playerGlow_8() const { return ___playerGlow_8; }
	inline Light_t3756812086 ** get_address_of_playerGlow_8() { return &___playerGlow_8; }
	inline void set_playerGlow_8(Light_t3756812086 * value)
	{
		___playerGlow_8 = value;
		Il2CppCodeGenWriteBarrier((&___playerGlow_8), value);
	}

	inline static int32_t get_offset_of_point_9() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___point_9)); }
	inline int32_t get_point_9() const { return ___point_9; }
	inline int32_t* get_address_of_point_9() { return &___point_9; }
	inline void set_point_9(int32_t value)
	{
		___point_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_runTime_11() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___runTime_11)); }
	inline float get_runTime_11() const { return ___runTime_11; }
	inline float* get_address_of_runTime_11() { return &___runTime_11; }
	inline void set_runTime_11(float value)
	{
		___runTime_11 = value;
	}

	inline static int32_t get_offset_of_allFood_12() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___allFood_12)); }
	inline int32_t get_allFood_12() const { return ___allFood_12; }
	inline int32_t* get_address_of_allFood_12() { return &___allFood_12; }
	inline void set_allFood_12(int32_t value)
	{
		___allFood_12 = value;
	}

	inline static int32_t get_offset_of_audioSource_13() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___audioSource_13)); }
	inline AudioSource_t3935305588 * get_audioSource_13() const { return ___audioSource_13; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_13() { return &___audioSource_13; }
	inline void set_audioSource_13(AudioSource_t3935305588 * value)
	{
		___audioSource_13 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_13), value);
	}

	inline static int32_t get_offset_of_colSound_14() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___colSound_14)); }
	inline AudioClip_t3680889665 * get_colSound_14() const { return ___colSound_14; }
	inline AudioClip_t3680889665 ** get_address_of_colSound_14() { return &___colSound_14; }
	inline void set_colSound_14(AudioClip_t3680889665 * value)
	{
		___colSound_14 = value;
		Il2CppCodeGenWriteBarrier((&___colSound_14), value);
	}

	inline static int32_t get_offset_of_victory_15() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___victory_15)); }
	inline AudioClip_t3680889665 * get_victory_15() const { return ___victory_15; }
	inline AudioClip_t3680889665 ** get_address_of_victory_15() { return &___victory_15; }
	inline void set_victory_15(AudioClip_t3680889665 * value)
	{
		___victory_15 = value;
		Il2CppCodeGenWriteBarrier((&___victory_15), value);
	}

	inline static int32_t get_offset_of_failure_16() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___failure_16)); }
	inline AudioClip_t3680889665 * get_failure_16() const { return ___failure_16; }
	inline AudioClip_t3680889665 ** get_address_of_failure_16() { return &___failure_16; }
	inline void set_failure_16(AudioClip_t3680889665 * value)
	{
		___failure_16 = value;
		Il2CppCodeGenWriteBarrier((&___failure_16), value);
	}

	inline static int32_t get_offset_of_powerUp_17() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___powerUp_17)); }
	inline AudioClip_t3680889665 * get_powerUp_17() const { return ___powerUp_17; }
	inline AudioClip_t3680889665 ** get_address_of_powerUp_17() { return &___powerUp_17; }
	inline void set_powerUp_17(AudioClip_t3680889665 * value)
	{
		___powerUp_17 = value;
		Il2CppCodeGenWriteBarrier((&___powerUp_17), value);
	}

	inline static int32_t get_offset_of_powerUpExpired_18() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___powerUpExpired_18)); }
	inline AudioClip_t3680889665 * get_powerUpExpired_18() const { return ___powerUpExpired_18; }
	inline AudioClip_t3680889665 ** get_address_of_powerUpExpired_18() { return &___powerUpExpired_18; }
	inline void set_powerUpExpired_18(AudioClip_t3680889665 * value)
	{
		___powerUpExpired_18 = value;
		Il2CppCodeGenWriteBarrier((&___powerUpExpired_18), value);
	}

	inline static int32_t get_offset_of_eatFood_19() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___eatFood_19)); }
	inline AudioClip_t3680889665 * get_eatFood_19() const { return ___eatFood_19; }
	inline AudioClip_t3680889665 ** get_address_of_eatFood_19() { return &___eatFood_19; }
	inline void set_eatFood_19(AudioClip_t3680889665 * value)
	{
		___eatFood_19 = value;
		Il2CppCodeGenWriteBarrier((&___eatFood_19), value);
	}

	inline static int32_t get_offset_of_eatGhost_20() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___eatGhost_20)); }
	inline AudioClip_t3680889665 * get_eatGhost_20() const { return ___eatGhost_20; }
	inline AudioClip_t3680889665 ** get_address_of_eatGhost_20() { return &___eatGhost_20; }
	inline void set_eatGhost_20(AudioClip_t3680889665 * value)
	{
		___eatGhost_20 = value;
		Il2CppCodeGenWriteBarrier((&___eatGhost_20), value);
	}

	inline static int32_t get_offset_of_countText_21() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___countText_21)); }
	inline Text_t1901882714 * get_countText_21() const { return ___countText_21; }
	inline Text_t1901882714 ** get_address_of_countText_21() { return &___countText_21; }
	inline void set_countText_21(Text_t1901882714 * value)
	{
		___countText_21 = value;
		Il2CppCodeGenWriteBarrier((&___countText_21), value);
	}

	inline static int32_t get_offset_of_endGameText_22() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___endGameText_22)); }
	inline Text_t1901882714 * get_endGameText_22() const { return ___endGameText_22; }
	inline Text_t1901882714 ** get_address_of_endGameText_22() { return &___endGameText_22; }
	inline void set_endGameText_22(Text_t1901882714 * value)
	{
		___endGameText_22 = value;
		Il2CppCodeGenWriteBarrier((&___endGameText_22), value);
	}

	inline static int32_t get_offset_of_ended_23() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___ended_23)); }
	inline bool get_ended_23() const { return ___ended_23; }
	inline bool* get_address_of_ended_23() { return &___ended_23; }
	inline void set_ended_23(bool value)
	{
		___ended_23 = value;
	}

	inline static int32_t get_offset_of_defeated_24() { return static_cast<int32_t>(offsetof(PlayerControl_t1977005294, ___defeated_24)); }
	inline bool get_defeated_24() const { return ___defeated_24; }
	inline bool* get_address_of_defeated_24() { return &___defeated_24; }
	inline void set_defeated_24(bool value)
	{
		___defeated_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROL_T1977005294_H
#ifndef GHOSTCONTROL_T2720259509_H
#define GHOSTCONTROL_T2720259509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GhostControl
struct  GhostControl_t2720259509  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform GhostControl::goal
	Transform_t3600365921 * ___goal_2;
	// UnityEngine.AI.NavMeshAgent GhostControl::agent
	NavMeshAgent_t1276799816 * ___agent_3;

public:
	inline static int32_t get_offset_of_goal_2() { return static_cast<int32_t>(offsetof(GhostControl_t2720259509, ___goal_2)); }
	inline Transform_t3600365921 * get_goal_2() const { return ___goal_2; }
	inline Transform_t3600365921 ** get_address_of_goal_2() { return &___goal_2; }
	inline void set_goal_2(Transform_t3600365921 * value)
	{
		___goal_2 = value;
		Il2CppCodeGenWriteBarrier((&___goal_2), value);
	}

	inline static int32_t get_offset_of_agent_3() { return static_cast<int32_t>(offsetof(GhostControl_t2720259509, ___agent_3)); }
	inline NavMeshAgent_t1276799816 * get_agent_3() const { return ___agent_3; }
	inline NavMeshAgent_t1276799816 ** get_address_of_agent_3() { return &___agent_3; }
	inline void set_agent_3(NavMeshAgent_t1276799816 * value)
	{
		___agent_3 = value;
		Il2CppCodeGenWriteBarrier((&___agent_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GHOSTCONTROL_T2720259509_H
#ifndef QUIT_T4140085638_H
#define QUIT_T4140085638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Quit
struct  Quit_t4140085638  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUIT_T4140085638_H
#ifndef ROTATION_T2762746343_H
#define ROTATION_T2762746343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rotation
struct  Rotation_t2762746343  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 Rotation::rot
	Vector3_t3722313464  ___rot_2;

public:
	inline static int32_t get_offset_of_rot_2() { return static_cast<int32_t>(offsetof(Rotation_t2762746343, ___rot_2)); }
	inline Vector3_t3722313464  get_rot_2() const { return ___rot_2; }
	inline Vector3_t3722313464 * get_address_of_rot_2() { return &___rot_2; }
	inline void set_rot_2(Vector3_t3722313464  value)
	{
		___rot_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATION_T2762746343_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
#define Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532(__this, method) ((  NavMeshAgent_t1276799816 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.AI.NavMeshAgent::set_destination(UnityEngine.Vector3)
extern "C"  void NavMeshAgent_set_destination_m41262300 (NavMeshAgent_t1276799816 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, method) ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, method) ((  Rigidbody_t3916780224 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t2627027031_m2651633905(__this, method) ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void PlayerControl::UpdatePoint(System.Int32)
extern "C"  void PlayerControl_UpdatePoint_m205815262 (PlayerControl_t1977005294 * __this, int32_t ___delta0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C"  GameObjectU5BU5D_t3328599146* GameObject_FindGameObjectsWithTag_m2585173894 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::Reload()
extern "C"  void PlayerControl_Reload_m3781447657 (PlayerControl_t1977005294 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::CheckInvincibility()
extern "C"  void PlayerControl_CheckInvincibility_m348363582 (PlayerControl_t1977005294 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::UpdateEndGame()
extern "C"  void PlayerControl_UpdateEndGame_m951012012 (PlayerControl_t1977005294 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m2104357790 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m3395934484 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void AudioSource_PlayOneShot_m1688286683 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
extern "C"  bool GameObject_CompareTag_m3144439756 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C"  void AudioSource_PlayOneShot_m2678069419 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
extern "C"  GameObject_t1113636619 * Collision_get_gameObject_m3662658840 (Collision_t4262080450 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_relativeVelocity()
extern "C"  Vector3_t3722313464  Collision_get_relativeVelocity_m2955716709 (Collision_t4262080450 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C"  float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t2348375561  SceneManager_GetActiveScene_m1825203488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
extern "C"  int32_t Scene_get_buildIndex_m270272723 (Scene_t2348375561 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C"  void SceneManager_LoadScene_m3463216446 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C"  void Transform_Rotate_m720511863 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraMovements::.ctor()
extern "C"  void CameraMovements__ctor_m3073575646 (CameraMovements_t1328894509 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMovements::Start()
extern "C"  void CameraMovements_Start_m721644644 (CameraMovements_t1328894509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMovements_Start_m721644644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_player_2();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->set_offset_3(L_5);
		return;
	}
}
// System.Void CameraMovements::Update()
extern "C"  void CameraMovements_Update_m4185478271 (CameraMovements_t1328894509 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void CameraMovements::LateUpdate()
extern "C"  void CameraMovements_LateUpdate_m4021481949 (CameraMovements_t1328894509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMovements_LateUpdate_m4021481949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_player_2();
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = __this->get_offset_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m3387557959(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GhostControl::.ctor()
extern "C"  void GhostControl__ctor_m3089765368 (GhostControl_t2720259509 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GhostControl::Start()
extern "C"  void GhostControl_Start_m1679560894 (GhostControl_t2720259509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GhostControl_Start_m1679560894_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NavMeshAgent_t1276799816 * L_0 = Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_t1276799816_m597731532_RuntimeMethod_var);
		__this->set_agent_3(L_0);
		return;
	}
}
// System.Void GhostControl::Update()
extern "C"  void GhostControl_Update_m3180917636 (GhostControl_t2720259509 * __this, const RuntimeMethod* method)
{
	{
		NavMeshAgent_t1276799816 * L_0 = __this->get_agent_3();
		Transform_t3600365921 * L_1 = __this->get_goal_2();
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		NavMeshAgent_set_destination_m41262300(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerControl::.ctor()
extern "C"  void PlayerControl__ctor_m2782235369 (PlayerControl_t1977005294 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Init_Intensity_3((10.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerControl::Awake()
extern "C"  void PlayerControl_Awake_m4290033393 (PlayerControl_t1977005294 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControl_Awake_m4290033393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		__this->set_audioSource_13(L_0);
		return;
	}
}
// System.Void PlayerControl::Start()
extern "C"  void PlayerControl_Start_m1810228875 (PlayerControl_t1977005294 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControl_Start_m1810228875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_Init_Intensity_3();
		__this->set_intensity_4(L_0);
		Rigidbody_t3916780224 * L_1 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		__this->set_rb_2(L_1);
		Renderer_t2627027031 * L_2 = Component_GetComponent_TisRenderer_t2627027031_m2651633905(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var);
		__this->set_rend_7(L_2);
		PlayerControl_UpdatePoint_m205815262(__this, 0, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_3 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral3564307913, /*hidden argument*/NULL);
		NullCheck(L_3);
		__this->set_allFood_12((((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))));
		Text_t1901882714 * L_4 = __this->get_endGameText_22();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		return;
	}
}
// System.Void PlayerControl::Update()
extern "C"  void PlayerControl_Update_m3848134131 (PlayerControl_t1977005294 * __this, const RuntimeMethod* method)
{
	{
		PlayerControl_Reload_m3781447657(__this, /*hidden argument*/NULL);
		bool L_0 = __this->get_ended_23();
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		PlayerControl_CheckInvincibility_m348363582(__this, /*hidden argument*/NULL);
		PlayerControl_UpdatePoint_m205815262(__this, 0, /*hidden argument*/NULL);
		PlayerControl_UpdateEndGame_m951012012(__this, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void PlayerControl::FixedUpdate()
extern "C"  void PlayerControl_FixedUpdate_m3074637687 (PlayerControl_t1977005294 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControl_FixedUpdate_m3074637687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		bool L_0 = __this->get_ended_23();
		if (L_0)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_1 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = V_0;
		float L_4 = V_1;
		Vector3__ctor_m3353183577((&V_2), L_3, (0.0f), L_4, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_5 = __this->get_rb_2();
		float L_6 = __this->get_intensity_4();
		Vector3_t3722313464  L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody_AddForce_m3395934484(L_5, L_8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Void PlayerControl::CheckInvincibility()
extern "C"  void PlayerControl_CheckInvincibility_m348363582 (PlayerControl_t1977005294 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControl_CheckInvincibility_m348363582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_timer_5();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		float L_1 = __this->get_timer_5();
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timer_5(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		float L_3 = __this->get_timer_5();
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		__this->set_invincible_6((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral257032069, /*hidden argument*/NULL);
		__this->set_timer_5((0.0f));
		float L_4 = __this->get_Init_Intensity_3();
		__this->set_intensity_4(L_4);
		Light_t3756812086 * L_5 = __this->get_playerGlow_8();
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, (bool)0, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_7 = __this->get_audioSource_13();
		AudioClip_t3680889665 * L_8 = __this->get_powerUpExpired_18();
		NullCheck(L_7);
		AudioSource_PlayOneShot_m1688286683(L_7, L_8, /*hidden argument*/NULL);
	}

IL_007c:
	{
		return;
	}
}
// System.Void PlayerControl::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void PlayerControl_OnTriggerEnter_m3497806540 (PlayerControl_t1977005294 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControl_OnTriggerEnter_m3497806540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		bool L_0 = __this->get_ended_23();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Collider_t1773347010 * L_1 = ___other0;
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = GameObject_CompareTag_m3144439756(L_2, _stringLiteral2354153751, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_008a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3526933424, /*hidden argument*/NULL);
		Collider_t1773347010 * L_4 = ___other0;
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
		__this->set_timer_5((10.0f));
		float L_6 = __this->get_intensity_4();
		__this->set_intensity_4(((float)il2cpp_codegen_multiply((float)L_6, (float)(2.0f))));
		__this->set_invincible_6((bool)1);
		Light_t3756812086 * L_7 = __this->get_playerGlow_8();
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_m796801857(L_8, (bool)1, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_9 = __this->get_audioSource_13();
		AudioClip_t3680889665 * L_10 = __this->get_powerUp_17();
		NullCheck(L_9);
		AudioSource_PlayOneShot_m1688286683(L_9, L_10, /*hidden argument*/NULL);
		PlayerControl_UpdatePoint_m205815262(__this, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_0184;
	}

IL_008a:
	{
		Collider_t1773347010 * L_11 = ___other0;
		NullCheck(L_11);
		GameObject_t1113636619 * L_12 = Component_get_gameObject_m442555142(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_13 = GameObject_CompareTag_m3144439756(L_12, _stringLiteral3564307913, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00e5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2262231842, /*hidden argument*/NULL);
		Collider_t1773347010 * L_14 = ___other0;
		NullCheck(L_14);
		GameObject_t1113636619 * L_15 = Component_get_gameObject_m442555142(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_m796801857(L_15, (bool)0, /*hidden argument*/NULL);
		int32_t L_16 = __this->get_count_10();
		__this->set_count_10(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		AudioSource_t3935305588 * L_17 = __this->get_audioSource_13();
		AudioClip_t3680889665 * L_18 = __this->get_eatFood_19();
		NullCheck(L_17);
		AudioSource_PlayOneShot_m2678069419(L_17, L_18, (0.6f), /*hidden argument*/NULL);
		PlayerControl_UpdatePoint_m205815262(__this, 5, /*hidden argument*/NULL);
		goto IL_0184;
	}

IL_00e5:
	{
		Collider_t1773347010 * L_19 = ___other0;
		NullCheck(L_19);
		GameObject_t1113636619 * L_20 = Component_get_gameObject_m442555142(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		bool L_21 = GameObject_CompareTag_m3144439756(L_20, _stringLiteral3492135306, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0169;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1826520767, /*hidden argument*/NULL);
		bool L_22 = __this->get_invincible_6();
		if (!L_22)
		{
			goto IL_0148;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral436283841, /*hidden argument*/NULL);
		Collider_t1773347010 * L_23 = ___other0;
		NullCheck(L_23);
		GameObject_t1113636619 * L_24 = Component_get_gameObject_m442555142(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_SetActive_m796801857(L_24, (bool)0, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_25 = __this->get_audioSource_13();
		AudioClip_t3680889665 * L_26 = __this->get_eatGhost_20();
		NullCheck(L_25);
		AudioSource_PlayOneShot_m2678069419(L_25, L_26, (0.8f), /*hidden argument*/NULL);
		PlayerControl_UpdatePoint_m205815262(__this, ((int32_t)100), /*hidden argument*/NULL);
		goto IL_0164;
	}

IL_0148:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1297590910, /*hidden argument*/NULL);
		PlayerControl_UpdatePoint_m205815262(__this, ((int32_t)-1000), /*hidden argument*/NULL);
		__this->set_defeated_24((bool)1);
	}

IL_0164:
	{
		goto IL_0184;
	}

IL_0169:
	{
		Collider_t1773347010 * L_27 = ___other0;
		NullCheck(L_27);
		GameObject_t1113636619 * L_28 = Component_get_gameObject_m442555142(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		bool L_29 = GameObject_CompareTag_m3144439756(L_28, _stringLiteral1201842183, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0184;
		}
	}
	{
		V_0 = (1.0f);
	}

IL_0184:
	{
		return;
	}
}
// System.Void PlayerControl::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void PlayerControl_OnCollisionEnter_m489355850 (PlayerControl_t1977005294 * __this, Collision_t4262080450 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControl_OnCollisionEnter_m489355850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (0.3f);
		bool L_0 = __this->get_ended_23();
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		Collision_t4262080450 * L_1 = ___collision0;
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Collision_get_gameObject_m3662658840(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = GameObject_CompareTag_m3144439756(L_2, _stringLiteral1201842183, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		Collision_t4262080450 * L_4 = ___collision0;
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Collision_get_relativeVelocity_m2955716709(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = Vector3_get_magnitude_m27958459((&V_2), /*hidden argument*/NULL);
		float L_7 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7));
		AudioSource_t3935305588 * L_8 = __this->get_audioSource_13();
		AudioClip_t3680889665 * L_9 = __this->get_colSound_14();
		float L_10 = V_1;
		NullCheck(L_8);
		AudioSource_PlayOneShot_m2678069419(L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.Void PlayerControl::UpdatePoint(System.Int32)
extern "C"  void PlayerControl_UpdatePoint_m205815262 (PlayerControl_t1977005294 * __this, int32_t ___delta0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControl_UpdatePoint_m205815262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_runTime_11();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_runTime_11(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		float L_2 = __this->get_runTime_11();
		if ((!(((float)L_2) >= ((float)(1.0f)))))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_3 = __this->get_point_9();
		__this->set_point_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
		float L_4 = __this->get_runTime_11();
		float L_5 = __this->get_runTime_11();
		__this->set_runTime_11(((float)il2cpp_codegen_subtract((float)L_4, (float)(((float)((float)(((int32_t)((int32_t)L_5)))))))));
	}

IL_0045:
	{
		int32_t L_6 = __this->get_point_9();
		int32_t L_7 = ___delta0;
		__this->set_point_9(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)));
		Text_t1901882714 * L_8 = __this->get_countText_21();
		int32_t* L_9 = __this->get_address_of_point_9();
		String_t* L_10 = Int32_ToString_m141394615(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2183717477, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		return;
	}
}
// System.Void PlayerControl::UpdateEndGame()
extern "C"  void PlayerControl_UpdateEndGame_m951012012 (PlayerControl_t1977005294 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControl_UpdateEndGame_m951012012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_count_10();
		int32_t L_1 = __this->get_allFood_12();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_005e;
		}
	}
	{
		__this->set_ended_23((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1433350145, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_2 = __this->get_audioSource_13();
		AudioClip_t3680889665 * L_3 = __this->get_victory_15();
		NullCheck(L_2);
		AudioSource_PlayOneShot_m1688286683(L_2, L_3, /*hidden argument*/NULL);
		Text_t1901882714 * L_4 = __this->get_endGameText_22();
		int32_t* L_5 = __this->get_address_of_point_9();
		String_t* L_6 = Int32_ToString_m141394615(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3864356973, L_6, _stringLiteral3788953861, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
	}

IL_005e:
	{
		bool L_8 = __this->get_defeated_24();
		if (!L_8)
		{
			goto IL_00c2;
		}
	}
	{
		__this->set_ended_23((bool)1);
		Renderer_t2627027031 * L_9 = __this->get_rend_7();
		NullCheck(L_9);
		Renderer_set_enabled_m1727253150(L_9, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2335726155, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_10 = __this->get_audioSource_13();
		AudioClip_t3680889665 * L_11 = __this->get_failure_16();
		NullCheck(L_10);
		AudioSource_PlayOneShot_m1688286683(L_10, L_11, /*hidden argument*/NULL);
		Text_t1901882714 * L_12 = __this->get_endGameText_22();
		int32_t* L_13 = __this->get_address_of_point_9();
		String_t* L_14 = Int32_ToString_m141394615(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2365343066, L_14, _stringLiteral3788953861, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
	}

IL_00c2:
	{
		return;
	}
}
// System.Void PlayerControl::Reload()
extern "C"  void PlayerControl_Reload_m3781447657 (PlayerControl_t1977005294 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControl_Reload_m3781447657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4290816562, /*hidden argument*/NULL);
		Scene_t2348375561  L_1 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Scene_get_buildIndex_m270272723((&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Quit::.ctor()
extern "C"  void Quit__ctor_m188265218 (Quit_t4140085638 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Quit::Exit()
extern "C"  void Quit_Exit_m3568895151 (Quit_t4140085638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Quit_Exit_m3568895151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2333038580, /*hidden argument*/NULL);
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rotation::.ctor()
extern "C"  void Rotation__ctor_m2035013864 (Rotation_t2762746343 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m3353183577((&L_0), (30.0f), (20.0f), (50.0f), /*hidden argument*/NULL);
		__this->set_rot_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rotation::Start()
extern "C"  void Rotation_Start_m3515992868 (Rotation_t2762746343 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Rotation::Update()
extern "C"  void Rotation_Update_m4244688278 (Rotation_t2762746343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rotation_Update_m4244688278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = __this->get_rot_2();
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m720511863(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
