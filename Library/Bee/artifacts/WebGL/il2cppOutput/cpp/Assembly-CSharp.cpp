#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Movimiento
struct Movimiento_tA8F4483E30181F0133EDD52349401845790D63E7;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIperder
struct UIperder_tBC06E0BD0B403249F182C1A0E4EFE38B116D58AF;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// cambiarScenas
struct cambiarScenas_t5DB762D429F06AB1B3D94F1F4BD51AD6C4226101;
// choque
struct choque_t623AFF5A02BFC4655832439E3379639B6BB022FB;
// controlUI
struct controlUI_t81608AAC43F26B08B46F4B12A6F6EADC98EB56CA;
// ganar
struct ganar_t9E0B8531CF362352D9BA37B47EDBA6B60929A87B;
// perder
struct perder_t81F4B0102143D1686E299A97A414A0BE282A52EA;
// perseguir
struct perseguir_t6A21C99234A84A20448FF9C76323562AE02A6C2E;
// sonido
struct sonido_tB58C52292CC6892D52531ADA52005034C68C887F;
// vidas
struct vidas_t86EE93DD377D90103F1E029259426F1D97DFEE21;
// vidas1
struct vidas1_t1DDEA23A09A1945F3B148C81F3BF44347DC901A9;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D86AB0900125091453B2AB054487393A54CE874;
IL2CPP_EXTERN_C String_t* _stringLiteral111FD54C942B253AC7C67C9546AE6A7EFCB04DE6;
IL2CPP_EXTERN_C String_t* _stringLiteral4260F88792A2F8B39FCD3C4207ED07ECBF5DB9FD;
IL2CPP_EXTERN_C String_t* _stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3;
IL2CPP_EXTERN_C String_t* _stringLiteral545FA33023CB940BA325C20B56ED680EAA20E4DD;
IL2CPP_EXTERN_C String_t* _stringLiteral5CBA1D6F6D9CA883F2453692DFEF6DF2DBFD4E38;
IL2CPP_EXTERN_C String_t* _stringLiteral64EDAAD4F1FD8DA040AC1D668B1AAA2BC274B214;
IL2CPP_EXTERN_C String_t* _stringLiteral7E9960309F0BEFCCA5A1EA61E4B4B68106ECBFCD;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral803BEE15563634E2515FBAB9FC2BDBC74AAD907A;
IL2CPP_EXTERN_C String_t* _stringLiteralA3F807801E86A62C3C26113DCEA2F7A9F6817209;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDD08D3AC2D10B75B0209C7CC0428F8A64E8C9F05;
IL2CPP_EXTERN_C String_t* _stringLiteralDEA3F5044E13F19207D83873B64CD5C1E5385A9F;
IL2CPP_EXTERN_C String_t* _stringLiteralFF6DF2F93D411F458C4D3D72B62C73AC48D423CD;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;

struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Movimiento
struct Movimiento_tA8F4483E30181F0133EDD52349401845790D63E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Movimiento::moveSpeed
	float ___moveSpeed_4;
	// System.Single Movimiento::fuerzaSalto
	float ___fuerzaSalto_5;
	// UnityEngine.UI.Text Movimiento::textoPuntos
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textoPuntos_6;
	// System.Int32 Movimiento::puntos
	int32_t ___puntos_7;
	// System.Boolean Movimiento::enSuelo
	bool ___enSuelo_8;
	// UnityEngine.Rigidbody2D Movimiento::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_9;
	// UnityEngine.Animator Movimiento::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIperder
struct UIperder_tBC06E0BD0B403249F182C1A0E4EFE38B116D58AF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UIperder::menu
	String_t* ___menu_4;
};

// cambiarScenas
struct cambiarScenas_t5DB762D429F06AB1B3D94F1F4BD51AD6C4226101  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String cambiarScenas::escapar
	String_t* ___escapar_4;
	// System.String cambiarScenas::saltar
	String_t* ___saltar_5;
};

// choque
struct choque_t623AFF5A02BFC4655832439E3379639B6BB022FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip choque::colision
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___colision_4;
	// UnityEngine.AudioSource choque::golpes
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___golpes_5;
};

// controlUI
struct controlUI_t81608AAC43F26B08B46F4B12A6F6EADC98EB56CA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject controlUI::opciones
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___opciones_4;
	// System.String controlUI::menu
	String_t* ___menu_5;
};

// ganar
struct ganar_t9E0B8531CF362352D9BA37B47EDBA6B60929A87B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ganar::canvasGanador
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvasGanador_4;
	// UnityEngine.GameObject ganar::canvasDatos
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvasDatos_5;
};

// perder
struct perder_t81F4B0102143D1686E299A97A414A0BE282A52EA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject perder::canvasPerdedor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvasPerdedor_4;
	// UnityEngine.GameObject perder::canvasDatos
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvasDatos_5;
	// UnityEngine.UI.Image perder::vidasImagen
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___vidasImagen_6;
	// UnityEngine.Sprite perder::ceroVidas
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___ceroVidas_7;
};

// perseguir
struct perseguir_t6A21C99234A84A20448FF9C76323562AE02A6C2E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform perseguir::objetivo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___objetivo_4;
	// System.Single perseguir::velocidadPersecucion
	float ___velocidadPersecucion_5;
	// System.Single perseguir::distanciaMinima
	float ___distanciaMinima_6;
	// System.Single perseguir::distanciaRetroceso
	float ___distanciaRetroceso_7;
	// System.Single perseguir::velocidad
	float ___velocidad_8;
};

// sonido
struct sonido_tB58C52292CC6892D52531ADA52005034C68C887F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image sonido::vidasImagen
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___vidasImagen_4;
	// UnityEngine.Sprite sonido::ceroVidas
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___ceroVidas_5;
	// UnityEngine.GameObject sonido::fondo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fondo_6;
	// UnityEngine.AudioClip sonido::salto
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___salto_7;
	// UnityEngine.AudioClip sonido::perderPuntos
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___perderPuntos_8;
	// UnityEngine.AudioClip sonido::ganarPuntos
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___ganarPuntos_9;
	// UnityEngine.AudioClip sonido::ganarJuego
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___ganarJuego_10;
	// UnityEngine.AudioClip sonido::perderJuego
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___perderJuego_11;
	// UnityEngine.AudioSource sonido::golpes
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___golpes_12;
	// UnityEngine.AudioSource sonido::ambiente
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___ambiente_13;
	// System.Boolean sonido::jugando
	bool ___jugando_14;
};

// vidas
struct vidas_t86EE93DD377D90103F1E029259426F1D97DFEE21  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite vidas::tresVidas
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___tresVidas_4;
	// UnityEngine.Sprite vidas::dosVidas
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___dosVidas_5;
	// UnityEngine.Sprite vidas::unaVida
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___unaVida_6;
	// UnityEngine.Sprite vidas::ceroVidas
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___ceroVidas_7;
	// UnityEngine.UI.Text vidas::textoPuntos
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textoPuntos_8;
	// UnityEngine.UI.Image vidas::vidasImagen
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___vidasImagen_9;
	// UnityEngine.Sprite[] vidas::lista
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___lista_10;
	// System.Int32 vidas::vida
	int32_t ___vida_11;
};

// vidas1
struct vidas1_t1DDEA23A09A1945F3B148C81F3BF44347DC901A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite vidas1::tresVidas
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___tresVidas_4;
	// UnityEngine.Sprite vidas1::dosVidas
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___dosVidas_5;
	// UnityEngine.Sprite vidas1::unaVida
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___unaVida_6;
	// UnityEngine.Sprite vidas1::ceroVidas
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___ceroVidas_7;
	// UnityEngine.UI.Text vidas1::textoPuntos
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textoPuntos_8;
	// UnityEngine.UI.Image vidas1::vidasImagen
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___vidasImagen_9;
	// UnityEngine.Sprite[] vidas1::lista
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___lista_10;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void cambiarScenas::EscaparNivel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cambiarScenas_EscaparNivel_m57ABDB31B736C5E1903A4058DF3003D4B2D8A370 (cambiarScenas_t5DB762D429F06AB1B3D94F1F4BD51AD6C4226101* __this, const RuntimeMethod* method) ;
// System.Void cambiarScenas::SaltarNivel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cambiarScenas_SaltarNivel_mF698FCBE404ABA76B1DBE7C0189B1D9DB4CC3E8B (cambiarScenas_t5DB762D429F06AB1B3D94F1F4BD51AD6C4226101* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void ganar::TerminarJuego()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ganar_TerminarJuego_m1E66B0BBEA855BE8D9ADD57C235E73061AE72442 (ganar_t9E0B8531CF362352D9BA37B47EDBA6B60929A87B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Boolean Movimiento::ComprobarMovHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Movimiento_ComprobarMovHorizontal_mA8DF35AEE00131899481FE2C5AA6BFFA26D740FF (Movimiento_tA8F4483E30181F0133EDD52349401845790D63E7* __this, const RuntimeMethod* method) ;
// System.Boolean Movimiento::ComprobarSalto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Movimiento_ComprobarSalto_m9A2E9A61AD4B5CDBA604B7AE7D1BD717149CFCAA (Movimiento_tA8F4483E30181F0133EDD52349401845790D63E7* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Void perder::TerminarJuego()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void perder_TerminarJuego_mAC6A8CF47E6267891D5A1B1989CEFD315BDE56B7 (perder_t81F4B0102143D1686E299A97A414A0BE282A52EA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void vidas::comprobarVida()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidas_comprobarVida_m0865661AC6C172FCB6529C9FCEBAC9BF17BD1437 (vidas_t86EE93DD377D90103F1E029259426F1D97DFEE21* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
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
// System.Void cambiarScenas::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cambiarScenas_OnTriggerEnter2D_m704B04240F8A0CAEEC3C1CADBB7AB55FEFD91CF4 (cambiarScenas_t5DB762D429F06AB1B3D94F1F4BD51AD6C4226101* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD08D3AC2D10B75B0209C7CC0428F8A64E8C9F05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF6DF2F93D411F458C4D3D72B62C73AC48D423CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "nivelEscapar")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralFF6DF2F93D411F458C4D3D72B62C73AC48D423CD, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// EscaparNivel();
		cambiarScenas_EscaparNivel_m57ABDB31B736C5E1903A4058DF3003D4B2D8A370(__this, NULL);
		return;
	}

IL_001e:
	{
		// }else if (collision.gameObject.tag == "nivelSalto")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralDD08D3AC2D10B75B0209C7CC0428F8A64E8C9F05, NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		// SaltarNivel();
		cambiarScenas_SaltarNivel_mF698FCBE404ABA76B1DBE7C0189B1D9DB4CC3E8B(__this, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void cambiarScenas::EscaparNivel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cambiarScenas_EscaparNivel_m57ABDB31B736C5E1903A4058DF3003D4B2D8A370 (cambiarScenas_t5DB762D429F06AB1B3D94F1F4BD51AD6C4226101* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(escapar);
		String_t* L_0 = __this->___escapar_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
		// }
		return;
	}
}
// System.Void cambiarScenas::SaltarNivel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cambiarScenas_SaltarNivel_mF698FCBE404ABA76B1DBE7C0189B1D9DB4CC3E8B (cambiarScenas_t5DB762D429F06AB1B3D94F1F4BD51AD6C4226101* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(saltar);
		String_t* L_0 = __this->___saltar_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
		// }
		return;
	}
}
// System.Void cambiarScenas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cambiarScenas__ctor_m95C1195346937595446B46244ABD996255A5EADD (cambiarScenas_t5DB762D429F06AB1B3D94F1F4BD51AD6C4226101* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4260F88792A2F8B39FCD3C4207ED07ECBF5DB9FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3F807801E86A62C3C26113DCEA2F7A9F6817209);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string escapar = "escapar";
		__this->___escapar_4 = _stringLiteralA3F807801E86A62C3C26113DCEA2F7A9F6817209;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___escapar_4), (void*)_stringLiteralA3F807801E86A62C3C26113DCEA2F7A9F6817209);
		// private string saltar = "saltar";
		__this->___saltar_5 = _stringLiteral4260F88792A2F8B39FCD3C4207ED07ECBF5DB9FD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___saltar_5), (void*)_stringLiteral4260F88792A2F8B39FCD3C4207ED07ECBF5DB9FD);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void choque::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void choque_Start_m08C5DCE00B1A4254F879AFFDCD6BEDA5B7CE6210 (choque_t623AFF5A02BFC4655832439E3379639B6BB022FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// golpes = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___golpes_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___golpes_5), (void*)L_0);
		// if (golpes == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___golpes_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// golpes = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_3, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		__this->___golpes_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___golpes_5), (void*)L_4);
	}

IL_002b:
	{
		// golpes.clip = colision;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___golpes_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = __this->___colision_4;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void choque::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void choque_Update_m4ED1A65106A920F12B21B0795582102253719AC9 (choque_t623AFF5A02BFC4655832439E3379639B6BB022FB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void choque::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void choque_OnCollisionEnter2D_m704CB86EDC75B261C98A3E6B29B6002D06D209C0 (choque_t623AFF5A02BFC4655832439E3379639B6BB022FB* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// golpes.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___golpes_5;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void choque::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void choque__ctor_m713BF485E36B3B0B2120621856A0852B830C4804 (choque_t623AFF5A02BFC4655832439E3379639B6BB022FB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void controlUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlUI_Update_m5C3EB3D67F158638347DB1DEA4207F0B863D3E60 (controlUI_t81608AAC43F26B08B46F4B12A6F6EADC98EB56CA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void controlUI::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlUI_PauseGame_mBF559E4BF7CD7498BA20D83C5C4CF493C99E7041 (controlUI_t81608AAC43F26B08B46F4B12A6F6EADC98EB56CA* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0f; // Se establece el timeScale a 0 para detener el tiempo en el juego
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// opciones.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___opciones_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void controlUI::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlUI_ResumeGame_m5B80DD7076C7769C0587984A3B7563625BEAAFFD (controlUI_t81608AAC43F26B08B46F4B12A6F6EADC98EB56CA* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1f; // Se restablece el timeScale a 1 para reanudar el tiempo en el juego
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// opciones.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___opciones_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void controlUI::Salir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlUI_Salir_m78D4AC08F9CFF6240C2E8672E30DA972CB718E77 (controlUI_t81608AAC43F26B08B46F4B12A6F6EADC98EB56CA* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// }
		return;
	}
}
// System.Void controlUI::VolverAlMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlUI_VolverAlMenu_m984EDCA25F35D0E07E687C31F70689419D6D5737 (controlUI_t81608AAC43F26B08B46F4B12A6F6EADC98EB56CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f; // Se restablece el timeScale a 1 para reanudar el tiempo en el juego
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// SceneManager.LoadScene(menu);
		String_t* L_0 = __this->___menu_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
		// opciones.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___opciones_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void controlUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlUI__ctor_m7EDB8A3306EAF389B24146DC052C51315B7FF1A5 (controlUI_t81608AAC43F26B08B46F4B12A6F6EADC98EB56CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral111FD54C942B253AC7C67C9546AE6A7EFCB04DE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string menu = "elegir nivel";
		__this->___menu_5 = _stringLiteral111FD54C942B253AC7C67C9546AE6A7EFCB04DE6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menu_5), (void*)_stringLiteral111FD54C942B253AC7C67C9546AE6A7EFCB04DE6);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ganar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ganar_Start_mE130B5464EC0CC21D3338DC867CE365ACEEB9117 (ganar_t9E0B8531CF362352D9BA37B47EDBA6B60929A87B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ganar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ganar_Update_m84DB45DDE903FD026371E22045609DD0437C1B75 (ganar_t9E0B8531CF362352D9BA37B47EDBA6B60929A87B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ganar::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ganar_OnCollisionEnter2D_m2B786F0EFABF05A950AF3FC543E1F97ACE9B4293 (ganar_t9E0B8531CF362352D9BA37B47EDBA6B60929A87B* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral803BEE15563634E2515FBAB9FC2BDBC74AAD907A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Puerta")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral803BEE15563634E2515FBAB9FC2BDBC74AAD907A, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// TerminarJuego();
		ganar_TerminarJuego_m1E66B0BBEA855BE8D9ADD57C235E73061AE72442(__this, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void ganar::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ganar_OnTriggerEnter2D_m5B650F721D35A759AD46DD5F71F578C4F50AC34B (ganar_t9E0B8531CF362352D9BA37B47EDBA6B60929A87B* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E9960309F0BEFCCA5A1EA61E4B4B68106ECBFCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral803BEE15563634E2515FBAB9FC2BDBC74AAD907A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Puerta")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral803BEE15563634E2515FBAB9FC2BDBC74AAD907A, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// TerminarJuego();
		ganar_TerminarJuego_m1E66B0BBEA855BE8D9ADD57C235E73061AE72442(__this, NULL);
		// UnityEngine.Debug.Log(" :(");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral7E9960309F0BEFCCA5A1EA61E4B4B68106ECBFCD, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void ganar::TerminarJuego()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ganar_TerminarJuego_m1E66B0BBEA855BE8D9ADD57C235E73061AE72442 (ganar_t9E0B8531CF362352D9BA37B47EDBA6B60929A87B* __this, const RuntimeMethod* method) 
{
	{
		// canvasGanador.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___canvasGanador_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// canvasDatos.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___canvasDatos_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ganar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ganar__ctor_m3585C8007211B96F593C0D40264CC12ABA6A7EC1 (ganar_t9E0B8531CF362352D9BA37B47EDBA6B60929A87B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Movimiento::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movimiento_Start_mEF29C0EF40FEC4E2860AC94A07A449D2600A9E96 (Movimiento_tA8F4483E30181F0133EDD52349401845790D63E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>(); // Obtener el componente Rigidbody2D al inicio
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_9), (void*)L_0);
		// anim = GetComponentInChildren<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		__this->___anim_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_10), (void*)L_1);
		// }
		return;
	}
}
// System.Void Movimiento::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movimiento_Update_mD64F4C6BC8088329F9BF937ADB85968906C53219 (Movimiento_tA8F4483E30181F0133EDD52349401845790D63E7* __this, const RuntimeMethod* method) 
{
	{
		// bool saltando = ComprobarMovHorizontal();
		bool L_0;
		L_0 = Movimiento_ComprobarMovHorizontal_mA8DF35AEE00131899481FE2C5AA6BFFA26D740FF(__this, NULL);
		// bool andando = ComprobarSalto();
		bool L_1;
		L_1 = Movimiento_ComprobarSalto_m9A2E9A61AD4B5CDBA604B7AE7D1BD717149CFCAA(__this, NULL);
		// puntos = int.Parse(textoPuntos.text);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___textoPuntos_6;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		int32_t L_4;
		L_4 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_3, NULL);
		__this->___puntos_7 = L_4;
		// }
		return;
	}
}
// System.Void Movimiento::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movimiento_OnCollisionEnter2D_m71848DBCB370A32805D443B5FBADE3ACFCA7DE29 (Movimiento_tA8F4483E30181F0133EDD52349401845790D63E7* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64EDAAD4F1FD8DA040AC1D668B1AAA2BC274B214);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEA3F5044E13F19207D83873B64CD5C1E5385A9F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "floor")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralDEA3F5044E13F19207D83873B64CD5C1E5385A9F, NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// enSuelo = true; // Marcar que el jugador est? en el suelo cuando colisiona con el suelo
		__this->___enSuelo_8 = (bool)1;
		// anim.SetFloat("movimientos", 0f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___anim_10;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_4, _stringLiteral64EDAAD4F1FD8DA040AC1D668B1AAA2BC274B214, (0.0f), NULL);
	}

IL_0033:
	{
		// if (collision.gameObject.tag == "Money")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_5 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_5, NULL);
		String_t* L_7;
		L_7 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3, NULL);
		if (!L_8)
		{
			goto IL_0079;
		}
	}
	{
		// puntos++;
		int32_t L_9 = __this->___puntos_7;
		__this->___puntos_7 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// textoPuntos.text = puntos.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___textoPuntos_6;
		int32_t* L_11 = (&__this->___puntos_7);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_12);
		// Destroy(collision.gameObject);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_13 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Boolean Movimiento::ComprobarMovHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Movimiento_ComprobarMovHorizontal_mA8DF35AEE00131899481FE2C5AA6BFFA26D740FF (Movimiento_tA8F4483E30181F0133EDD52349401845790D63E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64EDAAD4F1FD8DA040AC1D668B1AAA2BC274B214);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float movHorizontal = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// if ((movHorizontal > 0f || movHorizontal < 0f) && enSuelo)
		float L_1 = V_0;
		if ((((float)L_1) > ((float)(0.0f))))
		{
			goto IL_001e;
		}
	}
	{
		float L_2 = V_0;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_00af;
		}
	}

IL_001e:
	{
		bool L_3 = __this->___enSuelo_8;
		if (!L_3)
		{
			goto IL_00af;
		}
	}
	{
		// if (movHorizontal < 0f)
		float L_4 = V_0;
		if ((!(((float)L_4) < ((float)(0.0f)))))
		{
			goto IL_0070;
		}
	}
	{
		// rb.velocity = new Vector2(movHorizontal * moveSpeed, rb.velocity.y); // Aplicar movimiento horizontal
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5 = __this->___rb_9;
		float L_6 = V_0;
		float L_7 = __this->___moveSpeed_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8 = __this->___rb_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_8, NULL);
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), ((float)il2cpp_codegen_multiply(L_6, L_7)), L_10, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_5, L_11, NULL);
		// anim.SetFloat("movimientos", 0.5f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___anim_10;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_12, _stringLiteral64EDAAD4F1FD8DA040AC1D668B1AAA2BC274B214, (0.5f), NULL);
		goto IL_00ad;
	}

IL_0070:
	{
		// rb.velocity = new Vector2(movHorizontal * moveSpeed, rb.velocity.y); // Aplicar movimiento horizontal
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_13 = __this->___rb_9;
		float L_14 = V_0;
		float L_15 = __this->___moveSpeed_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_16 = __this->___rb_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_16, NULL);
		float L_18 = L_17.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), ((float)il2cpp_codegen_multiply(L_14, L_15)), L_18, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_13, L_19, NULL);
		// anim.SetFloat("movimientos", 0.25f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_20 = __this->___anim_10;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_20, _stringLiteral64EDAAD4F1FD8DA040AC1D668B1AAA2BC274B214, (0.25f), NULL);
	}

IL_00ad:
	{
		// return true;
		return (bool)1;
	}

IL_00af:
	{
		// }else if (enSuelo)
		bool L_21 = __this->___enSuelo_8;
		if (!L_21)
		{
			goto IL_00ce;
		}
	}
	{
		// anim.SetFloat("movimientos", 0f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22 = __this->___anim_10;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_22, _stringLiteral64EDAAD4F1FD8DA040AC1D668B1AAA2BC274B214, (0.0f), NULL);
		// return false;
		return (bool)0;
	}

IL_00ce:
	{
		// if (movHorizontal < 0f)
		float L_23 = V_0;
		if ((!(((float)L_23) < ((float)(0.0f)))))
		{
			goto IL_00ed;
		}
	}
	{
		// anim.SetFloat("movimientos", 1f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___anim_10;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_24, _stringLiteral64EDAAD4F1FD8DA040AC1D668B1AAA2BC274B214, (1.0f), NULL);
		goto IL_0102;
	}

IL_00ed:
	{
		// anim.SetFloat("movimientos", 0.75f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___anim_10;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_25, _stringLiteral64EDAAD4F1FD8DA040AC1D668B1AAA2BC274B214, (0.75f), NULL);
	}

IL_0102:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Movimiento::ComprobarSalto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Movimiento_ComprobarSalto_m9A2E9A61AD4B5CDBA604B7AE7D1BD717149CFCAA (Movimiento_tA8F4483E30181F0133EDD52349401845790D63E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64EDAAD4F1FD8DA040AC1D668B1AAA2BC274B214);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.UpArrow) && enSuelo)
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)273), NULL);
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		bool L_1 = __this->___enSuelo_8;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// rb.velocity = new Vector2(rb.velocity.x, fuerzaSalto); // Aplicar fuerza de salto vertical
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___rb_9;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___rb_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_3, NULL);
		float L_5 = L_4.___x_0;
		float L_6 = __this->___fuerzaSalto_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_5, L_6, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_2, L_7, NULL);
		// enSuelo = false;
		__this->___enSuelo_8 = (bool)0;
		// anim.SetFloat("movimientos", 0.75f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___anim_10;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_8, _stringLiteral64EDAAD4F1FD8DA040AC1D668B1AAA2BC274B214, (0.75f), NULL);
		// return true;
		return (bool)1;
	}

IL_0058:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Movimiento::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movimiento__ctor_mB8AD6B1B0E6D703DBD8830C937AB13EE9DDFE8A3 (Movimiento_tA8F4483E30181F0133EDD52349401845790D63E7* __this, const RuntimeMethod* method) 
{
	{
		// public float moveSpeed = 10f;
		__this->___moveSpeed_4 = (10.0f);
		// public float fuerzaSalto = 15f;
		__this->___fuerzaSalto_5 = (15.0f);
		// private bool enSuelo = true;
		__this->___enSuelo_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void perder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void perder_Start_m9693704C1992A5FA696E8E8801F63D4B72DDC3D3 (perder_t81F4B0102143D1686E299A97A414A0BE282A52EA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void perder::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void perder_Update_m21172A4FF4AD2E4F5C32F15D6B90A873C9219BF8 (perder_t81F4B0102143D1686E299A97A414A0BE282A52EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (vidasImagen.sprite == ceroVidas)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___vidasImagen_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1;
		L_1 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_0, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___ceroVidas_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// TerminarJuego();
		perder_TerminarJuego_mAC6A8CF47E6267891D5A1B1989CEFD315BDE56B7(__this, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void perder::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void perder_OnTriggerEnter2D_mA4D4B54225C5F90549F6A0D23BA112A7982902FC (perder_t81F4B0102143D1686E299A97A414A0BE282A52EA* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (vidasImagen.sprite == ceroVidas)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___vidasImagen_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1;
		L_1 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_0, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___ceroVidas_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// TerminarJuego();
		perder_TerminarJuego_mAC6A8CF47E6267891D5A1B1989CEFD315BDE56B7(__this, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void perder::TerminarJuego()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void perder_TerminarJuego_mAC6A8CF47E6267891D5A1B1989CEFD315BDE56B7 (perder_t81F4B0102143D1686E299A97A414A0BE282A52EA* __this, const RuntimeMethod* method) 
{
	{
		// canvasPerdedor.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___canvasPerdedor_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// canvasDatos.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___canvasDatos_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void perder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void perder__ctor_m5381B9C89020F4800430DE166EC6226F9CC954BA (perder_t81F4B0102143D1686E299A97A414A0BE282A52EA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void perseguir::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void perseguir_Start_mC3E55F593DEE251DCD89CEBE193777EF067A98A3 (perseguir_t6A21C99234A84A20448FF9C76323562AE02A6C2E* __this, const RuntimeMethod* method) 
{
	{
		// velocidad = velocidadPersecucion;
		float L_0 = __this->___velocidadPersecucion_5;
		__this->___velocidad_8 = L_0;
		// }
		return;
	}
}
// System.Void perseguir::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void perseguir_Update_m4F7E5ECCD0F5EC1DE1251D327335094DA4087E15 (perseguir_t6A21C99234A84A20448FF9C76323562AE02A6C2E* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 direccion = (objetivo.position - transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___objetivo_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_3, NULL);
		V_1 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		V_0 = L_5;
		// float distanciaAlObjetivo = Vector3.Distance(transform.position, objetivo.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___objetivo_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10;
		L_10 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_7, L_9, NULL);
		// if (distanciaAlObjetivo > distanciaMinima)
		float L_11 = __this->___distanciaMinima_6;
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_008e;
		}
	}
	{
		// if (velocidadPersecucion != velocidad)
		float L_12 = __this->___velocidadPersecucion_5;
		float L_13 = __this->___velocidad_8;
		if ((((float)L_12) == ((float)L_13)))
		{
			goto IL_0061;
		}
	}
	{
		// velocidadPersecucion = velocidad;
		float L_14 = __this->___velocidad_8;
		__this->___velocidadPersecucion_5 = L_14;
	}

IL_0061:
	{
		// transform.position += direccion * velocidadPersecucion * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = L_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		float L_19 = __this->___velocidadPersecucion_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, L_19, NULL);
		float L_21;
		L_21 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_17, L_22, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_23, NULL);
		return;
	}

IL_008e:
	{
		// velocidadPersecucion = velocidadPersecucion * 5;
		float L_24 = __this->___velocidadPersecucion_5;
		__this->___velocidadPersecucion_5 = ((float)il2cpp_codegen_multiply(L_24, (5.0f)));
		// transform.position -= direccion * velocidadPersecucion * Time.deltaTime * distanciaRetroceso;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_0;
		float L_29 = __this->___velocidadPersecucion_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_28, L_29, NULL);
		float L_31;
		L_31 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_30, L_31, NULL);
		float L_33 = __this->___distanciaRetroceso_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_27, L_34, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_35, NULL);
		// }
		return;
	}
}
// System.Void perseguir::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void perseguir__ctor_mB8EB0A066327EA42E1299CA694F3DDDF83C9995A (perseguir_t6A21C99234A84A20448FF9C76323562AE02A6C2E* __this, const RuntimeMethod* method) 
{
	{
		// public float velocidadPersecucion = 5f; // Velocidad con la que el objeto va a perseguir
		__this->___velocidadPersecucion_5 = (5.0f);
		// public float distanciaMinima = 1.0f; // Distancia m?nima para alcanzar al objetivo
		__this->___distanciaMinima_6 = (1.0f);
		// public float distanciaRetroceso = 2.0f; // Distancia para retroceder cuando alcanza al objetivo
		__this->___distanciaRetroceso_7 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void sonido::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sonido_Start_m8C5BE9544BD4079EBED33C237CF0F3C971B00FB9 (sonido_tB58C52292CC6892D52531ADA52005034C68C887F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ambiente = fondo.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___fondo_6;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_0, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___ambiente_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ambiente_13), (void*)L_1);
		// golpes = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___golpes_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___golpes_12), (void*)L_2);
		// if (golpes == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___golpes_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// golpes = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6;
		L_6 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_5, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		__this->___golpes_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___golpes_12), (void*)L_6);
	}

IL_003c:
	{
		// if (ambiente != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___ambiente_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		// ambiente.volume = 0.1f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___ambiente_13;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_9, (0.100000001f), NULL);
	}

IL_005a:
	{
		// golpes.clip = perderPuntos;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___golpes_12;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = __this->___perderPuntos_8;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void sonido::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sonido_Update_mA4DB74DBEDF8C5924623A9A5F2CD394E0C797B2F (sonido_tB58C52292CC6892D52531ADA52005034C68C887F* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.UpArrow))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)273), NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// golpes.clip = salto;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___golpes_12;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___salto_7;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_1, L_2, NULL);
		// golpes.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___golpes_12;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
	}

IL_0028:
	{
		// golpes.volume = 0.2f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___golpes_12;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_4, (0.200000003f), NULL);
		// }
		return;
	}
}
// System.Void sonido::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sonido_OnCollisionEnter2D_m27B418B3FD4CB68982E262EE3EFAA4AB48AE72DA (sonido_tB58C52292CC6892D52531ADA52005034C68C887F* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D86AB0900125091453B2AB054487393A54CE874);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral545FA33023CB940BA325C20B56ED680EAA20E4DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CBA1D6F6D9CA883F2453692DFEF6DF2DBFD4E38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral803BEE15563634E2515FBAB9FC2BDBC74AAD907A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (jugando)
		bool L_0 = __this->___jugando_14;
		if (!L_0)
		{
			goto IL_015b;
		}
	}
	{
		// if (collision.gameObject.tag == "enemy")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_1 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_1, NULL);
		String_t* L_3;
		L_3 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteral5CBA1D6F6D9CA883F2453692DFEF6DF2DBFD4E38, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// golpes.clip = perderPuntos;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___golpes_12;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = __this->___perderPuntos_8;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_5, L_6, NULL);
		// golpes.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___golpes_12;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_7, NULL);
	}

IL_003e:
	{
		// if (collision.gameObject.tag == "Money")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_8 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_8, NULL);
		String_t* L_10;
		L_10 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3, NULL);
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		// golpes.clip = ganarPuntos;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___golpes_12;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = __this->___ganarPuntos_9;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_12, L_13, NULL);
		// golpes.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___golpes_12;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_14, NULL);
	}

IL_0071:
	{
		// if (vidasImagen.sprite == ceroVidas)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___vidasImagen_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16;
		L_16 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_15, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = __this->___ceroVidas_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_00bc;
		}
	}
	{
		// golpes.clip = perderJuego;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_19 = __this->___golpes_12;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_20 = __this->___perderJuego_11;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_19, L_20, NULL);
		// golpes.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = __this->___golpes_12;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_21, NULL);
		// ambiente.volume = 0f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_22 = __this->___ambiente_13;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_22, (0.0f), NULL);
		// jugando = false;
		__this->___jugando_14 = (bool)0;
	}

IL_00bc:
	{
		// if (collision.gameObject.tag == "mortal")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_23 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_23, NULL);
		String_t* L_25;
		L_25 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_24, NULL);
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral545FA33023CB940BA325C20B56ED680EAA20E4DD, NULL);
		if (!L_26)
		{
			goto IL_0106;
		}
	}
	{
		// golpes.clip = perderJuego;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_27 = __this->___golpes_12;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_28 = __this->___perderJuego_11;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_27, L_28, NULL);
		// golpes.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_29 = __this->___golpes_12;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_29, NULL);
		// ambiente.volume = 0f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_30 = __this->___ambiente_13;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_30, (0.0f), NULL);
		// jugando = false;
		__this->___jugando_14 = (bool)0;
	}

IL_0106:
	{
		// if (collision.gameObject.tag == "Puerta")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_31 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_31, NULL);
		String_t* L_33;
		L_33 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_32, NULL);
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral803BEE15563634E2515FBAB9FC2BDBC74AAD907A, NULL);
		if (!L_34)
		{
			goto IL_0179;
		}
	}
	{
		// UnityEngine.Debug.Log("deberia sonar :(");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0D86AB0900125091453B2AB054487393A54CE874, NULL);
		// golpes.clip = ganarJuego;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_35 = __this->___golpes_12;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_36 = __this->___ganarJuego_10;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_35, L_36, NULL);
		// golpes.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_37 = __this->___golpes_12;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_37, NULL);
		// ambiente.volume = 0f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_38 = __this->___ambiente_13;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_38, (0.0f), NULL);
		// jugando = false;
		__this->___jugando_14 = (bool)0;
		return;
	}

IL_015b:
	{
		// if (ambiente != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_39 = __this->___ambiente_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_39, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_40)
		{
			goto IL_0179;
		}
	}
	{
		// ambiente.volume = 0f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_41 = __this->___ambiente_13;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_41, (0.0f), NULL);
	}

IL_0179:
	{
		// }
		return;
	}
}
// System.Void sonido::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sonido_OnTriggerEnter2D_mE26001E2476D8C96BAADD64937383E17BA650D0B (sonido_tB58C52292CC6892D52531ADA52005034C68C887F* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// golpes.clip = ganarPuntos;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___golpes_12;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___ganarPuntos_9;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		// golpes.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___golpes_12;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// }
		return;
	}
}
// System.Void sonido::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sonido__ctor_m48A91E9B6FC39BF78C1D93631F6AF2CC67752852 (sonido_tB58C52292CC6892D52531ADA52005034C68C887F* __this, const RuntimeMethod* method) 
{
	{
		// private bool jugando = true;
		__this->___jugando_14 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UIperder::RecargarEscena()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIperder_RecargarEscena_m4C6451EF37511DE5A75299C099B27DE45CEB85CA (UIperder_tBC06E0BD0B403249F182C1A0E4EFE38B116D58AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Time.timeScale = 1f; // Se restablece el timeScale a 1 para reanudar el tiempo en el juego
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(L_1, NULL);
		// }
		return;
	}
}
// System.Void UIperder::VolverAlMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIperder_VolverAlMenu_m8FFDF761D11E203020733F57B0425D3C093C88A2 (UIperder_tBC06E0BD0B403249F182C1A0E4EFE38B116D58AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f; // Se restablece el timeScale a 1 para reanudar el tiempo en el juego
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// SceneManager.LoadScene(menu);
		String_t* L_0 = __this->___menu_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIperder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIperder__ctor_mB57B1F560C1920100BBF77885A13C6A311B597FB (UIperder_tBC06E0BD0B403249F182C1A0E4EFE38B116D58AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral111FD54C942B253AC7C67C9546AE6A7EFCB04DE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string menu = "elegir nivel";
		__this->___menu_4 = _stringLiteral111FD54C942B253AC7C67C9546AE6A7EFCB04DE6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menu_4), (void*)_stringLiteral111FD54C942B253AC7C67C9546AE6A7EFCB04DE6);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void vidas::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidas_Start_m283F31A350A42B383C78D82258831CC4103139BF (vidas_t86EE93DD377D90103F1E029259426F1D97DFEE21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lista = new Sprite[] { ceroVidas, unaVida, dosVidas, tresVidas };
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_0 = (SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B*)(SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B*)SZArrayNew(SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var, (uint32_t)4);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_1 = L_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___ceroVidas_7;
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)L_2);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_3 = L_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___unaVida_6;
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)L_4);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_5 = L_3;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___dosVidas_5;
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)L_6);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_7 = L_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = __this->___tresVidas_4;
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)L_8);
		__this->___lista_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lista_10), (void*)L_7);
		// }
		return;
	}
}
// System.Void vidas::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidas_Update_m438D936722780EBF166F6313DDF4BDD0C4712422 (vidas_t86EE93DD377D90103F1E029259426F1D97DFEE21* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int puntos = int.Parse(textoPuntos.text);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___textoPuntos_8;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		int32_t L_2;
		L_2 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_1, NULL);
		V_0 = L_2;
		// if (puntos >= 10)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)10))))
		{
			goto IL_0038;
		}
	}
	{
		// if (vida < 3)
		int32_t L_4 = __this->___vida_11;
		if ((((int32_t)L_4) >= ((int32_t)3)))
		{
			goto IL_0032;
		}
	}
	{
		// vida++;
		int32_t L_5 = __this->___vida_11;
		__this->___vida_11 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// puntos = puntos - 10;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)10)));
	}

IL_0032:
	{
		// comprobarVida();
		vidas_comprobarVida_m0865661AC6C172FCB6529C9FCEBAC9BF17BD1437(__this, NULL);
	}

IL_0038:
	{
		// textoPuntos.text = puntos.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___textoPuntos_8;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_8);
		// }
		return;
	}
}
// System.Void vidas::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidas_OnCollisionEnter2D_m1B354461E3B5A135E422AB331EB95A3A1DF5EB51 (vidas_t86EE93DD377D90103F1E029259426F1D97DFEE21* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral545FA33023CB940BA325C20B56ED680EAA20E4DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CBA1D6F6D9CA883F2453692DFEF6DF2DBFD4E38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "enemy")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral5CBA1D6F6D9CA883F2453692DFEF6DF2DBFD4E38, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// if (vida > 0)
		int32_t L_4 = __this->___vida_11;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		// vida--;
		int32_t L_5 = __this->___vida_11;
		__this->___vida_11 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_002e:
	{
		// comprobarVida();
		vidas_comprobarVida_m0865661AC6C172FCB6529C9FCEBAC9BF17BD1437(__this, NULL);
	}

IL_0034:
	{
		// if (collision.gameObject.tag == "mortal")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_6 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_6, NULL);
		String_t* L_8;
		L_8 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_7, NULL);
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral545FA33023CB940BA325C20B56ED680EAA20E4DD, NULL);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		// vida = 0;
		__this->___vida_11 = 0;
		// comprobarVida();
		vidas_comprobarVida_m0865661AC6C172FCB6529C9FCEBAC9BF17BD1437(__this, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void vidas::comprobarVida()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidas_comprobarVida_m0865661AC6C172FCB6529C9FCEBAC9BF17BD1437 (vidas_t86EE93DD377D90103F1E029259426F1D97DFEE21* __this, const RuntimeMethod* method) 
{
	{
		// if (vida >= 0 && vida < lista.Length)
		int32_t L_0 = __this->___vida_11;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1 = __this->___vida_11;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_2 = __this->___lista_10;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		// vidasImagen.sprite = lista[vida];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___vidasImagen_9;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_4 = __this->___lista_10;
		int32_t L_5 = __this->___vida_11;
		int32_t L_6 = L_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_7, NULL);
		return;
	}

IL_0032:
	{
		// vidasImagen.sprite = lista[0];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___vidasImagen_9;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_9 = __this->___lista_10;
		int32_t L_10 = 0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_8, L_11, NULL);
		// }
		return;
	}
}
// System.Void vidas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidas__ctor_mC57F6C3DD4D539DD664C081A9422CA4F9AC3C6AD (vidas_t86EE93DD377D90103F1E029259426F1D97DFEE21* __this, const RuntimeMethod* method) 
{
	{
		// private int vida = 3;
		__this->___vida_11 = 3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void vidas1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidas1_Start_m817C859F9F41AF6B3718F71C1770EC322F109D8A (vidas1_t1DDEA23A09A1945F3B148C81F3BF44347DC901A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lista = new Sprite[] { ceroVidas, unaVida, dosVidas, tresVidas };
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_0 = (SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B*)(SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B*)SZArrayNew(SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var, (uint32_t)4);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_1 = L_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___ceroVidas_7;
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)L_2);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_3 = L_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___unaVida_6;
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)L_4);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_5 = L_3;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___dosVidas_5;
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)L_6);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_7 = L_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = __this->___tresVidas_4;
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)L_8);
		__this->___lista_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lista_10), (void*)L_7);
		// }
		return;
	}
}
// System.Void vidas1::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidas1_OnCollisionEnter2D_m260AB5571B883E130D4B68B3A922EE5D0157E476 (vidas1_t1DDEA23A09A1945F3B148C81F3BF44347DC901A9* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral545FA33023CB940BA325C20B56ED680EAA20E4DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "mortal")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral545FA33023CB940BA325C20B56ED680EAA20E4DD, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// vidasImagen.sprite = lista[0];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___vidasImagen_9;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_5 = __this->___lista_10;
		int32_t L_6 = 0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_7, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void vidas1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidas1__ctor_m952F803857901F97DC6F21EB8D751F69172CA7D5 (vidas1_t1DDEA23A09A1945F3B148C81F3BF44347DC901A9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Sprite; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_Sprite_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
