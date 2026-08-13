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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<GalleryImage>
struct List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<SMS_Selected>
struct List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// GalleryImage[]
struct GalleryImageU5BU5D_tED9BA78A8D4CE17052EB7D2508E945A735E493B3;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// SMS_Selected[]
struct SMS_SelectedU5BU5D_t3083017CD014C18EA851B68426D73096B012F097;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// AmbienceManager
struct AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BlockButton
struct BlockButton_tABCF8C40C3A9B5B31E97CD5708B390FCAC6ED961;
// BlockManager
struct BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChoiceButton
struct ChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23;
// ClickManager
struct ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ConversationManager
struct ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DeleteButton
struct DeleteButton_t83882758AC000A501AD7EF0672341893CA64F6DF;
// DeleteMessage
struct DeleteMessage_t0619DD00B8DF3836A85BBF88D62B578F5841AD79;
// DesuscribeButton
struct DesuscribeButton_t4734112AED076F7133F3694EFCE6F4B42CFFB4E4;
// EscapeButton
struct EscapeButton_t4CADF2F7EC8E4B0E6CCE8A90D9BF1D89D7DFACBF;
// EscapeManager
struct EscapeManager_t240537112B101FFEAB0CFF379C49A2C03A6AEC92;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FTF_SMS
struct FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C;
// FTF_SMS_TMProRef
struct FTF_SMS_TMProRef_tDE4004557BFD6DE14E121AA6CFE1AFA7015E5A60;
// GalleryImage
struct GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A;
// GalleryManager
struct GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InboxButton
struct InboxButton_t3BF8AC5672C440B1C180AA29F514DE881F2F846D;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MinigameManager
struct MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// SMS_Selected
struct SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SelectionManager
struct SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIDrag
struct UIDrag_tB89477B723C8F52A59B4F49BD5381DC6360BC811;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// VHSPostProcess
struct VHSPostProcess_t26DB2633000E465CB27A21C273F82EAEDEF8DF0E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Virus
struct Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D;
// VirusManager
struct VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// BlockManager/<sendMessages>d__6
struct U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989;
// BlockManager/<sendNextMessage>d__7
struct U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// ConversationManager/<Conversation>d__8
struct U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6;
// FTF_SMS/<autoScroll>d__10
struct U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MinigameManager/<FadeOut>d__7
struct U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069;
// MinigameManager/<FadeToScene>d__6
struct U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// VirusManager/<GenerateViruses>d__7
struct U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F;

IL2CPP_EXTERN_C RuntimeClass* AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1449F0F042ECE2C8E67B27A852DADF6772F22538;
IL2CPP_EXTERN_C String_t* _stringLiteral1A475284AAB04FB6FBEBA772DC0F78D528676CB0;
IL2CPP_EXTERN_C String_t* _stringLiteral1D0A22E71B9A133FEE2F9D1303BDF59F626BAFAC;
IL2CPP_EXTERN_C String_t* _stringLiteral26169A2B79EB6B0E3DD133AB8CD6B7139DEEA7FD;
IL2CPP_EXTERN_C String_t* _stringLiteral29EC4AC6AA1DD579AF0C959C08D72E5DF2B698B6;
IL2CPP_EXTERN_C String_t* _stringLiteral2C1F0EF1BE54FF2534C797A82B09F102F44FCA40;
IL2CPP_EXTERN_C String_t* _stringLiteral40528EA412CE70CA8ED17EF40197A928B4DF724A;
IL2CPP_EXTERN_C String_t* _stringLiteral40FA794006A268CE912E992071674CC3673D3FA5;
IL2CPP_EXTERN_C String_t* _stringLiteral5A61DB1BD7DCB74747BA340CEF4F96ECF8959D55;
IL2CPP_EXTERN_C String_t* _stringLiteral738B1515C7C5DDBA97F4CFB232830FEC34CCBE06;
IL2CPP_EXTERN_C String_t* _stringLiteral76B4D5779886AC7D577493B63150DF513AB752AB;
IL2CPP_EXTERN_C String_t* _stringLiteral7A8E33592F555C49A3FDEFF6E3DBA0EADF3DACDD;
IL2CPP_EXTERN_C String_t* _stringLiteral8115868626FE0CA2FA6C48BCC0A3B3D9B3A8198A;
IL2CPP_EXTERN_C String_t* _stringLiteral865312C46CF2D90F54969B8A09A9CD061098C3D6;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8AD2F7611022131611D2FAFADAA6820707EB572F;
IL2CPP_EXTERN_C String_t* _stringLiteral8BBD3504F25B0EE41EECC234A5D6DE00DB59BFFB;
IL2CPP_EXTERN_C String_t* _stringLiteral968433B8D1E0576CB50A6C145AD0453A02CFDE7B;
IL2CPP_EXTERN_C String_t* _stringLiteral9954873244341A108FB5CCEB596FAA45DBBEBCF3;
IL2CPP_EXTERN_C String_t* _stringLiteral9BEF069610342EA81C9B77A957D2BDA81CBAA976;
IL2CPP_EXTERN_C String_t* _stringLiteral9F7E6412D6476D37559A66F4278BF3F97DD721F9;
IL2CPP_EXTERN_C String_t* _stringLiteralA7ED621E5CE912E4540F923D83EB5D8CE391A9E1;
IL2CPP_EXTERN_C String_t* _stringLiteralA954A8B811874DBFEEF9E39B85DF2371FCBDBB8A;
IL2CPP_EXTERN_C String_t* _stringLiteralA975B1F8166947D02BBAC69F6BA654323A555C99;
IL2CPP_EXTERN_C String_t* _stringLiteralAAE3C34B0A7E77BFD4B2DEADE26470222246CCE9;
IL2CPP_EXTERN_C String_t* _stringLiteralAD1593612008C55A309B996CC3F659237FF6B1DD;
IL2CPP_EXTERN_C String_t* _stringLiteralAE45979404C2FE8F50A3F2A0E32658836577B721;
IL2CPP_EXTERN_C String_t* _stringLiteralB37AF39A4B0F0606FCC055FED03B684BDE96C9FB;
IL2CPP_EXTERN_C String_t* _stringLiteralB5B5737583AE5531044C38D62D8A8912135EA37D;
IL2CPP_EXTERN_C String_t* _stringLiteralBAA40E54C8C56F0D8CF69CC9CE9490DAD87A39CF;
IL2CPP_EXTERN_C String_t* _stringLiteralCB62B594B3E118E5F73BF15C3509B3CA37D69561;
IL2CPP_EXTERN_C String_t* _stringLiteralCE698F59B5ED816FBD69B4C5A4C8AAD72DE06A7B;
IL2CPP_EXTERN_C String_t* _stringLiteralD19E728753666B25EEFD7E530D3738BE04E4BB7B;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DE3186800CA39FC44CCEA8CD4D31CF9B4B4821;
IL2CPP_EXTERN_C String_t* _stringLiteralD5DDB21BC388BA573DB0D3FAACE3192CAAE4A239;
IL2CPP_EXTERN_C String_t* _stringLiteralDCE1BAC6834911F64BCA8B81FF4C77CBAC3097B3;
IL2CPP_EXTERN_C String_t* _stringLiteralE1BAD47C0D8817E0AA0476C3C1FF14AC49D2B722;
IL2CPP_EXTERN_C String_t* _stringLiteralE3BACD5AA50B8F16067E82006144FB266A03F4DD;
IL2CPP_EXTERN_C String_t* _stringLiteralE852FC768A72F8C8EF1897F818DE5EE673D9EFDA;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0BF26134FBDF667EC6F4EB2B50B740FD4C6B68;
IL2CPP_EXTERN_C String_t* _stringLiteralF0A330F69421E0D43A74E4538967AFF7F6E9581A;
IL2CPP_EXTERN_C String_t* _stringLiteralF4D5A740AC0365B986071436B03183F043C018E4;
IL2CPP_EXTERN_C String_t* _stringLiteralF4E8F7E5E555A547E5FAB34006CBB2722B55A2C2;
IL2CPP_EXTERN_C String_t* _stringLiteralF821F9F0C904A1349689BB0564FA915D6957E4EC;
IL2CPP_EXTERN_C String_t* _stringLiteralFA583CE509EE6086AB60EAFFE467B4603BDE4545;
IL2CPP_EXTERN_C String_t* _stringLiteralFD285955D885E167E70C35F4941F09BB881C225B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConversationManager_U3CConversationU3Eb__8_0_m47C469FF245129AC3EAB32BD9D2E8E75801B54C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConversationManager_U3CConversationU3Eb__8_1_mE307858FD9177B488C5945A0D1CF3977D537CFA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConversationManager_U3CConversationU3Eb__8_2_m366EBD3DD65F6ABE12CAEB23A67428181D1DE41F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConversationManager_U3CConversationU3Eb__8_3_m0A5B76FE47C727DD761D39188394FC41C402A898_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m66ACAECE1FBED7F0DE8F624944078AB2DE160DFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC976379EEB0C86EBB555A9481C4C3E9A5EA0C49D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2C0A5EDBFD54F375A295ED128F04C694AFFDCEC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC0823A9E2392D92786BAE4A81DE9F86A351C0D6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m77281323F0C13FA3B6CE26D6C6D46C1B46A3B044_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAE27E90180D799D0C02447BFBCE53F2D22B25892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFTF_SMS_TMProRef_tDE4004557BFD6DE14E121AA6CFE1AFA7015E5A60_m815967EBBDC3FD0358FF121DF7CFF2BD00160CC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E_m1244A94AA85CC9520E19C7427CBDF581D8F80255_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m00A30A49C0E708B2A2ACA8D9AB9098C70A45F4C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisVirus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D_m6FF613F5D883B4A6F9463802D7A9B1E2FDFF2C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m332CC359216343C4A263E8D677981EB1877CAB14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m852431AF14AFA75F68BABBA191F8FB33B9134F7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6C2C0E42CF882306FD6CEADE019019E8035C1820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8D5216098E1F379249574FE2CC6D9EAFF6FB4699_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m947EBE6FD5748EF60DCF8654D9EC5F324DDDF06A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCFEEED8BBAFFF413BBBBA9C53AF3055C2DF6E0A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5E453387D964AC60C85D5752DA14EAAD16B2232A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m762D0B137F238310E76E453688B31A69A59915DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m6162FCCC8B6637B7AEA038E03188100E658D941E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mAD40467C626946086F023ABF3A89F42BFB0005F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4D335BC6056D830D4EF23C35EB3B8BED633E33F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF063647D24754A76C48232C1E8B2987DEFA2F736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_m1775A25C60C9437630501553F4E51EEECD8E98A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A_m720E5CA20F28DAC611FD06569EE8D03EE01EEFB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m7F1DD5BABFF2FD21B5A8489E3E85084CC9B27BAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisVirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33_m0A6F4866230E07B61A4655C4E60A1A27C70E0148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CConversationU3Ed__8_System_Collections_IEnumerator_Reset_m609D5B32C61F46F72DB4443DFEBFE260A90CE212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeOutU3Ed__7_System_Collections_IEnumerator_Reset_m5D92E00C0718B32828F85A41E8C2E7EAEB61E8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeToSceneU3Ed__6_System_Collections_IEnumerator_Reset_m6ED6D3944B72708D0ADEB84FA9728C2B7B37A3D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGenerateVirusesU3Ed__7_System_Collections_IEnumerator_Reset_m03EEE5A64B2D40BF330FB3112DF3E9B5123C464E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CautoScrollU3Ed__10_System_Collections_IEnumerator_Reset_mA12A1D4DA54AC931C8B350FFDB32A722232CA500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CsendMessagesU3Ed__6_System_Collections_IEnumerator_Reset_m974285FC425499C6C8C4B9E0979573296BDCE2F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CsendNextMessageU3Ed__7_System_Collections_IEnumerator_Reset_m290A86542AE3EAB1CF4AC8F1C9B2F6E78A6E866E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

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

// System.Collections.Generic.List`1<GalleryImage>
struct List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GalleryImageU5BU5D_tED9BA78A8D4CE17052EB7D2508E945A735E493B3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GalleryImageU5BU5D_tED9BA78A8D4CE17052EB7D2508E945A735E493B3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SMS_Selected>
struct List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SMS_SelectedU5BU5D_t3083017CD014C18EA851B68426D73096B012F097* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SMS_SelectedU5BU5D_t3083017CD014C18EA851B68426D73096B012F097* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// BlockManager/<sendMessages>d__6
struct U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989  : public RuntimeObject
{
	// System.Int32 BlockManager/<sendMessages>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BlockManager/<sendMessages>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BlockManager BlockManager/<sendMessages>d__6::<>4__this
	BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* ___U3CU3E4__this_2;
};

// BlockManager/<sendNextMessage>d__7
struct U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16  : public RuntimeObject
{
	// System.Int32 BlockManager/<sendNextMessage>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BlockManager/<sendNextMessage>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BlockManager BlockManager/<sendNextMessage>d__7::<>4__this
	BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* ___U3CU3E4__this_2;
	// System.String BlockManager/<sendNextMessage>d__7::message
	String_t* ___message_3;
};

// ConversationManager/<Conversation>d__8
struct U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6  : public RuntimeObject
{
	// System.Int32 ConversationManager/<Conversation>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ConversationManager/<Conversation>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ConversationManager ConversationManager/<Conversation>d__8::<>4__this
	ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* ___U3CU3E4__this_2;
};

// FTF_SMS/<autoScroll>d__10
struct U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137  : public RuntimeObject
{
	// System.Int32 FTF_SMS/<autoScroll>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FTF_SMS/<autoScroll>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FTF_SMS FTF_SMS/<autoScroll>d__10::<>4__this
	FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* ___U3CU3E4__this_2;
};

// MinigameManager/<FadeOut>d__7
struct U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069  : public RuntimeObject
{
	// System.Int32 MinigameManager/<FadeOut>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MinigameManager/<FadeOut>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MinigameManager MinigameManager/<FadeOut>d__7::<>4__this
	MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* ___U3CU3E4__this_2;
	// System.Single MinigameManager/<FadeOut>d__7::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;
};

// MinigameManager/<FadeToScene>d__6
struct U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB  : public RuntimeObject
{
	// System.Int32 MinigameManager/<FadeToScene>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MinigameManager/<FadeToScene>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MinigameManager MinigameManager/<FadeToScene>d__6::<>4__this
	MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* ___U3CU3E4__this_2;
	// System.String MinigameManager/<FadeToScene>d__6::sceneName
	String_t* ___sceneName_3;
};

// VirusManager/<GenerateViruses>d__7
struct U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F  : public RuntimeObject
{
	// System.Int32 VirusManager/<GenerateViruses>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VirusManager/<GenerateViruses>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// VirusManager VirusManager/<GenerateViruses>d__7::<>4__this
	VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* ___U3CU3E4__this_2;
	// System.Int32 VirusManager/<GenerateViruses>d__7::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// System.Collections.Generic.List`1/Enumerator<GalleryImage>
struct Enumerator_t66EB77A87913A12E30BD3A56EC9C8F055BAEC258 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<SMS_Selected>
struct Enumerator_t40555DE6EBF7656986C64897077B285195BC6428 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<tilt>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CtiltU3Ek__BackingField_29;
	// UnityEngine.PenStatus UnityEngine.EventSystems.PointerEventData::<penStatus>k__BackingField
	int32_t ___U3CpenStatusU3Ek__BackingField_30;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_31;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_32;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_33;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_34;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// AmbienceManager
struct AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource AmbienceManager::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_5;
};

struct AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8_StaticFields
{
	// AmbienceManager AmbienceManager::Instance
	AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8* ___Instance_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BlockButton
struct BlockButton_tABCF8C40C3A9B5B31E97CD5708B390FCAC6ED961  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BlockManager BlockButton::blockManager
	BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* ___blockManager_4;
};

// BlockManager
struct BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.String> BlockManager::messages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___messages_4;
	// System.Boolean BlockManager::blocked
	bool ___blocked_5;
	// UnityEngine.Coroutine BlockManager::coroutineNextMessage
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___coroutineNextMessage_6;
	// UnityEngine.Coroutine BlockManager::coroutineSendMessages
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___coroutineSendMessages_7;
	// MinigameManager BlockManager::minigameManager
	MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* ___minigameManager_8;
};

// ChoiceButton
struct ChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ConversationManager ChoiceButton::conversationManager
	ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* ___conversationManager_4;
	// System.Int32 ChoiceButton::optionIndex
	int32_t ___optionIndex_5;
	// TMPro.TextMeshProUGUI ChoiceButton::buttonText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___buttonText_6;
};

// ClickManager
struct ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip ClickManager::clickSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clickSound_5;
	// UnityEngine.AudioSource ClickManager::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_6;
};

struct ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_StaticFields
{
	// ClickManager ClickManager::Instance
	ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* ___Instance_4;
};

// ConversationManager
struct ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ConversationManager::choicePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___choicePanel_4;
	// UnityEngine.GameObject ConversationManager::choiceButtonPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___choiceButtonPrefab_5;
	// UnityEngine.Transform ConversationManager::Content_Parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Content_Parent_6;
	// MinigameManager ConversationManager::minigameManager
	MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* ___minigameManager_7;
	// ClickManager ConversationManager::clickManager
	ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* ___clickManager_8;
	// System.Boolean ConversationManager::playerHasChosen
	bool ___playerHasChosen_9;
	// System.Int32 ConversationManager::chosenOption
	int32_t ___chosenOption_10;
};

// DeleteButton
struct DeleteButton_t83882758AC000A501AD7EF0672341893CA64F6DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DeleteButton::galleryManagerRef
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___galleryManagerRef_4;
};

// DeleteMessage
struct DeleteMessage_t0619DD00B8DF3836A85BBF88D62B578F5841AD79  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DeleteMessage::selectionManagerRef
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectionManagerRef_4;
};

// DesuscribeButton
struct DesuscribeButton_t4734112AED076F7133F3694EFCE6F4B42CFFB4E4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DesuscribeButton::confirmButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___confirmButton_4;
};

// EscapeButton
struct EscapeButton_t4CADF2F7EC8E4B0E6CCE8A90D9BF1D89D7DFACBF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform EscapeButton::Content_Parent
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___Content_Parent_4;
	// EscapeManager EscapeButton::escapeManager
	EscapeManager_t240537112B101FFEAB0CFF379C49A2C03A6AEC92* ___escapeManager_5;
};

// EscapeManager
struct EscapeManager_t240537112B101FFEAB0CFF379C49A2C03A6AEC92  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 EscapeManager::clicks
	int32_t ___clicks_4;
	// System.Int32 EscapeManager::clicksToEscape
	int32_t ___clicksToEscape_5;
	// EscapeButton EscapeManager::escapeButton
	EscapeButton_t4CADF2F7EC8E4B0E6CCE8A90D9BF1D89D7DFACBF* ___escapeButton_6;
	// MinigameManager EscapeManager::minigameManager
	MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* ___minigameManager_7;
	// ClickManager EscapeManager::clickManager
	ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* ___clickManager_8;
};

// FTF_SMS
struct FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform FTF_SMS::Content_Parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Content_Parent_5;
	// UnityEngine.GameObject FTF_SMS::PlayerSMS_Ins
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlayerSMS_Ins_6;
	// UnityEngine.GameObject FTF_SMS::ContactSMS_Ins
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ContactSMS_Ins_7;
	// UnityEngine.GameObject FTF_SMS::SystemMSG_Ins
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SystemMSG_Ins_8;
	// UnityEngine.UI.ScrollRect FTF_SMS::ScrollView_Rect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___ScrollView_Rect_9;
	// System.Boolean FTF_SMS::estabaAbajo
	bool ___estabaAbajo_10;
};

struct FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields
{
	// FTF_SMS FTF_SMS::instance
	FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* ___instance_4;
};

// FTF_SMS_TMProRef
struct FTF_SMS_TMProRef_tDE4004557BFD6DE14E121AA6CFE1AFA7015E5A60  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI FTF_SMS_TMProRef::Text_Reference
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___Text_Reference_4;
};

// GalleryImage
struct GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GalleryManager GalleryImage::galleryManager
	GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* ___galleryManager_4;
	// UnityEngine.GameObject GalleryImage::selectionOverlay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectionOverlay_5;
};

// GalleryManager
struct GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GalleryManager::remainingImages
	int32_t ___remainingImages_4;
	// MinigameManager GalleryManager::minigameManager
	MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* ___minigameManager_5;
	// System.Collections.Generic.List`1<GalleryImage> GalleryManager::images
	List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* ___images_6;
};

// InboxButton
struct InboxButton_t3BF8AC5672C440B1C180AA29F514DE881F2F846D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject InboxButton::contentPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___contentPanel_4;
	// UnityEngine.GameObject InboxButton::inboxPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inboxPanel_5;
};

// MinigameManager
struct MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CanvasGroup MinigameManager::fadePanel
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___fadePanel_4;
	// System.Single MinigameManager::fadeDuration
	float ___fadeDuration_5;
	// UnityEngine.CanvasGroup MinigameManager::buttonGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___buttonGroup_6;
	// System.String MinigameManager::nextScene
	String_t* ___nextScene_7;
};

// SMS_Selected
struct SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SelectionManager SMS_Selected::selectionManager
	SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* ___selectionManager_4;
	// UnityEngine.UI.Image SMS_Selected::bubbleBackground
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___bubbleBackground_5;
	// UnityEngine.Color SMS_Selected::originalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___originalColor_6;
	// UnityEngine.Color SMS_Selected::selectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___selectedColor_7;
};

// SelectionManager
struct SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<SMS_Selected> SelectionManager::messages
	List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* ___messages_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIDrag
struct UIDrag_tB89477B723C8F52A59B4F49BD5381DC6360BC811  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 UIDrag::offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset_4;
};

// VHSPostProcess
struct VHSPostProcess_t26DB2633000E465CB27A21C273F82EAEDEF8DF0E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material VHSPostProcess::VHSMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___VHSMaterial_4;
};

// Virus
struct Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform Virus::Content_Parent
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___Content_Parent_4;
	// UnityEngine.RectTransform Virus::myRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___myRect_5;
	// UnityEngine.Vector3 Virus::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_6;
	// System.Boolean Virus::hasTargetPosition
	bool ___hasTargetPosition_7;
	// System.Single Virus::speed
	float ___speed_8;
	// VirusManager Virus::virusManager
	VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* ___virusManager_9;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> Virus::sprites
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___sprites_10;
	// System.Int32 Virus::spriteChosen
	int32_t ___spriteChosen_11;
};

// VirusManager
struct VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject VirusManager::virusPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___virusPrefab_4;
	// UnityEngine.RectTransform VirusManager::Content_Parent
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___Content_Parent_5;
	// System.Int32 VirusManager::virusesToGenerate
	int32_t ___virusesToGenerate_6;
	// System.Int32 VirusManager::virusesAlive
	int32_t ___virusesAlive_7;
	// System.Int32 VirusManager::virusesGenerated
	int32_t ___virusesGenerated_8;
	// MinigameManager VirusManager::minigameManager
	MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* ___minigameManager_9;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void BlockManager::blockContact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockManager_blockContact_m34208F4FED8C19D6C2A61C3F8ED1A5E27E98BC82 (BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<MinigameManager>()
inline MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D (const RuntimeMethod* method)
{
	return ((  MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BlockManager::sendMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BlockManager_sendMessages_mCD0E8C9EEF4954D7BE299D382698A9386E63BAA1 (BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void BlockManager/<sendMessages>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsendMessagesU3Ed__6__ctor_mCC72F1751AD4EE98F864123BF2FA93F2C10A00BE (U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void BlockManager/<sendNextMessage>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsendNextMessageU3Ed__7__ctor_mC457FCDCE541DC50337F18A7555E5B3D8044B8ED (U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___routine0, const RuntimeMethod* method) ;
// System.Void FTF_SMS::SendSystemMSG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FTF_SMS_SendSystemMSG_mEB215E25FF7611D6F68F8EC39941FDD7030C5FEE (FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* __this, const RuntimeMethod* method) ;
// System.Void MinigameManager::siguienteEscena()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinigameManager_siguienteEscena_mF9DE2E812853F9CFBB8CCB0E6F947D03E60FD781 (MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Collections.IEnumerator BlockManager::sendNextMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BlockManager_sendNextMessage_mF6E313C0581EB4992B28EABFCF4804D252C33E54 (BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void FTF_SMS::AddMessage(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2 (FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* __this, bool ___Sender_Player0, String_t* ___Message1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<ConversationManager>()
inline ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* Object_FindObjectOfType_TisConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A_m720E5CA20F28DAC611FD06569EE8D03EE01EEFB3 (const RuntimeMethod* method)
{
	return ((  ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void ConversationManager::ChoiceSelected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversationManager_ChoiceSelected_m55D61F30E8300A359635FF32182B58D1FF4008C1 (ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* __this, int32_t ___option0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<ClickManager>()
inline ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* Object_FindObjectOfType_TisClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_m1775A25C60C9437630501553F4E51EEECD8E98A1 (const RuntimeMethod* method)
{
	return ((  ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ConversationManager::Conversation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConversationManager_Conversation_m16B82A4A39091746D23CFF71BB39E38293ADD54D (ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* __this, const RuntimeMethod* method) ;
// System.Void ConversationManager/<Conversation>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConversationU3Ed__8__ctor_m4A65876D1D57A8669D9D8F67D21BB72293BCEB4F (U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ChoiceButton>()
inline ChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23* GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ConversationManager::ShowChoices(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversationManager_ShowChoices_m59D3158420B3AFC47BEB6D709605549E076A0042 (ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* __this, String_t* ___option1Text0, String_t* ___option2Text1, String_t* ___option3Text2, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate0, const RuntimeMethod* method) ;
// System.Void ConversationManager::ClearChoices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversationManager_ClearChoices_m99DB673FFFCEB6929385F6FA58C773B2E5F5A153 (ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GalleryManager>()
inline GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* GameObject_GetComponent_TisGalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E_m1244A94AA85CC9520E19C7427CBDF581D8F80255 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GalleryManager::deleteSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GalleryManager_deleteSelected_m5243840D0C2DD6DCD9A483660E497E15B4CA8B9B (GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<SelectionManager>()
inline SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* GameObject_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m00A30A49C0E708B2A2ACA8D9AB9098C70A45F4C8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void SelectionManager::deleteSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionManager_deleteSelected_m755D1DC449888DD882A5B885C1EC9280ECFD1B98 (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void EscapeManager::manageClicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EscapeManager_manageClicks_m5C3CC6C99450F92FCCC53DAFB88F29960158609B (EscapeManager_t240537112B101FFEAB0CFF379C49A2C03A6AEC92* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void EscapeButton::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EscapeButton_Move_mB833453B588CEC93C72EA8B5B15A122206C52B52 (EscapeButton_t4CADF2F7EC8E4B0E6CCE8A90D9BF1D89D7DFACBF* __this, const RuntimeMethod* method) ;
// System.Void FTF_SMS::actualizarEstadoScroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FTF_SMS_actualizarEstadoScroll_m1B03CEAA620C9F4D49A8965999EECF14450536A2 (FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<FTF_SMS_TMProRef>()
inline FTF_SMS_TMProRef_tDE4004557BFD6DE14E121AA6CFE1AFA7015E5A60* GameObject_GetComponent_TisFTF_SMS_TMProRef_tDE4004557BFD6DE14E121AA6CFE1AFA7015E5A60_m815967EBBDC3FD0358FF121DF7CFF2BD00160CC4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FTF_SMS_TMProRef_tDE4004557BFD6DE14E121AA6CFE1AFA7015E5A60* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Collections.IEnumerator FTF_SMS::autoScroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FTF_SMS_autoScroll_mCCD9947AB0CAECB2E26B8434F68C8F56294C2C17 (FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* __this, const RuntimeMethod* method) ;
// System.Void FTF_SMS/<autoScroll>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CautoScrollU3Ed__10__ctor_mA47CFA5C9D79AFD38031488E5670CE67D11C7A4A (U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewport()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_viewport_m85092216DD476F77E78F5CE50F9C4E70063ECCF9_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScrollRect_get_verticalNormalizedPosition_m4FE766F04272C1805FDE2A4B72D80F6190841FA1 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_ForceUpdateCanvases_m6ECDBC5E85ADA3301BB20611753C45769F15EB51 (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void GalleryManager::handleSelection(GalleryImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GalleryManager_handleSelection_mA2AF47862A5FCB7651EEFD5887A6053D2AF46FE8 (GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* __this, GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* ___image0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<GalleryImage>::Contains(T)
inline bool List_1_Contains_mCFEEED8BBAFFF413BBBBA9C53AF3055C2DF6E0A4 (List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* __this, GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F*, GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<GalleryImage>::Remove(T)
inline bool List_1_Remove_m6162FCCC8B6637B7AEA038E03188100E658D941E (List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* __this, GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F*, GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void GalleryImage::setSelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GalleryImage_setSelected_m21E2CDBAFC61B8FC83EA5C2771326FB107CAE4E2 (GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* __this, bool ___selected0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GalleryImage>::Add(T)
inline void List_1_Add_m852431AF14AFA75F68BABBA191F8FB33B9134F7C_inline (List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* __this, GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F*, GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GalleryImage>::GetEnumerator()
inline Enumerator_t66EB77A87913A12E30BD3A56EC9C8F055BAEC258 List_1_GetEnumerator_m5E453387D964AC60C85D5752DA14EAAD16B2232A (List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t66EB77A87913A12E30BD3A56EC9C8F055BAEC258 (*) (List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<GalleryImage>::Dispose()
inline void Enumerator_Dispose_m66ACAECE1FBED7F0DE8F624944078AB2DE160DFC (Enumerator_t66EB77A87913A12E30BD3A56EC9C8F055BAEC258* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t66EB77A87913A12E30BD3A56EC9C8F055BAEC258*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<GalleryImage>::get_Current()
inline GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* Enumerator_get_Current_m77281323F0C13FA3B6CE26D6C6D46C1B46A3B044_inline (Enumerator_t66EB77A87913A12E30BD3A56EC9C8F055BAEC258* __this, const RuntimeMethod* method)
{
	return ((  GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* (*) (Enumerator_t66EB77A87913A12E30BD3A56EC9C8F055BAEC258*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<GalleryImage>::MoveNext()
inline bool Enumerator_MoveNext_m2C0A5EDBFD54F375A295ED128F04C694AFFDCEC6 (Enumerator_t66EB77A87913A12E30BD3A56EC9C8F055BAEC258* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t66EB77A87913A12E30BD3A56EC9C8F055BAEC258*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<GalleryImage>::Clear()
inline void List_1_Clear_m8D5216098E1F379249574FE2CC6D9EAFF6FB4699_inline (List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<GalleryImage>::.ctor()
inline void List_1__ctor_mF063647D24754A76C48232C1E8B2987DEFA2F736 (List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.IEnumerator MinigameManager::FadeToScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MinigameManager_FadeToScene_m6EA3F51E949ED907F92B41059BC3A3BBED83CB9F (MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* __this, String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void MinigameManager/<FadeToScene>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToSceneU3Ed__6__ctor_m3EBD3949A7D5E34452F12DDF4BCC174023FE48C2 (U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void MinigameManager/<FadeOut>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__7__ctor_mCAAAF9972A2D7C1F315EAF27FA8C6A2C95E0D38B (U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MinigameManager::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MinigameManager_FadeOut_m035FE2200B4FE4A4B581076079D73A79DAFC3C54 (MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<SMS_Selected>::Contains(T)
inline bool List_1_Contains_m947EBE6FD5748EF60DCF8654D9EC5F324DDDF06A (List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* __this, SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4*, SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<SMS_Selected>::Remove(T)
inline bool List_1_Remove_mAD40467C626946086F023ABF3A89F42BFB0005F0 (List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* __this, SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4*, SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void SMS_Selected::setSelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMS_Selected_setSelected_m735EDEA1832D2C188BAB7750549CD221EA404785 (SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* __this, bool ___selected0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SMS_Selected>::Add(T)
inline void List_1_Add_m332CC359216343C4A263E8D677981EB1877CAB14_inline (List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* __this, SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4*, SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<SMS_Selected>::GetEnumerator()
inline Enumerator_t40555DE6EBF7656986C64897077B285195BC6428 List_1_GetEnumerator_m762D0B137F238310E76E453688B31A69A59915DE (List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t40555DE6EBF7656986C64897077B285195BC6428 (*) (List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SMS_Selected>::Dispose()
inline void Enumerator_Dispose_mC976379EEB0C86EBB555A9481C4C3E9A5EA0C49D (Enumerator_t40555DE6EBF7656986C64897077B285195BC6428* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t40555DE6EBF7656986C64897077B285195BC6428*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<SMS_Selected>::get_Current()
inline SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* Enumerator_get_Current_mAE27E90180D799D0C02447BFBCE53F2D22B25892_inline (Enumerator_t40555DE6EBF7656986C64897077B285195BC6428* __this, const RuntimeMethod* method)
{
	return ((  SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* (*) (Enumerator_t40555DE6EBF7656986C64897077B285195BC6428*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SMS_Selected>::MoveNext()
inline bool Enumerator_MoveNext_mC0823A9E2392D92786BAE4A81DE9F86A351C0D6E (Enumerator_t40555DE6EBF7656986C64897077B285195BC6428* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t40555DE6EBF7656986C64897077B285195BC6428*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SMS_Selected>::Clear()
inline void List_1_Clear_m6C2C0E42CF882306FD6CEADE019019E8035C1820_inline (List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SMS_Selected>::.ctor()
inline void List_1__ctor_m4D335BC6056D830D4EF23C35EB3B8BED633E33F7 (List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<SelectionManager>()
inline SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* Object_FindObjectOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m7F1DD5BABFF2FD21B5A8489E3E85084CC9B27BAD (const RuntimeMethod* method)
{
	return ((  SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void SelectionManager::handleSelection(SMS_Selected)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionManager_handleSelection_mD8F1ADBD8B07BA5B2CD383A645B492C7DAC31034 (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<VirusManager>()
inline VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* Object_FindObjectOfType_TisVirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33_m0A6F4866230E07B61A4655C4E60A1A27C70E0148 (const RuntimeMethod* method)
{
	return ((  VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void Virus::ChooseRandomTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Virus_ChooseRandomTarget_m471ECBDC0EC83A3B5880B53B2A53EC2F5A6CCE3E (Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void Virus::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Virus_Move_m8E4F6F02BE4913D01605EB21CB30D03879D15962 (Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* __this, const RuntimeMethod* method) ;
// System.Boolean Virus::HasReachedTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Virus_HasReachedTarget_m26B884E56CF22C51948BF8A9DA27123B243D4453 (Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void VirusManager::virusDied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirusManager_virusDied_m4112BA017501C88004CE17DB6B830285B71E683E (VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VirusManager::GenerateViruses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VirusManager_GenerateViruses_mF57A2C76233F7CF63422257917AFC0B7C2841D02 (VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* __this, const RuntimeMethod* method) ;
// System.Void VirusManager/<GenerateViruses>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateVirusesU3Ed__7__ctor_m13CCB997704FEA6DD23DF8AB73FF66BC86EE49D8 (U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<Virus>()
inline Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* GameObject_GetComponent_TisVirus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D_m6FF613F5D883B4A6F9463802D7A9B1E2FDFF2C49 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Virus::startGame(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Virus_startGame_mC36E9F0257A7DB1901BD15FFF088B424394D5D4D (Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___contentParent0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void AmbienceManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbienceManager_Awake_m40387D0BC20768B003011359F600348FE4AABEDE (AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance != null && Instance != this)
		AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8* L_0 = ((AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8_StaticFields*)il2cpp_codegen_static_fields_for(AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8* L_2 = ((AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8_StaticFields*)il2cpp_codegen_static_fields_for(AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// return;
		return;
	}

IL_0026:
	{
		// Instance = this;
		((AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8_StaticFields*)il2cpp_codegen_static_fields_for(AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8_StaticFields*)il2cpp_codegen_static_fields_for(AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_5, NULL);
		// }
		return;
	}
}
// System.Void AmbienceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmbienceManager__ctor_m37B0F8FF2E1F5CB7D499BA8B8DFFAC83C882E2C4 (AmbienceManager_t8980F60828B95CEDC741207AC3FD03541022C7B8* __this, const RuntimeMethod* method) 
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
// System.Void BlockButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockButton_OnClick_mBEE87A77C828AAACE50B57BFAC4310E4DE2E9D5B (BlockButton_tABCF8C40C3A9B5B31E97CD5708B390FCAC6ED961* __this, const RuntimeMethod* method) 
{
	{
		// blockManager.blockContact();
		BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* L_0 = __this->___blockManager_4;
		BlockManager_blockContact_m34208F4FED8C19D6C2A61C3F8ED1A5E27E98BC82(L_0, NULL);
		// }
		return;
	}
}
// System.Void BlockButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockButton__ctor_mFC26BEE87BFB025A1749E51B2D36F6BB88D77D08 (BlockButton_tABCF8C40C3A9B5B31E97CD5708B390FCAC6ED961* __this, const RuntimeMethod* method) 
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
// System.Void BlockManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockManager_Start_m945D41BAD6B2EA31862FA73CEDB5AD0401ADCD27 (BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1449F0F042ECE2C8E67B27A852DADF6772F22538);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D0A22E71B9A133FEE2F9D1303BDF59F626BAFAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// minigameManager = FindObjectOfType<MinigameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_0;
		L_0 = Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D(Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D_RuntimeMethod_var);
		__this->___minigameManager_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___minigameManager_8), (void*)L_0);
		// if (minigameManager == null)
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_1 = __this->___minigameManager_8;
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.LogError("NO se encontr? MinigameManager");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral1D0A22E71B9A133FEE2F9D1303BDF59F626BAFAC, NULL);
		goto IL_002f;
	}

IL_0025:
	{
		// Debug.Log("MinigameManager encontrado");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1449F0F042ECE2C8E67B27A852DADF6772F22538, NULL);
	}

IL_002f:
	{
		// coroutineSendMessages = StartCoroutine(sendMessages());
		RuntimeObject* L_3;
		L_3 = BlockManager_sendMessages_mCD0E8C9EEF4954D7BE299D382698A9386E63BAA1(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		__this->___coroutineSendMessages_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coroutineSendMessages_7), (void*)L_4);
		// }
		return;
	}
}
// System.Collections.IEnumerator BlockManager::sendMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BlockManager_sendMessages_mCD0E8C9EEF4954D7BE299D382698A9386E63BAA1 (BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989* L_0 = (U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989*)il2cpp_codegen_object_new(U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989_il2cpp_TypeInfo_var);
		U3CsendMessagesU3Ed__6__ctor_mCC72F1751AD4EE98F864123BF2FA93F2C10A00BE(L_0, 0, NULL);
		U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator BlockManager::sendNextMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BlockManager_sendNextMessage_mF6E313C0581EB4992B28EABFCF4804D252C33E54 (BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16* L_0 = (U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16*)il2cpp_codegen_object_new(U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16_il2cpp_TypeInfo_var);
		U3CsendNextMessageU3Ed__7__ctor_mC457FCDCE541DC50337F18A7555E5B3D8044B8ED(L_0, 0, NULL);
		U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16* L_2 = L_1;
		String_t* L_3 = ___message0;
		L_2->___message_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___message_3), (void*)L_3);
		return L_2;
	}
}
// System.Void BlockManager::blockContact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockManager_blockContact_m34208F4FED8C19D6C2A61C3F8ED1A5E27E98BC82 (BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C1F0EF1BE54FF2534C797A82B09F102F44FCA40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738B1515C7C5DDBA97F4CFB232830FEC34CCBE06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F7E6412D6476D37559A66F4278BF3F97DD721F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("BLOQUEANDO CONTACTO");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2C1F0EF1BE54FF2534C797A82B09F102F44FCA40, NULL);
		// blocked = true;
		__this->___blocked_5 = (bool)1;
		// if (coroutineSendMessages != null) {
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->___coroutineSendMessages_7;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// StopCoroutine(coroutineSendMessages);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___coroutineSendMessages_7;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
		// Debug.Log("Parada cola");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral738B1515C7C5DDBA97F4CFB232830FEC34CCBE06, NULL);
	}

IL_002f:
	{
		// if (coroutineNextMessage != null) {
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2 = __this->___coroutineNextMessage_6;
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		// StopCoroutine(coroutineNextMessage);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3 = __this->___coroutineNextMessage_6;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_3, NULL);
		// Debug.Log("Parada mensaje actual");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9F7E6412D6476D37559A66F4278BF3F97DD721F9, NULL);
	}

IL_004d:
	{
		// FTF_SMS.instance.SendSystemMSG();
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_4 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_SendSystemMSG_mEB215E25FF7611D6F68F8EC39941FDD7030C5FEE(L_4, NULL);
		// minigameManager.siguienteEscena();
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_5 = __this->___minigameManager_8;
		MinigameManager_siguienteEscena_mF9DE2E812853F9CFBB8CCB0E6F947D03E60FD781(L_5, NULL);
		// }
		return;
	}
}
// System.Void BlockManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockManager__ctor_m7A85199602171D3E28D73AC819BF1B563BFFFCAC (BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* __this, const RuntimeMethod* method) 
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
// System.Void BlockManager/<sendMessages>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsendMessagesU3Ed__6__ctor_mCC72F1751AD4EE98F864123BF2FA93F2C10A00BE (U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BlockManager/<sendMessages>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsendMessagesU3Ed__6_System_IDisposable_Dispose_m28E553024F3F5B6124167396223CB9EF27776957 (U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BlockManager/<sendMessages>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CsendMessagesU3Ed__6_MoveNext_mFDAB5BB546AA0B0CC3B234CFFF1024AF6E885789 (U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0070;
	}

IL_0020:
	{
		// coroutineNextMessage = StartCoroutine(sendNextMessage(messages[0]));
		BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* L_4 = V_1;
		BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* L_5 = V_1;
		BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* L_6 = V_1;
		BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* L_7 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = L_7->___messages_4;
		String_t* L_9;
		L_9 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_8, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		RuntimeObject* L_10;
		L_10 = BlockManager_sendNextMessage_mF6E313C0581EB4992B28EABFCF4804D252C33E54(L_6, L_9, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_5, L_10, NULL);
		L_4->___coroutineNextMessage_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___coroutineNextMessage_6), (void*)L_11);
		// yield return coroutineNextMessage;
		BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* L_12 = V_1;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13 = L_12->___coroutineNextMessage_6;
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0053:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (blocked)
		BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* L_14 = V_1;
		bool L_15 = L_14->___blocked_5;
		if (!L_15)
		{
			goto IL_0064;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0064:
	{
		// messages.RemoveAt(0);
		BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* L_16 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = L_16->___messages_4;
		List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_17, 0, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
	}

IL_0070:
	{
		// while (messages.Count > 0 && !blocked) {
		BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* L_18 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = L_18->___messages_4;
		int32_t L_20;
		L_20 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_19, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* L_21 = V_1;
		bool L_22 = L_21->___blocked_5;
		if (!L_22)
		{
			goto IL_0020;
		}
	}

IL_0086:
	{
		// }
		return (bool)0;
	}
}
// System.Object BlockManager/<sendMessages>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CsendMessagesU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF198C39EC185CB7EDA761EADC9309FC179B7E274 (U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BlockManager/<sendMessages>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsendMessagesU3Ed__6_System_Collections_IEnumerator_Reset_m974285FC425499C6C8C4B9E0979573296BDCE2F7 (U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CsendMessagesU3Ed__6_System_Collections_IEnumerator_Reset_m974285FC425499C6C8C4B9E0979573296BDCE2F7_RuntimeMethod_var)));
	}
}
// System.Object BlockManager/<sendMessages>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CsendMessagesU3Ed__6_System_Collections_IEnumerator_get_Current_mF686D75981F9F01550C12D2478253DFE85B0095D (U3CsendMessagesU3Ed__6_t5B83672BE55192BC1CB3A83509F3AA052CAE2989* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void BlockManager/<sendNextMessage>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsendNextMessageU3Ed__7__ctor_mC457FCDCE541DC50337F18A7555E5B3D8044B8ED (U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BlockManager/<sendNextMessage>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsendNextMessageU3Ed__7_System_IDisposable_Dispose_m2AD84EF9C34B5B4377C805D542315F9627FA5C76 (U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BlockManager/<sendNextMessage>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CsendNextMessageU3Ed__7_MoveNext_mEB0CC31F440DC906F1FE9CCC9F4C3DC7FB522227 (U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float seconds = Random.Range(0.5f, 4f);
		float L_4;
		L_4 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.5f), (4.0f), NULL);
		V_2 = L_4;
		// yield return new WaitForSeconds(seconds);
		float L_5 = V_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0043:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!blocked)
		BlockManager_tABA3666A0787B1958C2DFCF274424414703898BE* L_7 = V_1;
		bool L_8 = L_7->___blocked_5;
		if (L_8)
		{
			goto IL_0063;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(true, message);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_9 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		String_t* L_10 = __this->___message_3;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_9, (bool)1, L_10, NULL);
	}

IL_0063:
	{
		// }
		return (bool)0;
	}
}
// System.Object BlockManager/<sendNextMessage>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CsendNextMessageU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE71EF6FA054FD5890350A1870B31B0AB96B67D77 (U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BlockManager/<sendNextMessage>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsendNextMessageU3Ed__7_System_Collections_IEnumerator_Reset_m290A86542AE3EAB1CF4AC8F1C9B2F6E78A6E866E (U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CsendNextMessageU3Ed__7_System_Collections_IEnumerator_Reset_m290A86542AE3EAB1CF4AC8F1C9B2F6E78A6E866E_RuntimeMethod_var)));
	}
}
// System.Object BlockManager/<sendNextMessage>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CsendNextMessageU3Ed__7_System_Collections_IEnumerator_get_Current_m3C6092725444B007CCB3C499BB5505D72C345CC6 (U3CsendNextMessageU3Ed__7_t99B643BF75681AD1F74C4A66C827844A5B35BC16* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void ChoiceButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceButton_Awake_mBBD460613333D5A735F1534B7A9AF59D30135561 (ChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A_m720E5CA20F28DAC611FD06569EE8D03EE01EEFB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// conversationManager = FindObjectOfType<ConversationManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_0;
		L_0 = Object_FindObjectOfType_TisConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A_m720E5CA20F28DAC611FD06569EE8D03EE01EEFB3(Object_FindObjectOfType_TisConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A_m720E5CA20F28DAC611FD06569EE8D03EE01EEFB3_RuntimeMethod_var);
		__this->___conversationManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___conversationManager_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ChoiceButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceButton_OnClick_m42B725427B9388D66F4A34B337A1811FF3383385 (ChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23* __this, const RuntimeMethod* method) 
{
	{
		// conversationManager.ChoiceSelected(optionIndex);
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_0 = __this->___conversationManager_4;
		int32_t L_1 = __this->___optionIndex_5;
		ConversationManager_ChoiceSelected_m55D61F30E8300A359635FF32182B58D1FF4008C1(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ChoiceButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceButton__ctor_m966F0AF4FFB1CA3E5153D824E8A4F033E895585C (ChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23* __this, const RuntimeMethod* method) 
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
// System.Void ClickManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickManager_Awake_mBE07C763ABCB1AC9F034D1181204DBC666DD3487 (ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance != null && Instance != this)
		ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* L_0 = ((ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_StaticFields*)il2cpp_codegen_static_fields_for(ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* L_2 = ((ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_StaticFields*)il2cpp_codegen_static_fields_for(ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// return;
		return;
	}

IL_0026:
	{
		// Instance = this;
		((ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_StaticFields*)il2cpp_codegen_static_fields_for(ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_StaticFields*)il2cpp_codegen_static_fields_for(ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_5, NULL);
		// }
		return;
	}
}
// System.Void ClickManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickManager_Start_mD0CE672FCEE64F2A43E853AC8CF358D9038AE8A2 (ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void ClickManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickManager_Update_m051E973E5DE83FCD6575BF1E438019F36024E529 (ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		// audioSource.pitch = Random.Range(0.9f, 1.1f); // Variaci?n del 5%
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audioSource_6;
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.899999976f), (1.10000002f), NULL);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_1, L_2, NULL);
		// audioSource.PlayOneShot(clickSound);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___audioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___clickSound_5;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void ClickManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickManager__ctor_mD875A79B64B75CB78F80C47F1796285FD87257A8 (ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* __this, const RuntimeMethod* method) 
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
// System.Void ConversationManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversationManager_Start_m39B90F8CB20CCEEECD8EEC465EBB7CC766E3955F (ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_m1775A25C60C9437630501553F4E51EEECD8E98A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// clickManager = FindObjectOfType<ClickManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* L_0;
		L_0 = Object_FindObjectOfType_TisClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_m1775A25C60C9437630501553F4E51EEECD8E98A1(Object_FindObjectOfType_TisClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_m1775A25C60C9437630501553F4E51EEECD8E98A1_RuntimeMethod_var);
		__this->___clickManager_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickManager_8), (void*)L_0);
		// clickManager.enabled = false;
		ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* L_1 = __this->___clickManager_8;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// minigameManager = FindObjectOfType<MinigameManager>();
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_2;
		L_2 = Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D(Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D_RuntimeMethod_var);
		__this->___minigameManager_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___minigameManager_7), (void*)L_2);
		// StartCoroutine(Conversation());
		RuntimeObject* L_3;
		L_3 = ConversationManager_Conversation_m16B82A4A39091746D23CFF71BB39E38293ADD54D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ConversationManager::Conversation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConversationManager_Conversation_m16B82A4A39091746D23CFF71BB39E38293ADD54D (ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6* L_0 = (U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6*)il2cpp_codegen_object_new(U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6_il2cpp_TypeInfo_var);
		U3CConversationU3Ed__8__ctor_m4A65876D1D57A8669D9D8F67D21BB72293BCEB4F(L_0, 0, NULL);
		U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ConversationManager::ShowChoices(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversationManager_ShowChoices_m59D3158420B3AFC47BEB6D709605549E076A0042 (ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* __this, String_t* ___option1Text0, String_t* ___option2Text1, String_t* ___option3Text2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// GameObject option1 = Instantiate(choiceButtonPrefab, Content_Parent.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___choiceButtonPrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___Content_Parent_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// option1.transform.SetParent(Content_Parent.transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___Content_Parent_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_7, L_9, (bool)0, NULL);
		// GameObject option2 = Instantiate(choiceButtonPrefab, Content_Parent.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___choiceButtonPrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___Content_Parent_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_10, L_13, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_15;
		// option2.transform.SetParent(Content_Parent.transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___Content_Parent_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_17, L_19, (bool)0, NULL);
		// GameObject option3 = Instantiate(choiceButtonPrefab, Content_Parent.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___choiceButtonPrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___Content_Parent_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_20, L_23, L_24, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_1 = L_25;
		// option3.transform.SetParent(Content_Parent.transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___Content_Parent_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_27, L_29, (bool)0, NULL);
		// option1.GetComponent<ChoiceButton>().buttonText.text = option1Text;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_6;
		ChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23* L_31;
		L_31 = GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231(L_30, GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231_RuntimeMethod_var);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_32 = L_31->___buttonText_6;
		String_t* L_33 = ___option1Text0;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_32, L_33);
		// option2.GetComponent<ChoiceButton>().buttonText.text = option2Text;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_0;
		ChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23* L_35;
		L_35 = GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231(L_34, GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231_RuntimeMethod_var);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_36 = L_35->___buttonText_6;
		String_t* L_37 = ___option2Text1;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_36, L_37);
		// option3.GetComponent<ChoiceButton>().buttonText.text = option3Text;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_1;
		ChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23* L_39;
		L_39 = GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231(L_38, GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231_RuntimeMethod_var);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_40 = L_39->___buttonText_6;
		String_t* L_41 = ___option3Text2;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_40, L_41);
		// option1.GetComponent<ChoiceButton>().optionIndex = 0;
		ChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23* L_42;
		L_42 = GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231(L_30, GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231_RuntimeMethod_var);
		L_42->___optionIndex_5 = 0;
		// option2.GetComponent<ChoiceButton>().optionIndex = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_0;
		ChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23* L_44;
		L_44 = GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231(L_43, GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231_RuntimeMethod_var);
		L_44->___optionIndex_5 = 1;
		// option3.GetComponent<ChoiceButton>().optionIndex = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = V_1;
		ChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23* L_46;
		L_46 = GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231(L_45, GameObject_GetComponent_TisChoiceButton_tF3C70D117FE7275DE19B7A8520BD3B0B4790BF23_m21D11129DE8C35E25DF345B2D4E51377810FA231_RuntimeMethod_var);
		L_46->___optionIndex_5 = 2;
		// }
		return;
	}
}
// System.Void ConversationManager::ChoiceSelected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversationManager_ChoiceSelected_m55D61F30E8300A359635FF32182B58D1FF4008C1 (ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* __this, int32_t ___option0, const RuntimeMethod* method) 
{
	{
		// chosenOption = option;
		int32_t L_0 = ___option0;
		__this->___chosenOption_10 = L_0;
		// playerHasChosen = true;
		__this->___playerHasChosen_9 = (bool)1;
		// }
		return;
	}
}
// System.Void ConversationManager::ClearChoices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversationManager_ClearChoices_m99DB673FFFCEB6929385F6FA58C773B2E5F5A153 (ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// foreach (Transform child in Content_Parent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Content_Parent_6;
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0023_1;
			}

IL_000e_1:
			{
				// foreach (Transform child in Content_Parent)
				RuntimeObject* L_5 = V_0;
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// Destroy(child.gameObject);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
			}

IL_0023_1:
			{
				// foreach (Transform child in Content_Parent)
				RuntimeObject* L_8 = V_0;
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void ConversationManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversationManager__ctor_mC0D345CBC55C90448B8D1AE2A1E7749F97BA0219 (ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* __this, const RuntimeMethod* method) 
{
	{
		// private int chosenOption = -1;
		__this->___chosenOption_10 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean ConversationManager::<Conversation>b__8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversationManager_U3CConversationU3Eb__8_0_m47C469FF245129AC3EAB32BD9D2E8E75801B54C4 (ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => playerHasChosen);
		bool L_0 = __this->___playerHasChosen_9;
		return L_0;
	}
}
// System.Boolean ConversationManager::<Conversation>b__8_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversationManager_U3CConversationU3Eb__8_1_mE307858FD9177B488C5945A0D1CF3977D537CFA3 (ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => playerHasChosen);
		bool L_0 = __this->___playerHasChosen_9;
		return L_0;
	}
}
// System.Boolean ConversationManager::<Conversation>b__8_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversationManager_U3CConversationU3Eb__8_2_m366EBD3DD65F6ABE12CAEB23A67428181D1DE41F (ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => playerHasChosen);
		bool L_0 = __this->___playerHasChosen_9;
		return L_0;
	}
}
// System.Boolean ConversationManager::<Conversation>b__8_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversationManager_U3CConversationU3Eb__8_3_m0A5B76FE47C727DD761D39188394FC41C402A898 (ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => playerHasChosen);
		bool L_0 = __this->___playerHasChosen_9;
		return L_0;
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
// System.Void ConversationManager/<Conversation>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConversationU3Ed__8__ctor_m4A65876D1D57A8669D9D8F67D21BB72293BCEB4F (U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ConversationManager/<Conversation>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConversationU3Ed__8_System_IDisposable_Dispose_mB719B3DA1BA807D5CF9A8C62A3AF56C1A346F481 (U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ConversationManager/<Conversation>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CConversationU3Ed__8_MoveNext_m2705FE71F8F3A0BBD8C221AE33227A4E647877FC (U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversationManager_U3CConversationU3Eb__8_0_m47C469FF245129AC3EAB32BD9D2E8E75801B54C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversationManager_U3CConversationU3Eb__8_1_mE307858FD9177B488C5945A0D1CF3977D537CFA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversationManager_U3CConversationU3Eb__8_2_m366EBD3DD65F6ABE12CAEB23A67428181D1DE41F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversationManager_U3CConversationU3Eb__8_3_m0A5B76FE47C727DD761D39188394FC41C402A898_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A475284AAB04FB6FBEBA772DC0F78D528676CB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26169A2B79EB6B0E3DD133AB8CD6B7139DEEA7FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29EC4AC6AA1DD579AF0C959C08D72E5DF2B698B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40528EA412CE70CA8ED17EF40197A928B4DF724A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40FA794006A268CE912E992071674CC3673D3FA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A61DB1BD7DCB74747BA340CEF4F96ECF8959D55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76B4D5779886AC7D577493B63150DF513AB752AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A8E33592F555C49A3FDEFF6E3DBA0EADF3DACDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8115868626FE0CA2FA6C48BCC0A3B3D9B3A8198A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral865312C46CF2D90F54969B8A09A9CD061098C3D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD2F7611022131611D2FAFADAA6820707EB572F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968433B8D1E0576CB50A6C145AD0453A02CFDE7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9954873244341A108FB5CCEB596FAA45DBBEBCF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BEF069610342EA81C9B77A957D2BDA81CBAA976);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA954A8B811874DBFEEF9E39B85DF2371FCBDBB8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA975B1F8166947D02BBAC69F6BA654323A555C99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE45979404C2FE8F50A3F2A0E32658836577B721);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB37AF39A4B0F0606FCC055FED03B684BDE96C9FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5B5737583AE5531044C38D62D8A8912135EA37D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAA40E54C8C56F0D8CF69CC9CE9490DAD87A39CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB62B594B3E118E5F73BF15C3509B3CA37D69561);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE698F59B5ED816FBD69B4C5A4C8AAD72DE06A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD19E728753666B25EEFD7E530D3738BE04E4BB7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DE3186800CA39FC44CCEA8CD4D31CF9B4B4821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5DDB21BC388BA573DB0D3FAACE3192CAAE4A239);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCE1BAC6834911F64BCA8B81FF4C77CBAC3097B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1BAD47C0D8817E0AA0476C3C1FF14AC49D2B722);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE852FC768A72F8C8EF1897F818DE5EE673D9EFDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0BF26134FBDF667EC6F4EB2B50B740FD4C6B68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0A330F69421E0D43A74E4538967AFF7F6E9581A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4D5A740AC0365B986071436B03183F043C018E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4E8F7E5E555A547E5FAB34006CBB2722B55A2C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF821F9F0C904A1349689BB0564FA915D6957E4EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA583CE509EE6086AB60EAFFE467B4603BDE4545);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD285955D885E167E70C35F4941F09BB881C225B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0076;
			}
			case 1:
			{
				goto IL_0096;
			}
			case 2:
			{
				goto IL_00f1;
			}
			case 3:
			{
				goto IL_012d;
			}
			case 4:
			{
				goto IL_0198;
			}
			case 5:
			{
				goto IL_0236;
			}
			case 6:
			{
				goto IL_0291;
			}
			case 7:
			{
				goto IL_02cd;
			}
			case 8:
			{
				goto IL_0338;
			}
			case 9:
			{
				goto IL_03d7;
			}
			case 10:
			{
				goto IL_0433;
			}
			case 11:
			{
				goto IL_048f;
			}
			case 12:
			{
				goto IL_04cc;
			}
			case 13:
			{
				goto IL_0538;
			}
			case 14:
			{
				goto IL_05d7;
			}
			case 15:
			{
				goto IL_0633;
			}
			case 16:
			{
				goto IL_068f;
			}
			case 17:
			{
				goto IL_06eb;
			}
			case 18:
			{
				goto IL_0747;
			}
			case 19:
			{
				goto IL_07a3;
			}
			case 20:
			{
				goto IL_07e0;
			}
			case 21:
			{
				goto IL_084c;
			}
			case 22:
			{
				goto IL_08eb;
			}
			case 23:
			{
				goto IL_0947;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0076:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0096:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FTF_SMS.instance.AddMessage(true, "Hello honey, what do you need?");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_4 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_4, (bool)1, _stringLiteral26169A2B79EB6B0E3DD133AB8CD6B7139DEEA7FD, NULL);
		// Transform ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_5 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_5->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_7 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7->___Content_Parent_5;
		int32_t L_9;
		L_9 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_6, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11;
		L_11 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_10, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_11, (bool)0, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_12 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_12, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00f1:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ShowChoices("We need to delete some apps.", "Let's talk apps.", "You have too many apps.");
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_13 = V_1;
		ConversationManager_ShowChoices_m59D3158420B3AFC47BEB6D709605549E076A0042(L_13, _stringLiteralD5DDB21BC388BA573DB0D3FAACE3192CAAE4A239, _stringLiteralE852FC768A72F8C8EF1897F818DE5EE673D9EFDA, _stringLiteralFA583CE509EE6086AB60EAFFE467B4603BDE4545, NULL);
		// yield return new WaitUntil(() => playerHasChosen);
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_14 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_15 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_15, L_14, (intptr_t)((void*)ConversationManager_U3CConversationU3Eb__8_0_m47C469FF245129AC3EAB32BD9D2E8E75801B54C4_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_16 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_16, L_15, NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_012d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ClearChoices();
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_17 = V_1;
		ConversationManager_ClearChoices_m99DB673FFFCEB6929385F6FA58C773B2E5F5A153(L_17, NULL);
		// if (chosenOption == 0)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_18 = V_1;
		int32_t L_19 = L_18->___chosenOption_10;
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(false, "We need to delete some apps.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_20 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_20, (bool)0, _stringLiteralD5DDB21BC388BA573DB0D3FAACE3192CAAE4A239, NULL);
		goto IL_017f;
	}

IL_0154:
	{
		// else if (chosenOption == 1)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_21 = V_1;
		int32_t L_22 = L_21->___chosenOption_10;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_016f;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(false, "Let's talk apps.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_23 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_23, (bool)0, _stringLiteralE852FC768A72F8C8EF1897F818DE5EE673D9EFDA, NULL);
		goto IL_017f;
	}

IL_016f:
	{
		// FTF_SMS.instance.AddMessage(false, "You have too many apps.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_24 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_24, (bool)0, _stringLiteralFA583CE509EE6086AB60EAFFE467B4603BDE4545, NULL);
	}

IL_017f:
	{
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_25 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_25, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_25);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_0198:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (chosenOption == 0)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_26 = V_1;
		int32_t L_27 = L_26->___chosenOption_10;
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(true, "Oh, why's that?");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_28 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_28, (bool)1, _stringLiteral1A475284AAB04FB6FBEBA772DC0F78D528676CB0, NULL);
		goto IL_01e4;
	}

IL_01b9:
	{
		// else if (chosenOption == 1)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_29 = V_1;
		int32_t L_30 = L_29->___chosenOption_10;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_01d4;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(true, "Oh, okay love.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_31 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_31, (bool)1, _stringLiteral8115868626FE0CA2FA6C48BCC0A3B3D9B3A8198A, NULL);
		goto IL_01e4;
	}

IL_01d4:
	{
		// FTF_SMS.instance.AddMessage(true, "They came with my phone.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_32 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_32, (bool)1, _stringLiteralF4D5A740AC0365B986071436B03183F043C018E4, NULL);
	}

IL_01e4:
	{
		// ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_33 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = L_33->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_35 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = L_35->___Content_Parent_5;
		int32_t L_37;
		L_37 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_36, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_34, ((int32_t)il2cpp_codegen_subtract(L_37, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_39;
		L_39 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_38, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_39, (bool)0, NULL);
		// chosenOption = -1; // Resetear la opci?n elegida
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_40 = V_1;
		L_40->___chosenOption_10 = (-1);
		// playerHasChosen = false; // Resetear la elecci?n del jugador
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_41 = V_1;
		L_41->___playerHasChosen_9 = (bool)0;
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_42 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_42, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_42);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_0236:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FTF_SMS.instance.AddMessage(true, "Which do we delete?");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_43 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_43, (bool)1, _stringLiteralA975B1F8166947D02BBAC69F6BA654323A555C99, NULL);
		// ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_44 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = L_44->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_46 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = L_46->___Content_Parent_5;
		int32_t L_48;
		L_48 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_47, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_45, ((int32_t)il2cpp_codegen_subtract(L_48, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_50;
		L_50 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_49, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_50, (bool)0, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_51 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_51, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_51);
		__this->___U3CU3E1__state_0 = 6;
		return (bool)1;
	}

IL_0291:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ShowChoices("Chess has to leave.", "What about Crossy Road?", "Maybe Candy Crush?");
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_52 = V_1;
		ConversationManager_ShowChoices_m59D3158420B3AFC47BEB6D709605549E076A0042(L_52, _stringLiteralF4E8F7E5E555A547E5FAB34006CBB2722B55A2C2, _stringLiteralFD285955D885E167E70C35F4941F09BB881C225B, _stringLiteralD3DE3186800CA39FC44CCEA8CD4D31CF9B4B4821, NULL);
		// yield return new WaitUntil(() => playerHasChosen);
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_53 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_54 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_54, L_53, (intptr_t)((void*)ConversationManager_U3CConversationU3Eb__8_1_mE307858FD9177B488C5945A0D1CF3977D537CFA3_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_55 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_55, L_54, NULL);
		__this->___U3CU3E2__current_1 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_55);
		__this->___U3CU3E1__state_0 = 7;
		return (bool)1;
	}

IL_02cd:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ClearChoices();
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_56 = V_1;
		ConversationManager_ClearChoices_m99DB673FFFCEB6929385F6FA58C773B2E5F5A153(L_56, NULL);
		// if (chosenOption == 0)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_57 = V_1;
		int32_t L_58 = L_57->___chosenOption_10;
		if (L_58)
		{
			goto IL_02f4;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(false, "Chess has to leave.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_59 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_59, (bool)0, _stringLiteralF4E8F7E5E555A547E5FAB34006CBB2722B55A2C2, NULL);
		goto IL_031f;
	}

IL_02f4:
	{
		// else if (chosenOption == 1)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_60 = V_1;
		int32_t L_61 = L_60->___chosenOption_10;
		if ((!(((uint32_t)L_61) == ((uint32_t)1))))
		{
			goto IL_030f;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(false, "What about Crossy Road?");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_62 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_62, (bool)0, _stringLiteralFD285955D885E167E70C35F4941F09BB881C225B, NULL);
		goto IL_031f;
	}

IL_030f:
	{
		// FTF_SMS.instance.AddMessage(false, "Maybe Candy Crush?");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_63 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_63, (bool)0, _stringLiteralD3DE3186800CA39FC44CCEA8CD4D31CF9B4B4821, NULL);
	}

IL_031f:
	{
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_64 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_64, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_64);
		__this->___U3CU3E1__state_0 = 8;
		return (bool)1;
	}

IL_0338:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (chosenOption == 0)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_65 = V_1;
		int32_t L_66 = L_65->___chosenOption_10;
		if (L_66)
		{
			goto IL_0359;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(true, "But I love to play it with my friends. :(");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_67 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_67, (bool)1, _stringLiteral40FA794006A268CE912E992071674CC3673D3FA5, NULL);
		goto IL_0384;
	}

IL_0359:
	{
		// else if (chosenOption == 1)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_68 = V_1;
		int32_t L_69 = L_68->___chosenOption_10;
		if ((!(((uint32_t)L_69) == ((uint32_t)1))))
		{
			goto IL_0374;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(true, "That's a really fun game, I don't want to.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_70 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_70, (bool)1, _stringLiteralB37AF39A4B0F0606FCC055FED03B684BDE96C9FB, NULL);
		goto IL_0384;
	}

IL_0374:
	{
		// FTF_SMS.instance.AddMessage(true, "But I'm about to beat Margarita's score...!");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_71 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_71, (bool)1, _stringLiteralF0A330F69421E0D43A74E4538967AFF7F6E9581A, NULL);
	}

IL_0384:
	{
		// ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_72 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73 = L_72->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_74 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75 = L_74->___Content_Parent_5;
		int32_t L_76;
		L_76 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_75, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_73, ((int32_t)il2cpp_codegen_subtract(L_76, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_78;
		L_78 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_77, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_78, (bool)0, NULL);
		// chosenOption = -1; // Resetear la opci?n elegida
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_79 = V_1;
		L_79->___chosenOption_10 = (-1);
		// playerHasChosen = false; // Resetear la elecci?n del jugador
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_80 = V_1;
		L_80->___playerHasChosen_9 = (bool)0;
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_81 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_81, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_81);
		__this->___U3CU3E1__state_0 = ((int32_t)9);
		return (bool)1;
	}

IL_03d7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FTF_SMS.instance.AddMessage(true, "I don't want to delete it dearie, I have fun with it.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_82 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_82, (bool)1, _stringLiteralCE698F59B5ED816FBD69B4C5A4C8AAD72DE06A7B, NULL);
		// ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_83 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84 = L_83->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_85 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86 = L_85->___Content_Parent_5;
		int32_t L_87;
		L_87 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_86, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_84, ((int32_t)il2cpp_codegen_subtract(L_87, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_89;
		L_89 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_88, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_89, (bool)0, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_90 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_90, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_90);
		__this->___U3CU3E1__state_0 = ((int32_t)10);
		return (bool)1;
	}

IL_0433:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FTF_SMS.instance.AddMessage(true, "Maybe we could delete Facebook?");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_91 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_91, (bool)1, _stringLiteralDCE1BAC6834911F64BCA8B81FF4C77CBAC3097B3, NULL);
		// ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_92 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93 = L_92->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_94 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95 = L_94->___Content_Parent_5;
		int32_t L_96;
		L_96 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_95, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97;
		L_97 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_93, ((int32_t)il2cpp_codegen_subtract(L_96, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_98;
		L_98 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_97, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_98, (bool)0, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_99 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_99, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_99);
		__this->___U3CU3E1__state_0 = ((int32_t)11);
		return (bool)1;
	}

IL_048f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ShowChoices("Don't you use it to see how the family is doing?", "I'm surprised you proposed that.", "And lose your cat forum?");
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_100 = V_1;
		ConversationManager_ShowChoices_m59D3158420B3AFC47BEB6D709605549E076A0042(L_100, _stringLiteral29EC4AC6AA1DD579AF0C959C08D72E5DF2B698B6, _stringLiteralE1BAD47C0D8817E0AA0476C3C1FF14AC49D2B722, _stringLiteralEB0BF26134FBDF667EC6F4EB2B50B740FD4C6B68, NULL);
		// yield return new WaitUntil(() => playerHasChosen);
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_101 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_102 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_102, L_101, (intptr_t)((void*)ConversationManager_U3CConversationU3Eb__8_2_m366EBD3DD65F6ABE12CAEB23A67428181D1DE41F_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_103 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_103, L_102, NULL);
		__this->___U3CU3E2__current_1 = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_103);
		__this->___U3CU3E1__state_0 = ((int32_t)12);
		return (bool)1;
	}

IL_04cc:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ClearChoices();
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_104 = V_1;
		ConversationManager_ClearChoices_m99DB673FFFCEB6929385F6FA58C773B2E5F5A153(L_104, NULL);
		// if (chosenOption == 0)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_105 = V_1;
		int32_t L_106 = L_105->___chosenOption_10;
		if (L_106)
		{
			goto IL_04f3;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(false, "Don't you use it to see how the family is doing?");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_107 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_107, (bool)0, _stringLiteral29EC4AC6AA1DD579AF0C959C08D72E5DF2B698B6, NULL);
		goto IL_051e;
	}

IL_04f3:
	{
		// else if (chosenOption == 1)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_108 = V_1;
		int32_t L_109 = L_108->___chosenOption_10;
		if ((!(((uint32_t)L_109) == ((uint32_t)1))))
		{
			goto IL_050e;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(false, "I'm surprised you proposed that.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_110 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_110, (bool)0, _stringLiteralE1BAD47C0D8817E0AA0476C3C1FF14AC49D2B722, NULL);
		goto IL_051e;
	}

IL_050e:
	{
		// FTF_SMS.instance.AddMessage(false, "And lose your cat forum?");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_111 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_111, (bool)0, _stringLiteralEB0BF26134FBDF667EC6F4EB2B50B740FD4C6B68, NULL);
	}

IL_051e:
	{
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_112 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_112, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_112);
		__this->___U3CU3E1__state_0 = ((int32_t)13);
		return (bool)1;
	}

IL_0538:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (chosenOption == 0)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_113 = V_1;
		int32_t L_114 = L_113->___chosenOption_10;
		if (L_114)
		{
			goto IL_0559;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(true, "I do sweetie, but I wouldn't need it if you just visited more, would I?");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_115 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_115, (bool)1, _stringLiteral8AD2F7611022131611D2FAFADAA6820707EB572F, NULL);
		goto IL_0584;
	}

IL_0559:
	{
		// else if (chosenOption == 1)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_116 = V_1;
		int32_t L_117 = L_116->___chosenOption_10;
		if ((!(((uint32_t)L_117) == ((uint32_t)1))))
		{
			goto IL_0574;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(true, "It sends me too many notifications, it wakes me up every night.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_118 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_118, (bool)1, _stringLiteral9954873244341A108FB5CCEB596FAA45DBBEBCF3, NULL);
		goto IL_0584;
	}

IL_0574:
	{
		// FTF_SMS.instance.AddMessage(true, "Oh, that's okay. Enrique's cat is just a spoiled rotten creature.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_119 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_119, (bool)1, _stringLiteral968433B8D1E0576CB50A6C145AD0453A02CFDE7B, NULL);
	}

IL_0584:
	{
		// ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_120 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_121 = L_120->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_122 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123 = L_122->___Content_Parent_5;
		int32_t L_124;
		L_124 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_123, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125;
		L_125 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_121, ((int32_t)il2cpp_codegen_subtract(L_124, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_126;
		L_126 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_125, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_126, (bool)0, NULL);
		// chosenOption = -1; // Resetear la opci?n elegida
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_127 = V_1;
		L_127->___chosenOption_10 = (-1);
		// playerHasChosen = false; // Resetear la elecci?n del jugador
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_128 = V_1;
		L_128->___playerHasChosen_9 = (bool)0;
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_129 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_129, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_129;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_129);
		__this->___U3CU3E1__state_0 = ((int32_t)14);
		return (bool)1;
	}

IL_05d7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FTF_SMS.instance.AddMessage(true, "Also, I just don't need that many news in my life.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_130 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_130, (bool)1, _stringLiteral76B4D5779886AC7D577493B63150DF513AB752AB, NULL);
		// ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_131 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_132 = L_131->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_133 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_134 = L_133->___Content_Parent_5;
		int32_t L_135;
		L_135 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_134, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_136;
		L_136 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_132, ((int32_t)il2cpp_codegen_subtract(L_135, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_137;
		L_137 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_136, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_137, (bool)0, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_138 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_138, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_138;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_138);
		__this->___U3CU3E1__state_0 = ((int32_t)15);
		return (bool)1;
	}

IL_0633:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FTF_SMS.instance.AddMessage(true, "They're always saying horrible stuff about the world.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_139 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_139, (bool)1, _stringLiteralAE45979404C2FE8F50A3F2A0E32658836577B721, NULL);
		// ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_140 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_141 = L_140->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_142 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_143 = L_142->___Content_Parent_5;
		int32_t L_144;
		L_144 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_143, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_145;
		L_145 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_141, ((int32_t)il2cpp_codegen_subtract(L_144, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_146;
		L_146 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_145, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_146, (bool)0, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_147 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_147, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_147;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_147);
		__this->___U3CU3E1__state_0 = ((int32_t)16);
		return (bool)1;
	}

IL_068f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FTF_SMS.instance.AddMessage(true, "And I just want to crochet in peace and watch cat videos.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_148 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_148, (bool)1, _stringLiteral9BEF069610342EA81C9B77A957D2BDA81CBAA976, NULL);
		// ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_149 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_150 = L_149->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_151 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_152 = L_151->___Content_Parent_5;
		int32_t L_153;
		L_153 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_152, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_154;
		L_154 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_150, ((int32_t)il2cpp_codegen_subtract(L_153, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_155;
		L_155 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_154, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_155, (bool)0, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_156 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_156, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_156;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_156);
		__this->___U3CU3E1__state_0 = ((int32_t)17);
		return (bool)1;
	}

IL_06eb:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FTF_SMS.instance.AddMessage(true, "I don't need my phone for anything else.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_157 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_157, (bool)1, _stringLiteral5A61DB1BD7DCB74747BA340CEF4F96ECF8959D55, NULL);
		// ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_158 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_159 = L_158->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_160 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_161 = L_160->___Content_Parent_5;
		int32_t L_162;
		L_162 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_161, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_163;
		L_163 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_159, ((int32_t)il2cpp_codegen_subtract(L_162, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_164;
		L_164 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_163, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_164, (bool)0, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_165 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_165, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_165;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_165);
		__this->___U3CU3E1__state_0 = ((int32_t)18);
		return (bool)1;
	}

IL_0747:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FTF_SMS.instance.AddMessage(true, "I don't need everyone's photos, you can just come see me.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_166 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_166, (bool)1, _stringLiteralA954A8B811874DBFEEF9E39B85DF2371FCBDBB8A, NULL);
		// ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_167 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_168 = L_167->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_169 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_170 = L_169->___Content_Parent_5;
		int32_t L_171;
		L_171 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_170, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_172;
		L_172 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_168, ((int32_t)il2cpp_codegen_subtract(L_171, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_173;
		L_173 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_172, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_173, (bool)0, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_174 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_174, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_174;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_174);
		__this->___U3CU3E1__state_0 = ((int32_t)19);
		return (bool)1;
	}

IL_07a3:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ShowChoices("Are you sure, grandma?", "I... Touch?.", "Ok, so everything but Youtube.");
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_175 = V_1;
		ConversationManager_ShowChoices_m59D3158420B3AFC47BEB6D709605549E076A0042(L_175, _stringLiteralBAA40E54C8C56F0D8CF69CC9CE9490DAD87A39CF, _stringLiteralB5B5737583AE5531044C38D62D8A8912135EA37D, _stringLiteralD19E728753666B25EEFD7E530D3738BE04E4BB7B, NULL);
		// yield return new WaitUntil(() => playerHasChosen);
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_176 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_177 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_177, L_176, (intptr_t)((void*)ConversationManager_U3CConversationU3Eb__8_3_m0A5B76FE47C727DD761D39188394FC41C402A898_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_178 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_178, L_177, NULL);
		__this->___U3CU3E2__current_1 = L_178;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_178);
		__this->___U3CU3E1__state_0 = ((int32_t)20);
		return (bool)1;
	}

IL_07e0:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ClearChoices();
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_179 = V_1;
		ConversationManager_ClearChoices_m99DB673FFFCEB6929385F6FA58C773B2E5F5A153(L_179, NULL);
		// if (chosenOption == 0)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_180 = V_1;
		int32_t L_181 = L_180->___chosenOption_10;
		if (L_181)
		{
			goto IL_0807;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(false, "Are you sure, grandma?");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_182 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_182, (bool)0, _stringLiteralBAA40E54C8C56F0D8CF69CC9CE9490DAD87A39CF, NULL);
		goto IL_0832;
	}

IL_0807:
	{
		// else if (chosenOption == 1)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_183 = V_1;
		int32_t L_184 = L_183->___chosenOption_10;
		if ((!(((uint32_t)L_184) == ((uint32_t)1))))
		{
			goto IL_0822;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(false, "I... Touch?.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_185 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_185, (bool)0, _stringLiteralB5B5737583AE5531044C38D62D8A8912135EA37D, NULL);
		goto IL_0832;
	}

IL_0822:
	{
		// FTF_SMS.instance.AddMessage(false, "Ok, so everything but Youtube.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_186 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_186, (bool)0, _stringLiteralD19E728753666B25EEFD7E530D3738BE04E4BB7B, NULL);
	}

IL_0832:
	{
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_187 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_187, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_187;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_187);
		__this->___U3CU3E1__state_0 = ((int32_t)21);
		return (bool)1;
	}

IL_084c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (chosenOption == 0)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_188 = V_1;
		int32_t L_189 = L_188->___chosenOption_10;
		if (L_189)
		{
			goto IL_086d;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(true, "Yes, I'm sure.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_190 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_190, (bool)1, _stringLiteral865312C46CF2D90F54969B8A09A9CD061098C3D6, NULL);
		goto IL_0898;
	}

IL_086d:
	{
		// else if (chosenOption == 1)
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_191 = V_1;
		int32_t L_192 = L_191->___chosenOption_10;
		if ((!(((uint32_t)L_192) == ((uint32_t)1))))
		{
			goto IL_0888;
		}
	}
	{
		// FTF_SMS.instance.AddMessage(true, "What does 'touch?' mean?");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_193 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_193, (bool)1, _stringLiteralF821F9F0C904A1349689BB0564FA915D6957E4EC, NULL);
		goto IL_0898;
	}

IL_0888:
	{
		// FTF_SMS.instance.AddMessage(true, "Yes, everything but Bootube.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_194 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_194, (bool)1, _stringLiteralCB62B594B3E118E5F73BF15C3509B3CA37D69561, NULL);
	}

IL_0898:
	{
		// ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_195 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_196 = L_195->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_197 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_198 = L_197->___Content_Parent_5;
		int32_t L_199;
		L_199 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_198, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_200;
		L_200 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_196, ((int32_t)il2cpp_codegen_subtract(L_199, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_201;
		L_201 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_200, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_201, (bool)0, NULL);
		// chosenOption = -1; // Resetear la opci?n elegida
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_202 = V_1;
		L_202->___chosenOption_10 = (-1);
		// playerHasChosen = false; // Resetear la elecci?n del jugador
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_203 = V_1;
		L_203->___playerHasChosen_9 = (bool)0;
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_204 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_204, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_204;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_204);
		__this->___U3CU3E1__state_0 = ((int32_t)22);
		return (bool)1;
	}

IL_08eb:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FTF_SMS.instance.AddMessage(true, "Well, anyways, delete it for me Izan.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_205 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_205, (bool)1, _stringLiteral7A8E33592F555C49A3FDEFF6E3DBA0EADF3DACDD, NULL);
		// ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_206 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_207 = L_206->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_208 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_209 = L_208->___Content_Parent_5;
		int32_t L_210;
		L_210 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_209, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_211;
		L_211 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_207, ((int32_t)il2cpp_codegen_subtract(L_210, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_212;
		L_212 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_211, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_212, (bool)0, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_213 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_213, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_213;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_213);
		__this->___U3CU3E1__state_0 = ((int32_t)23);
		return (bool)1;
	}

IL_0947:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FTF_SMS.instance.AddMessage(true, "You know the buttons are too small for me.");
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_214 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2(L_214, (bool)1, _stringLiteral40528EA412CE70CA8ED17EF40197A928B4DF724A, NULL);
		// ultimo = FTF_SMS.instance.Content_Parent.GetChild(FTF_SMS.instance.Content_Parent.childCount - 1);
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_215 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_216 = L_215->___Content_Parent_5;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_217 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_218 = L_217->___Content_Parent_5;
		int32_t L_219;
		L_219 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_218, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_220;
		L_220 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_216, ((int32_t)il2cpp_codegen_subtract(L_219, 1)), NULL);
		// ultimo.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_221;
		L_221 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_220, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_221, (bool)0, NULL);
		// minigameManager.siguienteEscena();
		ConversationManager_t9C7DFEF5CFDDF7D0200E3C18C2605CCA95126A7A* L_222 = V_1;
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_223 = L_222->___minigameManager_7;
		MinigameManager_siguienteEscena_mF9DE2E812853F9CFBB8CCB0E6F947D03E60FD781(L_223, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ConversationManager/<Conversation>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CConversationU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m354D7FDD3F58971E690A8A26576AD3AB4AC23D67 (U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ConversationManager/<Conversation>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConversationU3Ed__8_System_Collections_IEnumerator_Reset_m609D5B32C61F46F72DB4443DFEBFE260A90CE212 (U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CConversationU3Ed__8_System_Collections_IEnumerator_Reset_m609D5B32C61F46F72DB4443DFEBFE260A90CE212_RuntimeMethod_var)));
	}
}
// System.Object ConversationManager/<Conversation>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CConversationU3Ed__8_System_Collections_IEnumerator_get_Current_mDB3406E73E4F1E85F83DDEC101FC40731D367B4A (U3CConversationU3Ed__8_t0C625D82FD9756543A36035A67B8EB2C87B7F6D6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void DeleteButton::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteButton_onClick_m09B38547A6759AB86CE117870AC84C38BA9025D3 (DeleteButton_t83882758AC000A501AD7EF0672341893CA64F6DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E_m1244A94AA85CC9520E19C7427CBDF581D8F80255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* V_0 = NULL;
	{
		// if (galleryManagerRef != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___galleryManagerRef_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// GalleryManager galleryManager = galleryManagerRef.GetComponent<GalleryManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___galleryManagerRef_4;
		GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* L_3;
		L_3 = GameObject_GetComponent_TisGalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E_m1244A94AA85CC9520E19C7427CBDF581D8F80255(L_2, GameObject_GetComponent_TisGalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E_m1244A94AA85CC9520E19C7427CBDF581D8F80255_RuntimeMethod_var);
		V_0 = L_3;
		// if (galleryManager != null) {
		GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// galleryManager.deleteSelected();
		GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* L_6 = V_0;
		GalleryManager_deleteSelected_m5243840D0C2DD6DCD9A483660E497E15B4CA8B9B(L_6, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void DeleteButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteButton__ctor_m18CDC1E14D7EE96CC5470B7AE8A3B2D0FA5719B5 (DeleteButton_t83882758AC000A501AD7EF0672341893CA64F6DF* __this, const RuntimeMethod* method) 
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
// System.Void DeleteMessage::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteMessage_onClick_mC0AE1ACA993A2F7333F9BA918400E345B396D39D (DeleteMessage_t0619DD00B8DF3836A85BBF88D62B578F5841AD79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m00A30A49C0E708B2A2ACA8D9AB9098C70A45F4C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* V_0 = NULL;
	{
		// if (selectionManagerRef != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___selectionManagerRef_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// SelectionManager selectionManager = selectionManagerRef.GetComponent<SelectionManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___selectionManagerRef_4;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_3;
		L_3 = GameObject_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m00A30A49C0E708B2A2ACA8D9AB9098C70A45F4C8(L_2, GameObject_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m00A30A49C0E708B2A2ACA8D9AB9098C70A45F4C8_RuntimeMethod_var);
		V_0 = L_3;
		// if (selectionManager != null) {
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// selectionManager.deleteSelected();
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_6 = V_0;
		SelectionManager_deleteSelected_m755D1DC449888DD882A5B885C1EC9280ECFD1B98(L_6, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void DeleteMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteMessage__ctor_m07133247FDC1037A9452B77F81BC9A985F6F8E59 (DeleteMessage_t0619DD00B8DF3836A85BBF88D62B578F5841AD79* __this, const RuntimeMethod* method) 
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
// System.Void DesuscribeButton::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesuscribeButton_onClick_m9341140896C1BEF4BA82F9DA0C6EC1F1FA494042 (DesuscribeButton_t4734112AED076F7133F3694EFCE6F4B42CFFB4E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// confirmButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___confirmButton_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DesuscribeButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesuscribeButton__ctor_m27AAAD1A7A752E6D667E59EACD9A3E40DAF08441 (DesuscribeButton_t4734112AED076F7133F3694EFCE6F4B42CFFB4E4* __this, const RuntimeMethod* method) 
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
// System.Void EscapeButton::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EscapeButton_onClick_mF78C0D06BDE4082A757176D58E9646095D9BAA9C (EscapeButton_t4CADF2F7EC8E4B0E6CCE8A90D9BF1D89D7DFACBF* __this, const RuntimeMethod* method) 
{
	{
		// escapeManager.manageClicks();
		EscapeManager_t240537112B101FFEAB0CFF379C49A2C03A6AEC92* L_0 = __this->___escapeManager_5;
		EscapeManager_manageClicks_m5C3CC6C99450F92FCCC53DAFB88F29960158609B(L_0, NULL);
		// }
		return;
	}
}
// System.Void EscapeButton::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EscapeButton_Move_mB833453B588CEC93C72EA8B5B15A122206C52B52 (EscapeButton_t4CADF2F7EC8E4B0E6CCE8A90D9BF1D89D7DFACBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD1593612008C55A309B996CC3F659237FF6B1DD);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Debug.Log("El bot?n se ha movido");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAD1593612008C55A309B996CC3F659237FF6B1DD, NULL);
		// float width = Content_Parent.rect.width;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___Content_Parent_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_6 = L_1;
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_6), NULL);
		V_0 = L_2;
		// float height = Content_Parent.rect.height;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___Content_Parent_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_3, NULL);
		V_6 = L_4;
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_6), NULL);
		V_1 = L_5;
		// float buttonWidth = GetComponent<RectTransform>().rect.width;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_6, NULL);
		V_6 = L_7;
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_6), NULL);
		V_2 = L_8;
		// float buttonHeight = GetComponent<RectTransform>().rect.height;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_9, NULL);
		V_6 = L_10;
		float L_11;
		L_11 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_6), NULL);
		V_3 = L_11;
		// float x = Random.Range(-width / 2 + buttonWidth / 2, width / 2 - buttonWidth / 2);
		float L_12 = V_0;
		float L_13 = V_2;
		float L_14 = V_0;
		float L_15 = V_2;
		float L_16;
		L_16 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_add(((float)(((-L_12))/(2.0f))), ((float)(L_13/(2.0f))))), ((float)il2cpp_codegen_subtract(((float)(L_14/(2.0f))), ((float)(L_15/(2.0f))))), NULL);
		V_4 = L_16;
		// float y = Random.Range(-height / 2 + buttonHeight / 2, height / 2 - buttonHeight / 2);
		float L_17 = V_1;
		float L_18 = V_3;
		float L_19 = V_1;
		float L_20 = V_3;
		float L_21;
		L_21 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_add(((float)(((-L_17))/(2.0f))), ((float)(L_18/(2.0f))))), ((float)il2cpp_codegen_subtract(((float)(L_19/(2.0f))), ((float)(L_20/(2.0f))))), NULL);
		V_5 = L_21;
		// transform.localPosition = new Vector3(x, y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_23 = V_4;
		float L_24 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), L_23, L_24, (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_22, L_25, NULL);
		// }
		return;
	}
}
// System.Void EscapeButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EscapeButton__ctor_m74ABC97A0037E8169D19B822FAE705CABFC53565 (EscapeButton_t4CADF2F7EC8E4B0E6CCE8A90D9BF1D89D7DFACBF* __this, const RuntimeMethod* method) 
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
// System.Void EscapeManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EscapeManager_Awake_m8E5859E5215DF887CC7896AEE1CB41BB60A0744C (EscapeManager_t240537112B101FFEAB0CFF379C49A2C03A6AEC92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_m1775A25C60C9437630501553F4E51EEECD8E98A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// clickManager = FindObjectOfType<ClickManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* L_0;
		L_0 = Object_FindObjectOfType_TisClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_m1775A25C60C9437630501553F4E51EEECD8E98A1(Object_FindObjectOfType_TisClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D_m1775A25C60C9437630501553F4E51EEECD8E98A1_RuntimeMethod_var);
		__this->___clickManager_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickManager_8), (void*)L_0);
		// clickManager.enabled = true;
		ClickManager_tA19C341C1DE22717BAD29C0BE4E5C0D7849EAA8D* L_1 = __this->___clickManager_8;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// minigameManager = FindObjectOfType<MinigameManager>();
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_2;
		L_2 = Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D(Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D_RuntimeMethod_var);
		__this->___minigameManager_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___minigameManager_7), (void*)L_2);
		// clicksToEscape = Random.Range(8, 15);
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(8, ((int32_t)15), NULL);
		__this->___clicksToEscape_5 = L_3;
		// clicks = 0;
		__this->___clicks_4 = 0;
		// }
		return;
	}
}
// System.Void EscapeManager::manageClicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EscapeManager_manageClicks_m5C3CC6C99450F92FCCC53DAFB88F29960158609B (EscapeManager_t240537112B101FFEAB0CFF379C49A2C03A6AEC92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7ED621E5CE912E4540F923D83EB5D8CE391A9E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAE3C34B0A7E77BFD4B2DEADE26470222246CCE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// clicks++;
		int32_t L_0 = __this->___clicks_4;
		__this->___clicks_4 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (clicks == clicksToEscape)
		int32_t L_1 = __this->___clicks_4;
		int32_t L_2 = __this->___clicksToEscape_5;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0043;
		}
	}
	{
		// Debug.Log("?Has escapado!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA7ED621E5CE912E4540F923D83EB5D8CE391A9E1, NULL);
		// escapeButton.GetComponent<Button>().interactable = false;
		EscapeButton_t4CADF2F7EC8E4B0E6CCE8A90D9BF1D89D7DFACBF* L_3 = __this->___escapeButton_6;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4;
		L_4 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_3, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)0, NULL);
		// minigameManager.siguienteEscena();
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_5 = __this->___minigameManager_7;
		MinigameManager_siguienteEscena_mF9DE2E812853F9CFBB8CCB0E6F947D03E60FD781(L_5, NULL);
		return;
	}

IL_0043:
	{
		// Debug.Log("Clicks: " + clicks + "/" + clicksToEscape);
		int32_t* L_6 = (&__this->___clicks_4);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		int32_t* L_8 = (&__this->___clicksToEscape_5);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralAAE3C34B0A7E77BFD4B2DEADE26470222246CCE9, L_7, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// escapeButton.Move();
		EscapeButton_t4CADF2F7EC8E4B0E6CCE8A90D9BF1D89D7DFACBF* L_11 = __this->___escapeButton_6;
		EscapeButton_Move_mB833453B588CEC93C72EA8B5B15A122206C52B52(L_11, NULL);
		// }
		return;
	}
}
// System.Void EscapeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EscapeManager__ctor_m49EF13AA3A0BE15219781D947A79F118B762B30B (EscapeManager_t240537112B101FFEAB0CFF379C49A2C03A6AEC92* __this, const RuntimeMethod* method) 
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
// System.Void FTF_SMS::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FTF_SMS_Awake_m03F1B60D8F86095CA2CF0788D48182BD8C562B98 (FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_0 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		return;
	}

IL_0014:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// System.Void FTF_SMS::AddMessage(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FTF_SMS_AddMessage_mA5134A49FC0987C81CEBB6B5305AF5A382C33EB2 (FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* __this, bool ___Sender_Player0, String_t* ___Message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFTF_SMS_TMProRef_tDE4004557BFD6DE14E121AA6CFE1AFA7015E5A60_m815967EBBDC3FD0358FF121DF7CFF2BD00160CC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// actualizarEstadoScroll();
		FTF_SMS_actualizarEstadoScroll_m1B03CEAA620C9F4D49A8965999EECF14450536A2(__this, NULL);
		// if (Sender_Player)
		bool L_0 = ___Sender_Player0;
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		// GameObject ownMSG = Instantiate(PlayerSMS_Ins, Content_Parent.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___PlayerSMS_Ins_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Content_Parent_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_1, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// ownMSG.transform.SetParent(Content_Parent.transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___Content_Parent_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_8, L_10, (bool)0, NULL);
		// FTF_SMS_TMProRef ownMSG_Text = ownMSG.GetComponent<FTF_SMS_TMProRef>();
		FTF_SMS_TMProRef_tDE4004557BFD6DE14E121AA6CFE1AFA7015E5A60* L_11;
		L_11 = GameObject_GetComponent_TisFTF_SMS_TMProRef_tDE4004557BFD6DE14E121AA6CFE1AFA7015E5A60_m815967EBBDC3FD0358FF121DF7CFF2BD00160CC4(L_7, GameObject_GetComponent_TisFTF_SMS_TMProRef_tDE4004557BFD6DE14E121AA6CFE1AFA7015E5A60_m815967EBBDC3FD0358FF121DF7CFF2BD00160CC4_RuntimeMethod_var);
		// TextMeshProUGUI txt = ownMSG_Text.Text_Reference;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = L_11->___Text_Reference_4;
		// txt.text = Message;
		String_t* L_13 = ___Message1;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_13);
		goto IL_0099;
	}

IL_0052:
	{
		// GameObject contactSMS = Instantiate(ContactSMS_Ins, Content_Parent.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___ContactSMS_Ins_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___Content_Parent_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_17, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// contactSMS.transform.SetParent(Content_Parent.transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___Content_Parent_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_21, L_23, (bool)0, NULL);
		// FTF_SMS_TMProRef contactSMS_Text = contactSMS.GetComponent<FTF_SMS_TMProRef>();
		FTF_SMS_TMProRef_tDE4004557BFD6DE14E121AA6CFE1AFA7015E5A60* L_24;
		L_24 = GameObject_GetComponent_TisFTF_SMS_TMProRef_tDE4004557BFD6DE14E121AA6CFE1AFA7015E5A60_m815967EBBDC3FD0358FF121DF7CFF2BD00160CC4(L_20, GameObject_GetComponent_TisFTF_SMS_TMProRef_tDE4004557BFD6DE14E121AA6CFE1AFA7015E5A60_m815967EBBDC3FD0358FF121DF7CFF2BD00160CC4_RuntimeMethod_var);
		// TextMeshProUGUI txt = contactSMS_Text.Text_Reference;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_25 = L_24->___Text_Reference_4;
		// txt.text = Message;
		String_t* L_26 = ___Message1;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_25, L_26);
	}

IL_0099:
	{
		// if (estabaAbajo)
		bool L_27 = __this->___estabaAbajo_10;
		if (!L_27)
		{
			goto IL_00ae;
		}
	}
	{
		// StartCoroutine(autoScroll());
		RuntimeObject* L_28;
		L_28 = FTF_SMS_autoScroll_mCCD9947AB0CAECB2E26B8434F68C8F56294C2C17(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_29;
		L_29 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_28, NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void FTF_SMS::SendSystemMSG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FTF_SMS_SendSystemMSG_mEB215E25FF7611D6F68F8EC39941FDD7030C5FEE (FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject sysMSG = Instantiate(SystemMSG_Ins, Content_Parent.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___SystemMSG_Ins_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___Content_Parent_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// sysMSG.transform.SetParent(Content_Parent.transform, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___Content_Parent_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_6, L_8, (bool)0, NULL);
		// StartCoroutine(autoScroll());
		RuntimeObject* L_9;
		L_9 = FTF_SMS_autoScroll_mCCD9947AB0CAECB2E26B8434F68C8F56294C2C17(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FTF_SMS::autoScroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FTF_SMS_autoScroll_mCCD9947AB0CAECB2E26B8434F68C8F56294C2C17 (FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137* L_0 = (U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137*)il2cpp_codegen_object_new(U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137_il2cpp_TypeInfo_var);
		U3CautoScrollU3Ed__10__ctor_mA47CFA5C9D79AFD38031488E5670CE67D11C7A4A(L_0, 0, NULL);
		U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void FTF_SMS::actualizarEstadoScroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FTF_SMS_actualizarEstadoScroll_m1B03CEAA620C9F4D49A8965999EECF14450536A2 (FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float contentHeight = ScrollView_Rect.content.rect.height;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___ScrollView_Rect_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_0, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_1 = L_2;
		float L_3;
		L_3 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		// float viewportHeight = ScrollView_Rect.viewport.rect.height;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_4 = __this->___ScrollView_Rect_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = ScrollRect_get_viewport_m85092216DD476F77E78F5CE50F9C4E70063ECCF9_inline(L_4, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_5, NULL);
		V_1 = L_6;
		float L_7;
		L_7 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		V_0 = L_7;
		// if (contentHeight <= viewportHeight)
		float L_8 = V_0;
		if ((!(((float)L_3) <= ((float)L_8))))
		{
			goto IL_003c;
		}
	}
	{
		// estabaAbajo = true;
		__this->___estabaAbajo_10 = (bool)1;
		return;
	}

IL_003c:
	{
		// estabaAbajo = ScrollView_Rect.verticalNormalizedPosition <= 0.05f;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_9 = __this->___ScrollView_Rect_9;
		float L_10;
		L_10 = ScrollRect_get_verticalNormalizedPosition_m4FE766F04272C1805FDE2A4B72D80F6190841FA1(L_9, NULL);
		__this->___estabaAbajo_10 = (bool)((((int32_t)((!(((float)L_10) <= ((float)(0.0500000007f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void FTF_SMS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FTF_SMS__ctor_mCA3CE488570A608C371B1582B53232D66E8F5442 (FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* __this, const RuntimeMethod* method) 
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
// System.Void FTF_SMS/<autoScroll>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CautoScrollU3Ed__10__ctor_mA47CFA5C9D79AFD38031488E5670CE67D11C7A4A (U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FTF_SMS/<autoScroll>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CautoScrollU3Ed__10_System_IDisposable_Dispose_m68C320D0035185C72F3DE52E891589DDC5A09692 (U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FTF_SMS/<autoScroll>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CautoScrollU3Ed__10_MoveNext_mC19B25AAA6965A8506A851CA3956700154ABC70A (U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Canvas.ForceUpdateCanvases();
		Canvas_ForceUpdateCanvases_m6ECDBC5E85ADA3301BB20611753C45769F15EB51(NULL);
		// ScrollView_Rect.verticalNormalizedPosition = 0f;
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_5 = V_1;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_6 = L_5->___ScrollView_Rect_9;
		ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C(L_6, (0.0f), NULL);
		// }
		return (bool)0;
	}
}
// System.Object FTF_SMS/<autoScroll>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CautoScrollU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFA0126C42DE1D6CCDA95AC0F0EF08861D36E0410 (U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FTF_SMS/<autoScroll>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CautoScrollU3Ed__10_System_Collections_IEnumerator_Reset_mA12A1D4DA54AC931C8B350FFDB32A722232CA500 (U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CautoScrollU3Ed__10_System_Collections_IEnumerator_Reset_mA12A1D4DA54AC931C8B350FFDB32A722232CA500_RuntimeMethod_var)));
	}
}
// System.Object FTF_SMS/<autoScroll>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CautoScrollU3Ed__10_System_Collections_IEnumerator_get_Current_m74FE63D5455D4D64022D8068EBD495E08A3DA0AD (U3CautoScrollU3Ed__10_tB186D7FB665A2F01F70D2D47BA775DE1A3A8B137* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void FTF_SMS_TMProRef::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FTF_SMS_TMProRef__ctor_m99DAC37DC166CD9E77C780995B88D4572D338346 (FTF_SMS_TMProRef_tDE4004557BFD6DE14E121AA6CFE1AFA7015E5A60* __this, const RuntimeMethod* method) 
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
// System.Void GalleryImage::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GalleryImage_onClick_m85C7EA846A2426E3E2955D27156149C27D38BD55 (GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* __this, const RuntimeMethod* method) 
{
	{
		// galleryManager.handleSelection(this);
		GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* L_0 = __this->___galleryManager_4;
		GalleryManager_handleSelection_mA2AF47862A5FCB7651EEFD5887A6053D2AF46FE8(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void GalleryImage::setSelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GalleryImage_setSelected_m21E2CDBAFC61B8FC83EA5C2771326FB107CAE4E2 (GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* __this, bool ___selected0, const RuntimeMethod* method) 
{
	{
		// if (selected) {
		bool L_0 = ___selected0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// selectionOverlay.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___selectionOverlay_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		return;
	}

IL_0010:
	{
		// selectionOverlay.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___selectionOverlay_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GalleryImage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GalleryImage__ctor_m99A46C84CFA6E38F459B15553B1AF2360DB60189 (GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* __this, const RuntimeMethod* method) 
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
// System.Void GalleryManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GalleryManager_Awake_mBAAF7C713300233790FE8E7D64217D06363EBA77 (GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// minigameManager = FindObjectOfType<MinigameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_0;
		L_0 = Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D(Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D_RuntimeMethod_var);
		__this->___minigameManager_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___minigameManager_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void GalleryManager::handleSelection(GalleryImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GalleryManager_handleSelection_mA2AF47862A5FCB7651EEFD5887A6053D2AF46FE8 (GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* __this, GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* ___image0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m852431AF14AFA75F68BABBA191F8FB33B9134F7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mCFEEED8BBAFFF413BBBBA9C53AF3055C2DF6E0A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m6162FCCC8B6637B7AEA038E03188100E658D941E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (images.Contains(image))
		List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* L_0 = __this->___images_6;
		GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* L_1 = ___image0;
		bool L_2;
		L_2 = List_1_Contains_mCFEEED8BBAFFF413BBBBA9C53AF3055C2DF6E0A4(L_0, L_1, List_1_Contains_mCFEEED8BBAFFF413BBBBA9C53AF3055C2DF6E0A4_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// images.Remove(image);
		List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* L_3 = __this->___images_6;
		GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* L_4 = ___image0;
		bool L_5;
		L_5 = List_1_Remove_m6162FCCC8B6637B7AEA038E03188100E658D941E(L_3, L_4, List_1_Remove_m6162FCCC8B6637B7AEA038E03188100E658D941E_RuntimeMethod_var);
		// image.setSelected(false);
		GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* L_6 = ___image0;
		GalleryImage_setSelected_m21E2CDBAFC61B8FC83EA5C2771326FB107CAE4E2(L_6, (bool)0, NULL);
		return;
	}

IL_0023:
	{
		// images.Add(image);
		List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* L_7 = __this->___images_6;
		GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* L_8 = ___image0;
		List_1_Add_m852431AF14AFA75F68BABBA191F8FB33B9134F7C_inline(L_7, L_8, List_1_Add_m852431AF14AFA75F68BABBA191F8FB33B9134F7C_RuntimeMethod_var);
		// image.setSelected(true);
		GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* L_9 = ___image0;
		GalleryImage_setSelected_m21E2CDBAFC61B8FC83EA5C2771326FB107CAE4E2(L_9, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GalleryManager::deleteSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GalleryManager_deleteSelected_m5243840D0C2DD6DCD9A483660E497E15B4CA8B9B (GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m66ACAECE1FBED7F0DE8F624944078AB2DE160DFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2C0A5EDBFD54F375A295ED128F04C694AFFDCEC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m77281323F0C13FA3B6CE26D6C6D46C1B46A3B044_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m8D5216098E1F379249574FE2CC6D9EAFF6FB4699_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5E453387D964AC60C85D5752DA14EAAD16B2232A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t66EB77A87913A12E30BD3A56EC9C8F055BAEC258 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (GalleryImage image in images) {
		List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* L_0 = __this->___images_6;
		Enumerator_t66EB77A87913A12E30BD3A56EC9C8F055BAEC258 L_1;
		L_1 = List_1_GetEnumerator_m5E453387D964AC60C85D5752DA14EAAD16B2232A(L_0, List_1_GetEnumerator_m5E453387D964AC60C85D5752DA14EAAD16B2232A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m66ACAECE1FBED7F0DE8F624944078AB2DE160DFC((&V_0), Enumerator_Dispose_m66ACAECE1FBED7F0DE8F624944078AB2DE160DFC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0050_1;
			}

IL_000e_1:
			{
				// foreach (GalleryImage image in images) {
				GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* L_2;
				L_2 = Enumerator_get_Current_m77281323F0C13FA3B6CE26D6C6D46C1B46A3B044_inline((&V_0), Enumerator_get_Current_m77281323F0C13FA3B6CE26D6C6D46C1B46A3B044_RuntimeMethod_var);
				// Destroy(image.gameObject);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
				// remainingImages--;
				int32_t L_4 = __this->___remainingImages_4;
				__this->___remainingImages_4 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
				// Debug.Log(remainingImages);
				int32_t L_5 = __this->___remainingImages_4;
				int32_t L_6 = L_5;
				RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
				// if (remainingImages == 0) {
				int32_t L_8 = __this->___remainingImages_4;
				if (L_8)
				{
					goto IL_0050_1;
				}
			}
			{
				// minigameManager.siguienteEscena();
				MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_9 = __this->___minigameManager_5;
				MinigameManager_siguienteEscena_mF9DE2E812853F9CFBB8CCB0E6F947D03E60FD781(L_9, NULL);
			}

IL_0050_1:
			{
				// foreach (GalleryImage image in images) {
				bool L_10;
				L_10 = Enumerator_MoveNext_m2C0A5EDBFD54F375A295ED128F04C694AFFDCEC6((&V_0), Enumerator_MoveNext_m2C0A5EDBFD54F375A295ED128F04C694AFFDCEC6_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		// images.Clear();
		List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* L_11 = __this->___images_6;
		List_1_Clear_m8D5216098E1F379249574FE2CC6D9EAFF6FB4699_inline(L_11, List_1_Clear_m8D5216098E1F379249574FE2CC6D9EAFF6FB4699_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GalleryManager::clearSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GalleryManager_clearSelection_m84650D796F9C33880ABE088D1D84DC8E8166EAC5 (GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m66ACAECE1FBED7F0DE8F624944078AB2DE160DFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2C0A5EDBFD54F375A295ED128F04C694AFFDCEC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m77281323F0C13FA3B6CE26D6C6D46C1B46A3B044_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m8D5216098E1F379249574FE2CC6D9EAFF6FB4699_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5E453387D964AC60C85D5752DA14EAAD16B2232A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t66EB77A87913A12E30BD3A56EC9C8F055BAEC258 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (GalleryImage image in images) {
		List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* L_0 = __this->___images_6;
		Enumerator_t66EB77A87913A12E30BD3A56EC9C8F055BAEC258 L_1;
		L_1 = List_1_GetEnumerator_m5E453387D964AC60C85D5752DA14EAAD16B2232A(L_0, List_1_GetEnumerator_m5E453387D964AC60C85D5752DA14EAAD16B2232A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m66ACAECE1FBED7F0DE8F624944078AB2DE160DFC((&V_0), Enumerator_Dispose_m66ACAECE1FBED7F0DE8F624944078AB2DE160DFC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000e_1:
			{
				// foreach (GalleryImage image in images) {
				GalleryImage_t784D683C7FE8F881E2D67110F5851B49D59FBE3A* L_2;
				L_2 = Enumerator_get_Current_m77281323F0C13FA3B6CE26D6C6D46C1B46A3B044_inline((&V_0), Enumerator_get_Current_m77281323F0C13FA3B6CE26D6C6D46C1B46A3B044_RuntimeMethod_var);
				// image.setSelected(false);
				GalleryImage_setSelected_m21E2CDBAFC61B8FC83EA5C2771326FB107CAE4E2(L_2, (bool)0, NULL);
			}

IL_001b_1:
			{
				// foreach (GalleryImage image in images) {
				bool L_3;
				L_3 = Enumerator_MoveNext_m2C0A5EDBFD54F375A295ED128F04C694AFFDCEC6((&V_0), Enumerator_MoveNext_m2C0A5EDBFD54F375A295ED128F04C694AFFDCEC6_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// images.Clear();
		List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* L_4 = __this->___images_6;
		List_1_Clear_m8D5216098E1F379249574FE2CC6D9EAFF6FB4699_inline(L_4, List_1_Clear_m8D5216098E1F379249574FE2CC6D9EAFF6FB4699_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GalleryManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GalleryManager__ctor_mF6239CA72D7F1078BD67BF03130CF71CEA5BD6EF (GalleryManager_tF13FC0690FF430840F33633178127E7F17FC537E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF063647D24754A76C48232C1E8B2987DEFA2F736_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int remainingImages = 15;
		__this->___remainingImages_4 = ((int32_t)15);
		// List<GalleryImage> images = new List<GalleryImage>();
		List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F* L_0 = (List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F*)il2cpp_codegen_object_new(List_1_t3179BD19E1CE5408C5F7F20808AFD071FE816D2F_il2cpp_TypeInfo_var);
		List_1__ctor_mF063647D24754A76C48232C1E8B2987DEFA2F736(L_0, List_1__ctor_mF063647D24754A76C48232C1E8B2987DEFA2F736_RuntimeMethod_var);
		__this->___images_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___images_6), (void*)L_0);
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
// System.Void InboxButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InboxButton_Awake_mB27D6A7FCB54B7B9533A29CC84320A76908F1BC4 (InboxButton_t3BF8AC5672C440B1C180AA29F514DE881F2F846D* __this, const RuntimeMethod* method) 
{
	{
		// contentPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___contentPanel_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// inboxPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___inboxPanel_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void InboxButton::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InboxButton_onClick_mFD39C2595774D4841FD16ADBE69800A2824CB67B (InboxButton_t3BF8AC5672C440B1C180AA29F514DE881F2F846D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// contentPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___contentPanel_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)0, NULL);
		// inboxPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___inboxPanel_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void InboxButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InboxButton__ctor_m7F0A6157C9BFAEF936F7BB7B8821F645D9B3FEC3 (InboxButton_t3BF8AC5672C440B1C180AA29F514DE881F2F846D* __this, const RuntimeMethod* method) 
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
// System.Void MinigameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinigameManager_Start_m6B1F28A428874EB8D4B248B8A612C23B17C00C82 (MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MinigameManager::siguienteEscena()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinigameManager_siguienteEscena_mF9DE2E812853F9CFBB8CCB0E6F947D03E60FD781 (MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(FadeToScene(nextScene));
		String_t* L_0 = __this->___nextScene_7;
		RuntimeObject* L_1;
		L_1 = MinigameManager_FadeToScene_m6EA3F51E949ED907F92B41059BC3A3BBED83CB9F(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// buttonGroup.interactable = false; // Disable button interaction
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_3 = __this->___buttonGroup_6;
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MinigameManager::FadeToScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MinigameManager_FadeToScene_m6EA3F51E949ED907F92B41059BC3A3BBED83CB9F (MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB* L_0 = (U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB*)il2cpp_codegen_object_new(U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB_il2cpp_TypeInfo_var);
		U3CFadeToSceneU3Ed__6__ctor_m3EBD3949A7D5E34452F12DDF4BCC174023FE48C2(L_0, 0, NULL);
		U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB* L_2 = L_1;
		String_t* L_3 = ___sceneName0;
		L_2->___sceneName_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___sceneName_3), (void*)L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator MinigameManager::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MinigameManager_FadeOut_m035FE2200B4FE4A4B581076079D73A79DAFC3C54 (MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069* L_0 = (U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069*)il2cpp_codegen_object_new(U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069_il2cpp_TypeInfo_var);
		U3CFadeOutU3Ed__7__ctor_mCAAAF9972A2D7C1F315EAF27FA8C6A2C95E0D38B(L_0, 0, NULL);
		U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MinigameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinigameManager_Update_m4A0F1588CA5F06D02CE95869C1E125D366F419B0 (MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MinigameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinigameManager__ctor_mCB4EDD821B0024F8DB9B10E126847C744EABCF5A (MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* __this, const RuntimeMethod* method) 
{
	{
		// public float fadeDuration = 1f;
		__this->___fadeDuration_5 = (1.0f);
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
// System.Void MinigameManager/<FadeToScene>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToSceneU3Ed__6__ctor_m3EBD3949A7D5E34452F12DDF4BCC174023FE48C2 (U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MinigameManager/<FadeToScene>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToSceneU3Ed__6_System_IDisposable_Dispose_m673F868EE96B27D61DA6D8C3FA9275B5F764A93F (U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MinigameManager/<FadeToScene>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeToSceneU3Ed__6_MoveNext_m583528B00C7A4FBA4B51AF47D5092AB2A2B8538C (U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3BACD5AA50B8F16067E82006144FB266A03F4DD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* V_1 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005b;
			}
			case 2:
			{
				goto IL_007d;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (SceneManager.GetActiveScene().name != "MenuInicial")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		bool L_5;
		L_5 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_4, _stringLiteralE3BACD5AA50B8F16067E82006144FB266A03F4DD, NULL);
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005b:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0062:
	{
		// yield return StartCoroutine(FadeOut());
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_7 = V_1;
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_8 = V_1;
		RuntimeObject* L_9;
		L_9 = MinigameManager_FadeOut_m035FE2200B4FE4A4B581076079D73A79DAFC3C54(L_8, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_007d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UnityEngine.SceneManagement.SceneManager.LoadScene(sceneName);
		String_t* L_11 = __this->___sceneName_3;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_11, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MinigameManager/<FadeToScene>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeToSceneU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m73F90B3CB312E62985C42121E7AA2B2A78F81639 (U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MinigameManager/<FadeToScene>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeToSceneU3Ed__6_System_Collections_IEnumerator_Reset_m6ED6D3944B72708D0ADEB84FA9728C2B7B37A3D1 (U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeToSceneU3Ed__6_System_Collections_IEnumerator_Reset_m6ED6D3944B72708D0ADEB84FA9728C2B7B37A3D1_RuntimeMethod_var)));
	}
}
// System.Object MinigameManager/<FadeToScene>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeToSceneU3Ed__6_System_Collections_IEnumerator_get_Current_m18AAB41E5B654CB018D609E50E04227E64DFBDB8 (U3CFadeToSceneU3Ed__6_tD708AA529CC2861879C789472AA4E37D815C2ECB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void MinigameManager/<FadeOut>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__7__ctor_mCAAAF9972A2D7C1F315EAF27FA8C6A2C95E0D38B (U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MinigameManager/<FadeOut>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__7_System_IDisposable_Dispose_m06CCCCCAFD0846773375315290E55457890CC94A (U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MinigameManager/<FadeOut>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeOutU3Ed__7_MoveNext_m7D60960C73E900F38E4DD90042E194209CB15524 (U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_007e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float elapsedTime = 0f;
		__this->___U3CelapsedTimeU3E5__2_3 = (0.0f);
		goto IL_0085;
	}

IL_002b:
	{
		// elapsedTime += Time.deltaTime;
		float L_4 = __this->___U3CelapsedTimeU3E5__2_3;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedTimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_4, L_5));
		// float progress = Mathf.Clamp01(elapsedTime / fadeDuration);
		float L_6 = __this->___U3CelapsedTimeU3E5__2_3;
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_7 = V_1;
		float L_8 = L_7->___fadeDuration_5;
		float L_9;
		L_9 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_6/L_8)), NULL);
		V_2 = L_9;
		// fadePanel.alpha = progress;
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_10 = V_1;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_11 = L_10->___fadePanel_4;
		float L_12 = V_2;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_11, L_12, NULL);
		// buttonGroup.alpha = 1f - progress;
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_13 = V_1;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_14 = L_13->___buttonGroup_6;
		float L_15 = V_2;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_14, ((float)il2cpp_codegen_subtract((1.0f), L_15)), NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0085:
	{
		// while (elapsedTime < fadeDuration)
		float L_16 = __this->___U3CelapsedTimeU3E5__2_3;
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_17 = V_1;
		float L_18 = L_17->___fadeDuration_5;
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_002b;
		}
	}
	{
		// fadePanel.alpha = 1f;
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_19 = V_1;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_20 = L_19->___fadePanel_4;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_20, (1.0f), NULL);
		// buttonGroup.alpha = 0f;
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_21 = V_1;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_22 = L_21->___buttonGroup_6;
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_22, (0.0f), NULL);
		// }
		return (bool)0;
	}
}
// System.Object MinigameManager/<FadeOut>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9CFB6ABAC926D04753FAAD1A0431079F9C416A8A (U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MinigameManager/<FadeOut>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__7_System_Collections_IEnumerator_Reset_m5D92E00C0718B32828F85A41E8C2E7EAEB61E8F6 (U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeOutU3Ed__7_System_Collections_IEnumerator_Reset_m5D92E00C0718B32828F85A41E8C2E7EAEB61E8F6_RuntimeMethod_var)));
	}
}
// System.Object MinigameManager/<FadeOut>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutU3Ed__7_System_Collections_IEnumerator_get_Current_mE9732775D55A77AF076796A552518B014E795D58 (U3CFadeOutU3Ed__7_t579BAC9C0B35D01A3EB5F93E13DEB1770A6E4069* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void SelectionManager::handleSelection(SMS_Selected)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionManager_handleSelection_mD8F1ADBD8B07BA5B2CD383A645B492C7DAC31034 (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m332CC359216343C4A263E8D677981EB1877CAB14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m947EBE6FD5748EF60DCF8654D9EC5F324DDDF06A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mAD40467C626946086F023ABF3A89F42BFB0005F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (messages.Contains(message))
		List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* L_0 = __this->___messages_4;
		SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* L_1 = ___message0;
		bool L_2;
		L_2 = List_1_Contains_m947EBE6FD5748EF60DCF8654D9EC5F324DDDF06A(L_0, L_1, List_1_Contains_m947EBE6FD5748EF60DCF8654D9EC5F324DDDF06A_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// messages.Remove(message);
		List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* L_3 = __this->___messages_4;
		SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* L_4 = ___message0;
		bool L_5;
		L_5 = List_1_Remove_mAD40467C626946086F023ABF3A89F42BFB0005F0(L_3, L_4, List_1_Remove_mAD40467C626946086F023ABF3A89F42BFB0005F0_RuntimeMethod_var);
		// message.setSelected(false);
		SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* L_6 = ___message0;
		SMS_Selected_setSelected_m735EDEA1832D2C188BAB7750549CD221EA404785(L_6, (bool)0, NULL);
		return;
	}

IL_0023:
	{
		// messages.Add(message);
		List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* L_7 = __this->___messages_4;
		SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* L_8 = ___message0;
		List_1_Add_m332CC359216343C4A263E8D677981EB1877CAB14_inline(L_7, L_8, List_1_Add_m332CC359216343C4A263E8D677981EB1877CAB14_RuntimeMethod_var);
		// message.setSelected(true);
		SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* L_9 = ___message0;
		SMS_Selected_setSelected_m735EDEA1832D2C188BAB7750549CD221EA404785(L_9, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SelectionManager::deleteSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionManager_deleteSelected_m755D1DC449888DD882A5B885C1EC9280ECFD1B98 (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC976379EEB0C86EBB555A9481C4C3E9A5EA0C49D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC0823A9E2392D92786BAE4A81DE9F86A351C0D6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAE27E90180D799D0C02447BFBCE53F2D22B25892_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6C2C0E42CF882306FD6CEADE019019E8035C1820_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m762D0B137F238310E76E453688B31A69A59915DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t40555DE6EBF7656986C64897077B285195BC6428 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (SMS_Selected message in messages) {
		List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* L_0 = __this->___messages_4;
		Enumerator_t40555DE6EBF7656986C64897077B285195BC6428 L_1;
		L_1 = List_1_GetEnumerator_m762D0B137F238310E76E453688B31A69A59915DE(L_0, List_1_GetEnumerator_m762D0B137F238310E76E453688B31A69A59915DE_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC976379EEB0C86EBB555A9481C4C3E9A5EA0C49D((&V_0), Enumerator_Dispose_mC976379EEB0C86EBB555A9481C4C3E9A5EA0C49D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_000e_1:
			{
				// foreach (SMS_Selected message in messages) {
				SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* L_2;
				L_2 = Enumerator_get_Current_mAE27E90180D799D0C02447BFBCE53F2D22B25892_inline((&V_0), Enumerator_get_Current_mAE27E90180D799D0C02447BFBCE53F2D22B25892_RuntimeMethod_var);
				// Destroy(message.gameObject);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
			}

IL_001f_1:
			{
				// foreach (SMS_Selected message in messages) {
				bool L_4;
				L_4 = Enumerator_MoveNext_mC0823A9E2392D92786BAE4A81DE9F86A351C0D6E((&V_0), Enumerator_MoveNext_mC0823A9E2392D92786BAE4A81DE9F86A351C0D6E_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		// messages.Clear();
		List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* L_5 = __this->___messages_4;
		List_1_Clear_m6C2C0E42CF882306FD6CEADE019019E8035C1820_inline(L_5, List_1_Clear_m6C2C0E42CF882306FD6CEADE019019E8035C1820_RuntimeMethod_var);
		// FTF_SMS.instance.actualizarEstadoScroll();
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_6 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		FTF_SMS_actualizarEstadoScroll_m1B03CEAA620C9F4D49A8965999EECF14450536A2(L_6, NULL);
		// if (FTF_SMS.instance.estabaAbajo) {
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_7 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		bool L_8 = L_7->___estabaAbajo_10;
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// FTF_SMS.instance.autoScroll();
		FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C* L_9 = ((FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_StaticFields*)il2cpp_codegen_static_fields_for(FTF_SMS_t659C62669C4C91C7DD7410FC53A06613AF81E23C_il2cpp_TypeInfo_var))->___instance_4;
		RuntimeObject* L_10;
		L_10 = FTF_SMS_autoScroll_mCCD9947AB0CAECB2E26B8434F68C8F56294C2C17(L_9, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void SelectionManager::clearSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionManager_clearSelection_mA899B46C81AD0D64D241C6200D4EABB9DA16E7EE (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC976379EEB0C86EBB555A9481C4C3E9A5EA0C49D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC0823A9E2392D92786BAE4A81DE9F86A351C0D6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAE27E90180D799D0C02447BFBCE53F2D22B25892_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6C2C0E42CF882306FD6CEADE019019E8035C1820_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m762D0B137F238310E76E453688B31A69A59915DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t40555DE6EBF7656986C64897077B285195BC6428 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (SMS_Selected message in messages) {
		List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* L_0 = __this->___messages_4;
		Enumerator_t40555DE6EBF7656986C64897077B285195BC6428 L_1;
		L_1 = List_1_GetEnumerator_m762D0B137F238310E76E453688B31A69A59915DE(L_0, List_1_GetEnumerator_m762D0B137F238310E76E453688B31A69A59915DE_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC976379EEB0C86EBB555A9481C4C3E9A5EA0C49D((&V_0), Enumerator_Dispose_mC976379EEB0C86EBB555A9481C4C3E9A5EA0C49D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000e_1:
			{
				// foreach (SMS_Selected message in messages) {
				SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* L_2;
				L_2 = Enumerator_get_Current_mAE27E90180D799D0C02447BFBCE53F2D22B25892_inline((&V_0), Enumerator_get_Current_mAE27E90180D799D0C02447BFBCE53F2D22B25892_RuntimeMethod_var);
				// message.setSelected(false);
				SMS_Selected_setSelected_m735EDEA1832D2C188BAB7750549CD221EA404785(L_2, (bool)0, NULL);
			}

IL_001b_1:
			{
				// foreach (SMS_Selected message in messages) {
				bool L_3;
				L_3 = Enumerator_MoveNext_mC0823A9E2392D92786BAE4A81DE9F86A351C0D6E((&V_0), Enumerator_MoveNext_mC0823A9E2392D92786BAE4A81DE9F86A351C0D6E_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// messages.Clear();
		List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* L_4 = __this->___messages_4;
		List_1_Clear_m6C2C0E42CF882306FD6CEADE019019E8035C1820_inline(L_4, List_1_Clear_m6C2C0E42CF882306FD6CEADE019019E8035C1820_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SelectionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionManager__ctor_mB63C19EF82E0D6901A11D7794718430F86DA8E44 (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4D335BC6056D830D4EF23C35EB3B8BED633E33F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<SMS_Selected> messages = new List<SMS_Selected>();
		List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4* L_0 = (List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4*)il2cpp_codegen_object_new(List_1_tED2BD015A1AEB3C48F9E79B0D3391F7BA4CC79C4_il2cpp_TypeInfo_var);
		List_1__ctor_m4D335BC6056D830D4EF23C35EB3B8BED633E33F7(L_0, List_1__ctor_m4D335BC6056D830D4EF23C35EB3B8BED633E33F7_RuntimeMethod_var);
		__this->___messages_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messages_4), (void*)L_0);
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
// System.Void SMS_Selected::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMS_Selected_Awake_m26B2260490A2EDECBFE4A4B21D546CE5EEF17055 (SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m7F1DD5BABFF2FD21B5A8489E3E85084CC9B27BAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectionManager = FindObjectOfType<SelectionManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_0;
		L_0 = Object_FindObjectOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m7F1DD5BABFF2FD21B5A8489E3E85084CC9B27BAD(Object_FindObjectOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m7F1DD5BABFF2FD21B5A8489E3E85084CC9B27BAD_RuntimeMethod_var);
		__this->___selectionManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectionManager_4), (void*)L_0);
		// originalColor = bubbleBackground.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___bubbleBackground_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		__this->___originalColor_6 = L_2;
		// }
		return;
	}
}
// System.Void SMS_Selected::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMS_Selected_onClick_m2CB6187B55E65B3B40CAF5603A9F7413510C39F8 (SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* __this, const RuntimeMethod* method) 
{
	{
		// selectionManager.handleSelection(this);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_0 = __this->___selectionManager_4;
		SelectionManager_handleSelection_mD8F1ADBD8B07BA5B2CD383A645B492C7DAC31034(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void SMS_Selected::setSelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMS_Selected_setSelected_m735EDEA1832D2C188BAB7750549CD221EA404785 (SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* __this, bool ___selected0, const RuntimeMethod* method) 
{
	{
		// if (selected) {
		bool L_0 = ___selected0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// bubbleBackground.color = selectedColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___bubbleBackground_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___selectedColor_7;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		return;
	}

IL_0015:
	{
		// bubbleBackground.color = originalColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___bubbleBackground_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___originalColor_6;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void SMS_Selected::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMS_Selected__ctor_mCDF7B9FF8F7E48A14B7564549CACBD47FC2142E6 (SMS_Selected_t663547D32CAA0ED909A3365F050406D54B548F9D* __this, const RuntimeMethod* method) 
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
// System.Void UIDrag::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDrag_OnBeginDrag_mCD38AED38BCA52C015339198E2E7A69A345D02D5 (UIDrag_tB89477B723C8F52A59B4F49BD5381DC6360BC811* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(
		//     (RectTransform)transform.parent,
		//     eventData.position,
		//     eventData.pressEventCamera,
		//     out var localPoint
		// );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_1, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_3, L_5, (&V_0), NULL);
		// offset = (Vector2)transform.localPosition - localPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_9, L_10, NULL);
		__this->___offset_4 = L_11;
		// }
		return;
	}
}
// System.Void UIDrag::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDrag_OnDrag_mC4A2334E1665D2702B07A75C3798C47FCB01E8FF (UIDrag_tB89477B723C8F52A59B4F49BD5381DC6360BC811* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(
		//     (RectTransform)transform.parent,
		//     eventData.position,
		//     eventData.pressEventCamera,
		//     out var localPoint
		// );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_1, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_3, L_5, (&V_0), NULL);
		// transform.localPosition = localPoint + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___offset_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_10, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_11, NULL);
		// }
		return;
	}
}
// System.Void UIDrag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDrag__ctor_mF66333C38620FD0FA28DD2C5A5FDAB8E1640535A (UIDrag_tB89477B723C8F52A59B4F49BD5381DC6360BC811* __this, const RuntimeMethod* method) 
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
// System.Void Virus::startGame(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Virus_startGame_mC36E9F0257A7DB1901BD15FFF088B424394D5D4D (Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___contentParent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisVirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33_m0A6F4866230E07B61A4655C4E60A1A27C70E0148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BBD3504F25B0EE41EECC234A5D6DE00DB59BFFB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating(nameof(changeSprite), 0.75f, 0.75f);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral8BBD3504F25B0EE41EECC234A5D6DE00DB59BFFB, (0.75f), (0.75f), NULL);
		// virusManager = FindObjectOfType<VirusManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* L_0;
		L_0 = Object_FindObjectOfType_TisVirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33_m0A6F4866230E07B61A4655C4E60A1A27C70E0148(Object_FindObjectOfType_TisVirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33_m0A6F4866230E07B61A4655C4E60A1A27C70E0148_RuntimeMethod_var);
		__this->___virusManager_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___virusManager_9), (void*)L_0);
		// Content_Parent = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___Content_Parent_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Content_Parent_4), (void*)L_1);
		// myRect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___myRect_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myRect_5), (void*)L_2);
		// Content_Parent = contentParent;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ___contentParent0;
		__this->___Content_Parent_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Content_Parent_4), (void*)L_3);
		// ChooseRandomTarget();
		Virus_ChooseRandomTarget_m471ECBDC0EC83A3B5880B53B2A53EC2F5A6CCE3E(__this, NULL);
		// }
		return;
	}
}
// System.Void Virus::changeSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Virus_changeSprite_mB9048F8F647402F0062C93862B810F5FC352BA2A (Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Image myImage = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		// myImage.sprite = sprites[spriteChosen];
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_1 = __this->___sprites_10;
		int32_t L_2 = __this->___spriteChosen_11;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3;
		L_3 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_1, L_2, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_3, NULL);
		// if (spriteChosen == 0) {
		int32_t L_4 = __this->___spriteChosen_11;
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		// spriteChosen = 1;
		__this->___spriteChosen_11 = 1;
		return;
	}

IL_002c:
	{
		// spriteChosen = 0;
		__this->___spriteChosen_11 = 0;
		// }
		return;
	}
}
// System.Void Virus::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Virus_Update_m777BBD3A05F220EBE7F582E452072F37C86809D2 (Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* __this, const RuntimeMethod* method) 
{
	{
		// if (hasTargetPosition != false) {
		bool L_0 = __this->___hasTargetPosition_7;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// Move();
		Virus_Move_m8E4F6F02BE4913D01605EB21CB30D03879D15962(__this, NULL);
		// if (HasReachedTarget()) {
		bool L_1;
		L_1 = Virus_HasReachedTarget_m26B884E56CF22C51948BF8A9DA27123B243D4453(__this, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// ChooseRandomTarget();
		Virus_ChooseRandomTarget_m471ECBDC0EC83A3B5880B53B2A53EC2F5A6CCE3E(__this, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Virus::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Virus_Move_m8E4F6F02BE4913D01605EB21CB30D03879D15962 (Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* __this, const RuntimeMethod* method) 
{
	{
		// myRect.localPosition = Vector3.MoveTowards(myRect.localPosition, targetPosition, speed * Time.deltaTime);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___myRect_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___myRect_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___targetPosition_6;
		float L_4 = __this->___speed_8;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Boolean Virus::HasReachedTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Virus_HasReachedTarget_m26B884E56CF22C51948BF8A9DA27123B243D4453 (Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* __this, const RuntimeMethod* method) 
{
	{
		// if (Vector3.Distance(myRect.localPosition, targetPosition) < 0.1f)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___myRect_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___targetPosition_6;
		float L_3;
		L_3 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_2, NULL);
		if ((!(((float)L_3) < ((float)(0.100000001f)))))
		{
			goto IL_001f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Virus::ChooseRandomTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Virus_ChooseRandomTarget_m471ECBDC0EC83A3B5880B53B2A53EC2F5A6CCE3E (Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float width = Content_Parent.rect.width;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___Content_Parent_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_6 = L_1;
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_6), NULL);
		V_0 = L_2;
		// float height = Content_Parent.rect.height;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___Content_Parent_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_3, NULL);
		V_6 = L_4;
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_6), NULL);
		V_1 = L_5;
		// float virusWidth = myRect.rect.width;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___myRect_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_6, NULL);
		V_6 = L_7;
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_6), NULL);
		V_2 = L_8;
		// float virusHeight = myRect.rect.height;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___myRect_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_9, NULL);
		V_6 = L_10;
		float L_11;
		L_11 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_6), NULL);
		V_3 = L_11;
		// float x = 0, y = 0;
		V_4 = (0.0f);
		// float x = 0, y = 0;
		V_5 = (0.0f);
		// x = Random.Range(-width / 2 + virusWidth / 2, width / 2 - virusWidth / 2);
		float L_12 = V_0;
		float L_13 = V_2;
		float L_14 = V_0;
		float L_15 = V_2;
		float L_16;
		L_16 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_add(((float)(((-L_12))/(2.0f))), ((float)(L_13/(2.0f))))), ((float)il2cpp_codegen_subtract(((float)(L_14/(2.0f))), ((float)(L_15/(2.0f))))), NULL);
		V_4 = L_16;
		// y = Random.Range(-height / 2 + virusHeight / 2, height / 2 - virusHeight / 2);
		float L_17 = V_1;
		float L_18 = V_3;
		float L_19 = V_1;
		float L_20 = V_3;
		float L_21;
		L_21 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_add(((float)(((-L_17))/(2.0f))), ((float)(L_18/(2.0f))))), ((float)il2cpp_codegen_subtract(((float)(L_19/(2.0f))), ((float)(L_20/(2.0f))))), NULL);
		V_5 = L_21;
		// targetPosition = new Vector3(x, y, 0);
		float L_22 = V_4;
		float L_23 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), L_22, L_23, (0.0f), /*hidden argument*/NULL);
		__this->___targetPosition_6 = L_24;
		// hasTargetPosition = true;
		__this->___hasTargetPosition_7 = (bool)1;
		// speed = Random.Range(100, 500);
		int32_t L_25;
		L_25 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)100), ((int32_t)500), NULL);
		__this->___speed_8 = ((float)L_25);
		// }
		return;
	}
}
// System.Void Virus::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Virus_onClick_m9E30431A0DEA2FB21B4A4419D2AB3320058347E9 (Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// virusManager.virusDied();
		VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* L_0 = __this->___virusManager_9;
		VirusManager_virusDied_m4112BA017501C88004CE17DB6B830285B71E683E(L_0, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Virus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Virus__ctor_mDD00CD5F3D53AC2FF91C50D2C4170A4A42A12881 (Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* __this, const RuntimeMethod* method) 
{
	{
		// private float speed = 100f;
		__this->___speed_8 = (100.0f);
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
// System.Void VirusManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirusManager_Start_m7988B8458DEE2C5234B241A7BD8F5B5D7D01CE21 (VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// minigameManager = FindObjectOfType<MinigameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_0;
		L_0 = Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D(Object_FindObjectOfType_TisMinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028_m8DA46ED8C4EDC5D933E4CEC98798E0AF6026637D_RuntimeMethod_var);
		__this->___minigameManager_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___minigameManager_9), (void*)L_0);
		// virusesToGenerate = Random.Range(5, 10); // Generar un n?mero aleatorio de virus entre 5 y 10
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(5, ((int32_t)10), NULL);
		__this->___virusesToGenerate_6 = L_1;
		// StartCoroutine(GenerateViruses());
		RuntimeObject* L_2;
		L_2 = VirusManager_GenerateViruses_mF57A2C76233F7CF63422257917AFC0B7C2841D02(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator VirusManager::GenerateViruses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VirusManager_GenerateViruses_mF57A2C76233F7CF63422257917AFC0B7C2841D02 (VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F* L_0 = (U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F*)il2cpp_codegen_object_new(U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F_il2cpp_TypeInfo_var);
		U3CGenerateVirusesU3Ed__7__ctor_m13CCB997704FEA6DD23DF8AB73FF66BC86EE49D8(L_0, 0, NULL);
		U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void VirusManager::virusDied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirusManager_virusDied_m4112BA017501C88004CE17DB6B830285B71E683E (VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* __this, const RuntimeMethod* method) 
{
	{
		// virusesAlive--;
		int32_t L_0 = __this->___virusesAlive_7;
		__this->___virusesAlive_7 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (virusesAlive == 0 && virusesGenerated == virusesToGenerate) {
		int32_t L_1 = __this->___virusesAlive_7;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_2 = __this->___virusesGenerated_8;
		int32_t L_3 = __this->___virusesToGenerate_6;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_002f;
		}
	}
	{
		// minigameManager.siguienteEscena();
		MinigameManager_t9B5D37A28A53CB2680141E18BEDEC5EF3E24D028* L_4 = __this->___minigameManager_9;
		MinigameManager_siguienteEscena_mF9DE2E812853F9CFBB8CCB0E6F947D03E60FD781(L_4, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void VirusManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirusManager__ctor_m8552D468BBFF0CE827B8A8B5CD33E9CDDAAF2ECA (VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* __this, const RuntimeMethod* method) 
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
// System.Void VirusManager/<GenerateViruses>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateVirusesU3Ed__7__ctor_m13CCB997704FEA6DD23DF8AB73FF66BC86EE49D8 (U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VirusManager/<GenerateViruses>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateVirusesU3Ed__7_System_IDisposable_Dispose_mC6DFFAE993979AF50DA840305F70439F320F93A9 (U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VirusManager/<GenerateViruses>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGenerateVirusesU3Ed__7_MoveNext_m6A27470D2ABE3CA9A606E20B80F1BD5E206E3F72 (U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVirus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D_m6FF613F5D883B4A6F9463802D7A9B1E2FDFF2C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < virusesToGenerate; i++)
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_0261;
	}

IL_002a:
	{
		// float waitTime = Random.Range(0f, 6f);
		float L_4;
		L_4 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (6.0f), NULL);
		V_2 = L_4;
		// yield return new WaitForSeconds(waitTime);
		float L_5 = V_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int chosenBorder = Random.Range(0, 4); // Elegir un borde aleatorio (0: izquierda, 1: derecha, 2: arriba, 3: abajo)
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 4, NULL);
		V_3 = L_7;
		// float width = Content_Parent.rect.width;
		VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* L_8 = V_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = L_8->___Content_Parent_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_9, NULL);
		V_10 = L_10;
		float L_11;
		L_11 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_10), NULL);
		V_4 = L_11;
		// float height = Content_Parent.rect.height;
		VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* L_12 = V_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = L_12->___Content_Parent_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14;
		L_14 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_13, NULL);
		V_10 = L_14;
		float L_15;
		L_15 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_10), NULL);
		V_5 = L_15;
		// RectTransform virusRect = virusPrefab.GetComponent<RectTransform>();
		VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* L_16 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16->___virusPrefab_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18;
		L_18 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_17, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		// float virusWidth = virusRect.rect.width;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = L_18;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_20;
		L_20 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_19, NULL);
		V_10 = L_20;
		float L_21;
		L_21 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_10), NULL);
		V_6 = L_21;
		// float virusHeight = virusRect.rect.height;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
		L_22 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_19, NULL);
		V_10 = L_22;
		float L_23;
		L_23 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_10), NULL);
		V_7 = L_23;
		// float x = 0, y = 0;
		V_8 = (0.0f);
		// float x = 0, y = 0;
		V_9 = (0.0f);
		int32_t L_24 = V_3;
		switch (L_24)
		{
			case 0:
			{
				goto IL_00df;
			}
			case 1:
			{
				goto IL_0128;
			}
			case 2:
			{
				goto IL_0170;
			}
			case 3:
			{
				goto IL_01b5;
			}
		}
	}
	{
		goto IL_01f9;
	}

IL_00df:
	{
		// x = -width / 2 - virusWidth / 2 - 15;
		float L_25 = V_4;
		float L_26 = V_6;
		V_8 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)(((-L_25))/(2.0f))), ((float)(L_26/(2.0f))))), (15.0f)));
		// y = Random.Range(-height / 2 + virusHeight / 2, height / 2 - virusHeight / 2);
		float L_27 = V_5;
		float L_28 = V_7;
		float L_29 = V_5;
		float L_30 = V_7;
		float L_31;
		L_31 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_add(((float)(((-L_27))/(2.0f))), ((float)(L_28/(2.0f))))), ((float)il2cpp_codegen_subtract(((float)(L_29/(2.0f))), ((float)(L_30/(2.0f))))), NULL);
		V_9 = L_31;
		// break;
		goto IL_01f9;
	}

IL_0128:
	{
		// x = width / 2 + virusWidth / 2 + 15;
		float L_32 = V_4;
		float L_33 = V_6;
		V_8 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)(L_32/(2.0f))), ((float)(L_33/(2.0f))))), (15.0f)));
		// y = Random.Range(-height / 2 + virusHeight / 2, height / 2 - virusHeight / 2);
		float L_34 = V_5;
		float L_35 = V_7;
		float L_36 = V_5;
		float L_37 = V_7;
		float L_38;
		L_38 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_add(((float)(((-L_34))/(2.0f))), ((float)(L_35/(2.0f))))), ((float)il2cpp_codegen_subtract(((float)(L_36/(2.0f))), ((float)(L_37/(2.0f))))), NULL);
		V_9 = L_38;
		// break;
		goto IL_01f9;
	}

IL_0170:
	{
		// x = Random.Range(-width / 2 + virusWidth / 2, width / 2 - virusWidth / 2);
		float L_39 = V_4;
		float L_40 = V_6;
		float L_41 = V_4;
		float L_42 = V_6;
		float L_43;
		L_43 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_add(((float)(((-L_39))/(2.0f))), ((float)(L_40/(2.0f))))), ((float)il2cpp_codegen_subtract(((float)(L_41/(2.0f))), ((float)(L_42/(2.0f))))), NULL);
		V_8 = L_43;
		// y = height / 2 + virusHeight / 2 + 15;
		float L_44 = V_5;
		float L_45 = V_7;
		V_9 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)(L_44/(2.0f))), ((float)(L_45/(2.0f))))), (15.0f)));
		// break;
		goto IL_01f9;
	}

IL_01b5:
	{
		// x = Random.Range(-width / 2 + virusWidth / 2, width / 2 - virusWidth / 2);
		float L_46 = V_4;
		float L_47 = V_6;
		float L_48 = V_4;
		float L_49 = V_6;
		float L_50;
		L_50 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_add(((float)(((-L_46))/(2.0f))), ((float)(L_47/(2.0f))))), ((float)il2cpp_codegen_subtract(((float)(L_48/(2.0f))), ((float)(L_49/(2.0f))))), NULL);
		V_8 = L_50;
		// y = -height / 2 - virusHeight / 2 - 15;
		float L_51 = V_5;
		float L_52 = V_7;
		V_9 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)(((-L_51))/(2.0f))), ((float)(L_52/(2.0f))))), (15.0f)));
	}

IL_01f9:
	{
		// GameObject virus = Instantiate(virusPrefab, Content_Parent);
		VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* L_53 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = L_53->___virusPrefab_4;
		VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* L_55 = V_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_56 = L_55->___Content_Parent_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
		L_57 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_54, L_56, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// virus.GetComponent<RectTransform>().localPosition = new Vector3(x, y, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = L_57;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_59;
		L_59 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_58, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		float L_60 = V_8;
		float L_61 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_62), L_60, L_61, (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_59, L_62, NULL);
		// virus.GetComponent<Virus>().startGame(Content_Parent);
		Virus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D* L_63;
		L_63 = GameObject_GetComponent_TisVirus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D_m6FF613F5D883B4A6F9463802D7A9B1E2FDFF2C49(L_58, GameObject_GetComponent_TisVirus_tC892067C128CE3932C51F9FBF4FA1DEB4035A17D_m6FF613F5D883B4A6F9463802D7A9B1E2FDFF2C49_RuntimeMethod_var);
		VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* L_64 = V_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_65 = L_64->___Content_Parent_5;
		Virus_startGame_mC36E9F0257A7DB1901BD15FFF088B424394D5D4D(L_63, L_65, NULL);
		// virusesGenerated++;
		VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* L_66 = V_1;
		VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* L_67 = V_1;
		int32_t L_68 = L_67->___virusesGenerated_8;
		L_66->___virusesGenerated_8 = ((int32_t)il2cpp_codegen_add(L_68, 1));
		// virusesAlive++;
		VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* L_69 = V_1;
		VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* L_70 = V_1;
		int32_t L_71 = L_70->___virusesAlive_7;
		L_69->___virusesAlive_7 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		// for (int i = 0; i < virusesToGenerate; i++)
		int32_t L_72 = __this->___U3CiU3E5__2_3;
		V_11 = L_72;
		int32_t L_73 = V_11;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_0261:
	{
		// for (int i = 0; i < virusesToGenerate; i++)
		int32_t L_74 = __this->___U3CiU3E5__2_3;
		VirusManager_t06D6C1BD19F48B3DE0984E003EAFF3E6C18F0A33* L_75 = V_1;
		int32_t L_76 = L_75->___virusesToGenerate_6;
		if ((((int32_t)L_74) < ((int32_t)L_76)))
		{
			goto IL_002a;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object VirusManager/<GenerateViruses>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGenerateVirusesU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8240199D9A04CA07EFF92A35E1021F875F4F006D (U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VirusManager/<GenerateViruses>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateVirusesU3Ed__7_System_Collections_IEnumerator_Reset_m03EEE5A64B2D40BF330FB3112DF3E9B5123C464E (U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGenerateVirusesU3Ed__7_System_Collections_IEnumerator_Reset_m03EEE5A64B2D40BF330FB3112DF3E9B5123C464E_RuntimeMethod_var)));
	}
}
// System.Object VirusManager/<GenerateViruses>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGenerateVirusesU3Ed__7_System_Collections_IEnumerator_get_Current_m72E71D3BF39D1A5BF9453748E34FB8142C2213A6 (U3CGenerateVirusesU3Ed__7_tAD9751BF2A675857B580D9CBAED8CC7CB988853F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void VHSPostProcess::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VHSPostProcess_OnRenderImage_m0FB4B23CBE6D2FE466941699DF06143549AC2C06 (VHSPostProcess_t26DB2633000E465CB27A21C273F82EAEDEF8DF0E* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___src0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (VHSMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___VHSMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// Graphics.Blit(src, dest, VHSMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___src0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___dest1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___VHSMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_2, L_3, L_4, NULL);
		return;
	}

IL_001c:
	{
		// Graphics.Blit(src, dest);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___src0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void VHSPostProcess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VHSPostProcess__ctor_mBED66D44E92B027B3DCD1981BD0E2010A2A9D355 (VHSPostProcess_t26DB2633000E465CB27A21C273F82EAEDEF8DF0E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform content { get { return m_Content; } set { m_Content = value; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_Content_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_viewport_m85092216DD476F77E78F5CE50F9C4E70063ECCF9_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform viewport { get { return m_Viewport; } set { m_Viewport = value; SetDirtyCaching(); } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_Viewport_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
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
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
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
