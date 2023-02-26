#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.Object>
struct Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<System.Int32>
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89;
// System.Collections.Generic.Dictionary`2<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct Dictionary_2_t9FB13B661433DEEC78301CAC98E6FF103A9FF47E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph>
struct Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7;
// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character>
struct Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0;
// TMPro.FastAction`1<System.Boolean>
struct FastAction_1_tFC26007E6ECC49160C91059DC218FDD0602EE4F3;
// TMPro.FastAction`1<System.Object>
struct FastAction_1_t30779A2821DCE05CA702D5800B30CABF67687135;
// TMPro.FastAction`1<UnityEngine.Object>
struct FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005;
// TMPro.FastAction`2<System.Boolean,UnityEngine.Material>
struct FastAction_2_tECA23F8F5AC1D6DF8BAB8AEDD017A064D210F83A;
// TMPro.FastAction`2<System.Boolean,UnityEngine.Object>
struct FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B;
// TMPro.FastAction`2<System.Object,TMPro.Compute_DT_EventArgs>
struct FastAction_2_t7A930CE5DBE699F7BADA18E19F951E3D68821A0D;
// TMPro.FastAction`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>
struct FastAction_3_tF1621854653F0CB64C7EE2C86A181B843FA49E77;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.HashSet`1<System.UInt32>
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
// System.Collections.Generic.LinkedList`1<System.Action`1<UnityEngine.Object>>
struct LinkedList_1_tA75C78C76C8C00278F758EE6873486604C8C880C;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph>
struct List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C;
// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>
struct List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer>
struct List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96;
// System.Collections.Generic.List`1<TMPro.TMP_Character>
struct List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E;
// System.Collections.Generic.List`1<TMPro.TMP_FontAsset>
struct List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF;
// System.Collections.Generic.List`1<TMPro.TMP_Glyph>
struct List_1_tAB7976FADCF872E418770E60783056C23394843D;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
// System.Collections.Generic.List`1<Polytope.PT_Create_Prefab/MeshType>
struct List_1_tACE6654758D82222267EA18A347541711FD0AECA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D;
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_FontWeightPair[]
struct TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37;
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E;
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7;
// TMPro.TMP_PageInfo[]
struct TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Polytope.PT_Create_Prefab/MeshType[]
struct MeshTypeU5BU5D_tBF32387370FBAC202A1D38A9C40984C780860C67;
// CartoonHeroes.SetCharacter/Item[]
struct ItemU5BU5D_tE88E39DBBFE3C18F83572B13B26BCA8B81493166;
// CartoonHeroes.SetCharacter/ItemGroup[]
struct ItemGroupU5BU5D_t33B38B410FC63D24B6E6DBF06885A9AB2448F33C;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// TMPro.Examples.VertexJitter/VertexAnim[]
struct VertexAnimU5BU5D_tC74236D4EB454A8EF2CE1E6145CE5F78E1D5CF38;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// TMPro.FaceInfo_Legacy
struct FaceInfo_Legacy_t23B118EFD5AB7162515ABF18C0212DF155CCF7B8;
// TMPro.FastAction
struct FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// TMPro.KerningTable
struct KerningTable_t040C3FE3B519B12AADE1C5B00628581551D5AB6B;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Polytope.PT_Create_Prefab
struct PT_Create_Prefab_tDE5FEE6302F4542D740AC4FFCAD12520243ADC3C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// CartoonHeroes.SetCharacter
struct SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2;
// UnityTemplateProjects.SimpleCameraController
struct SimpleCameraController_t17AF9A37DB0C95045C639A9A74B1D80500082020;
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
// TMPro.TMP_FontFeatureTable
struct TMP_FontFeatureTable_t726A09E64FDF682A8FFE294BB6CFE7747F6C40EA;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.Examples.TMP_UiFrameRateCounter
struct TMP_UiFrameRateCounter_t3CB67462256A3570DFD0BD10261E7CABB11AFC0E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// TMPro.Examples.VertexColorCycler
struct VertexColorCycler_t527535DC3F38CBB70E8A4B35907DA8EC4FC62C8D;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// TMPro.Examples.VertexJitter
struct VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7;
// TMPro.Examples.VertexShakeA
struct VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F;
// TMPro.Examples.VertexShakeB
struct VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8;
// TMPro.Examples.VertexZoom
struct VertexZoom_t51F05EB153497034D27896F07590D790A73981A6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// TMPro.Examples.WarpTextExample
struct WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Polytope.PT_Create_Prefab/MaterialType
struct MaterialType_t77459A212D2DDA81CDF7054273EBB9FB27DAC703;
// Polytope.PT_Create_Prefab/MeshType
struct MeshType_t96563BCFB81091D4D5419814985D65BF461F753B;
// Polytope.PT_Create_Prefab/PreviewCallback
struct PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133;
// Polytope.PT_Create_Prefab/ShaderProperties_C
struct ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C;
// Polytope.PT_Create_Prefab/ShaderProperties_CI
struct ShaderProperties_CI_t9CBA7C7551B2E3C14417C0507021DE19105126FB;
// Polytope.PT_Create_Prefab/ShaderProperties_CS
struct ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B;
// Polytope.PT_Create_Prefab/ShaderProperties_CSM
struct ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079;
// Polytope.PT_Create_Prefab/ShaderProperties_CSP
struct ShaderProperties_CSP_t67F1677582890FAC9C9B0435A9FFB055BEA4013B;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// CartoonHeroes.SetCharacter/Item
struct Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1;
// CartoonHeroes.SetCharacter/ItemGroup
struct ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919;
// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD;
// TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3
struct U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264;
// TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11
struct U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956;
// TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11
struct U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E;
// TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10
struct U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E;
// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7;
// TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10
struct U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123;
// TMPro.Examples.WarpTextExample/<WarpText>d__8
struct U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tACE6654758D82222267EA18A347541711FD0AECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAnimU5BU5D_tC74236D4EB454A8EF2CE1E6145CE5F78E1D5CF38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0509511F12B62E39B9F2DB9A7CCB47930F372A58;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1BD69EC6C9E191C57664923345F3742272616987;
IL2CPP_EXTERN_C String_t* _stringLiteral326807296C186F707668947A270EF59FBA873FFC;
IL2CPP_EXTERN_C String_t* _stringLiteral3E7E3FA4BB96AE8277DF1E51F00ADDEF3CC05486;
IL2CPP_EXTERN_C String_t* _stringLiteral461EE177B772C8076E2D62C04952F00C85951024;
IL2CPP_EXTERN_C String_t* _stringLiteral500FF24EC184A900F27907F13116703701E8CF87;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral6A22C21379358369B84B929BD90C243CCA9D524F;
IL2CPP_EXTERN_C String_t* _stringLiteral776837ADD4231179FC45FB2B6EF6516AF53A8491;
IL2CPP_EXTERN_C String_t* _stringLiteral7F85A2723BB62FEF95DD6F8C5F0FF606EA62246A;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377;
IL2CPP_EXTERN_C String_t* _stringLiteral9ECD13393A1BC799BB4763A4E4CD5B53E220C53A;
IL2CPP_EXTERN_C String_t* _stringLiteralA6107EE62A5874EF8D2DEAC7D3C0A9F07B89E096;
IL2CPP_EXTERN_C String_t* _stringLiteralA87D266F5AAE1AF5998468D25833A8C6AD50D4FD;
IL2CPP_EXTERN_C String_t* _stringLiteralAB3448E21FA53C63C06270903A13B17D02935BE0;
IL2CPP_EXTERN_C String_t* _stringLiteralBA82ABBB488D4C5BD45DD0E5C376FEBC531E5DD8;
IL2CPP_EXTERN_C String_t* _stringLiteralCC094FA7066B8AE20EF6FDC7EAFD9B600B668D85;
IL2CPP_EXTERN_C String_t* _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493;
IL2CPP_EXTERN_C String_t* _stringLiteralD00074DE8ACBEBA7EF28BE447E997E8352E84502;
IL2CPP_EXTERN_C String_t* _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F;
IL2CPP_EXTERN_C String_t* _stringLiteralEA28DCFB7E0DE73B401C62DCA6BF38A1B7D944C1;
IL2CPP_EXTERN_C String_t* _stringLiteralEA2B90813D807BBAD32101646C912B7440032B3A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9B15E800128549D648CD61F87228399E16EB934A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m63D6348A803E41D37BE9E8CC33C99580918CA666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB57A3E1F4B4ECD4893C8B6080ADC021BEB56E7D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160_m5F15FBF7AC2FCDC8C169ED260201B75AB8CB50F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5A5869FEFA67D5E9659F1145B83581D954550C1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDE5E71C88F5096FD70EB061287ADF0B847732821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m15291DCCCEC264095634B26DD6F24D52360BDAF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m2F84864A089CBA0B878B7AC1EA39A49B82682A90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_Reset_m319AC50F2DE1572FB7D7AF4F5F65958D01477899_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m8E51A05E012CCFA439DCF10A8B5C4FA196E4344A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m07746C332D2D8CE5DEA59873C26F2FAD4B369B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VertexJitter_ON_TEXT_CHANGED_m0CF9C49A1033B4475C04A417440F39490FED64A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VertexShakeA_ON_TEXT_CHANGED_mE7A41CEFDB0008A1CD15F156EFEE1C895A92EE77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VertexShakeB_ON_TEXT_CHANGED_mF8641640C828A9664AE03AF01CB4832E14EF436D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var;
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3;

struct Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E;
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct ItemU5BU5D_tE88E39DBBFE3C18F83572B13B26BCA8B81493166;
struct ItemGroupU5BU5D_t33B38B410FC63D24B6E6DBF06885A9AB2448F33C;
struct VertexAnimU5BU5D_tC74236D4EB454A8EF2CE1E6145CE5F78E1D5CF38;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FastAction`1<UnityEngine.Object>
struct FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<System.Action`1<A>> TMPro.FastAction`1::delegates
	LinkedList_1_tA75C78C76C8C00278F758EE6873486604C8C880C* ___delegates_0;
	// System.Collections.Generic.Dictionary`2<System.Action`1<A>,System.Collections.Generic.LinkedListNode`1<System.Action`1<A>>> TMPro.FastAction`1::lookup
	Dictionary_2_t9FB13B661433DEEC78301CAC98E6FF103A9FF47E* ___lookup_1;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer>
struct List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Polytope.PT_Create_Prefab/MeshType>
struct List_1_tACE6654758D82222267EA18A347541711FD0AECA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshTypeU5BU5D_tBF32387370FBAC202A1D38A9C40984C780860C67* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// TMPro.TMPro_EventManager
struct TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9  : public RuntimeObject
{
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

// Polytope.PT_Create_Prefab/MaterialType
struct MaterialType_t77459A212D2DDA81CDF7054273EBB9FB27DAC703  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Material> Polytope.PT_Create_Prefab/MaterialType::assets
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___assets_0;
	// UnityEngine.Material Polytope.PT_Create_Prefab/MaterialType::instance
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___instance_1;
	// System.Int32 Polytope.PT_Create_Prefab/MaterialType::index
	int32_t ___index_2;
};

// Polytope.PT_Create_Prefab/MeshType
struct MeshType_t96563BCFB81091D4D5419814985D65BF461F753B  : public RuntimeObject
{
	// System.String Polytope.PT_Create_Prefab/MeshType::type
	String_t* ___type_0;
	// System.Int32 Polytope.PT_Create_Prefab/MeshType::idx
	int32_t ___idx_1;
	// System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer> Polytope.PT_Create_Prefab/MeshType::list
	List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* ___list_2;
};

// Polytope.PT_Create_Prefab/TypeOfMesh
struct TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749  : public RuntimeObject
{
};

// CartoonHeroes.SetCharacter/Item
struct Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1  : public RuntimeObject
{
	// UnityEngine.GameObject CartoonHeroes.SetCharacter/Item::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_0;
};

// CartoonHeroes.SetCharacter/ItemGroup
struct ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919  : public RuntimeObject
{
	// System.String CartoonHeroes.SetCharacter/ItemGroup::name
	String_t* ___name_0;
	// CartoonHeroes.SetCharacter/Item[] CartoonHeroes.SetCharacter/ItemGroup::items
	ItemU5BU5D_tE88E39DBBFE3C18F83572B13B26BCA8B81493166* ___items_1;
	// System.Int32 CartoonHeroes.SetCharacter/ItemGroup::slots
	int32_t ___slots_2;
};

// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD  : public RuntimeObject
{
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::yaw
	float ___yaw_0;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::pitch
	float ___pitch_1;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::roll
	float ___roll_2;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::x
	float ___x_3;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::y
	float ___y_4;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::z
	float ___z_5;
};

// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Single> TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::modifiedCharScale
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___modifiedCharScale_0;
	// System.Comparison`1<System.Int32> TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::<>9__0
	Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___U3CU3E9__0_1;
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 
{
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_FaceIndex
	int32_t ___m_FaceIndex_0;
	// System.String UnityEngine.TextCore.FaceInfo::m_FamilyName
	String_t* ___m_FamilyName_1;
	// System.String UnityEngine.TextCore.FaceInfo::m_StyleName
	String_t* ___m_StyleName_2;
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_PointSize
	int32_t ___m_PointSize_3;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Scale
	float ___m_Scale_4;
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_UnitsPerEM
	int32_t ___m_UnitsPerEM_5;
	// System.Single UnityEngine.TextCore.FaceInfo::m_LineHeight
	float ___m_LineHeight_6;
	// System.Single UnityEngine.TextCore.FaceInfo::m_AscentLine
	float ___m_AscentLine_7;
	// System.Single UnityEngine.TextCore.FaceInfo::m_CapLine
	float ___m_CapLine_8;
	// System.Single UnityEngine.TextCore.FaceInfo::m_MeanLine
	float ___m_MeanLine_9;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Baseline
	float ___m_Baseline_10;
	// System.Single UnityEngine.TextCore.FaceInfo::m_DescentLine
	float ___m_DescentLine_11;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptOffset
	float ___m_SuperscriptOffset_12;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptSize
	float ___m_SuperscriptSize_13;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptOffset
	float ___m_SubscriptOffset_14;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptSize
	float ___m_SubscriptSize_15;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineOffset
	float ___m_UnderlineOffset_16;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineThickness
	float ___m_UnderlineThickness_17;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughOffset
	float ___m_StrikethroughOffset_18;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughThickness
	float ___m_StrikethroughThickness_19;
	// System.Single UnityEngine.TextCore.FaceInfo::m_TabWidth
	float ___m_TabWidth_20;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_pinvoke
{
	int32_t ___m_FaceIndex_0;
	char* ___m_FamilyName_1;
	char* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	int32_t ___m_UnitsPerEM_5;
	float ___m_LineHeight_6;
	float ___m_AscentLine_7;
	float ___m_CapLine_8;
	float ___m_MeanLine_9;
	float ___m_Baseline_10;
	float ___m_DescentLine_11;
	float ___m_SuperscriptOffset_12;
	float ___m_SuperscriptSize_13;
	float ___m_SubscriptOffset_14;
	float ___m_SubscriptSize_15;
	float ___m_UnderlineOffset_16;
	float ___m_UnderlineThickness_17;
	float ___m_StrikethroughOffset_18;
	float ___m_StrikethroughThickness_19;
	float ___m_TabWidth_20;
};
// Native definition for COM marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_com
{
	int32_t ___m_FaceIndex_0;
	Il2CppChar* ___m_FamilyName_1;
	Il2CppChar* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	int32_t ___m_UnitsPerEM_5;
	float ___m_LineHeight_6;
	float ___m_AscentLine_7;
	float ___m_CapLine_8;
	float ___m_MeanLine_9;
	float ___m_Baseline_10;
	float ___m_DescentLine_11;
	float ___m_SuperscriptOffset_12;
	float ___m_SuperscriptSize_13;
	float ___m_SubscriptOffset_14;
	float ___m_SubscriptSize_15;
	float ___m_UnderlineOffset_16;
	float ___m_UnderlineThickness_17;
	float ___m_StrikethroughOffset_18;
	float ___m_StrikethroughThickness_19;
	float ___m_TabWidth_20;
};

// TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF 
{
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileName
	String_t* ___sourceFontFileName_0;
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileGUID
	String_t* ___sourceFontFileGUID_1;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSizeSamplingMode
	int32_t ___pointSizeSamplingMode_2;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSize
	int32_t ___pointSize_3;
	// System.Int32 TMPro.FontAssetCreationSettings::padding
	int32_t ___padding_4;
	// System.Int32 TMPro.FontAssetCreationSettings::packingMode
	int32_t ___packingMode_5;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasWidth
	int32_t ___atlasWidth_6;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasHeight
	int32_t ___atlasHeight_7;
	// System.Int32 TMPro.FontAssetCreationSettings::characterSetSelectionMode
	int32_t ___characterSetSelectionMode_8;
	// System.String TMPro.FontAssetCreationSettings::characterSequence
	String_t* ___characterSequence_9;
	// System.String TMPro.FontAssetCreationSettings::referencedFontAssetGUID
	String_t* ___referencedFontAssetGUID_10;
	// System.String TMPro.FontAssetCreationSettings::referencedTextAssetGUID
	String_t* ___referencedTextAssetGUID_11;
	// System.Int32 TMPro.FontAssetCreationSettings::fontStyle
	int32_t ___fontStyle_12;
	// System.Single TMPro.FontAssetCreationSettings::fontStyleModifier
	float ___fontStyleModifier_13;
	// System.Int32 TMPro.FontAssetCreationSettings::renderMode
	int32_t ___renderMode_14;
	// System.Boolean TMPro.FontAssetCreationSettings::includeFontFeatures
	bool ___includeFontFeatures_15;
};
// Native definition for P/Invoke marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshaled_pinvoke
{
	char* ___sourceFontFileName_0;
	char* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	char* ___characterSequence_9;
	char* ___referencedFontAssetGUID_10;
	char* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
};
// Native definition for COM marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshaled_com
{
	Il2CppChar* ___sourceFontFileName_0;
	Il2CppChar* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	Il2CppChar* ___characterSequence_9;
	Il2CppChar* ___referencedFontAssetGUID_10;
	Il2CppChar* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
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

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// TMPro.Examples.VertexJitter/VertexAnim
struct VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7 
{
	// System.Single TMPro.Examples.VertexJitter/VertexAnim::angleRange
	float ___angleRange_0;
	// System.Single TMPro.Examples.VertexJitter/VertexAnim::angle
	float ___angle_1;
	// System.Single TMPro.Examples.VertexJitter/VertexAnim::speed
	float ___speed_2;
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

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D  : public RuntimeObject
{
	// TMPro.TMP_Text TMPro.TMP_TextInfo::textComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_2;
	// System.Int32 TMPro.TMP_TextInfo::characterCount
	int32_t ___characterCount_3;
	// System.Int32 TMPro.TMP_TextInfo::spriteCount
	int32_t ___spriteCount_4;
	// System.Int32 TMPro.TMP_TextInfo::spaceCount
	int32_t ___spaceCount_5;
	// System.Int32 TMPro.TMP_TextInfo::wordCount
	int32_t ___wordCount_6;
	// System.Int32 TMPro.TMP_TextInfo::linkCount
	int32_t ___linkCount_7;
	// System.Int32 TMPro.TMP_TextInfo::lineCount
	int32_t ___lineCount_8;
	// System.Int32 TMPro.TMP_TextInfo::pageCount
	int32_t ___pageCount_9;
	// System.Int32 TMPro.TMP_TextInfo::materialCount
	int32_t ___materialCount_10;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_TextInfo::characterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___characterInfo_11;
	// TMPro.TMP_WordInfo[] TMPro.TMP_TextInfo::wordInfo
	TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC* ___wordInfo_12;
	// TMPro.TMP_LinkInfo[] TMPro.TMP_TextInfo::linkInfo
	TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E* ___linkInfo_13;
	// TMPro.TMP_LineInfo[] TMPro.TMP_TextInfo::lineInfo
	TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* ___lineInfo_14;
	// TMPro.TMP_PageInfo[] TMPro.TMP_TextInfo::pageInfo
	TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9* ___pageInfo_15;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::meshInfo
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfo_16;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::m_CachedMeshInfo
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___m_CachedMeshInfo_17;
};

// TMPro.TMP_Vertex
struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A 
{
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_4;
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

// Polytope.PT_Create_Prefab/ShaderProperties_C
struct ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C  : public RuntimeObject
{
	// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_C::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
};

// Polytope.PT_Create_Prefab/ShaderProperties_CI
struct ShaderProperties_CI_t9CBA7C7551B2E3C14417C0507021DE19105126FB  : public RuntimeObject
{
	// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_CI::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// UnityEngine.Sprite Polytope.PT_Create_Prefab/ShaderProperties_CI::image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___image_1;
};

// Polytope.PT_Create_Prefab/ShaderProperties_CS
struct ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B  : public RuntimeObject
{
	// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_CS::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CS::smoothness
	float ___smoothness_1;
};

// Polytope.PT_Create_Prefab/ShaderProperties_CSM
struct ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079  : public RuntimeObject
{
	// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_CSM::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CSM::smoothness
	float ___smoothness_1;
	// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CSM::metallic
	float ___metallic_2;
};

// Polytope.PT_Create_Prefab/ShaderProperties_CSP
struct ShaderProperties_CSP_t67F1677582890FAC9C9B0435A9FFB055BEA4013B  : public RuntimeObject
{
	// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_CSP::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CSP::size
	float ___size_1;
	// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CSP::power
	float ___power_2;
};

// TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3
struct U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264  : public RuntimeObject
{
	// System.Int32 TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.Examples.VertexColorCycler TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<>4__this
	VertexColorCycler_t527535DC3F38CBB70E8A4B35907DA8EC4FC62C8D* ___U3CU3E4__this_2;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<textInfo>5__1
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___U3CtextInfoU3E5__1_3;
	// System.Int32 TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<currentCharacter>5__2
	int32_t ___U3CcurrentCharacterU3E5__2_4;
	// UnityEngine.Color32[] TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<newVertexColors>5__3
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___U3CnewVertexColorsU3E5__3_5;
	// UnityEngine.Color32 TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<c0>5__4
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___U3Cc0U3E5__4_6;
	// System.Int32 TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<characterCount>5__5
	int32_t ___U3CcharacterCountU3E5__5_7;
	// System.Int32 TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<materialIndex>5__6
	int32_t ___U3CmaterialIndexU3E5__6_8;
	// System.Int32 TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::<vertexIndex>5__7
	int32_t ___U3CvertexIndexU3E5__7_9;
};

// TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11
struct U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E  : public RuntimeObject
{
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.Examples.VertexShakeA TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<>4__this
	VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* ___U3CU3E4__this_2;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<textInfo>5__1
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___U3CtextInfoU3E5__1_3;
	// UnityEngine.Matrix4x4 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<matrix>5__2
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3CmatrixU3E5__2_4;
	// UnityEngine.Vector3[][] TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<copyOfVertices>5__3
	Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* ___U3CcopyOfVerticesU3E5__3_5;
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<characterCount>5__4
	int32_t ___U3CcharacterCountU3E5__4_6;
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<lineCount>5__5
	int32_t ___U3ClineCountU3E5__5_7;
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<i>5__6
	int32_t ___U3CiU3E5__6_8;
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<length>5__7
	int32_t ___U3ClengthU3E5__7_9;
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<i>5__8
	int32_t ___U3CiU3E5__8_10;
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<first>5__9
	int32_t ___U3CfirstU3E5__9_11;
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<last>5__10
	int32_t ___U3ClastU3E5__10_12;
	// UnityEngine.Vector3 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<centerOfLine>5__11
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CcenterOfLineU3E5__11_13;
	// UnityEngine.Quaternion TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<rotation>5__12
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CrotationU3E5__12_14;
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<j>5__13
	int32_t ___U3CjU3E5__13_15;
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<materialIndex>5__14
	int32_t ___U3CmaterialIndexU3E5__14_16;
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<vertexIndex>5__15
	int32_t ___U3CvertexIndexU3E5__15_17;
	// UnityEngine.Vector3[] TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<sourceVertices>5__16
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___U3CsourceVerticesU3E5__16_18;
	// System.Single TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<randomScale>5__17
	float ___U3CrandomScaleU3E5__17_19;
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<i>5__18
	int32_t ___U3CiU3E5__18_20;
};

// TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10
struct U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E  : public RuntimeObject
{
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.Examples.VertexShakeB TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<>4__this
	VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* ___U3CU3E4__this_2;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<textInfo>5__1
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___U3CtextInfoU3E5__1_3;
	// UnityEngine.Matrix4x4 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<matrix>5__2
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3CmatrixU3E5__2_4;
	// UnityEngine.Vector3[][] TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<copyOfVertices>5__3
	Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* ___U3CcopyOfVerticesU3E5__3_5;
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<characterCount>5__4
	int32_t ___U3CcharacterCountU3E5__4_6;
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<lineCount>5__5
	int32_t ___U3ClineCountU3E5__5_7;
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<i>5__6
	int32_t ___U3CiU3E5__6_8;
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<length>5__7
	int32_t ___U3ClengthU3E5__7_9;
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<i>5__8
	int32_t ___U3CiU3E5__8_10;
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<first>5__9
	int32_t ___U3CfirstU3E5__9_11;
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<last>5__10
	int32_t ___U3ClastU3E5__10_12;
	// UnityEngine.Vector3 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<centerOfLine>5__11
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CcenterOfLineU3E5__11_13;
	// UnityEngine.Quaternion TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<rotation>5__12
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CrotationU3E5__12_14;
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<j>5__13
	int32_t ___U3CjU3E5__13_15;
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<materialIndex>5__14
	int32_t ___U3CmaterialIndexU3E5__14_16;
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<vertexIndex>5__15
	int32_t ___U3CvertexIndexU3E5__15_17;
	// UnityEngine.Vector3[] TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<sourceVertices>5__16
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___U3CsourceVerticesU3E5__16_18;
	// UnityEngine.Vector3 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<charCenter>5__17
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CcharCenterU3E5__17_19;
	// System.Single TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<randomScale>5__18
	float ___U3CrandomScaleU3E5__18_20;
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<i>5__19
	int32_t ___U3CiU3E5__19_21;
};

// TMPro.Examples.WarpTextExample/<WarpText>d__8
struct U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E  : public RuntimeObject
{
	// System.Int32 TMPro.Examples.WarpTextExample/<WarpText>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.Examples.WarpTextExample TMPro.Examples.WarpTextExample/<WarpText>d__8::<>4__this
	WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* ___U3CU3E4__this_2;
	// UnityEngine.Vector3[] TMPro.Examples.WarpTextExample/<WarpText>d__8::<vertices>5__1
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___U3CverticesU3E5__1_3;
	// UnityEngine.Matrix4x4 TMPro.Examples.WarpTextExample/<WarpText>d__8::<matrix>5__2
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3CmatrixU3E5__2_4;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>d__8::<old_CurveScale>5__3
	float ___U3Cold_CurveScaleU3E5__3_5;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample/<WarpText>d__8::<old_curve>5__4
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___U3Cold_curveU3E5__4_6;
	// TMPro.TMP_TextInfo TMPro.Examples.WarpTextExample/<WarpText>d__8::<textInfo>5__5
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___U3CtextInfoU3E5__5_7;
	// System.Int32 TMPro.Examples.WarpTextExample/<WarpText>d__8::<characterCount>5__6
	int32_t ___U3CcharacterCountU3E5__6_8;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>d__8::<boundsMinX>5__7
	float ___U3CboundsMinXU3E5__7_9;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>d__8::<boundsMaxX>5__8
	float ___U3CboundsMaxXU3E5__8_10;
	// System.Int32 TMPro.Examples.WarpTextExample/<WarpText>d__8::<i>5__9
	int32_t ___U3CiU3E5__9_11;
	// System.Int32 TMPro.Examples.WarpTextExample/<WarpText>d__8::<vertexIndex>5__10
	int32_t ___U3CvertexIndexU3E5__10_12;
	// System.Int32 TMPro.Examples.WarpTextExample/<WarpText>d__8::<materialIndex>5__11
	int32_t ___U3CmaterialIndexU3E5__11_13;
	// UnityEngine.Vector3 TMPro.Examples.WarpTextExample/<WarpText>d__8::<offsetToMidBaseline>5__12
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CoffsetToMidBaselineU3E5__12_14;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>d__8::<x0>5__13
	float ___U3Cx0U3E5__13_15;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>d__8::<x1>5__14
	float ___U3Cx1U3E5__14_16;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>d__8::<y0>5__15
	float ___U3Cy0U3E5__15_17;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>d__8::<y1>5__16
	float ___U3Cy1U3E5__16_18;
	// UnityEngine.Vector3 TMPro.Examples.WarpTextExample/<WarpText>d__8::<horizontal>5__17
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3ChorizontalU3E5__17_19;
	// UnityEngine.Vector3 TMPro.Examples.WarpTextExample/<WarpText>d__8::<tangent>5__18
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CtangentU3E5__18_20;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>d__8::<dot>5__19
	float ___U3CdotU3E5__19_21;
	// UnityEngine.Vector3 TMPro.Examples.WarpTextExample/<WarpText>d__8::<cross>5__20
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CcrossU3E5__20_22;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>d__8::<angle>5__21
	float ___U3CangleU3E5__21_23;
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

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 
{
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_24;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_25;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_26;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_27;
	// System.Single TMPro.TMP_CharacterInfo::adjustedAscender
	float ___adjustedAscender_28;
	// System.Single TMPro.TMP_CharacterInfo::adjustedDescender
	float ___adjustedDescender_29;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_30;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	// System.Int32 TMPro.TMP_CharacterInfo::underlineVertexIndex
	int32_t ___underlineVertexIndex_34;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	// System.Int32 TMPro.TMP_CharacterInfo::strikethroughVertexIndex
	int32_t ___strikethroughVertexIndex_36;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	// TMPro.HighlightState TMPro.TMP_CharacterInfo::highlightState
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_39;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_40;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
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

// TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B 
{
	// UnityEngine.Mesh TMPro.TMP_MeshInfo::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	// System.Int32 TMPro.TMP_MeshInfo::vertexCount
	int32_t ___vertexCount_5;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_6;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::normals
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals_7;
	// UnityEngine.Vector4[] TMPro.TMP_MeshInfo::tangents
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents_8;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs0
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0_9;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs2
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs2_10;
	// UnityEngine.Color32[] TMPro.TMP_MeshInfo::colors32
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors32_11;
	// System.Int32[] TMPro.TMP_MeshInfo::triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_12;
	// UnityEngine.Material TMPro.TMP_MeshInfo::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
// Native definition for COM marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};

// System.Action`1<UnityEngine.Object>
struct Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A  : public MulticastDelegate_t
{
};

// System.Comparison`1<System.Int32>
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
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

// TMPro.TMP_Asset
struct TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 TMPro.TMP_Asset::m_InstanceID
	int32_t ___m_InstanceID_4;
	// System.Int32 TMPro.TMP_Asset::hashCode
	int32_t ___hashCode_5;
	// UnityEngine.Material TMPro.TMP_Asset::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_6;
	// System.Int32 TMPro.TMP_Asset::materialHashCode
	int32_t ___materialHashCode_7;
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

// Polytope.PT_Create_Prefab/PreviewCallback
struct PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133  : public MulticastDelegate_t
{
};

// TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11
struct U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956  : public RuntimeObject
{
	// System.Int32 TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.Examples.VertexJitter TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<>4__this
	VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* ___U3CU3E4__this_2;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<textInfo>5__1
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___U3CtextInfoU3E5__1_3;
	// UnityEngine.Matrix4x4 TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<matrix>5__2
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3CmatrixU3E5__2_4;
	// System.Int32 TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<loopCount>5__3
	int32_t ___U3CloopCountU3E5__3_5;
	// TMPro.Examples.VertexJitter/VertexAnim[] TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<vertexAnim>5__4
	VertexAnimU5BU5D_tC74236D4EB454A8EF2CE1E6145CE5F78E1D5CF38* ___U3CvertexAnimU3E5__4_6;
	// TMPro.TMP_MeshInfo[] TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<cachedMeshInfo>5__5
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___U3CcachedMeshInfoU3E5__5_7;
	// System.Int32 TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<i>5__6
	int32_t ___U3CiU3E5__6_8;
	// System.Int32 TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<characterCount>5__7
	int32_t ___U3CcharacterCountU3E5__7_9;
	// System.Int32 TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<i>5__8
	int32_t ___U3CiU3E5__8_10;
	// TMPro.TMP_CharacterInfo TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<charInfo>5__9
	TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 ___U3CcharInfoU3E5__9_11;
	// TMPro.Examples.VertexJitter/VertexAnim TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<vertAnim>5__10
	VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7 ___U3CvertAnimU3E5__10_12;
	// System.Int32 TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<materialIndex>5__11
	int32_t ___U3CmaterialIndexU3E5__11_13;
	// System.Int32 TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<vertexIndex>5__12
	int32_t ___U3CvertexIndexU3E5__12_14;
	// UnityEngine.Vector3[] TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<sourceVertices>5__13
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___U3CsourceVerticesU3E5__13_15;
	// UnityEngine.Vector2 TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<charMidBasline>5__14
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CcharMidBaslineU3E5__14_16;
	// UnityEngine.Vector3 TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<offset>5__15
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CoffsetU3E5__15_17;
	// UnityEngine.Vector3[] TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<destinationVertices>5__16
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___U3CdestinationVerticesU3E5__16_18;
	// UnityEngine.Vector3 TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<jitterOffset>5__17
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CjitterOffsetU3E5__17_19;
	// System.Int32 TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::<i>5__18
	int32_t ___U3CiU3E5__18_20;
};

// TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10
struct U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123  : public RuntimeObject
{
	// System.Int32 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.Examples.VertexZoom TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>4__this
	VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* ___U3CU3E4__this_2;
	// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>8__1
	U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* ___U3CU3E8__1_3;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<textInfo>5__2
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___U3CtextInfoU3E5__2_4;
	// UnityEngine.Matrix4x4 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<matrix>5__3
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3CmatrixU3E5__3_5;
	// TMPro.TMP_MeshInfo[] TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<cachedMeshInfoVertexData>5__4
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___U3CcachedMeshInfoVertexDataU3E5__4_6;
	// System.Collections.Generic.List`1<System.Int32> TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<scaleSortingOrder>5__5
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CscaleSortingOrderU3E5__5_7;
	// System.Int32 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<characterCount>5__6
	int32_t ___U3CcharacterCountU3E5__6_8;
	// System.Int32 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<i>5__7
	int32_t ___U3CiU3E5__7_9;
	// TMPro.TMP_CharacterInfo TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<charInfo>5__8
	TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 ___U3CcharInfoU3E5__8_10;
	// System.Int32 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<materialIndex>5__9
	int32_t ___U3CmaterialIndexU3E5__9_11;
	// System.Int32 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<vertexIndex>5__10
	int32_t ___U3CvertexIndexU3E5__10_12;
	// UnityEngine.Vector3[] TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<sourceVertices>5__11
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___U3CsourceVerticesU3E5__11_13;
	// UnityEngine.Vector2 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<charMidBasline>5__12
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CcharMidBaslineU3E5__12_14;
	// UnityEngine.Vector3 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<offset>5__13
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CoffsetU3E5__13_15;
	// UnityEngine.Vector3[] TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<destinationVertices>5__14
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___U3CdestinationVerticesU3E5__14_16;
	// System.Single TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<randomScale>5__15
	float ___U3CrandomScaleU3E5__15_17;
	// UnityEngine.Vector2[] TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<sourceUVs0>5__16
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___U3CsourceUVs0U3E5__16_18;
	// UnityEngine.Vector2[] TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<destinationUVs0>5__17
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___U3CdestinationUVs0U3E5__17_19;
	// UnityEngine.Color32[] TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<sourceColors32>5__18
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___U3CsourceColors32U3E5__18_20;
	// UnityEngine.Color32[] TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<destinationColors32>5__19
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___U3CdestinationColors32U3E5__19_21;
	// System.Int32 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<i>5__20
	int32_t ___U3CiU3E5__20_22;
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

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160  : public TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969
{
	// System.String TMPro.TMP_FontAsset::m_Version
	String_t* ___m_Version_8;
	// System.String TMPro.TMP_FontAsset::m_SourceFontFileGUID
	String_t* ___m_SourceFontFileGUID_9;
	// UnityEngine.Font TMPro.TMP_FontAsset::m_SourceFontFile
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_SourceFontFile_10;
	// TMPro.AtlasPopulationMode TMPro.TMP_FontAsset::m_AtlasPopulationMode
	int32_t ___m_AtlasPopulationMode_11;
	// UnityEngine.TextCore.FaceInfo TMPro.TMP_FontAsset::m_FaceInfo
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 ___m_FaceInfo_12;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphTable
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphTable_13;
	// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphLookupDictionary
	Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7* ___m_GlyphLookupDictionary_14;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterTable
	List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E* ___m_CharacterTable_15;
	// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterLookupDictionary
	Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0* ___m_CharacterLookupDictionary_16;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::m_AtlasTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_AtlasTexture_17;
	// UnityEngine.Texture2D[] TMPro.TMP_FontAsset::m_AtlasTextures
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___m_AtlasTextures_18;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasTextureIndex
	int32_t ___m_AtlasTextureIndex_19;
	// System.Boolean TMPro.TMP_FontAsset::m_IsMultiAtlasTexturesEnabled
	bool ___m_IsMultiAtlasTexturesEnabled_20;
	// System.Boolean TMPro.TMP_FontAsset::m_ClearDynamicDataOnBuild
	bool ___m_ClearDynamicDataOnBuild_21;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_UsedGlyphRects
	List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___m_UsedGlyphRects_22;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_FreeGlyphRects
	List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___m_FreeGlyphRects_23;
	// TMPro.FaceInfo_Legacy TMPro.TMP_FontAsset::m_fontInfo
	FaceInfo_Legacy_t23B118EFD5AB7162515ABF18C0212DF155CCF7B8* ___m_fontInfo_24;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::atlas
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___atlas_25;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasWidth
	int32_t ___m_AtlasWidth_26;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasHeight
	int32_t ___m_AtlasHeight_27;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasPadding
	int32_t ___m_AtlasPadding_28;
	// UnityEngine.TextCore.LowLevel.GlyphRenderMode TMPro.TMP_FontAsset::m_AtlasRenderMode
	int32_t ___m_AtlasRenderMode_29;
	// System.Collections.Generic.List`1<TMPro.TMP_Glyph> TMPro.TMP_FontAsset::m_glyphInfoList
	List_1_tAB7976FADCF872E418770E60783056C23394843D* ___m_glyphInfoList_30;
	// TMPro.KerningTable TMPro.TMP_FontAsset::m_KerningTable
	KerningTable_t040C3FE3B519B12AADE1C5B00628581551D5AB6B* ___m_KerningTable_31;
	// TMPro.TMP_FontFeatureTable TMPro.TMP_FontAsset::m_FontFeatureTable
	TMP_FontFeatureTable_t726A09E64FDF682A8FFE294BB6CFE7747F6C40EA* ___m_FontFeatureTable_32;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::fallbackFontAssets
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___fallbackFontAssets_33;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::m_FallbackFontAssetTable
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___m_FallbackFontAssetTable_34;
	// TMPro.FontAssetCreationSettings TMPro.TMP_FontAsset::m_CreationSettings
	FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF ___m_CreationSettings_35;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::m_FontWeightTable
	TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37* ___m_FontWeightTable_36;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::fontWeights
	TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37* ___fontWeights_37;
	// System.Single TMPro.TMP_FontAsset::normalStyle
	float ___normalStyle_38;
	// System.Single TMPro.TMP_FontAsset::normalSpacingOffset
	float ___normalSpacingOffset_39;
	// System.Single TMPro.TMP_FontAsset::boldStyle
	float ___boldStyle_40;
	// System.Single TMPro.TMP_FontAsset::boldSpacing
	float ___boldSpacing_41;
	// System.Byte TMPro.TMP_FontAsset::italicStyle
	uint8_t ___italicStyle_42;
	// System.Byte TMPro.TMP_FontAsset::tabSize
	uint8_t ___tabSize_43;
	// System.Boolean TMPro.TMP_FontAsset::IsFontAssetLookupTablesDirty
	bool ___IsFontAssetLookupTablesDirty_44;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::FallbackSearchQueryLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___FallbackSearchQueryLookup_53;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsToRender
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphsToRender_59;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsRendered
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphsRendered_60;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexList
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphIndexList_61;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexListNewlyAdded
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphIndexListNewlyAdded_62;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphsToAdd
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphsToAdd_63;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphsToAddLookup
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_GlyphsToAddLookup_64;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharactersToAdd
	List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E* ___m_CharactersToAdd_65;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_CharactersToAddLookup
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_CharactersToAddLookup_66;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::s_MissingCharacterList
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___s_MissingCharacterList_67;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_MissingUnicodesFromFontFile
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_MissingUnicodesFromFontFile_68;
};

// Polytope.PT_Create_Prefab
struct PT_Create_Prefab_tDE5FEE6302F4542D740AC4FFCAD12520243ADC3C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Polytope.PT_Create_Prefab/MeshType> Polytope.PT_Create_Prefab::meshes
	List_1_tACE6654758D82222267EA18A347541711FD0AECA* ___meshes_4;
	// Polytope.PT_Create_Prefab/MaterialType Polytope.PT_Create_Prefab::material
	MaterialType_t77459A212D2DDA81CDF7054273EBB9FB27DAC703* ___material_5;
	// System.Boolean Polytope.PT_Create_Prefab::loaded
	bool ___loaded_6;
	// System.Boolean Polytope.PT_Create_Prefab::tooglehelmet
	bool ___tooglehelmet_7;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::skin
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___skin_8;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::eyes
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___eyes_9;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::hair
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___hair_10;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::sclera
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___sclera_11;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::lips
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___lips_12;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::scars
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___scars_13;
	// Polytope.PT_Create_Prefab/ShaderProperties_C Polytope.PT_Create_Prefab::feathers1
	ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* ___feathers1_14;
	// Polytope.PT_Create_Prefab/ShaderProperties_C Polytope.PT_Create_Prefab::feathers2
	ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* ___feathers2_15;
	// Polytope.PT_Create_Prefab/ShaderProperties_C Polytope.PT_Create_Prefab::feathers3
	ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* ___feathers3_16;
	// Polytope.PT_Create_Prefab/ShaderProperties_C Polytope.PT_Create_Prefab::cloth1
	ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* ___cloth1_17;
	// Polytope.PT_Create_Prefab/ShaderProperties_C Polytope.PT_Create_Prefab::cloth2
	ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* ___cloth2_18;
	// Polytope.PT_Create_Prefab/ShaderProperties_C Polytope.PT_Create_Prefab::cloth3
	ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* ___cloth3_19;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::leather1
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___leather1_20;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::leather2
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___leather2_21;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::leather3
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___leather3_22;
	// Polytope.PT_Create_Prefab/ShaderProperties_CSM Polytope.PT_Create_Prefab::metal1
	ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079* ___metal1_23;
	// Polytope.PT_Create_Prefab/ShaderProperties_CSM Polytope.PT_Create_Prefab::metal2
	ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079* ___metal2_24;
	// Polytope.PT_Create_Prefab/ShaderProperties_CSM Polytope.PT_Create_Prefab::metal3
	ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079* ___metal3_25;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::gems1
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___gems1_26;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::gems2
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___gems2_27;
	// Polytope.PT_Create_Prefab/ShaderProperties_CS Polytope.PT_Create_Prefab::gems3
	ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* ___gems3_28;
	// Polytope.PT_Create_Prefab/ShaderProperties_CI Polytope.PT_Create_Prefab::coatofarms
	ShaderProperties_CI_t9CBA7C7551B2E3C14417C0507021DE19105126FB* ___coatofarms_29;
	// Polytope.PT_Create_Prefab/ShaderProperties_CSP Polytope.PT_Create_Prefab::light1
	ShaderProperties_CSP_t67F1677582890FAC9C9B0435A9FFB055BEA4013B* ___light1_30;
	// Polytope.PT_Create_Prefab/ShaderProperties_CSP Polytope.PT_Create_Prefab::light2
	ShaderProperties_CSP_t67F1677582890FAC9C9B0435A9FFB055BEA4013B* ___light2_31;
	// Polytope.PT_Create_Prefab/ShaderProperties_CSP Polytope.PT_Create_Prefab::light3
	ShaderProperties_CSP_t67F1677582890FAC9C9B0435A9FFB055BEA4013B* ___light3_32;
	// System.Single Polytope.PT_Create_Prefab::occlusion
	float ___occlusion_33;
	// System.Boolean Polytope.PT_Create_Prefab::metallicOn
	bool ___metallicOn_34;
	// System.Boolean Polytope.PT_Create_Prefab::smoothnessOn
	bool ___smoothnessOn_35;
	// System.Boolean Polytope.PT_Create_Prefab::gpuinstancing
	bool ___gpuinstancing_36;
	// System.Boolean Polytope.PT_Create_Prefab::doubleSidedGI
	bool ___doubleSidedGI_37;
	// System.Int32 Polytope.PT_Create_Prefab::renderQueue
	int32_t ___renderQueue_38;
	// System.Boolean Polytope.PT_Create_Prefab::preview
	bool ___preview_39;
	// System.Single Polytope.PT_Create_Prefab::time
	float ___time_40;
	// System.Boolean Polytope.PT_Create_Prefab::duplicateMaterial
	bool ___duplicateMaterial_41;
};

// CartoonHeroes.SetCharacter
struct SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CartoonHeroes.SetCharacter::characterRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___characterRoot_4;
	// CartoonHeroes.SetCharacter/ItemGroup[] CartoonHeroes.SetCharacter::itemGroups
	ItemGroupU5BU5D_t33B38B410FC63D24B6E6DBF06885A9AB2448F33C* ___itemGroups_5;
	// UnityEngine.GameObject CartoonHeroes.SetCharacter::disabledGraySkeleton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___disabledGraySkeleton_8;
};

// UnityTemplateProjects.SimpleCameraController
struct SimpleCameraController_t17AF9A37DB0C95045C639A9A74B1D80500082020  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityTemplateProjects.SimpleCameraController/CameraState UnityTemplateProjects.SimpleCameraController::m_TargetCameraState
	CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* ___m_TargetCameraState_4;
	// UnityTemplateProjects.SimpleCameraController/CameraState UnityTemplateProjects.SimpleCameraController::m_InterpolatingCameraState
	CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* ___m_InterpolatingCameraState_5;
	// System.Single UnityTemplateProjects.SimpleCameraController::boost
	float ___boost_6;
	// System.Single UnityTemplateProjects.SimpleCameraController::positionLerpTime
	float ___positionLerpTime_7;
	// UnityEngine.AnimationCurve UnityTemplateProjects.SimpleCameraController::mouseSensitivityCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___mouseSensitivityCurve_8;
	// System.Single UnityTemplateProjects.SimpleCameraController::rotationLerpTime
	float ___rotationLerpTime_9;
	// System.Boolean UnityTemplateProjects.SimpleCameraController::invertY
	bool ___invertY_10;
};

// TMPro.Examples.TMP_UiFrameRateCounter
struct TMP_UiFrameRateCounter_t3CB67462256A3570DFD0BD10261E7CABB11AFC0E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TMPro.Examples.TMP_UiFrameRateCounter::UpdateInterval
	float ___UpdateInterval_4;
	// System.Single TMPro.Examples.TMP_UiFrameRateCounter::m_LastInterval
	float ___m_LastInterval_5;
	// System.Int32 TMPro.Examples.TMP_UiFrameRateCounter::m_Frames
	int32_t ___m_Frames_6;
	// TMPro.Examples.TMP_UiFrameRateCounter/FpsCounterAnchorPositions TMPro.Examples.TMP_UiFrameRateCounter::AnchorPosition
	int32_t ___AnchorPosition_7;
	// System.String TMPro.Examples.TMP_UiFrameRateCounter::htmlColorTag
	String_t* ___htmlColorTag_8;
	// TMPro.TextMeshProUGUI TMPro.Examples.TMP_UiFrameRateCounter::m_TextMeshPro
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_TextMeshPro_10;
	// UnityEngine.RectTransform TMPro.Examples.TMP_UiFrameRateCounter::m_frameCounter_transform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_frameCounter_transform_11;
	// TMPro.Examples.TMP_UiFrameRateCounter/FpsCounterAnchorPositions TMPro.Examples.TMP_UiFrameRateCounter::last_AnchorPosition
	int32_t ___last_AnchorPosition_12;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TMPro.Examples.VertexColorCycler
struct VertexColorCycler_t527535DC3F38CBB70E8A4B35907DA8EC4FC62C8D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text TMPro.Examples.VertexColorCycler::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_4;
};

// TMPro.Examples.VertexJitter
struct VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TMPro.Examples.VertexJitter::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexJitter::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexJitter::CurveScale
	float ___CurveScale_6;
	// TMPro.TMP_Text TMPro.Examples.VertexJitter::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_7;
	// System.Boolean TMPro.Examples.VertexJitter::hasTextChanged
	bool ___hasTextChanged_8;
};

// TMPro.Examples.VertexShakeA
struct VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TMPro.Examples.VertexShakeA::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexShakeA::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexShakeA::ScaleMultiplier
	float ___ScaleMultiplier_6;
	// System.Single TMPro.Examples.VertexShakeA::RotationMultiplier
	float ___RotationMultiplier_7;
	// TMPro.TMP_Text TMPro.Examples.VertexShakeA::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_8;
	// System.Boolean TMPro.Examples.VertexShakeA::hasTextChanged
	bool ___hasTextChanged_9;
};

// TMPro.Examples.VertexShakeB
struct VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TMPro.Examples.VertexShakeB::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexShakeB::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexShakeB::CurveScale
	float ___CurveScale_6;
	// TMPro.TMP_Text TMPro.Examples.VertexShakeB::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_7;
	// System.Boolean TMPro.Examples.VertexShakeB::hasTextChanged
	bool ___hasTextChanged_8;
};

// TMPro.Examples.VertexZoom
struct VertexZoom_t51F05EB153497034D27896F07590D790A73981A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TMPro.Examples.VertexZoom::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexZoom::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexZoom::CurveScale
	float ___CurveScale_6;
	// TMPro.TMP_Text TMPro.Examples.VertexZoom::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_7;
	// System.Boolean TMPro.Examples.VertexZoom::hasTextChanged
	bool ___hasTextChanged_8;
};

// TMPro.Examples.WarpTextExample
struct WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text TMPro.Examples.WarpTextExample::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_4;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::VertexCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___VertexCurve_5;
	// System.Single TMPro.Examples.WarpTextExample::AngleMultiplier
	float ___AngleMultiplier_6;
	// System.Single TMPro.Examples.WarpTextExample::SpeedMultiplier
	float ___SpeedMultiplier_7;
	// System.Single TMPro.Examples.WarpTextExample::CurveScale
	float ___CurveScale_8;
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

// TMPro.FastAction`1<UnityEngine.Object>

// TMPro.FastAction`1<UnityEngine.Object>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>

// System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer>
struct List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer>

// System.Collections.Generic.List`1<Polytope.PT_Create_Prefab/MeshType>
struct List_1_tACE6654758D82222267EA18A347541711FD0AECA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshTypeU5BU5D_tBF32387370FBAC202A1D38A9C40984C780860C67* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Polytope.PT_Create_Prefab/MeshType>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// TMPro.TMPro_EventManager
struct TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields
{
	// TMPro.FastAction`2<System.Object,TMPro.Compute_DT_EventArgs> TMPro.TMPro_EventManager::COMPUTE_DT_EVENT
	FastAction_2_t7A930CE5DBE699F7BADA18E19F951E3D68821A0D* ___COMPUTE_DT_EVENT_0;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Material> TMPro.TMPro_EventManager::MATERIAL_PROPERTY_EVENT
	FastAction_2_tECA23F8F5AC1D6DF8BAB8AEDD017A064D210F83A* ___MATERIAL_PROPERTY_EVENT_1;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::FONT_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___FONT_PROPERTY_EVENT_2;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::SPRITE_ASSET_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___SPRITE_ASSET_PROPERTY_EVENT_3;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::TEXTMESHPRO_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___TEXTMESHPRO_PROPERTY_EVENT_4;
	// TMPro.FastAction`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material> TMPro.TMPro_EventManager::DRAG_AND_DROP_MATERIAL_EVENT
	FastAction_3_tF1621854653F0CB64C7EE2C86A181B843FA49E77* ___DRAG_AND_DROP_MATERIAL_EVENT_5;
	// TMPro.FastAction`1<System.Boolean> TMPro.TMPro_EventManager::TEXT_STYLE_PROPERTY_EVENT
	FastAction_1_tFC26007E6ECC49160C91059DC218FDD0602EE4F3* ___TEXT_STYLE_PROPERTY_EVENT_6;
	// TMPro.FastAction`1<UnityEngine.Object> TMPro.TMPro_EventManager::COLOR_GRADIENT_PROPERTY_EVENT
	FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* ___COLOR_GRADIENT_PROPERTY_EVENT_7;
	// TMPro.FastAction TMPro.TMPro_EventManager::TMP_SETTINGS_PROPERTY_EVENT
	FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D* ___TMP_SETTINGS_PROPERTY_EVENT_8;
	// TMPro.FastAction TMPro.TMPro_EventManager::RESOURCE_LOAD_EVENT
	FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D* ___RESOURCE_LOAD_EVENT_9;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::TEXTMESHPRO_UGUI_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___TEXTMESHPRO_UGUI_PROPERTY_EVENT_10;
	// TMPro.FastAction`1<UnityEngine.Object> TMPro.TMPro_EventManager::TEXT_CHANGED_EVENT
	FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* ___TEXT_CHANGED_EVENT_11;
};

// TMPro.TMPro_EventManager

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// Polytope.PT_Create_Prefab/MaterialType

// Polytope.PT_Create_Prefab/MaterialType

// Polytope.PT_Create_Prefab/MeshType

// Polytope.PT_Create_Prefab/MeshType

// Polytope.PT_Create_Prefab/TypeOfMesh
struct TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields
{
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::hair
	String_t* ___hair_0;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::head
	String_t* ___head_1;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::beard
	String_t* ___beard_2;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::helmet
	String_t* ___helmet_3;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::body
	String_t* ___body_4;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::boots
	String_t* ___boots_5;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::cape
	String_t* ___cape_6;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::gauntlets
	String_t* ___gauntlets_7;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::legs
	String_t* ___legs_8;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::upper
	String_t* ___upper_9;
	// System.String Polytope.PT_Create_Prefab/TypeOfMesh::lower
	String_t* ___lower_10;
};

// Polytope.PT_Create_Prefab/TypeOfMesh

// CartoonHeroes.SetCharacter/Item

// CartoonHeroes.SetCharacter/Item

// CartoonHeroes.SetCharacter/ItemGroup

// CartoonHeroes.SetCharacter/ItemGroup

// UnityTemplateProjects.SimpleCameraController/CameraState

// UnityTemplateProjects.SimpleCameraController/CameraState

// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0

// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Double

// System.Double

// UnityEngine.TextCore.FaceInfo

// UnityEngine.TextCore.FaceInfo

// TMPro.FontAssetCreationSettings

// TMPro.FontAssetCreationSettings

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Keyframe

// UnityEngine.Keyframe

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// TMPro.Examples.VertexJitter/VertexAnim

// TMPro.Examples.VertexJitter/VertexAnim

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D_StaticFields
{
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorPositive
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorPositive_0;
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorNegative
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorNegative_1;
};

// TMPro.TMP_TextInfo

// TMPro.TMP_Vertex
struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A_StaticFields
{
	// TMPro.TMP_Vertex TMPro.TMP_Vertex::k_Zero
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___k_Zero_5;
};

// TMPro.TMP_Vertex

// TMPro.VertexGradient

// TMPro.VertexGradient

// Polytope.PT_Create_Prefab/ShaderProperties_C

// Polytope.PT_Create_Prefab/ShaderProperties_C

// Polytope.PT_Create_Prefab/ShaderProperties_CI

// Polytope.PT_Create_Prefab/ShaderProperties_CI

// Polytope.PT_Create_Prefab/ShaderProperties_CS

// Polytope.PT_Create_Prefab/ShaderProperties_CS

// Polytope.PT_Create_Prefab/ShaderProperties_CSM

// Polytope.PT_Create_Prefab/ShaderProperties_CSM

// Polytope.PT_Create_Prefab/ShaderProperties_CSP

// Polytope.PT_Create_Prefab/ShaderProperties_CSP

// TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3

// TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3

// TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11

// TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11

// TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10

// TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10

// TMPro.Examples.WarpTextExample/<WarpText>d__8

// TMPro.Examples.WarpTextExample/<WarpText>d__8

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.SystemException

// System.SystemException

// TMPro.TMP_CharacterInfo

// TMPro.TMP_CharacterInfo

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_StaticFields
{
	// UnityEngine.Color32 TMPro.TMP_MeshInfo::s_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_0;
	// UnityEngine.Vector3 TMPro.TMP_MeshInfo::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_1;
	// UnityEngine.Vector4 TMPro.TMP_MeshInfo::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_2;
	// UnityEngine.Bounds TMPro.TMP_MeshInfo::s_DefaultBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___s_DefaultBounds_3;
};

// TMPro.TMP_MeshInfo

// System.Action`1<UnityEngine.Object>

// System.Action`1<UnityEngine.Object>

// System.Comparison`1<System.Int32>

// System.Comparison`1<System.Int32>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// TMPro.TMP_Asset

// TMPro.TMP_Asset

// UnityEngine.Transform

// UnityEngine.Transform

// TMPro.WordWrapState

// TMPro.WordWrapState

// Polytope.PT_Create_Prefab/PreviewCallback

// Polytope.PT_Create_Prefab/PreviewCallback

// TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11

// TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11

// TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10

// TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_ReadFontAssetDefinitionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ReadFontAssetDefinitionMarker_45;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_AddSynthesizedCharactersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_AddSynthesizedCharactersMarker_46;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_TryAddCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_TryAddCharacterMarker_47;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_TryAddCharactersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_TryAddCharactersMarker_48;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_UpdateGlyphAdjustmentRecordsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_UpdateGlyphAdjustmentRecordsMarker_49;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_ClearFontAssetDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ClearFontAssetDataMarker_50;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_UpdateFontAssetDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_UpdateFontAssetDataMarker_51;
	// System.String TMPro.TMP_FontAsset::s_DefaultMaterialSuffix
	String_t* ___s_DefaultMaterialSuffix_52;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_SearchedFontAssetLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_SearchedFontAssetLookup_54;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssets_FontFeaturesUpdateQueue
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___k_FontAssets_FontFeaturesUpdateQueue_55;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssets_FontFeaturesUpdateQueueLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_FontAssets_FontFeaturesUpdateQueueLookup_56;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssets_AtlasTexturesUpdateQueue
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___k_FontAssets_AtlasTexturesUpdateQueue_57;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssets_AtlasTexturesUpdateQueueLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_FontAssets_AtlasTexturesUpdateQueueLookup_58;
	// System.UInt32[] TMPro.TMP_FontAsset::k_GlyphIndexArray
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___k_GlyphIndexArray_69;
};

// TMPro.TMP_FontAsset

// Polytope.PT_Create_Prefab

// Polytope.PT_Create_Prefab

// CartoonHeroes.SetCharacter

// CartoonHeroes.SetCharacter

// UnityTemplateProjects.SimpleCameraController

// UnityTemplateProjects.SimpleCameraController

// TMPro.Examples.TMP_UiFrameRateCounter

// TMPro.Examples.TMP_UiFrameRateCounter

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// TMPro.Examples.VertexColorCycler

// TMPro.Examples.VertexColorCycler

// TMPro.Examples.VertexJitter

// TMPro.Examples.VertexJitter

// TMPro.Examples.VertexShakeA

// TMPro.Examples.VertexShakeA

// TMPro.Examples.VertexShakeB

// TMPro.Examples.VertexShakeB

// TMPro.Examples.VertexZoom

// TMPro.Examples.VertexZoom

// TMPro.Examples.WarpTextExample

// TMPro.Examples.WarpTextExample

// UnityEngine.UI.Graphic
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

// UnityEngine.UI.Graphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// TMPro.TMP_Text
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

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
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

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 m_Items[1];

	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
};
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B m_Items[1];

	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
// TMPro.Examples.VertexJitter/VertexAnim[]
struct VertexAnimU5BU5D_tC74236D4EB454A8EF2CE1E6145CE5F78E1D5CF38  : public RuntimeArray
{
	ALIGN_FIELD (8) VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7 m_Items[1];

	inline VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* m_Items[1];

	inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 m_Items[1];

	inline TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// CartoonHeroes.SetCharacter/Item[]
struct ItemU5BU5D_tE88E39DBBFE3C18F83572B13B26BCA8B81493166  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1* m_Items[1];

	inline Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// CartoonHeroes.SetCharacter/ItemGroup[]
struct ItemGroupU5BU5D_t33B38B410FC63D24B6E6DBF06885A9AB2448F33C  : public RuntimeArray
{
	ALIGN_FIELD (8) ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* m_Items[1];

	inline ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
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


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void TMPro.FastAction`1<System.Object>::Add(System.Action`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastAction_1_Add_mAFBAB8BEFC425D727FF303611342E6D1E6E82D86_gshared (FastAction_1_t30779A2821DCE05CA702D5800B30CABF67687135* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_rhs, const RuntimeMethod* method) ;
// System.Void TMPro.FastAction`1<System.Object>::Remove(System.Action`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastAction_1_Remove_m0C649E2173AA0370C08417DCFD89B7304F28BC0C_gshared (FastAction_1_t30779A2821DCE05CA702D5800B30CABF67687135* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_rhs, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m7E05FE21370A028EA8A2792D028FFDAD83F24F6C_gshared (Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___0_comparison, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.Resources::Load<TMPro.TMP_FontAsset>(System.String)
inline TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* Resources_Load_TisTMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160_m5F15FBF7AC2FCDC8C169ED260201B75AB8CB50F3 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Void TMPro.TMP_Text::set_font(TMPro.TMP_FontAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Void TMPro.TMP_Text::set_enableWordWrapping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_enableWordWrapping_mFAEE849315B4723F9C86C127B1A59EF50BE1C12F (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_fontSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_isOverlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_isOverlay_m0DA2AC113AE402CA25097641AD38D0822C6D5561 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.TMP_UiFrameRateCounter::Set_FrameCounter_Position(TMPro.Examples.TMP_UiFrameRateCounter/FpsCounterAnchorPositions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_UiFrameRateCounter_Set_FrameCounter_Position_mAF25D6E90A6CB17EE041885B32579A2AEDBFCC36 (TMP_UiFrameRateCounter_t3CB67462256A3570DFD0BD10261E7CABB11AFC0E* __this, int32_t ___0_anchor_position, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::SetText(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_SetText_m033947AEEEBDA12707E4B0535B4CCD7EB28B5F31 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, String_t* ___0_sourceText, float ___1_arg0, float ___2_arg1, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_alignment(TMPro.TextAlignmentOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator TMPro.Examples.VertexColorCycler::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexColorCycler_AnimateVertexColors_m16733B3DFF4C0F625AA66B5DF9D3B04D723E49CC (VertexColorCycler_t527535DC3F38CBB70E8A4B35907DA8EC4FC62C8D* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__3__ctor_m0245999D5FAAF8855583609DB16CAF48E9450262 (U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TMPro.TMP_TextInfo TMPro.TMP_Text::get_textInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m95478636F075134CA2998E22B214611472600983 (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void TMPro.FastAction`1<UnityEngine.Object>::Add(System.Action`1<A>)
inline void FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6 (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* __this, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* ___0_rhs, const RuntimeMethod* method)
{
	((  void (*) (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005*, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*, const RuntimeMethod*))FastAction_1_Add_mAFBAB8BEFC425D727FF303611342E6D1E6E82D86_gshared)(__this, ___0_rhs, method);
}
// System.Void TMPro.FastAction`1<UnityEngine.Object>::Remove(System.Action`1<A>)
inline void FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* __this, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* ___0_rhs, const RuntimeMethod* method)
{
	((  void (*) (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005*, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*, const RuntimeMethod*))FastAction_1_Remove_m0C649E2173AA0370C08417DCFD89B7304F28BC0C_gshared)(__this, ___0_rhs, method);
}
// System.Collections.IEnumerator TMPro.Examples.VertexJitter::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexJitter_AnimateVertexColors_m2A69F06CF58FA46B689BD4166DEF5AD15FA2FA88 (VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11__ctor_m10C4D98A634474BAA883419ED308835B7D91C01A (U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::CopyMeshInfoVertexData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* TMP_TextInfo_CopyMeshInfoVertexData_mF66E2F8821470E68D95FEB53D456CFA86241C0CA (TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_PingPong_mB1D6A10F386CE1EEA99DB69486DDA6DA531D799D_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothStep(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline (float ___0_from, float ___1_to, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TMPro.Examples.VertexShakeA::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexShakeA_AnimateVertexColors_m5FD933D6BF976B64FC0B80614DE5112377D1DC38 (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11__ctor_m440985E6DF2F1B461E2964101EA242FFD472A25A (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TMPro.Examples.VertexShakeB::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexShakeB_AnimateVertexColors_m06D25FE7F9F3EFF693DDC889BF725F01D0CF2A6F (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10__ctor_mBE5C0E4A0F65F07A7510D171683AD319F76E6C6D (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator TMPro.Examples.VertexZoom::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexZoom_AnimateVertexColors_m632BD9DC8FB193AF2D5B540524B11AF139FDF5F0 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10__ctor_m7A5B8E07B89E628DB7119F7F61311165A2DBC4D6 (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m8C69A89B34AA3D16243E69F1E0015856C791CC8A (U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
inline void List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m7E05FE21370A028EA8A2792D028FFDAD83F24F6C (Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m7E05FE21370A028EA8A2792D028FFDAD83F24F6C_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___0_comparison, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89*, const RuntimeMethod*))List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4_gshared)(__this, ___0_comparison, method);
}
// System.Void TMPro.TMP_MeshInfo::SortGeometry(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_MeshInfo_SortGeometry_m74ED0FE2065414A659EE9A9C809E1B0B4A8A7734 (TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* __this, RuntimeObject* ___0_sortingOrder, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors32_m0E4462B7A1D613E6FB15DD7584BCE5491C17820F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Collections.IEnumerator TMPro.Examples.WarpTextExample::WarpText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WarpTextExample_WarpText_mBE4B6E5B6D8AAE9340CD59B1FA9DFE9A34665E98 (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_keys(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_keys_mBE1284B44CDBB1D8381177A3D581A6E71467F95C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___0_value, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8__ctor_m1943C34BBEAF121203BA8C5D725E991283A4A3BB (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___0_time, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___0_keys, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_havePropertiesChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_havePropertiesChanged_mA38D7BC9E260BF29450738B827F2220A05662B31 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::CopyAnimationCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* WarpTextExample_CopyAnimationCurve_m65A93388CC2CF58CD2E08CC8EF682A2C97C558FF (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_curve, const RuntimeMethod* method) ;
// System.Boolean TMPro.TMP_Text::get_havePropertiesChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TMP_Text_get_havePropertiesChanged_m42ECC7D1CA0DF6E59ACF761EB20635E81FCB8EFF (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds TMPro.TMP_Text::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TMP_Text_get_bounds_mAEE407DE6CA2E1D1180868C03A3F0A3B6E455189 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Polytope.PT_Create_Prefab/MeshType>::.ctor()
inline void List_1__ctor_mB57A3E1F4B4ECD4893C8B6080ADC021BEB56E7D5 (List_1_tACE6654758D82222267EA18A347541711FD0AECA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tACE6654758D82222267EA18A347541711FD0AECA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Polytope.PT_Create_Prefab/MeshType::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* __this, String_t* ___0_type, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Polytope.PT_Create_Prefab/MeshType>::Add(T)
inline void List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline (List_1_tACE6654758D82222267EA18A347541711FD0AECA* __this, MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tACE6654758D82222267EA18A347541711FD0AECA*, MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer>::.ctor()
inline void List_1__ctor_m63D6348A803E41D37BE9E8CC33C99580918CA666 (List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_m3A7302F4586F37F7C78EDA2F0C476BAA22672360 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimpleCameraController_GetInputTranslationDirection_m62C42A7966EF22CB95BB847225D2BE2441A3CE0C (SimpleCameraController_t17AF9A37DB0C95045C639A9A74B1D80500082020* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74 (const RuntimeMethod* method) ;
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m561F6D92E99F13444FBAC8D5B1A40762A26219F9 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) ;
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_mFDC0E1CA19B6791CDB6EE8AC262944DC1143FCF9 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* ___0_target, float ___1_positionLerpPct, float ___2_rotationLerpPct, const RuntimeMethod* method) ;
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_m03320D760E52E809272776B58C7E741B2EE1D73E (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) ;
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m33568E59E39C953BDE6CD28D35A34BE52AE25504 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___0_time, float ___1_value, float ___2_inTangent, float ___3_outTangent, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void CartoonHeroes.SetCharacter::RemoveAnimator(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_RemoveAnimator_mCC2A6A1C17B3F47E4C9377FFBC3AC6BCE5BF131B (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method) ;
// System.Void CartoonHeroes.SetCharacter::ParentObjectAndBones(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_ParentObjectAndBones_m518EF36F95448CE5EDE0ACC95B373B48A63EE95F (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_itemInstance, const RuntimeMethod* method) ;
// System.Boolean CartoonHeroes.SetCharacter::VisibleItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetCharacter_VisibleItems_mD67AE10F9BF97EA1BDD23235D5A094B766888B8C (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, const RuntimeMethod* method) ;
// System.Void CartoonHeroes.SetCharacter::SetGraySkeletonVisibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_SetGraySkeletonVisibility_m41564C723B7BE370E77D3101E451CF94309AD42A (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, bool ___0_set, const RuntimeMethod* method) ;
// System.Boolean CartoonHeroes.SetCharacter::HasItem(CartoonHeroes.SetCharacter/ItemGroup,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetCharacter_HasItem_mDD2AC0F9F270E6F2ED8E12DA702CFA8A3FA9E8AC (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* ___0_itemGroup, int32_t ___1_itemSlot, const RuntimeMethod* method) ;
// UnityEngine.Transform[] CartoonHeroes.SetCharacter::GetAllCharacterChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* SetCharacter_GetAllCharacterChildren_m5FFE97A7F91E192BA6E9894756E3BF321FCD839C (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform CartoonHeroes.SetCharacter::GetRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SetCharacter_GetRoot_m0DAFBDF299BF735F5CE0B6710AB32F9957DFC1C8 (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* GameObject_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9B15E800128549D648CD61F87228399E16EB934A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void CartoonHeroes.SetCharacter::MatchTransform(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_MatchTransform_m39BA0FAABEA71F13C632F691667EC36E7AC7A038 (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_obj, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_target, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean CartoonHeroes.SetCharacter::BelongsToItem(UnityEngine.Transform,CartoonHeroes.SetCharacter/ItemGroup,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetCharacter_BelongsToItem_m6CA70F64F1D20D7DFF4B6B0290C0720230C09234 (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_obj, ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* ___1_itemGroup, int32_t ___2_itemSlot, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.Examples.TMP_UiFrameRateCounter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_UiFrameRateCounter_Awake_m3E0ECAD08FA25B61DD75F4D36EC3F1DE5A22A491 (TMP_UiFrameRateCounter_t3CB67462256A3570DFD0BD10261E7CABB11AFC0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160_m5F15FBF7AC2FCDC8C169ED260201B75AB8CB50F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ECD13393A1BC799BB4763A4E4CD5B53E220C53A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6107EE62A5874EF8D2DEAC7D3C0A9F07B89E096);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB3448E21FA53C63C06270903A13B17D02935BE0);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	{
		// if (!enabled)
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_00c4;
	}

IL_0013:
	{
		// Application.targetFrameRate = 1000;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)1000), NULL);
		// GameObject frameCounter = new GameObject("Frame Counter");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteralA6107EE62A5874EF8D2DEAC7D3C0A9F07B89E096, NULL);
		V_0 = L_2;
		// m_frameCounter_transform = frameCounter.AddComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_3, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		__this->___m_frameCounter_transform_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_frameCounter_transform_11), (void*)L_4);
		// m_frameCounter_transform.SetParent(this.transform, false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___m_frameCounter_transform_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_5, L_6, (bool)0, NULL);
		// m_TextMeshPro = frameCounter.AddComponent<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8;
		L_8 = GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB(L_7, GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB_RuntimeMethod_var);
		__this->___m_TextMeshPro_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TextMeshPro_10), (void*)L_8);
		// m_TextMeshPro.font = Resources.Load<TMP_FontAsset>("Fonts & Materials/LiberationSans SDF");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = __this->___m_TextMeshPro_10;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_10;
		L_10 = Resources_Load_TisTMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160_m5F15FBF7AC2FCDC8C169ED260201B75AB8CB50F3(_stringLiteralAB3448E21FA53C63C06270903A13B17D02935BE0, Resources_Load_TisTMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160_m5F15FBF7AC2FCDC8C169ED260201B75AB8CB50F3_RuntimeMethod_var);
		NullCheck(L_9);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_9, L_10, NULL);
		// m_TextMeshPro.fontSharedMaterial = Resources.Load<Material>("Fonts & Materials/LiberationSans SDF - Overlay");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->___m_TextMeshPro_10;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E(_stringLiteral9ECD13393A1BC799BB4763A4E4CD5B53E220C53A, Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		NullCheck(L_11);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(68 /* System.Void TMPro.TMP_Text::set_fontSharedMaterial(UnityEngine.Material) */, L_11, L_12);
		// m_TextMeshPro.enableWordWrapping = false;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = __this->___m_TextMeshPro_10;
		NullCheck(L_13);
		TMP_Text_set_enableWordWrapping_mFAEE849315B4723F9C86C127B1A59EF50BE1C12F(L_13, (bool)0, NULL);
		// m_TextMeshPro.fontSize = 36;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->___m_TextMeshPro_10;
		NullCheck(L_14);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_14, (36.0f), NULL);
		// m_TextMeshPro.isOverlay = true;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = __this->___m_TextMeshPro_10;
		NullCheck(L_15);
		TMP_Text_set_isOverlay_m0DA2AC113AE402CA25097641AD38D0822C6D5561(L_15, (bool)1, NULL);
		// Set_FrameCounter_Position(AnchorPosition);
		int32_t L_16 = __this->___AnchorPosition_7;
		TMP_UiFrameRateCounter_Set_FrameCounter_Position_mAF25D6E90A6CB17EE041885B32579A2AEDBFCC36(__this, L_16, NULL);
		// last_AnchorPosition = AnchorPosition;
		int32_t L_17 = __this->___AnchorPosition_7;
		__this->___last_AnchorPosition_12 = L_17;
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void TMPro.Examples.TMP_UiFrameRateCounter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_UiFrameRateCounter_Start_m11EF02C330E5D834C41F009CF088A3150352567F (TMP_UiFrameRateCounter_t3CB67462256A3570DFD0BD10261E7CABB11AFC0E* __this, const RuntimeMethod* method) 
{
	{
		// m_LastInterval = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___m_LastInterval_5 = L_0;
		// m_Frames = 0;
		__this->___m_Frames_6 = 0;
		// }
		return;
	}
}
// System.Void TMPro.Examples.TMP_UiFrameRateCounter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_UiFrameRateCounter_Update_m568E467033B0FF7C67251895A0772CFA197789A3 (TMP_UiFrameRateCounter_t3CB67462256A3570DFD0BD10261E7CABB11AFC0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F85A2723BB62FEF95DD6F8C5F0FF606EA62246A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87D266F5AAE1AF5998468D25833A8C6AD50D4FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD00074DE8ACBEBA7EF28BE447E997E8352E84502);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (AnchorPosition != last_AnchorPosition)
		int32_t L_0 = __this->___AnchorPosition_7;
		int32_t L_1 = __this->___last_AnchorPosition_12;
		V_1 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// Set_FrameCounter_Position(AnchorPosition);
		int32_t L_3 = __this->___AnchorPosition_7;
		TMP_UiFrameRateCounter_Set_FrameCounter_Position_mAF25D6E90A6CB17EE041885B32579A2AEDBFCC36(__this, L_3, NULL);
	}

IL_0023:
	{
		// last_AnchorPosition = AnchorPosition;
		int32_t L_4 = __this->___AnchorPosition_7;
		__this->___last_AnchorPosition_12 = L_4;
		// m_Frames += 1;
		int32_t L_5 = __this->___m_Frames_6;
		__this->___m_Frames_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// float timeNow = Time.realtimeSinceStartup;
		float L_6;
		L_6 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		V_0 = L_6;
		// if (timeNow > m_LastInterval + UpdateInterval)
		float L_7 = V_0;
		float L_8 = __this->___m_LastInterval_5;
		float L_9 = __this->___UpdateInterval_4;
		V_2 = (bool)((((float)L_7) > ((float)((float)il2cpp_codegen_add(L_8, L_9))))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_00ee;
		}
	}
	{
		// float fps = m_Frames / (timeNow - m_LastInterval);
		int32_t L_11 = __this->___m_Frames_6;
		float L_12 = V_0;
		float L_13 = __this->___m_LastInterval_5;
		V_3 = ((float)(((float)L_11)/((float)il2cpp_codegen_subtract(L_12, L_13))));
		// float ms = 1000.0f / Mathf.Max(fps, 0.00001f);
		float L_14 = V_3;
		float L_15;
		L_15 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_14, (9.99999975E-06f), NULL);
		V_4 = ((float)((1000.0f)/L_15));
		// if (fps < 30)
		float L_16 = V_3;
		V_5 = (bool)((((float)L_16) < ((float)(30.0f)))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		// htmlColorTag = "<color=yellow>";
		__this->___htmlColorTag_8 = _stringLiteralA87D266F5AAE1AF5998468D25833A8C6AD50D4FD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___htmlColorTag_8), (void*)_stringLiteralA87D266F5AAE1AF5998468D25833A8C6AD50D4FD);
		goto IL_00c0;
	}

IL_009a:
	{
		// else if (fps < 10)
		float L_18 = V_3;
		V_6 = (bool)((((float)L_18) < ((float)(10.0f)))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00b5;
		}
	}
	{
		// htmlColorTag = "<color=red>";
		__this->___htmlColorTag_8 = _stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___htmlColorTag_8), (void*)_stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377);
		goto IL_00c0;
	}

IL_00b5:
	{
		// htmlColorTag = "<color=green>";
		__this->___htmlColorTag_8 = _stringLiteral7F85A2723BB62FEF95DD6F8C5F0FF606EA62246A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___htmlColorTag_8), (void*)_stringLiteral7F85A2723BB62FEF95DD6F8C5F0FF606EA62246A);
	}

IL_00c0:
	{
		// m_TextMeshPro.SetText(htmlColorTag + fpsLabel, fps, ms);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20 = __this->___m_TextMeshPro_10;
		String_t* L_21 = __this->___htmlColorTag_8;
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_21, _stringLiteralD00074DE8ACBEBA7EF28BE447E997E8352E84502, NULL);
		float L_23 = V_3;
		float L_24 = V_4;
		NullCheck(L_20);
		TMP_Text_SetText_m033947AEEEBDA12707E4B0535B4CCD7EB28B5F31(L_20, L_22, L_23, L_24, NULL);
		// m_Frames = 0;
		__this->___m_Frames_6 = 0;
		// m_LastInterval = timeNow;
		float L_25 = V_0;
		__this->___m_LastInterval_5 = L_25;
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void TMPro.Examples.TMP_UiFrameRateCounter::Set_FrameCounter_Position(TMPro.Examples.TMP_UiFrameRateCounter/FpsCounterAnchorPositions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_UiFrameRateCounter_Set_FrameCounter_Position_mAF25D6E90A6CB17EE041885B32579A2AEDBFCC36 (TMP_UiFrameRateCounter_t3CB67462256A3570DFD0BD10261E7CABB11AFC0E* __this, int32_t ___0_anchor_position, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (anchor_position)
		int32_t L_0 = ___0_anchor_position;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_00a2;
			}
			case 2:
			{
				goto IL_0124;
			}
			case 3:
			{
				goto IL_01a3;
			}
		}
	}
	{
		goto IL_0222;
	}

IL_0020:
	{
		// m_TextMeshPro.alignment = TextAlignmentOptions.TopLeft;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___m_TextMeshPro_10;
		NullCheck(L_3);
		TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A(L_3, ((int32_t)257), NULL);
		// m_frameCounter_transform.pivot = new Vector2(0, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_4, L_5, NULL);
		// m_frameCounter_transform.anchorMin = new Vector2(0.01f, 0.99f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.00999999978f), (0.99000001f), /*hidden argument*/NULL);
		NullCheck(L_6);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_6, L_7, NULL);
		// m_frameCounter_transform.anchorMax = new Vector2(0.01f, 0.99f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), (0.00999999978f), (0.99000001f), /*hidden argument*/NULL);
		NullCheck(L_8);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_8, L_9, NULL);
		// m_frameCounter_transform.anchoredPosition = new Vector2(0, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_10, L_11, NULL);
		// break;
		goto IL_0222;
	}

IL_00a2:
	{
		// m_TextMeshPro.alignment = TextAlignmentOptions.BottomLeft;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = __this->___m_TextMeshPro_10;
		NullCheck(L_12);
		TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A(L_12, ((int32_t)1025), NULL);
		// m_frameCounter_transform.pivot = new Vector2(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_13, L_14, NULL);
		// m_frameCounter_transform.anchorMin = new Vector2(0.01f, 0.01f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_15);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_15, L_16, NULL);
		// m_frameCounter_transform.anchorMax = new Vector2(0.01f, 0.01f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), (0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_17, L_18, NULL);
		// m_frameCounter_transform.anchoredPosition = new Vector2(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_19, L_20, NULL);
		// break;
		goto IL_0222;
	}

IL_0124:
	{
		// m_TextMeshPro.alignment = TextAlignmentOptions.TopRight;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = __this->___m_TextMeshPro_10;
		NullCheck(L_21);
		TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A(L_21, ((int32_t)260), NULL);
		// m_frameCounter_transform.pivot = new Vector2(1, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_23), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_22, L_23, NULL);
		// m_frameCounter_transform.anchorMin = new Vector2(0.99f, 0.99f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), (0.99000001f), (0.99000001f), /*hidden argument*/NULL);
		NullCheck(L_24);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_24, L_25, NULL);
		// m_frameCounter_transform.anchorMax = new Vector2(0.99f, 0.99f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_27), (0.99000001f), (0.99000001f), /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_26, L_27, NULL);
		// m_frameCounter_transform.anchoredPosition = new Vector2(1, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_28 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_29), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_28, L_29, NULL);
		// break;
		goto IL_0222;
	}

IL_01a3:
	{
		// m_TextMeshPro.alignment = TextAlignmentOptions.BottomRight;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_30 = __this->___m_TextMeshPro_10;
		NullCheck(L_30);
		TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A(L_30, ((int32_t)1028), NULL);
		// m_frameCounter_transform.pivot = new Vector2(1, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_32), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_31, L_32, NULL);
		// m_frameCounter_transform.anchorMin = new Vector2(0.99f, 0.01f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_33 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_34), (0.99000001f), (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_33);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_33, L_34, NULL);
		// m_frameCounter_transform.anchorMax = new Vector2(0.99f, 0.01f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_35 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_36), (0.99000001f), (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_35);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_35, L_36, NULL);
		// m_frameCounter_transform.anchoredPosition = new Vector2(1, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37 = __this->___m_frameCounter_transform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_38), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_37, L_38, NULL);
		// break;
		goto IL_0222;
	}

IL_0222:
	{
		// }
		return;
	}
}
// System.Void TMPro.Examples.TMP_UiFrameRateCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_UiFrameRateCounter__ctor_mBF5305427799EBC515580C2747FE604A6DFEC848 (TMP_UiFrameRateCounter_t3CB67462256A3570DFD0BD10261E7CABB11AFC0E* __this, const RuntimeMethod* method) 
{
	{
		// public float UpdateInterval = 5.0f;
		__this->___UpdateInterval_4 = (5.0f);
		// private float m_LastInterval = 0;
		__this->___m_LastInterval_5 = (0.0f);
		// private int m_Frames = 0;
		__this->___m_Frames_6 = 0;
		// public FpsCounterAnchorPositions AnchorPosition = FpsCounterAnchorPositions.TopRight;
		__this->___AnchorPosition_7 = 2;
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
// System.Void TMPro.Examples.VertexColorCycler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexColorCycler_Awake_m8895A9C06DB3EC4379334601DC726F1AFAF543C1 (VertexColorCycler_t527535DC3F38CBB70E8A4B35907DA8EC4FC62C8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextComponent = GetComponent<TMP_Text>();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0;
		L_0 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(__this, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___m_TextComponent_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TextComponent_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexColorCycler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexColorCycler_Start_m36846DA72BFC7FDFA944A368C9DB62D17A15917B (VertexColorCycler_t527535DC3F38CBB70E8A4B35907DA8EC4FC62C8D* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AnimateVertexColors());
		RuntimeObject* L_0;
		L_0 = VertexColorCycler_AnimateVertexColors_m16733B3DFF4C0F625AA66B5DF9D3B04D723E49CC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TMPro.Examples.VertexColorCycler::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexColorCycler_AnimateVertexColors_m16733B3DFF4C0F625AA66B5DF9D3B04D723E49CC (VertexColorCycler_t527535DC3F38CBB70E8A4B35907DA8EC4FC62C8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264* L_0 = (U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264*)il2cpp_codegen_object_new(U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAnimateVertexColorsU3Ed__3__ctor_m0245999D5FAAF8855583609DB16CAF48E9450262(L_0, 0, NULL);
		U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TMPro.Examples.VertexColorCycler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexColorCycler__ctor_m673CA077DC5E935BABCEA79E5E70116E9934F4C1 (VertexColorCycler_t527535DC3F38CBB70E8A4B35907DA8EC4FC62C8D* __this, const RuntimeMethod* method) 
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
// System.Void TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__3__ctor_m0245999D5FAAF8855583609DB16CAF48E9450262 (U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__3_System_IDisposable_Dispose_mF965F484C619EFA1359F7DB6495C1C79A89001BF (U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__3_MoveNext_m5C44B8CC0AB09A205BB1649931D2AC7C6F016E60 (U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_00ba;
	}

IL_0022:
	{
		goto IL_0224;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// m_TextComponent.ForceMeshUpdate();
		VertexColorCycler_t527535DC3F38CBB70E8A4B35907DA8EC4FC62C8D* L_2 = __this->___U3CU3E4__this_2;
		NullCheck(L_2);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = L_2->___m_TextComponent_4;
		NullCheck(L_3);
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_3, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexColorCycler_t527535DC3F38CBB70E8A4B35907DA8EC4FC62C8D* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = L_4->___m_TextComponent_4;
		NullCheck(L_5);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_6;
		L_6 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E(L_5, NULL);
		__this->___U3CtextInfoU3E5__1_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextInfoU3E5__1_3), (void*)L_6);
		// int currentCharacter = 0;
		__this->___U3CcurrentCharacterU3E5__2_4 = 0;
		// Color32 c0 = m_TextComponent.color;
		VertexColorCycler_t527535DC3F38CBB70E8A4B35907DA8EC4FC62C8D* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = L_7->___m_TextComponent_4;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10;
		L_10 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_9, NULL);
		__this->___U3Cc0U3E5__4_6 = L_10;
		goto IL_022c;
	}

IL_0081:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_11 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_11);
		int32_t L_12 = L_11->___characterCount_3;
		__this->___U3CcharacterCountU3E5__5_7 = L_12;
		// if (characterCount == 0)
		int32_t L_13 = __this->___U3CcharacterCountU3E5__5_7;
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_00c6;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_15 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_15, (0.25f), NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ba:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_022c;
	}

IL_00c6:
	{
		// int materialIndex = textInfo.characterInfo[currentCharacter].materialReferenceIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_16 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_16);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_17 = L_16->___characterInfo_11;
		int32_t L_18 = __this->___U3CcurrentCharacterU3E5__2_4;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___materialReferenceIndex_9;
		__this->___U3CmaterialIndexU3E5__6_8 = L_19;
		// newVertexColors = textInfo.meshInfo[materialIndex].colors32;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_20 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_20);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_21 = L_20->___meshInfo_16;
		int32_t L_22 = __this->___U3CmaterialIndexU3E5__6_8;
		NullCheck(L_21);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___colors32_11;
		__this->___U3CnewVertexColorsU3E5__3_5 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewVertexColorsU3E5__3_5), (void*)L_23);
		// int vertexIndex = textInfo.characterInfo[currentCharacter].vertexIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_24 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_24);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_25 = L_24->___characterInfo_11;
		int32_t L_26 = __this->___U3CcurrentCharacterU3E5__2_4;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___vertexIndex_14;
		__this->___U3CvertexIndexU3E5__7_9 = L_27;
		// if (textInfo.characterInfo[currentCharacter].isVisible)
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_28 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_28);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_29 = L_28->___characterInfo_11;
		int32_t L_30 = __this->___U3CcurrentCharacterU3E5__2_4;
		NullCheck(L_29);
		bool L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___isVisible_40;
		V_2 = L_31;
		bool L_32 = V_2;
		if (!L_32)
		{
			goto IL_01f6;
		}
	}
	{
		// c0 = new Color32((byte)Random.Range(0, 255), (byte)Random.Range(0, 255), (byte)Random.Range(0, 255), 255);
		int32_t L_33;
		L_33 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)255), NULL);
		int32_t L_34;
		L_34 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)255), NULL);
		int32_t L_35;
		L_35 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)255), NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_36;
		memset((&L_36), 0, sizeof(L_36));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_36), (uint8_t)((int32_t)(uint8_t)L_33), (uint8_t)((int32_t)(uint8_t)L_34), (uint8_t)((int32_t)(uint8_t)L_35), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		__this->___U3Cc0U3E5__4_6 = L_36;
		// newVertexColors[vertexIndex + 0] = c0;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_37 = __this->___U3CnewVertexColorsU3E5__3_5;
		int32_t L_38 = __this->___U3CvertexIndexU3E5__7_9;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_39 = __this->___U3Cc0U3E5__4_6;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_39);
		// newVertexColors[vertexIndex + 1] = c0;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_40 = __this->___U3CnewVertexColorsU3E5__3_5;
		int32_t L_41 = __this->___U3CvertexIndexU3E5__7_9;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_42 = __this->___U3Cc0U3E5__4_6;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_41, 1))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_42);
		// newVertexColors[vertexIndex + 2] = c0;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_43 = __this->___U3CnewVertexColorsU3E5__3_5;
		int32_t L_44 = __this->___U3CvertexIndexU3E5__7_9;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_45 = __this->___U3Cc0U3E5__4_6;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_44, 2))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_45);
		// newVertexColors[vertexIndex + 3] = c0;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_46 = __this->___U3CnewVertexColorsU3E5__3_5;
		int32_t L_47 = __this->___U3CvertexIndexU3E5__7_9;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_48 = __this->___U3Cc0U3E5__4_6;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_47, 3))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_48);
		// m_TextComponent.UpdateVertexData(TMP_VertexDataUpdateFlags.Colors32);
		VertexColorCycler_t527535DC3F38CBB70E8A4B35907DA8EC4FC62C8D* L_49 = __this->___U3CU3E4__this_2;
		NullCheck(L_49);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_50 = L_49->___m_TextComponent_4;
		NullCheck(L_50);
		VirtualActionInvoker1< int32_t >::Invoke(108 /* System.Void TMPro.TMP_Text::UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags) */, L_50, ((int32_t)16));
	}

IL_01f6:
	{
		// currentCharacter = (currentCharacter + 1) % characterCount;
		int32_t L_51 = __this->___U3CcurrentCharacterU3E5__2_4;
		int32_t L_52 = __this->___U3CcharacterCountU3E5__5_7;
		__this->___U3CcurrentCharacterU3E5__2_4 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_51, 1))%L_52));
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_53 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_53, (0.0500000007f), NULL);
		__this->___U3CU3E2__current_1 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_53);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0224:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_022c:
	{
		// while (true)
		V_3 = (bool)1;
		goto IL_0081;
	}
}
// System.Object TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF9600944C968C16121129C479F8B25D8E8B7FDD1 (U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_Reset_m319AC50F2DE1572FB7D7AF4F5F65958D01477899 (U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_Reset_m319AC50F2DE1572FB7D7AF4F5F65958D01477899_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.VertexColorCycler/<AnimateVertexColors>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__3_System_Collections_IEnumerator_get_Current_mC19EC9CE0C245B49D987C18357571FF3462F1D2C (U3CAnimateVertexColorsU3Ed__3_t88CF335125784EBBA1DA65AF7B815F1814D31264* __this, const RuntimeMethod* method) 
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
// System.Void TMPro.Examples.VertexJitter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexJitter_Awake_m0DF2AC9C728A15EEB427F1FE2426E3C31FBA544C (VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextComponent = GetComponent<TMP_Text>();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0;
		L_0 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(__this, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___m_TextComponent_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TextComponent_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexJitter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexJitter_OnEnable_mCD5C1FDDBA809B04AC6F6CB00562D0AA45BC4354 (VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexJitter_ON_TEXT_CHANGED_m0CF9C49A1033B4475C04A417440F39490FED64A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Add(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexJitter_ON_TEXT_CHANGED_m0CF9C49A1033B4475C04A417440F39490FED64A8_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6(L_0, L_1, FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexJitter::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexJitter_OnDisable_mB670406B3982BFC44CB6BB05A73F1BE877FDFAF2 (VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexJitter_ON_TEXT_CHANGED_m0CF9C49A1033B4475C04A417440F39490FED64A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Remove(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexJitter_ON_TEXT_CHANGED_m0CF9C49A1033B4475C04A417440F39490FED64A8_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F(L_0, L_1, FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexJitter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexJitter_Start_mDE6155803CF2B1E6CE0EBAE8DF7DB93601E1DD76 (VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AnimateVertexColors());
		RuntimeObject* L_0;
		L_0 = VertexJitter_AnimateVertexColors_m2A69F06CF58FA46B689BD4166DEF5AD15FA2FA88(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexJitter::ON_TEXT_CHANGED(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexJitter_ON_TEXT_CHANGED_m0CF9C49A1033B4475C04A417440F39490FED64A8 (VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (obj == m_TextComponent)
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_obj;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___m_TextComponent_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// hasTextChanged = true;
		__this->___hasTextChanged_8 = (bool)1;
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TMPro.Examples.VertexJitter::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexJitter_AnimateVertexColors_m2A69F06CF58FA46B689BD4166DEF5AD15FA2FA88 (VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956* L_0 = (U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956*)il2cpp_codegen_object_new(U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAnimateVertexColorsU3Ed__11__ctor_m10C4D98A634474BAA883419ED308835B7D91C01A(L_0, 0, NULL);
		U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TMPro.Examples.VertexJitter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexJitter__ctor_m41E4682405B3C0B19779BA8CB77156D65D64716D (VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* __this, const RuntimeMethod* method) 
{
	{
		// public float AngleMultiplier = 1.0f;
		__this->___AngleMultiplier_4 = (1.0f);
		// public float SpeedMultiplier = 1.0f;
		__this->___SpeedMultiplier_5 = (1.0f);
		// public float CurveScale = 1.0f;
		__this->___CurveScale_6 = (1.0f);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11__ctor_m10C4D98A634474BAA883419ED308835B7D91C01A (U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11_System_IDisposable_Dispose_mB3756FBFDD731F3CC1EFF9AB132FF5075C8411F8 (U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__11_MoveNext_mD694A3145B54B9C5EB351853752B9292DBFF0273 (U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAnimU5BU5D_tC74236D4EB454A8EF2CE1E6145CE5F78E1D5CF38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_0172;
	}

IL_0022:
	{
		goto IL_06dd;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// m_TextComponent.ForceMeshUpdate();
		VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* L_2 = __this->___U3CU3E4__this_2;
		NullCheck(L_2);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = L_2->___m_TextComponent_7;
		NullCheck(L_3);
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_3, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = L_4->___m_TextComponent_7;
		NullCheck(L_5);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_6;
		L_6 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E(L_5, NULL);
		__this->___U3CtextInfoU3E5__1_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextInfoU3E5__1_3), (void*)L_6);
		// int loopCount = 0;
		__this->___U3CloopCountU3E5__3_5 = 0;
		// hasTextChanged = true;
		VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		L_7->___hasTextChanged_8 = (bool)1;
		// VertexAnim[] vertexAnim = new VertexAnim[1024];
		VertexAnimU5BU5D_tC74236D4EB454A8EF2CE1E6145CE5F78E1D5CF38* L_8 = (VertexAnimU5BU5D_tC74236D4EB454A8EF2CE1E6145CE5F78E1D5CF38*)(VertexAnimU5BU5D_tC74236D4EB454A8EF2CE1E6145CE5F78E1D5CF38*)SZArrayNew(VertexAnimU5BU5D_tC74236D4EB454A8EF2CE1E6145CE5F78E1D5CF38_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___U3CvertexAnimU3E5__4_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvertexAnimU3E5__4_6), (void*)L_8);
		// for (int i = 0; i < 1024; i++)
		__this->___U3CiU3E5__6_8 = 0;
		goto IL_00e2;
	}

IL_0086:
	{
		// vertexAnim[i].angleRange = Random.Range(10f, 25f);
		VertexAnimU5BU5D_tC74236D4EB454A8EF2CE1E6145CE5F78E1D5CF38* L_9 = __this->___U3CvertexAnimU3E5__4_6;
		int32_t L_10 = __this->___U3CiU3E5__6_8;
		NullCheck(L_9);
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((10.0f), (25.0f), NULL);
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___angleRange_0 = L_11;
		// vertexAnim[i].speed = Random.Range(1f, 3f);
		VertexAnimU5BU5D_tC74236D4EB454A8EF2CE1E6145CE5F78E1D5CF38* L_12 = __this->___U3CvertexAnimU3E5__4_6;
		int32_t L_13 = __this->___U3CiU3E5__6_8;
		NullCheck(L_12);
		float L_14;
		L_14 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((1.0f), (3.0f), NULL);
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___speed_2 = L_14;
		// for (int i = 0; i < 1024; i++)
		int32_t L_15 = __this->___U3CiU3E5__6_8;
		V_1 = L_15;
		int32_t L_16 = V_1;
		__this->___U3CiU3E5__6_8 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_00e2:
	{
		// for (int i = 0; i < 1024; i++)
		int32_t L_17 = __this->___U3CiU3E5__6_8;
		V_2 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)1024)))? 1 : 0);
		bool L_18 = V_2;
		if (L_18)
		{
			goto IL_0086;
		}
	}
	{
		// TMP_MeshInfo[] cachedMeshInfo = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_19 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_19);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_20;
		L_20 = TMP_TextInfo_CopyMeshInfoVertexData_mF66E2F8821470E68D95FEB53D456CFA86241C0CA(L_19, NULL);
		__this->___U3CcachedMeshInfoU3E5__5_7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcachedMeshInfoU3E5__5_7), (void*)L_20);
		goto IL_06e5;
	}

IL_0109:
	{
		// if (hasTextChanged)
		VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* L_21 = __this->___U3CU3E4__this_2;
		NullCheck(L_21);
		bool L_22 = L_21->___hasTextChanged_8;
		V_3 = L_22;
		bool L_23 = V_3;
		if (!L_23)
		{
			goto IL_0138;
		}
	}
	{
		// cachedMeshInfo = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_24 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_24);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_25;
		L_25 = TMP_TextInfo_CopyMeshInfoVertexData_mF66E2F8821470E68D95FEB53D456CFA86241C0CA(L_24, NULL);
		__this->___U3CcachedMeshInfoU3E5__5_7 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcachedMeshInfoU3E5__5_7), (void*)L_25);
		// hasTextChanged = false;
		VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* L_26 = __this->___U3CU3E4__this_2;
		NullCheck(L_26);
		L_26->___hasTextChanged_8 = (bool)0;
	}

IL_0138:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_27 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_27);
		int32_t L_28 = L_27->___characterCount_3;
		__this->___U3CcharacterCountU3E5__7_9 = L_28;
		// if (characterCount == 0)
		int32_t L_29 = __this->___U3CcharacterCountU3E5__7_9;
		V_4 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_4;
		if (!L_30)
		{
			goto IL_017e;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_31 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_31, (0.25f), NULL);
		__this->___U3CU3E2__current_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_31);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0172:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_06e5;
	}

IL_017e:
	{
		// for (int i = 0; i < characterCount; i++)
		__this->___U3CiU3E5__8_10 = 0;
		goto IL_05f5;
	}

IL_018a:
	{
		// TMP_CharacterInfo charInfo = textInfo.characterInfo[i];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_32 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_32);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_33 = L_32->___characterInfo_11;
		int32_t L_34 = __this->___U3CiU3E5__8_10;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		__this->___U3CcharInfoU3E5__9_11 = L_36;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CcharInfoU3E5__9_11))->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CcharInfoU3E5__9_11))->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CcharInfoU3E5__9_11))->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CcharInfoU3E5__9_11))->___material_8), (void*)NULL);
		#endif
		// if (!charInfo.isVisible)
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* L_37 = (&__this->___U3CcharInfoU3E5__9_11);
		bool L_38 = L_37->___isVisible_40;
		V_5 = (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_5;
		if (!L_39)
		{
			goto IL_01c0;
		}
	}
	{
		// continue;
		goto IL_05e5;
	}

IL_01c0:
	{
		// VertexAnim vertAnim = vertexAnim[i];
		VertexAnimU5BU5D_tC74236D4EB454A8EF2CE1E6145CE5F78E1D5CF38* L_40 = __this->___U3CvertexAnimU3E5__4_6;
		int32_t L_41 = __this->___U3CiU3E5__8_10;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7 L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		__this->___U3CvertAnimU3E5__10_12 = L_43;
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_44 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_44);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_45 = L_44->___characterInfo_11;
		int32_t L_46 = __this->___U3CiU3E5__8_10;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___materialReferenceIndex_9;
		__this->___U3CmaterialIndexU3E5__11_13 = L_47;
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_48 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_48);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_49 = L_48->___characterInfo_11;
		int32_t L_50 = __this->___U3CiU3E5__8_10;
		NullCheck(L_49);
		int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___vertexIndex_14;
		__this->___U3CvertexIndexU3E5__12_14 = L_51;
		// Vector3[] sourceVertices = cachedMeshInfo[materialIndex].vertices;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_52 = __this->___U3CcachedMeshInfoU3E5__5_7;
		int32_t L_53 = __this->___U3CmaterialIndexU3E5__11_13;
		NullCheck(L_52);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___vertices_6;
		__this->___U3CsourceVerticesU3E5__13_15 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourceVerticesU3E5__13_15), (void*)L_54);
		// Vector2 charMidBasline = (sourceVertices[vertexIndex + 0] + sourceVertices[vertexIndex + 2]) / 2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_55 = __this->___U3CsourceVerticesU3E5__13_15;
		int32_t L_56 = __this->___U3CvertexIndexU3E5__12_14;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_59 = __this->___U3CsourceVerticesU3E5__13_15;
		int32_t L_60 = __this->___U3CvertexIndexU3E5__12_14;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_58, L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_63, (2.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		L_65 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_64, NULL);
		__this->___U3CcharMidBaslineU3E5__14_16 = L_65;
		// Vector3 offset = charMidBasline;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = __this->___U3CcharMidBaslineU3E5__14_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_66, NULL);
		__this->___U3CoffsetU3E5__15_17 = L_67;
		// Vector3[] destinationVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_68 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_68);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_69 = L_68->___meshInfo_16;
		int32_t L_70 = __this->___U3CmaterialIndexU3E5__11_13;
		NullCheck(L_69);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_71 = ((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___vertices_6;
		__this->___U3CdestinationVerticesU3E5__16_18 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdestinationVerticesU3E5__16_18), (void*)L_71);
		// destinationVertices[vertexIndex + 0] = sourceVertices[vertexIndex + 0] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_72 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_73 = __this->___U3CvertexIndexU3E5__12_14;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = __this->___U3CsourceVerticesU3E5__13_15;
		int32_t L_75 = __this->___U3CvertexIndexU3E5__12_14;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = __this->___U3CoffsetU3E5__15_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_77, L_78, NULL);
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_79);
		// destinationVertices[vertexIndex + 1] = sourceVertices[vertexIndex + 1] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_80 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_81 = __this->___U3CvertexIndexU3E5__12_14;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_82 = __this->___U3CsourceVerticesU3E5__13_15;
		int32_t L_83 = __this->___U3CvertexIndexU3E5__12_14;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = __this->___U3CoffsetU3E5__15_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_85, L_86, NULL);
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_81, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_87);
		// destinationVertices[vertexIndex + 2] = sourceVertices[vertexIndex + 2] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_88 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_89 = __this->___U3CvertexIndexU3E5__12_14;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_90 = __this->___U3CsourceVerticesU3E5__13_15;
		int32_t L_91 = __this->___U3CvertexIndexU3E5__12_14;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = __this->___U3CoffsetU3E5__15_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_93, L_94, NULL);
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_89, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_95);
		// destinationVertices[vertexIndex + 3] = sourceVertices[vertexIndex + 3] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_96 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_97 = __this->___U3CvertexIndexU3E5__12_14;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_98 = __this->___U3CsourceVerticesU3E5__13_15;
		int32_t L_99 = __this->___U3CvertexIndexU3E5__12_14;
		NullCheck(L_98);
		int32_t L_100 = ((int32_t)il2cpp_codegen_add(L_99, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = __this->___U3CoffsetU3E5__15_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_101, L_102, NULL);
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_97, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_103);
		// vertAnim.angle = Mathf.SmoothStep(-vertAnim.angleRange, vertAnim.angleRange, Mathf.PingPong(loopCount / 25f * vertAnim.speed, 1f));
		VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7* L_104 = (&__this->___U3CvertAnimU3E5__10_12);
		VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7* L_105 = (&__this->___U3CvertAnimU3E5__10_12);
		float L_106 = L_105->___angleRange_0;
		VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7* L_107 = (&__this->___U3CvertAnimU3E5__10_12);
		float L_108 = L_107->___angleRange_0;
		int32_t L_109 = __this->___U3CloopCountU3E5__3_5;
		VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7* L_110 = (&__this->___U3CvertAnimU3E5__10_12);
		float L_111 = L_110->___speed_2;
		float L_112;
		L_112 = Mathf_PingPong_mB1D6A10F386CE1EEA99DB69486DDA6DA531D799D_inline(((float)il2cpp_codegen_multiply(((float)(((float)L_109)/(25.0f))), L_111)), (1.0f), NULL);
		float L_113;
		L_113 = Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline(((-L_106)), L_108, L_112, NULL);
		L_104->___angle_1 = L_113;
		// Vector3 jitterOffset = new Vector3(Random.Range(-.25f, .25f), Random.Range(-.25f, .25f), 0);
		float L_114;
		L_114 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-0.25f), (0.25f), NULL);
		float L_115;
		L_115 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-0.25f), (0.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		memset((&L_116), 0, sizeof(L_116));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_116), L_114, L_115, (0.0f), /*hidden argument*/NULL);
		__this->___U3CjitterOffsetU3E5__17_19 = L_116;
		// matrix = Matrix4x4.TRS(jitterOffset * CurveScale, Quaternion.Euler(0, 0, Random.Range(-5f, 5f) * AngleMultiplier), Vector3.one);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = __this->___U3CjitterOffsetU3E5__17_19;
		VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* L_118 = __this->___U3CU3E4__this_2;
		NullCheck(L_118);
		float L_119 = L_118->___CurveScale_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_117, L_119, NULL);
		float L_121;
		L_121 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-5.0f), (5.0f), NULL);
		VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* L_122 = __this->___U3CU3E4__this_2;
		NullCheck(L_122);
		float L_123 = L_122->___AngleMultiplier_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_124;
		L_124 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_121, L_123)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
		L_125 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_126;
		L_126 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_120, L_124, L_125, NULL);
		__this->___U3CmatrixU3E5__2_4 = L_126;
		// destinationVertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 0]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_127 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_128 = __this->___U3CvertexIndexU3E5__12_14;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_129 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_130 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_131 = __this->___U3CvertexIndexU3E5__12_14;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_129, L_133, NULL);
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(L_128), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_134);
		// destinationVertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 1]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_135 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_136 = __this->___U3CvertexIndexU3E5__12_14;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_137 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_138 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_139 = __this->___U3CvertexIndexU3E5__12_14;
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add(L_139, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
		L_142 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_137, L_141, NULL);
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_136, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_142);
		// destinationVertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 2]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_143 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_144 = __this->___U3CvertexIndexU3E5__12_14;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_145 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_146 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_147 = __this->___U3CvertexIndexU3E5__12_14;
		NullCheck(L_146);
		int32_t L_148 = ((int32_t)il2cpp_codegen_add(L_147, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150;
		L_150 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_145, L_149, NULL);
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_144, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_150);
		// destinationVertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 3]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_151 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_152 = __this->___U3CvertexIndexU3E5__12_14;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_153 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_154 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_155 = __this->___U3CvertexIndexU3E5__12_14;
		NullCheck(L_154);
		int32_t L_156 = ((int32_t)il2cpp_codegen_add(L_155, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158;
		L_158 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_153, L_157, NULL);
		NullCheck(L_151);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_152, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_158);
		// destinationVertices[vertexIndex + 0] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_159 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_160 = __this->___U3CvertexIndexU3E5__12_14;
		NullCheck(L_159);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_161 = ((L_159)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_160)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_161);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163 = __this->___U3CoffsetU3E5__15_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164;
		L_164 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_162, L_163, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_161 = L_164;
		// destinationVertices[vertexIndex + 1] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_165 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_166 = __this->___U3CvertexIndexU3E5__12_14;
		NullCheck(L_165);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_167 = ((L_165)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_166, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_167);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169 = __this->___U3CoffsetU3E5__15_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_170;
		L_170 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_168, L_169, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_167 = L_170;
		// destinationVertices[vertexIndex + 2] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_171 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_172 = __this->___U3CvertexIndexU3E5__12_14;
		NullCheck(L_171);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_173 = ((L_171)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_172, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_173);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175 = __this->___U3CoffsetU3E5__15_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_176;
		L_176 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_174, L_175, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_173 = L_176;
		// destinationVertices[vertexIndex + 3] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_177 = __this->___U3CdestinationVerticesU3E5__16_18;
		int32_t L_178 = __this->___U3CvertexIndexU3E5__12_14;
		NullCheck(L_177);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_179 = ((L_177)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_178, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_179);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_181 = __this->___U3CoffsetU3E5__15_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182;
		L_182 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_180, L_181, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_179 = L_182;
		// vertexAnim[i] = vertAnim;
		VertexAnimU5BU5D_tC74236D4EB454A8EF2CE1E6145CE5F78E1D5CF38* L_183 = __this->___U3CvertexAnimU3E5__4_6;
		int32_t L_184 = __this->___U3CiU3E5__8_10;
		VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7 L_185 = __this->___U3CvertAnimU3E5__10_12;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(L_184), (VertexAnim_tFF5399F548EE5426E46DEB662F561DDE129E20D7)L_185);
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* L_186 = (&__this->___U3CcharInfoU3E5__9_11);
		il2cpp_codegen_initobj(L_186, sizeof(TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8));
		__this->___U3CsourceVerticesU3E5__13_15 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourceVerticesU3E5__13_15), (void*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_187 = (&__this->___U3CcharMidBaslineU3E5__14_16);
		il2cpp_codegen_initobj(L_187, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_188 = (&__this->___U3CoffsetU3E5__15_17);
		il2cpp_codegen_initobj(L_188, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		__this->___U3CdestinationVerticesU3E5__16_18 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdestinationVerticesU3E5__16_18), (void*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_189 = (&__this->___U3CjitterOffsetU3E5__17_19);
		il2cpp_codegen_initobj(L_189, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}

IL_05e5:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_190 = __this->___U3CiU3E5__8_10;
		V_1 = L_190;
		int32_t L_191 = V_1;
		__this->___U3CiU3E5__8_10 = ((int32_t)il2cpp_codegen_add(L_191, 1));
	}

IL_05f5:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_192 = __this->___U3CiU3E5__8_10;
		int32_t L_193 = __this->___U3CcharacterCountU3E5__7_9;
		V_6 = (bool)((((int32_t)L_192) < ((int32_t)L_193))? 1 : 0);
		bool L_194 = V_6;
		if (L_194)
		{
			goto IL_018a;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		__this->___U3CiU3E5__18_20 = 0;
		goto IL_0698;
	}

IL_0618:
	{
		// textInfo.meshInfo[i].mesh.vertices = textInfo.meshInfo[i].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_195 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_195);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_196 = L_195->___meshInfo_16;
		int32_t L_197 = __this->___U3CiU3E5__18_20;
		NullCheck(L_196);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_198 = ((L_196)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_197)))->___mesh_4;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_199 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_199);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_200 = L_199->___meshInfo_16;
		int32_t L_201 = __this->___U3CiU3E5__18_20;
		NullCheck(L_200);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_202 = ((L_200)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_201)))->___vertices_6;
		NullCheck(L_198);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_198, L_202, NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexJitter_t5D8689E23D1DD2CCF81ACE6FFC9E34797E8AE4C7* L_203 = __this->___U3CU3E4__this_2;
		NullCheck(L_203);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_204 = L_203->___m_TextComponent_7;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_205 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_205);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_206 = L_205->___meshInfo_16;
		int32_t L_207 = __this->___U3CiU3E5__18_20;
		NullCheck(L_206);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_208 = ((L_206)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_207)))->___mesh_4;
		int32_t L_209 = __this->___U3CiU3E5__18_20;
		NullCheck(L_204);
		VirtualActionInvoker2< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_204, L_208, L_209);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_210 = __this->___U3CiU3E5__18_20;
		V_1 = L_210;
		int32_t L_211 = V_1;
		__this->___U3CiU3E5__18_20 = ((int32_t)il2cpp_codegen_add(L_211, 1));
	}

IL_0698:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_212 = __this->___U3CiU3E5__18_20;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_213 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_213);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_214 = L_213->___meshInfo_16;
		NullCheck(L_214);
		V_7 = (bool)((((int32_t)L_212) < ((int32_t)((int32_t)(((RuntimeArray*)L_214)->max_length))))? 1 : 0);
		bool L_215 = V_7;
		if (L_215)
		{
			goto IL_0618;
		}
	}
	{
		// loopCount += 1;
		int32_t L_216 = __this->___U3CloopCountU3E5__3_5;
		__this->___U3CloopCountU3E5__3_5 = ((int32_t)il2cpp_codegen_add(L_216, 1));
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_217 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_217);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_217, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_217;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_217);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_06dd:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_06e5:
	{
		// while (true)
		V_8 = (bool)1;
		goto IL_0109;
	}
}
// System.Object TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m79C3A529011A51B9A994106D3C1271548B02D405 (U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m15291DCCCEC264095634B26DD6F24D52360BDAF0 (U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m15291DCCCEC264095634B26DD6F24D52360BDAF0_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.VertexJitter/<AnimateVertexColors>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_get_Current_m0B8F21A4589C68BA16A8340938BB44C980260CC9 (U3CAnimateVertexColorsU3Ed__11_t2EF4BA1F3569F2C4ECDD4AD4980AAC251CD1D956* __this, const RuntimeMethod* method) 
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
// System.Void TMPro.Examples.VertexShakeA::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeA_Awake_m092957B0A67A153E7CD56A75A438087DE4806867 (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextComponent = GetComponent<TMP_Text>();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0;
		L_0 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(__this, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___m_TextComponent_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TextComponent_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeA::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeA_OnEnable_m52E2A036C9EB2C1D633BA7F43E31C36983972304 (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexShakeA_ON_TEXT_CHANGED_mE7A41CEFDB0008A1CD15F156EFEE1C895A92EE77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Add(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexShakeA_ON_TEXT_CHANGED_mE7A41CEFDB0008A1CD15F156EFEE1C895A92EE77_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6(L_0, L_1, FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeA::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeA_OnDisable_m52F58AF9438377D222543AA67CFF7B30FCCB0F23 (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexShakeA_ON_TEXT_CHANGED_mE7A41CEFDB0008A1CD15F156EFEE1C895A92EE77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Remove(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexShakeA_ON_TEXT_CHANGED_mE7A41CEFDB0008A1CD15F156EFEE1C895A92EE77_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F(L_0, L_1, FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeA::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeA_Start_mDD8B5538BDFBC2BA242B997B879E7ED64ACAFC5E (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AnimateVertexColors());
		RuntimeObject* L_0;
		L_0 = VertexShakeA_AnimateVertexColors_m5FD933D6BF976B64FC0B80614DE5112377D1DC38(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeA::ON_TEXT_CHANGED(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeA_ON_TEXT_CHANGED_mE7A41CEFDB0008A1CD15F156EFEE1C895A92EE77 (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (obj = m_TextComponent)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___m_TextComponent_8;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = L_0;
		___0_obj = L_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// hasTextChanged = true;
		__this->___hasTextChanged_9 = (bool)1;
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TMPro.Examples.VertexShakeA::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexShakeA_AnimateVertexColors_m5FD933D6BF976B64FC0B80614DE5112377D1DC38 (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* L_0 = (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E*)il2cpp_codegen_object_new(U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAnimateVertexColorsU3Ed__11__ctor_m440985E6DF2F1B461E2964101EA242FFD472A25A(L_0, 0, NULL);
		U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TMPro.Examples.VertexShakeA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeA__ctor_m63ED483A292CA310B90144E0779C0472AAC22CBB (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, const RuntimeMethod* method) 
{
	{
		// public float AngleMultiplier = 1.0f;
		__this->___AngleMultiplier_4 = (1.0f);
		// public float SpeedMultiplier = 1.0f;
		__this->___SpeedMultiplier_5 = (1.0f);
		// public float ScaleMultiplier = 1.0f;
		__this->___ScaleMultiplier_6 = (1.0f);
		// public float RotationMultiplier = 1.0f;
		__this->___RotationMultiplier_7 = (1.0f);
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
// System.Void TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11__ctor_m440985E6DF2F1B461E2964101EA242FFD472A25A (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11_System_IDisposable_Dispose_m74112773E1FD645722BC221FA5256331C068EAE7 (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__11_MoveNext_mA6858F6CA14AAE3DFB7EA13748E10E063BBAB934 (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_0176;
	}

IL_0022:
	{
		goto IL_0710;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// m_TextComponent.ForceMeshUpdate();
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_2 = __this->___U3CU3E4__this_2;
		NullCheck(L_2);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = L_2->___m_TextComponent_8;
		NullCheck(L_3);
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_3, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = L_4->___m_TextComponent_8;
		NullCheck(L_5);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_6;
		L_6 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E(L_5, NULL);
		__this->___U3CtextInfoU3E5__1_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextInfoU3E5__1_3), (void*)L_6);
		// Vector3[][] copyOfVertices = new Vector3[0][];
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_7 = (Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)SZArrayNew(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___U3CcopyOfVerticesU3E5__3_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcopyOfVerticesU3E5__3_5), (void*)L_7);
		// hasTextChanged = true;
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		L_8->___hasTextChanged_9 = (bool)1;
		goto IL_0718;
	}

IL_0077:
	{
		// if (hasTextChanged)
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		bool L_10 = L_9->___hasTextChanged_9;
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_013c;
		}
	}
	{
		// if (copyOfVertices.Length < textInfo.meshInfo.Length)
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_12 = __this->___U3CcopyOfVerticesU3E5__3_5;
		NullCheck(L_12);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_13 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_13);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_14 = L_13->___meshInfo_16;
		NullCheck(L_14);
		V_2 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_00be;
		}
	}
	{
		// copyOfVertices = new Vector3[textInfo.meshInfo.Length][];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_16 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_16);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_17 = L_16->___meshInfo_16;
		NullCheck(L_17);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_18 = (Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)SZArrayNew(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)));
		__this->___U3CcopyOfVerticesU3E5__3_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcopyOfVerticesU3E5__3_5), (void*)L_18);
	}

IL_00be:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		__this->___U3CiU3E5__6_8 = 0;
		goto IL_0114;
	}

IL_00c7:
	{
		// int length = textInfo.meshInfo[i].vertices.Length;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_19 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_19);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_20 = L_19->___meshInfo_16;
		int32_t L_21 = __this->___U3CiU3E5__6_8;
		NullCheck(L_20);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___vertices_6;
		NullCheck(L_22);
		__this->___U3ClengthU3E5__7_9 = ((int32_t)(((RuntimeArray*)L_22)->max_length));
		// copyOfVertices[i] = new Vector3[length];
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_23 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_24 = __this->___U3CiU3E5__6_8;
		int32_t L_25 = __this->___U3ClengthU3E5__7_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)L_26);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_27 = __this->___U3CiU3E5__6_8;
		V_3 = L_27;
		int32_t L_28 = V_3;
		__this->___U3CiU3E5__6_8 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0114:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_29 = __this->___U3CiU3E5__6_8;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_30 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_30);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_31 = L_30->___meshInfo_16;
		NullCheck(L_31);
		V_4 = (bool)((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))? 1 : 0);
		bool L_32 = V_4;
		if (L_32)
		{
			goto IL_00c7;
		}
	}
	{
		// hasTextChanged = false;
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_33 = __this->___U3CU3E4__this_2;
		NullCheck(L_33);
		L_33->___hasTextChanged_9 = (bool)0;
	}

IL_013c:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_34 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_34);
		int32_t L_35 = L_34->___characterCount_3;
		__this->___U3CcharacterCountU3E5__4_6 = L_35;
		// if (characterCount == 0)
		int32_t L_36 = __this->___U3CcharacterCountU3E5__4_6;
		V_5 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_5;
		if (!L_37)
		{
			goto IL_0182;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_38 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_38, (0.25f), NULL);
		__this->___U3CU3E2__current_1 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_38);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0176:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_0718;
	}

IL_0182:
	{
		// int lineCount = textInfo.lineCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_39 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_39);
		int32_t L_40 = L_39->___lineCount_8;
		__this->___U3ClineCountU3E5__5_7 = L_40;
		// for (int i = 0; i < lineCount; i++)
		__this->___U3CiU3E5__8_10 = 0;
		goto IL_0647;
	}

IL_019f:
	{
		// int first = textInfo.lineInfo[i].firstCharacterIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_41 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_41);
		TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* L_42 = L_41->___lineInfo_14;
		int32_t L_43 = __this->___U3CiU3E5__8_10;
		NullCheck(L_42);
		int32_t L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->___firstCharacterIndex_5;
		__this->___U3CfirstU3E5__9_11 = L_44;
		// int last = textInfo.lineInfo[i].lastCharacterIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_45 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_45);
		TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* L_46 = L_45->___lineInfo_14;
		int32_t L_47 = __this->___U3CiU3E5__8_10;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___lastCharacterIndex_7;
		__this->___U3ClastU3E5__10_12 = L_48;
		// Vector3 centerOfLine = (textInfo.characterInfo[first].bottomLeft + textInfo.characterInfo[last].topRight) / 2;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_49 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_49);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_50 = L_49->___characterInfo_11;
		int32_t L_51 = __this->___U3CfirstU3E5__9_11;
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___bottomLeft_20;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_53 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_53);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_54 = L_53->___characterInfo_11;
		int32_t L_55 = __this->___U3ClastU3E5__10_12;
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___topRight_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_52, L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_57, (2.0f), NULL);
		__this->___U3CcenterOfLineU3E5__11_13 = L_58;
		// Quaternion rotation = Quaternion.Euler(0, 0, Random.Range(-0.25f, 0.25f) * RotationMultiplier);
		float L_59;
		L_59 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-0.25f), (0.25f), NULL);
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_60 = __this->___U3CU3E4__this_2;
		NullCheck(L_60);
		float L_61 = L_60->___RotationMultiplier_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62;
		L_62 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_59, L_61)), NULL);
		__this->___U3CrotationU3E5__12_14 = L_62;
		// for (int j = first; j <= last; j++)
		int32_t L_63 = __this->___U3CfirstU3E5__9_11;
		__this->___U3CjU3E5__13_15 = L_63;
		goto IL_0604;
	}

IL_026e:
	{
		// if (!textInfo.characterInfo[j].isVisible)
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_64 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_64);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_65 = L_64->___characterInfo_11;
		int32_t L_66 = __this->___U3CjU3E5__13_15;
		NullCheck(L_65);
		bool L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___isVisible_40;
		V_6 = (bool)((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_6;
		if (!L_68)
		{
			goto IL_0298;
		}
	}
	{
		// continue;
		goto IL_05f4;
	}

IL_0298:
	{
		// int materialIndex = textInfo.characterInfo[j].materialReferenceIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_69 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_69);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_70 = L_69->___characterInfo_11;
		int32_t L_71 = __this->___U3CjU3E5__13_15;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___materialReferenceIndex_9;
		__this->___U3CmaterialIndexU3E5__14_16 = L_72;
		// int vertexIndex = textInfo.characterInfo[j].vertexIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_73 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_73);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_74 = L_73->___characterInfo_11;
		int32_t L_75 = __this->___U3CjU3E5__13_15;
		NullCheck(L_74);
		int32_t L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___vertexIndex_14;
		__this->___U3CvertexIndexU3E5__15_17 = L_76;
		// Vector3[] sourceVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_77 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_77);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_78 = L_77->___meshInfo_16;
		int32_t L_79 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_78);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___vertices_6;
		__this->___U3CsourceVerticesU3E5__16_18 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourceVerticesU3E5__16_18), (void*)L_80);
		// copyOfVertices[materialIndex][vertexIndex + 0] = sourceVertices[vertexIndex + 0] - centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_81 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_82 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		int32_t L_85 = __this->___U3CvertexIndexU3E5__15_17;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_86 = __this->___U3CsourceVerticesU3E5__16_18;
		int32_t L_87 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_89, L_90, NULL);
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_91);
		// copyOfVertices[materialIndex][vertexIndex + 1] = sourceVertices[vertexIndex + 1] - centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_92 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_93 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		int32_t L_96 = __this->___U3CvertexIndexU3E5__15_17;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_97 = __this->___U3CsourceVerticesU3E5__16_18;
		int32_t L_98 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_100, L_101, NULL);
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_96, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_102);
		// copyOfVertices[materialIndex][vertexIndex + 2] = sourceVertices[vertexIndex + 2] - centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_103 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_104 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		int32_t L_107 = __this->___U3CvertexIndexU3E5__15_17;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_108 = __this->___U3CsourceVerticesU3E5__16_18;
		int32_t L_109 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_108);
		int32_t L_110 = ((int32_t)il2cpp_codegen_add(L_109, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_111, L_112, NULL);
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_107, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_113);
		// copyOfVertices[materialIndex][vertexIndex + 3] = sourceVertices[vertexIndex + 3] - centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_114 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_115 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		int32_t L_118 = __this->___U3CvertexIndexU3E5__15_17;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_119 = __this->___U3CsourceVerticesU3E5__16_18;
		int32_t L_120 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(L_120, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_122, L_123, NULL);
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_118, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_124);
		// float randomScale = Random.Range(0.995f - 0.001f * ScaleMultiplier, 1.005f + 0.001f * ScaleMultiplier);
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_125 = __this->___U3CU3E4__this_2;
		NullCheck(L_125);
		float L_126 = L_125->___ScaleMultiplier_6;
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_127 = __this->___U3CU3E4__this_2;
		NullCheck(L_127);
		float L_128 = L_127->___ScaleMultiplier_6;
		float L_129;
		L_129 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_subtract((0.995000005f), ((float)il2cpp_codegen_multiply((0.00100000005f), L_126)))), ((float)il2cpp_codegen_add((1.005f), ((float)il2cpp_codegen_multiply((0.00100000005f), L_128)))), NULL);
		__this->___U3CrandomScaleU3E5__17_19 = L_129;
		// matrix = Matrix4x4.TRS(Vector3.one, rotation, Vector3.one * randomScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_131 = __this->___U3CrotationU3E5__12_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		L_132 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_133 = __this->___U3CrandomScaleU3E5__17_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_132, L_133, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_135;
		L_135 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_130, L_131, L_134, NULL);
		__this->___U3CmatrixU3E5__2_4 = L_135;
		// copyOfVertices[materialIndex][vertexIndex + 0] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 0]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_136 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_137 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		int32_t L_140 = __this->___U3CvertexIndexU3E5__15_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_141 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_142 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_143 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		int32_t L_146 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_145);
		int32_t L_147 = L_146;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_141, L_148, NULL);
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(L_140), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_149);
		// copyOfVertices[materialIndex][vertexIndex + 1] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 1]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_150 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_151 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		int32_t L_154 = __this->___U3CvertexIndexU3E5__15_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_155 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_156 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_157 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_156);
		int32_t L_158 = L_157;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		int32_t L_160 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_159);
		int32_t L_161 = ((int32_t)il2cpp_codegen_add(L_160, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163;
		L_163 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_155, L_162, NULL);
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_154, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_163);
		// copyOfVertices[materialIndex][vertexIndex + 2] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 2]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_164 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_165 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_164);
		int32_t L_166 = L_165;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_167 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		int32_t L_168 = __this->___U3CvertexIndexU3E5__15_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_169 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_170 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_171 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		int32_t L_174 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_173);
		int32_t L_175 = ((int32_t)il2cpp_codegen_add(L_174, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_177;
		L_177 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_169, L_176, NULL);
		NullCheck(L_167);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_168, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_177);
		// copyOfVertices[materialIndex][vertexIndex + 3] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 3]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_178 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_179 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_178);
		int32_t L_180 = L_179;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		int32_t L_182 = __this->___U3CvertexIndexU3E5__15_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_183 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_184 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_185 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_184);
		int32_t L_186 = L_185;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		int32_t L_188 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_187);
		int32_t L_189 = ((int32_t)il2cpp_codegen_add(L_188, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_190 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_191;
		L_191 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_183, L_190, NULL);
		NullCheck(L_181);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_182, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_191);
		// copyOfVertices[materialIndex][vertexIndex + 0] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_192 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_193 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_192);
		int32_t L_194 = L_193;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_195 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		int32_t L_196 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_195);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_197 = ((L_195)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_196)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_198 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_197);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_199 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_200;
		L_200 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_198, L_199, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_197 = L_200;
		// copyOfVertices[materialIndex][vertexIndex + 1] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_201 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_202 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		int32_t L_205 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_204);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_206 = ((L_204)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_205, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_207 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_206);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_208 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_209;
		L_209 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_207, L_208, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_206 = L_209;
		// copyOfVertices[materialIndex][vertexIndex + 2] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_210 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_211 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_210);
		int32_t L_212 = L_211;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		int32_t L_214 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_213);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_215 = ((L_213)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_214, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_216 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_215);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_217 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_218;
		L_218 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_216, L_217, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_215 = L_218;
		// copyOfVertices[materialIndex][vertexIndex + 3] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_219 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_220 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_219);
		int32_t L_221 = L_220;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_222 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		int32_t L_223 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_222);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_224 = ((L_222)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_223, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_225 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_224);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_226 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_227;
		L_227 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_225, L_226, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_224 = L_227;
		__this->___U3CsourceVerticesU3E5__16_18 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourceVerticesU3E5__16_18), (void*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL);
	}

IL_05f4:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_228 = __this->___U3CjU3E5__13_15;
		V_3 = L_228;
		int32_t L_229 = V_3;
		__this->___U3CjU3E5__13_15 = ((int32_t)il2cpp_codegen_add(L_229, 1));
	}

IL_0604:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_230 = __this->___U3CjU3E5__13_15;
		int32_t L_231 = __this->___U3ClastU3E5__10_12;
		V_7 = (bool)((((int32_t)((((int32_t)L_230) > ((int32_t)L_231))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_232 = V_7;
		if (L_232)
		{
			goto IL_026e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_233 = (&__this->___U3CcenterOfLineU3E5__11_13);
		il2cpp_codegen_initobj(L_233, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_234 = (&__this->___U3CrotationU3E5__12_14);
		il2cpp_codegen_initobj(L_234, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		// for (int i = 0; i < lineCount; i++)
		int32_t L_235 = __this->___U3CiU3E5__8_10;
		V_3 = L_235;
		int32_t L_236 = V_3;
		__this->___U3CiU3E5__8_10 = ((int32_t)il2cpp_codegen_add(L_236, 1));
	}

IL_0647:
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_237 = __this->___U3CiU3E5__8_10;
		int32_t L_238 = __this->___U3ClineCountU3E5__5_7;
		V_8 = (bool)((((int32_t)L_237) < ((int32_t)L_238))? 1 : 0);
		bool L_239 = V_8;
		if (L_239)
		{
			goto IL_019f;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		__this->___U3CiU3E5__18_20 = 0;
		goto IL_06d9;
	}

IL_0667:
	{
		// textInfo.meshInfo[i].mesh.vertices = copyOfVertices[i];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_240 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_240);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_241 = L_240->___meshInfo_16;
		int32_t L_242 = __this->___U3CiU3E5__18_20;
		NullCheck(L_241);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_243 = ((L_241)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_242)))->___mesh_4;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_244 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_245 = __this->___U3CiU3E5__18_20;
		NullCheck(L_244);
		int32_t L_246 = L_245;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_247 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		NullCheck(L_243);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_243, L_247, NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_248 = __this->___U3CU3E4__this_2;
		NullCheck(L_248);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_249 = L_248->___m_TextComponent_8;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_250 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_250);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_251 = L_250->___meshInfo_16;
		int32_t L_252 = __this->___U3CiU3E5__18_20;
		NullCheck(L_251);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_253 = ((L_251)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_252)))->___mesh_4;
		int32_t L_254 = __this->___U3CiU3E5__18_20;
		NullCheck(L_249);
		VirtualActionInvoker2< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_249, L_253, L_254);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_255 = __this->___U3CiU3E5__18_20;
		V_3 = L_255;
		int32_t L_256 = V_3;
		__this->___U3CiU3E5__18_20 = ((int32_t)il2cpp_codegen_add(L_256, 1));
	}

IL_06d9:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_257 = __this->___U3CiU3E5__18_20;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_258 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_258);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_259 = L_258->___meshInfo_16;
		NullCheck(L_259);
		V_9 = (bool)((((int32_t)L_257) < ((int32_t)((int32_t)(((RuntimeArray*)L_259)->max_length))))? 1 : 0);
		bool L_260 = V_9;
		if (L_260)
		{
			goto IL_0667;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_261 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_261);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_261, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_261;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_261);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0710:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0718:
	{
		// while (true)
		V_10 = (bool)1;
		goto IL_0077;
	}
}
// System.Object TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8DD4F3768C9025EFAC0BFDBB942FEF7953FB20BE (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m2F84864A089CBA0B878B7AC1EA39A49B82682A90 (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m2F84864A089CBA0B878B7AC1EA39A49B82682A90_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_get_Current_m3106DAC17EF56701CBC9812DD031932B04BB730B (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* __this, const RuntimeMethod* method) 
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
// System.Void TMPro.Examples.VertexShakeB::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeB_Awake_mFA9A180BD1769CC79E6325314B5652D605ABE58E (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextComponent = GetComponent<TMP_Text>();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0;
		L_0 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(__this, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___m_TextComponent_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TextComponent_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeB::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeB_OnEnable_m4999DF4598174EDA2A47F4F667B5CE061DF97C21 (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexShakeB_ON_TEXT_CHANGED_mF8641640C828A9664AE03AF01CB4832E14EF436D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Add(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexShakeB_ON_TEXT_CHANGED_mF8641640C828A9664AE03AF01CB4832E14EF436D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6(L_0, L_1, FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeB::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeB_OnDisable_m2FB32CBD277A271400BF8AF2A35294C09FE9B8E5 (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexShakeB_ON_TEXT_CHANGED_mF8641640C828A9664AE03AF01CB4832E14EF436D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Remove(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexShakeB_ON_TEXT_CHANGED_mF8641640C828A9664AE03AF01CB4832E14EF436D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F(L_0, L_1, FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeB::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeB_Start_m58786A0944340EF16E024ADB596C9AB5686C2AF1 (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AnimateVertexColors());
		RuntimeObject* L_0;
		L_0 = VertexShakeB_AnimateVertexColors_m06D25FE7F9F3EFF693DDC889BF725F01D0CF2A6F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeB::ON_TEXT_CHANGED(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeB_ON_TEXT_CHANGED_mF8641640C828A9664AE03AF01CB4832E14EF436D (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (obj = m_TextComponent)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___m_TextComponent_7;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = L_0;
		___0_obj = L_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// hasTextChanged = true;
		__this->___hasTextChanged_8 = (bool)1;
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TMPro.Examples.VertexShakeB::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexShakeB_AnimateVertexColors_m06D25FE7F9F3EFF693DDC889BF725F01D0CF2A6F (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* L_0 = (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E*)il2cpp_codegen_object_new(U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAnimateVertexColorsU3Ed__10__ctor_mBE5C0E4A0F65F07A7510D171683AD319F76E6C6D(L_0, 0, NULL);
		U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TMPro.Examples.VertexShakeB::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeB__ctor_m9D068774503CF8642CC0BAC0E909ECE91E4E2198 (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, const RuntimeMethod* method) 
{
	{
		// public float AngleMultiplier = 1.0f;
		__this->___AngleMultiplier_4 = (1.0f);
		// public float SpeedMultiplier = 1.0f;
		__this->___SpeedMultiplier_5 = (1.0f);
		// public float CurveScale = 1.0f;
		__this->___CurveScale_6 = (1.0f);
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
// System.Void TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10__ctor_mBE5C0E4A0F65F07A7510D171683AD319F76E6C6D (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_IDisposable_Dispose_m4DD41FA568ABBC327FA38C0E345EFB6F1A71C2C8 (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__10_MoveNext_mDD84A4116FCAAF920F86BA72F890CE0BE76AF348 (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_0176;
	}

IL_0022:
	{
		goto IL_09b3;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// m_TextComponent.ForceMeshUpdate();
		VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* L_2 = __this->___U3CU3E4__this_2;
		NullCheck(L_2);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = L_2->___m_TextComponent_7;
		NullCheck(L_3);
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_3, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = L_4->___m_TextComponent_7;
		NullCheck(L_5);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_6;
		L_6 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E(L_5, NULL);
		__this->___U3CtextInfoU3E5__1_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextInfoU3E5__1_3), (void*)L_6);
		// Vector3[][] copyOfVertices = new Vector3[0][];
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_7 = (Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)SZArrayNew(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___U3CcopyOfVerticesU3E5__3_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcopyOfVerticesU3E5__3_5), (void*)L_7);
		// hasTextChanged = true;
		VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		L_8->___hasTextChanged_8 = (bool)1;
		goto IL_09bb;
	}

IL_0077:
	{
		// if (hasTextChanged)
		VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		bool L_10 = L_9->___hasTextChanged_8;
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_013c;
		}
	}
	{
		// if (copyOfVertices.Length < textInfo.meshInfo.Length)
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_12 = __this->___U3CcopyOfVerticesU3E5__3_5;
		NullCheck(L_12);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_13 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_13);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_14 = L_13->___meshInfo_16;
		NullCheck(L_14);
		V_2 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_00be;
		}
	}
	{
		// copyOfVertices = new Vector3[textInfo.meshInfo.Length][];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_16 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_16);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_17 = L_16->___meshInfo_16;
		NullCheck(L_17);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_18 = (Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)SZArrayNew(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)));
		__this->___U3CcopyOfVerticesU3E5__3_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcopyOfVerticesU3E5__3_5), (void*)L_18);
	}

IL_00be:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		__this->___U3CiU3E5__6_8 = 0;
		goto IL_0114;
	}

IL_00c7:
	{
		// int length = textInfo.meshInfo[i].vertices.Length;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_19 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_19);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_20 = L_19->___meshInfo_16;
		int32_t L_21 = __this->___U3CiU3E5__6_8;
		NullCheck(L_20);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___vertices_6;
		NullCheck(L_22);
		__this->___U3ClengthU3E5__7_9 = ((int32_t)(((RuntimeArray*)L_22)->max_length));
		// copyOfVertices[i] = new Vector3[length];
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_23 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_24 = __this->___U3CiU3E5__6_8;
		int32_t L_25 = __this->___U3ClengthU3E5__7_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)L_26);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_27 = __this->___U3CiU3E5__6_8;
		V_3 = L_27;
		int32_t L_28 = V_3;
		__this->___U3CiU3E5__6_8 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0114:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_29 = __this->___U3CiU3E5__6_8;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_30 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_30);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_31 = L_30->___meshInfo_16;
		NullCheck(L_31);
		V_4 = (bool)((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))? 1 : 0);
		bool L_32 = V_4;
		if (L_32)
		{
			goto IL_00c7;
		}
	}
	{
		// hasTextChanged = false;
		VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* L_33 = __this->___U3CU3E4__this_2;
		NullCheck(L_33);
		L_33->___hasTextChanged_8 = (bool)0;
	}

IL_013c:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_34 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_34);
		int32_t L_35 = L_34->___characterCount_3;
		__this->___U3CcharacterCountU3E5__4_6 = L_35;
		// if (characterCount == 0)
		int32_t L_36 = __this->___U3CcharacterCountU3E5__4_6;
		V_5 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_5;
		if (!L_37)
		{
			goto IL_0182;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_38 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_38, (0.25f), NULL);
		__this->___U3CU3E2__current_1 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_38);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0176:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_09bb;
	}

IL_0182:
	{
		// int lineCount = textInfo.lineCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_39 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_39);
		int32_t L_40 = L_39->___lineCount_8;
		__this->___U3ClineCountU3E5__5_7 = L_40;
		// for (int i = 0; i < lineCount; i++)
		__this->___U3CiU3E5__8_10 = 0;
		goto IL_08ea;
	}

IL_019f:
	{
		// int first = textInfo.lineInfo[i].firstCharacterIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_41 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_41);
		TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* L_42 = L_41->___lineInfo_14;
		int32_t L_43 = __this->___U3CiU3E5__8_10;
		NullCheck(L_42);
		int32_t L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->___firstCharacterIndex_5;
		__this->___U3CfirstU3E5__9_11 = L_44;
		// int last = textInfo.lineInfo[i].lastCharacterIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_45 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_45);
		TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* L_46 = L_45->___lineInfo_14;
		int32_t L_47 = __this->___U3CiU3E5__8_10;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___lastCharacterIndex_7;
		__this->___U3ClastU3E5__10_12 = L_48;
		// Vector3 centerOfLine = (textInfo.characterInfo[first].bottomLeft + textInfo.characterInfo[last].topRight) / 2;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_49 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_49);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_50 = L_49->___characterInfo_11;
		int32_t L_51 = __this->___U3CfirstU3E5__9_11;
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___bottomLeft_20;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_53 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_53);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_54 = L_53->___characterInfo_11;
		int32_t L_55 = __this->___U3ClastU3E5__10_12;
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___topRight_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_52, L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_57, (2.0f), NULL);
		__this->___U3CcenterOfLineU3E5__11_13 = L_58;
		// Quaternion rotation = Quaternion.Euler(0, 0, Random.Range(-0.25f, 0.25f));
		float L_59;
		L_59 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-0.25f), (0.25f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60;
		L_60 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), L_59, NULL);
		__this->___U3CrotationU3E5__12_14 = L_60;
		// for (int j = first; j <= last; j++)
		int32_t L_61 = __this->___U3CfirstU3E5__9_11;
		__this->___U3CjU3E5__13_15 = L_61;
		goto IL_08a7;
	}

IL_0262:
	{
		// if (!textInfo.characterInfo[j].isVisible)
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_62 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_62);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_63 = L_62->___characterInfo_11;
		int32_t L_64 = __this->___U3CjU3E5__13_15;
		NullCheck(L_63);
		bool L_65 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))->___isVisible_40;
		V_6 = (bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_6;
		if (!L_66)
		{
			goto IL_028c;
		}
	}
	{
		// continue;
		goto IL_0897;
	}

IL_028c:
	{
		// int materialIndex = textInfo.characterInfo[j].materialReferenceIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_67 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_67);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_68 = L_67->___characterInfo_11;
		int32_t L_69 = __this->___U3CjU3E5__13_15;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___materialReferenceIndex_9;
		__this->___U3CmaterialIndexU3E5__14_16 = L_70;
		// int vertexIndex = textInfo.characterInfo[j].vertexIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_71 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_71);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_72 = L_71->___characterInfo_11;
		int32_t L_73 = __this->___U3CjU3E5__13_15;
		NullCheck(L_72);
		int32_t L_74 = ((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___vertexIndex_14;
		__this->___U3CvertexIndexU3E5__15_17 = L_74;
		// Vector3[] sourceVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_75 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_75);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_76 = L_75->___meshInfo_16;
		int32_t L_77 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_76);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_78 = ((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_77)))->___vertices_6;
		__this->___U3CsourceVerticesU3E5__16_18 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourceVerticesU3E5__16_18), (void*)L_78);
		// Vector3 charCenter = (sourceVertices[vertexIndex + 0] + sourceVertices[vertexIndex + 2]) / 2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_79 = __this->___U3CsourceVerticesU3E5__16_18;
		int32_t L_80 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_83 = __this->___U3CsourceVerticesU3E5__16_18;
		int32_t L_84 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_82, L_86, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_87, (2.0f), NULL);
		__this->___U3CcharCenterU3E5__17_19 = L_88;
		// copyOfVertices[materialIndex][vertexIndex + 0] = sourceVertices[vertexIndex + 0] - charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_89 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_90 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		int32_t L_93 = __this->___U3CvertexIndexU3E5__15_17;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_94 = __this->___U3CsourceVerticesU3E5__16_18;
		int32_t L_95 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = __this->___U3CcharCenterU3E5__17_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_97, L_98, NULL);
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_99);
		// copyOfVertices[materialIndex][vertexIndex + 1] = sourceVertices[vertexIndex + 1] - charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_100 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_101 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		int32_t L_104 = __this->___U3CvertexIndexU3E5__15_17;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_105 = __this->___U3CsourceVerticesU3E5__16_18;
		int32_t L_106 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_105);
		int32_t L_107 = ((int32_t)il2cpp_codegen_add(L_106, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = __this->___U3CcharCenterU3E5__17_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_108, L_109, NULL);
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_104, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_110);
		// copyOfVertices[materialIndex][vertexIndex + 2] = sourceVertices[vertexIndex + 2] - charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_111 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_112 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		int32_t L_115 = __this->___U3CvertexIndexU3E5__15_17;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_116 = __this->___U3CsourceVerticesU3E5__16_18;
		int32_t L_117 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_116);
		int32_t L_118 = ((int32_t)il2cpp_codegen_add(L_117, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = __this->___U3CcharCenterU3E5__17_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_119, L_120, NULL);
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_115, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_121);
		// copyOfVertices[materialIndex][vertexIndex + 3] = sourceVertices[vertexIndex + 3] - charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_122 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_123 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		int32_t L_126 = __this->___U3CvertexIndexU3E5__15_17;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_127 = __this->___U3CsourceVerticesU3E5__16_18;
		int32_t L_128 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_127);
		int32_t L_129 = ((int32_t)il2cpp_codegen_add(L_128, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131 = __this->___U3CcharCenterU3E5__17_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		L_132 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_130, L_131, NULL);
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_126, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_132);
		// float randomScale = Random.Range(0.95f, 1.05f);
		float L_133;
		L_133 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.949999988f), (1.04999995f), NULL);
		__this->___U3CrandomScaleU3E5__18_20 = L_133;
		// matrix = Matrix4x4.TRS(Vector3.one, Quaternion.identity, Vector3.one * randomScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_135;
		L_135 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
		L_136 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_137 = __this->___U3CrandomScaleU3E5__18_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
		L_138 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_136, L_137, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_139;
		L_139 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_134, L_135, L_138, NULL);
		__this->___U3CmatrixU3E5__2_4 = L_139;
		// copyOfVertices[materialIndex][vertexIndex + 0] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 0]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_140 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_141 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		int32_t L_144 = __this->___U3CvertexIndexU3E5__15_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_145 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_146 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_147 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		int32_t L_150 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		L_153 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_145, L_152, NULL);
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_144), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_153);
		// copyOfVertices[materialIndex][vertexIndex + 1] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 1]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_154 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_155 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_154);
		int32_t L_156 = L_155;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		int32_t L_158 = __this->___U3CvertexIndexU3E5__15_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_159 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_160 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_161 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		int32_t L_164 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_163);
		int32_t L_165 = ((int32_t)il2cpp_codegen_add(L_164, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167;
		L_167 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_159, L_166, NULL);
		NullCheck(L_157);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_158, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_167);
		// copyOfVertices[materialIndex][vertexIndex + 2] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 2]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_168 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_169 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		int32_t L_172 = __this->___U3CvertexIndexU3E5__15_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_173 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_174 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_175 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_174);
		int32_t L_176 = L_175;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		int32_t L_178 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_177);
		int32_t L_179 = ((int32_t)il2cpp_codegen_add(L_178, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_181;
		L_181 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_173, L_180, NULL);
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_172, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_181);
		// copyOfVertices[materialIndex][vertexIndex + 3] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 3]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_182 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_183 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_182);
		int32_t L_184 = L_183;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		int32_t L_186 = __this->___U3CvertexIndexU3E5__15_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_187 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_188 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_189 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_188);
		int32_t L_190 = L_189;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_191 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		int32_t L_192 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_191);
		int32_t L_193 = ((int32_t)il2cpp_codegen_add(L_192, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_195;
		L_195 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_187, L_194, NULL);
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_186, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_195);
		// copyOfVertices[materialIndex][vertexIndex + 0] += charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_196 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_197 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_196);
		int32_t L_198 = L_197;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_199 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		int32_t L_200 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_199);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_201 = ((L_199)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_200)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_202 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_201);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_203 = __this->___U3CcharCenterU3E5__17_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_204;
		L_204 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_202, L_203, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_201 = L_204;
		// copyOfVertices[materialIndex][vertexIndex + 1] += charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_205 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_206 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_205);
		int32_t L_207 = L_206;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_208 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		int32_t L_209 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_208);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_210 = ((L_208)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_209, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_211 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_210);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_212 = __this->___U3CcharCenterU3E5__17_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_213;
		L_213 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_211, L_212, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_210 = L_213;
		// copyOfVertices[materialIndex][vertexIndex + 2] += charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_214 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_215 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_214);
		int32_t L_216 = L_215;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_217 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		int32_t L_218 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_217);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_219 = ((L_217)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_218, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_220 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_219);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_221 = __this->___U3CcharCenterU3E5__17_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_222;
		L_222 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_220, L_221, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_219 = L_222;
		// copyOfVertices[materialIndex][vertexIndex + 3] += charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_223 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_224 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_223);
		int32_t L_225 = L_224;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_226 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_226);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_228 = ((L_226)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_227, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_229 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_228);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_230 = __this->___U3CcharCenterU3E5__17_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_231;
		L_231 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_229, L_230, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_228 = L_231;
		// copyOfVertices[materialIndex][vertexIndex + 0] -= centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_232 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_233 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_232);
		int32_t L_234 = L_233;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_235 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		int32_t L_236 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_235);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_237 = ((L_235)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_236)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_238 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_237);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_239 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_240;
		L_240 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_238, L_239, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_237 = L_240;
		// copyOfVertices[materialIndex][vertexIndex + 1] -= centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_241 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_242 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_241);
		int32_t L_243 = L_242;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_244 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		int32_t L_245 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_244);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_246 = ((L_244)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_245, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_247 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_246);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_248 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_249;
		L_249 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_247, L_248, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_246 = L_249;
		// copyOfVertices[materialIndex][vertexIndex + 2] -= centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_250 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_251 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_250);
		int32_t L_252 = L_251;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_253 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_252));
		int32_t L_254 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_253);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_255 = ((L_253)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_254, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_256 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_255);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_257 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_258;
		L_258 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_256, L_257, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_255 = L_258;
		// copyOfVertices[materialIndex][vertexIndex + 3] -= centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_259 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_260 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		int32_t L_263 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_262);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_264 = ((L_262)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_263, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_265 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_264);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_266 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_267;
		L_267 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_265, L_266, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_264 = L_267;
		// matrix = Matrix4x4.TRS(Vector3.one, rotation, Vector3.one);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_268;
		L_268 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_269 = __this->___U3CrotationU3E5__12_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_270;
		L_270 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_271;
		L_271 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_268, L_269, L_270, NULL);
		__this->___U3CmatrixU3E5__2_4 = L_271;
		// copyOfVertices[materialIndex][vertexIndex + 0] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 0]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_272 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_273 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_272);
		int32_t L_274 = L_273;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_275 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		int32_t L_276 = __this->___U3CvertexIndexU3E5__15_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_277 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_278 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_279 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_278);
		int32_t L_280 = L_279;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_281 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		int32_t L_282 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_281);
		int32_t L_283 = L_282;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_284 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_283));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_285;
		L_285 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_277, L_284, NULL);
		NullCheck(L_275);
		(L_275)->SetAt(static_cast<il2cpp_array_size_t>(L_276), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_285);
		// copyOfVertices[materialIndex][vertexIndex + 1] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 1]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_286 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_287 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_286);
		int32_t L_288 = L_287;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_289 = (L_286)->GetAt(static_cast<il2cpp_array_size_t>(L_288));
		int32_t L_290 = __this->___U3CvertexIndexU3E5__15_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_291 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_292 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_293 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_292);
		int32_t L_294 = L_293;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_295 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		int32_t L_296 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_295);
		int32_t L_297 = ((int32_t)il2cpp_codegen_add(L_296, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_298 = (L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_299;
		L_299 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_291, L_298, NULL);
		NullCheck(L_289);
		(L_289)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_290, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_299);
		// copyOfVertices[materialIndex][vertexIndex + 2] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 2]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_300 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_301 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_300);
		int32_t L_302 = L_301;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_303 = (L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		int32_t L_304 = __this->___U3CvertexIndexU3E5__15_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_305 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_306 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_307 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_306);
		int32_t L_308 = L_307;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_309 = (L_306)->GetAt(static_cast<il2cpp_array_size_t>(L_308));
		int32_t L_310 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_309);
		int32_t L_311 = ((int32_t)il2cpp_codegen_add(L_310, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_312 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_311));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_313;
		L_313 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_305, L_312, NULL);
		NullCheck(L_303);
		(L_303)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_304, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_313);
		// copyOfVertices[materialIndex][vertexIndex + 3] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 3]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_314 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_315 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_314);
		int32_t L_316 = L_315;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_317 = (L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		int32_t L_318 = __this->___U3CvertexIndexU3E5__15_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_319 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_320 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_321 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_320);
		int32_t L_322 = L_321;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_323 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		int32_t L_324 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_323);
		int32_t L_325 = ((int32_t)il2cpp_codegen_add(L_324, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_326 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_327;
		L_327 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_319, L_326, NULL);
		NullCheck(L_317);
		(L_317)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_318, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_327);
		// copyOfVertices[materialIndex][vertexIndex + 0] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_328 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_329 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_328);
		int32_t L_330 = L_329;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_331 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		int32_t L_332 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_331);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_333 = ((L_331)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_332)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_334 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_333);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_335 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_336;
		L_336 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_334, L_335, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_333 = L_336;
		// copyOfVertices[materialIndex][vertexIndex + 1] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_337 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_338 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_337);
		int32_t L_339 = L_338;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_340 = (L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		int32_t L_341 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_340);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_342 = ((L_340)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_341, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_343 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_342);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_344 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_345;
		L_345 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_343, L_344, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_342 = L_345;
		// copyOfVertices[materialIndex][vertexIndex + 2] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_346 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_347 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_346);
		int32_t L_348 = L_347;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_349 = (L_346)->GetAt(static_cast<il2cpp_array_size_t>(L_348));
		int32_t L_350 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_349);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_351 = ((L_349)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_350, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_352 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_351);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_353 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_354;
		L_354 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_352, L_353, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_351 = L_354;
		// copyOfVertices[materialIndex][vertexIndex + 3] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_355 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_356 = __this->___U3CmaterialIndexU3E5__14_16;
		NullCheck(L_355);
		int32_t L_357 = L_356;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_358 = (L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		int32_t L_359 = __this->___U3CvertexIndexU3E5__15_17;
		NullCheck(L_358);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_360 = ((L_358)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_359, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_361 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_360);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_362 = __this->___U3CcenterOfLineU3E5__11_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_363;
		L_363 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_361, L_362, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_360 = L_363;
		__this->___U3CsourceVerticesU3E5__16_18 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourceVerticesU3E5__16_18), (void*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_364 = (&__this->___U3CcharCenterU3E5__17_19);
		il2cpp_codegen_initobj(L_364, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}

IL_0897:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_365 = __this->___U3CjU3E5__13_15;
		V_3 = L_365;
		int32_t L_366 = V_3;
		__this->___U3CjU3E5__13_15 = ((int32_t)il2cpp_codegen_add(L_366, 1));
	}

IL_08a7:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_367 = __this->___U3CjU3E5__13_15;
		int32_t L_368 = __this->___U3ClastU3E5__10_12;
		V_7 = (bool)((((int32_t)((((int32_t)L_367) > ((int32_t)L_368))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_369 = V_7;
		if (L_369)
		{
			goto IL_0262;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_370 = (&__this->___U3CcenterOfLineU3E5__11_13);
		il2cpp_codegen_initobj(L_370, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_371 = (&__this->___U3CrotationU3E5__12_14);
		il2cpp_codegen_initobj(L_371, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		// for (int i = 0; i < lineCount; i++)
		int32_t L_372 = __this->___U3CiU3E5__8_10;
		V_3 = L_372;
		int32_t L_373 = V_3;
		__this->___U3CiU3E5__8_10 = ((int32_t)il2cpp_codegen_add(L_373, 1));
	}

IL_08ea:
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_374 = __this->___U3CiU3E5__8_10;
		int32_t L_375 = __this->___U3ClineCountU3E5__5_7;
		V_8 = (bool)((((int32_t)L_374) < ((int32_t)L_375))? 1 : 0);
		bool L_376 = V_8;
		if (L_376)
		{
			goto IL_019f;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		__this->___U3CiU3E5__19_21 = 0;
		goto IL_097c;
	}

IL_090a:
	{
		// textInfo.meshInfo[i].mesh.vertices = copyOfVertices[i];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_377 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_377);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_378 = L_377->___meshInfo_16;
		int32_t L_379 = __this->___U3CiU3E5__19_21;
		NullCheck(L_378);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_380 = ((L_378)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_379)))->___mesh_4;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_381 = __this->___U3CcopyOfVerticesU3E5__3_5;
		int32_t L_382 = __this->___U3CiU3E5__19_21;
		NullCheck(L_381);
		int32_t L_383 = L_382;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_384 = (L_381)->GetAt(static_cast<il2cpp_array_size_t>(L_383));
		NullCheck(L_380);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_380, L_384, NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* L_385 = __this->___U3CU3E4__this_2;
		NullCheck(L_385);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_386 = L_385->___m_TextComponent_7;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_387 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_387);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_388 = L_387->___meshInfo_16;
		int32_t L_389 = __this->___U3CiU3E5__19_21;
		NullCheck(L_388);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_390 = ((L_388)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_389)))->___mesh_4;
		int32_t L_391 = __this->___U3CiU3E5__19_21;
		NullCheck(L_386);
		VirtualActionInvoker2< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_386, L_390, L_391);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_392 = __this->___U3CiU3E5__19_21;
		V_3 = L_392;
		int32_t L_393 = V_3;
		__this->___U3CiU3E5__19_21 = ((int32_t)il2cpp_codegen_add(L_393, 1));
	}

IL_097c:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_394 = __this->___U3CiU3E5__19_21;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_395 = __this->___U3CtextInfoU3E5__1_3;
		NullCheck(L_395);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_396 = L_395->___meshInfo_16;
		NullCheck(L_396);
		V_9 = (bool)((((int32_t)L_394) < ((int32_t)((int32_t)(((RuntimeArray*)L_396)->max_length))))? 1 : 0);
		bool L_397 = V_9;
		if (L_397)
		{
			goto IL_090a;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_398 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_398);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_398, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_398;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_398);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_09b3:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_09bb:
	{
		// while (true)
		V_10 = (bool)1;
		goto IL_0077;
	}
}
// System.Object TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m250CC96EC17E74D79536FDA4EB6F5B5F985C0845 (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5A5869FEFA67D5E9659F1145B83581D954550C1A (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5A5869FEFA67D5E9659F1145B83581D954550C1A_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_get_Current_m496F1BFEADA21FFB684F8C1996EAB707CFA1C5F0 (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* __this, const RuntimeMethod* method) 
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
// System.Void TMPro.Examples.VertexZoom::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_Awake_m29C1DE789B968D726EDD69F605321A223D47C1A0 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextComponent = GetComponent<TMP_Text>();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0;
		L_0 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(__this, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___m_TextComponent_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TextComponent_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_OnEnable_mE3719F01B6A8590066988F425F8A63103B5A7B47 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Add(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6(L_0, L_1, FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_OnDisable_mBB91C9EFA049395743D27358A427BB2B05850B47 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Remove(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F(L_0, L_1, FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_Start_mB03D03148C98EBC9117D69510D24F21978546FCB (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AnimateVertexColors());
		RuntimeObject* L_0;
		L_0 = VertexZoom_AnimateVertexColors_m632BD9DC8FB193AF2D5B540524B11AF139FDF5F0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom::ON_TEXT_CHANGED(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (obj == m_TextComponent)
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_obj;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___m_TextComponent_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// hasTextChanged = true;
		__this->___hasTextChanged_8 = (bool)1;
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TMPro.Examples.VertexZoom::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexZoom_AnimateVertexColors_m632BD9DC8FB193AF2D5B540524B11AF139FDF5F0 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* L_0 = (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123*)il2cpp_codegen_object_new(U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAnimateVertexColorsU3Ed__10__ctor_m7A5B8E07B89E628DB7119F7F61311165A2DBC4D6(L_0, 0, NULL);
		U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TMPro.Examples.VertexZoom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom__ctor_m454AF80ACB5C555BCB4B5E658A22B5A4FCC39422 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	{
		// public float AngleMultiplier = 1.0f;
		__this->___AngleMultiplier_4 = (1.0f);
		// public float SpeedMultiplier = 1.0f;
		__this->___SpeedMultiplier_5 = (1.0f);
		// public float CurveScale = 1.0f;
		__this->___CurveScale_6 = (1.0f);
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
// System.Void TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m8C69A89B34AA3D16243E69F1E0015856C791CC8A (U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::<AnimateVertexColors>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m8E51A05E012CCFA439DCF10A8B5C4FA196E4344A (U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* __this, int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// scaleSortingOrder.Sort((a, b) => modifiedCharScale[a].CompareTo(modifiedCharScale[b]));
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = __this->___modifiedCharScale_0;
		int32_t L_1 = ___0_a;
		NullCheck(L_0);
		float L_2;
		L_2 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_0, L_1, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		V_0 = L_2;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = __this->___modifiedCharScale_0;
		int32_t L_4 = ___1_b;
		NullCheck(L_3);
		float L_5;
		L_5 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_3, L_4, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&V_0), L_5, NULL);
		return L_6;
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
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10__ctor_m7A5B8E07B89E628DB7119F7F61311165A2DBC4D6 (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_IDisposable_Dispose_m974E92A444C6343E94C76BB6CC6508F7AE4FD36E (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__10_MoveNext_m6DBC52A95A92A54A1801DC4CEE548FA568251D5E (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m8E51A05E012CCFA439DCF10A8B5C4FA196E4344A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* G_B21_0 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* G_B21_1 = NULL;
	Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* G_B20_0 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* G_B20_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_0109;
	}

IL_0022:
	{
		goto IL_0895;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_2 = (U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3CU3Ec__DisplayClass10_0__ctor_m8C69A89B34AA3D16243E69F1E0015856C791CC8A(L_2, NULL);
		__this->___U3CU3E8__1_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)L_2);
		// m_TextComponent.ForceMeshUpdate();
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = L_3->___m_TextComponent_7;
		NullCheck(L_4);
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_4, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = L_5->___m_TextComponent_7;
		NullCheck(L_6);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_7;
		L_7 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E(L_6, NULL);
		__this->___U3CtextInfoU3E5__2_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextInfoU3E5__2_4), (void*)L_7);
		// TMP_MeshInfo[] cachedMeshInfoVertexData = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_8 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_8);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_9;
		L_9 = TMP_TextInfo_CopyMeshInfoVertexData_mF66E2F8821470E68D95FEB53D456CFA86241C0CA(L_8, NULL);
		__this->___U3CcachedMeshInfoVertexDataU3E5__4_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcachedMeshInfoVertexDataU3E5__4_6), (void*)L_9);
		// List<float> modifiedCharScale = new List<float>();
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_10 = __this->___U3CU3E8__1_3;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_11 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_11, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		NullCheck(L_10);
		L_10->___modifiedCharScale_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___modifiedCharScale_0), (void*)L_11);
		// List<int> scaleSortingOrder = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_12, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___U3CscaleSortingOrderU3E5__5_7 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CscaleSortingOrderU3E5__5_7), (void*)L_12);
		// hasTextChanged = true;
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_13 = __this->___U3CU3E4__this_2;
		NullCheck(L_13);
		L_13->___hasTextChanged_8 = (bool)1;
		goto IL_089d;
	}

IL_00a2:
	{
		// if (hasTextChanged)
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		bool L_15 = L_14->___hasTextChanged_8;
		V_1 = L_15;
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_00d1;
		}
	}
	{
		// cachedMeshInfoVertexData = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_17 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_17);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_18;
		L_18 = TMP_TextInfo_CopyMeshInfoVertexData_mF66E2F8821470E68D95FEB53D456CFA86241C0CA(L_17, NULL);
		__this->___U3CcachedMeshInfoVertexDataU3E5__4_6 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcachedMeshInfoVertexDataU3E5__4_6), (void*)L_18);
		// hasTextChanged = false;
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_19 = __this->___U3CU3E4__this_2;
		NullCheck(L_19);
		L_19->___hasTextChanged_8 = (bool)0;
	}

IL_00d1:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_20 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_20);
		int32_t L_21 = L_20->___characterCount_3;
		__this->___U3CcharacterCountU3E5__6_8 = L_21;
		// if (characterCount == 0)
		int32_t L_22 = __this->___U3CcharacterCountU3E5__6_8;
		V_2 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_2;
		if (!L_23)
		{
			goto IL_0115;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_24 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_24, (0.25f), NULL);
		__this->___U3CU3E2__current_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_24);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0109:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_089d;
	}

IL_0115:
	{
		// modifiedCharScale.Clear();
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_25 = __this->___U3CU3E8__1_3;
		NullCheck(L_25);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_26 = L_25->___modifiedCharScale_0;
		NullCheck(L_26);
		List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_inline(L_26, List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var);
		// scaleSortingOrder.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_27 = __this->___U3CscaleSortingOrderU3E5__5_7;
		NullCheck(L_27);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_27, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// for (int i = 0; i < characterCount; i++)
		__this->___U3CiU3E5__7_9 = 0;
		goto IL_06e3;
	}

IL_013e:
	{
		// TMP_CharacterInfo charInfo = textInfo.characterInfo[i];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_28 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_28);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_29 = L_28->___characterInfo_11;
		int32_t L_30 = __this->___U3CiU3E5__7_9;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		__this->___U3CcharInfoU3E5__8_10 = L_32;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CcharInfoU3E5__8_10))->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CcharInfoU3E5__8_10))->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CcharInfoU3E5__8_10))->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CcharInfoU3E5__8_10))->___material_8), (void*)NULL);
		#endif
		// if (!charInfo.isVisible)
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* L_33 = (&__this->___U3CcharInfoU3E5__8_10);
		bool L_34 = L_33->___isVisible_40;
		V_3 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_3;
		if (!L_35)
		{
			goto IL_0172;
		}
	}
	{
		// continue;
		goto IL_06d1;
	}

IL_0172:
	{
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_36 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_36);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_37 = L_36->___characterInfo_11;
		int32_t L_38 = __this->___U3CiU3E5__7_9;
		NullCheck(L_37);
		int32_t L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->___materialReferenceIndex_9;
		__this->___U3CmaterialIndexU3E5__9_11 = L_39;
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_40 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_40);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_41 = L_40->___characterInfo_11;
		int32_t L_42 = __this->___U3CiU3E5__7_9;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___vertexIndex_14;
		__this->___U3CvertexIndexU3E5__10_12 = L_43;
		// Vector3[] sourceVertices = cachedMeshInfoVertexData[materialIndex].vertices;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_44 = __this->___U3CcachedMeshInfoVertexDataU3E5__4_6;
		int32_t L_45 = __this->___U3CmaterialIndexU3E5__9_11;
		NullCheck(L_44);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___vertices_6;
		__this->___U3CsourceVerticesU3E5__11_13 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourceVerticesU3E5__11_13), (void*)L_46);
		// Vector2 charMidBasline = (sourceVertices[vertexIndex + 0] + sourceVertices[vertexIndex + 2]) / 2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_47 = __this->___U3CsourceVerticesU3E5__11_13;
		int32_t L_48 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_51 = __this->___U3CsourceVerticesU3E5__11_13;
		int32_t L_52 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_50, L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_55, (2.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_56, NULL);
		__this->___U3CcharMidBaslineU3E5__12_14 = L_57;
		// Vector3 offset = charMidBasline;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = __this->___U3CcharMidBaslineU3E5__12_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_58, NULL);
		__this->___U3CoffsetU3E5__13_15 = L_59;
		// Vector3[] destinationVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_60 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_60);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_61 = L_60->___meshInfo_16;
		int32_t L_62 = __this->___U3CmaterialIndexU3E5__9_11;
		NullCheck(L_61);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___vertices_6;
		__this->___U3CdestinationVerticesU3E5__14_16 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdestinationVerticesU3E5__14_16), (void*)L_63);
		// destinationVertices[vertexIndex + 0] = sourceVertices[vertexIndex + 0] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_64 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_65 = __this->___U3CvertexIndexU3E5__10_12;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_66 = __this->___U3CsourceVerticesU3E5__11_13;
		int32_t L_67 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = __this->___U3CoffsetU3E5__13_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_69, L_70, NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_71);
		// destinationVertices[vertexIndex + 1] = sourceVertices[vertexIndex + 1] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_72 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_73 = __this->___U3CvertexIndexU3E5__10_12;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = __this->___U3CsourceVerticesU3E5__11_13;
		int32_t L_75 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = __this->___U3CoffsetU3E5__13_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_77, L_78, NULL);
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_73, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_79);
		// destinationVertices[vertexIndex + 2] = sourceVertices[vertexIndex + 2] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_80 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_81 = __this->___U3CvertexIndexU3E5__10_12;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_82 = __this->___U3CsourceVerticesU3E5__11_13;
		int32_t L_83 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add(L_83, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = __this->___U3CoffsetU3E5__13_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_85, L_86, NULL);
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_81, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_87);
		// destinationVertices[vertexIndex + 3] = sourceVertices[vertexIndex + 3] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_88 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_89 = __this->___U3CvertexIndexU3E5__10_12;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_90 = __this->___U3CsourceVerticesU3E5__11_13;
		int32_t L_91 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = __this->___U3CoffsetU3E5__13_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_93, L_94, NULL);
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_89, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_95);
		// float randomScale = Random.Range(1f, 1.5f);
		float L_96;
		L_96 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((1.0f), (1.5f), NULL);
		__this->___U3CrandomScaleU3E5__15_17 = L_96;
		// modifiedCharScale.Add(randomScale);
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_97 = __this->___U3CU3E8__1_3;
		NullCheck(L_97);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_98 = L_97->___modifiedCharScale_0;
		float L_99 = __this->___U3CrandomScaleU3E5__15_17;
		NullCheck(L_98);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_98, L_99, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		// scaleSortingOrder.Add(modifiedCharScale.Count - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_100 = __this->___U3CscaleSortingOrderU3E5__5_7;
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_101 = __this->___U3CU3E8__1_3;
		NullCheck(L_101);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_102 = L_101->___modifiedCharScale_0;
		NullCheck(L_102);
		int32_t L_103;
		L_103 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_102, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		NullCheck(L_100);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_100, ((int32_t)il2cpp_codegen_subtract(L_103, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity, Vector3.one * randomScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_104), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_105;
		L_105 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_107 = __this->___U3CrandomScaleU3E5__15_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_106, L_107, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_109;
		L_109 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_104, L_105, L_108, NULL);
		__this->___U3CmatrixU3E5__3_5 = L_109;
		// destinationVertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 0]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_110 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_111 = __this->___U3CvertexIndexU3E5__10_12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_112 = (&__this->___U3CmatrixU3E5__3_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_113 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_114 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_112, L_116, NULL);
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_111), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_117);
		// destinationVertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 1]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_118 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_119 = __this->___U3CvertexIndexU3E5__10_12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_120 = (&__this->___U3CmatrixU3E5__3_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_121 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_122 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add(L_122, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
		L_125 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_120, L_124, NULL);
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_119, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_125);
		// destinationVertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 2]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_126 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_127 = __this->___U3CvertexIndexU3E5__10_12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_128 = (&__this->___U3CmatrixU3E5__3_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_129 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_130 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)il2cpp_codegen_add(L_130, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_128, L_132, NULL);
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_127, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_133);
		// destinationVertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 3]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_134 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_135 = __this->___U3CvertexIndexU3E5__10_12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_136 = (&__this->___U3CmatrixU3E5__3_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_137 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_138 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_137);
		int32_t L_139 = ((int32_t)il2cpp_codegen_add(L_138, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_136, L_140, NULL);
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_135, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_141);
		// destinationVertices[vertexIndex + 0] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_142 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_143 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_142);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_144 = ((L_142)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_143)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_144);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146 = __this->___U3CoffsetU3E5__13_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
		L_147 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_145, L_146, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_144 = L_147;
		// destinationVertices[vertexIndex + 1] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_148 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_149 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_148);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_150 = ((L_148)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_149, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_150);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152 = __this->___U3CoffsetU3E5__13_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		L_153 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_151, L_152, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_150 = L_153;
		// destinationVertices[vertexIndex + 2] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_154 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_155 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_154);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_156 = ((L_154)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_155, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_156);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158 = __this->___U3CoffsetU3E5__13_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159;
		L_159 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_157, L_158, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_156 = L_159;
		// destinationVertices[vertexIndex + 3] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_160 = __this->___U3CdestinationVerticesU3E5__14_16;
		int32_t L_161 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_160);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_162 = ((L_160)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_161, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_162);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164 = __this->___U3CoffsetU3E5__13_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165;
		L_165 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_163, L_164, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_162 = L_165;
		// Vector2[] sourceUVs0 = cachedMeshInfoVertexData[materialIndex].uvs0;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_166 = __this->___U3CcachedMeshInfoVertexDataU3E5__4_6;
		int32_t L_167 = __this->___U3CmaterialIndexU3E5__9_11;
		NullCheck(L_166);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_168 = ((L_166)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_167)))->___uvs0_9;
		__this->___U3CsourceUVs0U3E5__16_18 = L_168;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourceUVs0U3E5__16_18), (void*)L_168);
		// Vector2[] destinationUVs0 = textInfo.meshInfo[materialIndex].uvs0;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_169 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_169);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_170 = L_169->___meshInfo_16;
		int32_t L_171 = __this->___U3CmaterialIndexU3E5__9_11;
		NullCheck(L_170);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_172 = ((L_170)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_171)))->___uvs0_9;
		__this->___U3CdestinationUVs0U3E5__17_19 = L_172;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdestinationUVs0U3E5__17_19), (void*)L_172);
		// destinationUVs0[vertexIndex + 0] = sourceUVs0[vertexIndex + 0];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_173 = __this->___U3CdestinationUVs0U3E5__17_19;
		int32_t L_174 = __this->___U3CvertexIndexU3E5__10_12;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_175 = __this->___U3CsourceUVs0U3E5__16_18;
		int32_t L_176 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_175);
		int32_t L_177 = L_176;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_178 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		NullCheck(L_173);
		(L_173)->SetAt(static_cast<il2cpp_array_size_t>(L_174), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_178);
		// destinationUVs0[vertexIndex + 1] = sourceUVs0[vertexIndex + 1];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_179 = __this->___U3CdestinationUVs0U3E5__17_19;
		int32_t L_180 = __this->___U3CvertexIndexU3E5__10_12;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_181 = __this->___U3CsourceUVs0U3E5__16_18;
		int32_t L_182 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_181);
		int32_t L_183 = ((int32_t)il2cpp_codegen_add(L_182, 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		NullCheck(L_179);
		(L_179)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_180, 1))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_184);
		// destinationUVs0[vertexIndex + 2] = sourceUVs0[vertexIndex + 2];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_185 = __this->___U3CdestinationUVs0U3E5__17_19;
		int32_t L_186 = __this->___U3CvertexIndexU3E5__10_12;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_187 = __this->___U3CsourceUVs0U3E5__16_18;
		int32_t L_188 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_187);
		int32_t L_189 = ((int32_t)il2cpp_codegen_add(L_188, 2));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_190 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_186, 2))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_190);
		// destinationUVs0[vertexIndex + 3] = sourceUVs0[vertexIndex + 3];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_191 = __this->___U3CdestinationUVs0U3E5__17_19;
		int32_t L_192 = __this->___U3CvertexIndexU3E5__10_12;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_193 = __this->___U3CsourceUVs0U3E5__16_18;
		int32_t L_194 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)il2cpp_codegen_add(L_194, 3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		NullCheck(L_191);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_192, 3))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_196);
		// Color32[] sourceColors32 = cachedMeshInfoVertexData[materialIndex].colors32;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_197 = __this->___U3CcachedMeshInfoVertexDataU3E5__4_6;
		int32_t L_198 = __this->___U3CmaterialIndexU3E5__9_11;
		NullCheck(L_197);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_199 = ((L_197)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_198)))->___colors32_11;
		__this->___U3CsourceColors32U3E5__18_20 = L_199;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourceColors32U3E5__18_20), (void*)L_199);
		// Color32[] destinationColors32 = textInfo.meshInfo[materialIndex].colors32;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_200 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_200);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_201 = L_200->___meshInfo_16;
		int32_t L_202 = __this->___U3CmaterialIndexU3E5__9_11;
		NullCheck(L_201);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_203 = ((L_201)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_202)))->___colors32_11;
		__this->___U3CdestinationColors32U3E5__19_21 = L_203;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdestinationColors32U3E5__19_21), (void*)L_203);
		// destinationColors32[vertexIndex + 0] = sourceColors32[vertexIndex + 0];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_204 = __this->___U3CdestinationColors32U3E5__19_21;
		int32_t L_205 = __this->___U3CvertexIndexU3E5__10_12;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_206 = __this->___U3CsourceColors32U3E5__18_20;
		int32_t L_207 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_206);
		int32_t L_208 = L_207;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_209 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		NullCheck(L_204);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(L_205), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_209);
		// destinationColors32[vertexIndex + 1] = sourceColors32[vertexIndex + 1];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_210 = __this->___U3CdestinationColors32U3E5__19_21;
		int32_t L_211 = __this->___U3CvertexIndexU3E5__10_12;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_212 = __this->___U3CsourceColors32U3E5__18_20;
		int32_t L_213 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_212);
		int32_t L_214 = ((int32_t)il2cpp_codegen_add(L_213, 1));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_215 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_211, 1))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_215);
		// destinationColors32[vertexIndex + 2] = sourceColors32[vertexIndex + 2];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_216 = __this->___U3CdestinationColors32U3E5__19_21;
		int32_t L_217 = __this->___U3CvertexIndexU3E5__10_12;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_218 = __this->___U3CsourceColors32U3E5__18_20;
		int32_t L_219 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_218);
		int32_t L_220 = ((int32_t)il2cpp_codegen_add(L_219, 2));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_221 = (L_218)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		NullCheck(L_216);
		(L_216)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_217, 2))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_221);
		// destinationColors32[vertexIndex + 3] = sourceColors32[vertexIndex + 3];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_222 = __this->___U3CdestinationColors32U3E5__19_21;
		int32_t L_223 = __this->___U3CvertexIndexU3E5__10_12;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_224 = __this->___U3CsourceColors32U3E5__18_20;
		int32_t L_225 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_224);
		int32_t L_226 = ((int32_t)il2cpp_codegen_add(L_225, 3));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_227 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		NullCheck(L_222);
		(L_222)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_223, 3))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_227);
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* L_228 = (&__this->___U3CcharInfoU3E5__8_10);
		il2cpp_codegen_initobj(L_228, sizeof(TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8));
		__this->___U3CsourceVerticesU3E5__11_13 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourceVerticesU3E5__11_13), (void*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_229 = (&__this->___U3CcharMidBaslineU3E5__12_14);
		il2cpp_codegen_initobj(L_229, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_230 = (&__this->___U3CoffsetU3E5__13_15);
		il2cpp_codegen_initobj(L_230, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		__this->___U3CdestinationVerticesU3E5__14_16 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdestinationVerticesU3E5__14_16), (void*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL);
		__this->___U3CsourceUVs0U3E5__16_18 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourceUVs0U3E5__16_18), (void*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)NULL);
		__this->___U3CdestinationUVs0U3E5__17_19 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdestinationUVs0U3E5__17_19), (void*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)NULL);
		__this->___U3CsourceColors32U3E5__18_20 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourceColors32U3E5__18_20), (void*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL);
		__this->___U3CdestinationColors32U3E5__19_21 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdestinationColors32U3E5__19_21), (void*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL);
	}

IL_06d1:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_231 = __this->___U3CiU3E5__7_9;
		V_4 = L_231;
		int32_t L_232 = V_4;
		__this->___U3CiU3E5__7_9 = ((int32_t)il2cpp_codegen_add(L_232, 1));
	}

IL_06e3:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_233 = __this->___U3CiU3E5__7_9;
		int32_t L_234 = __this->___U3CcharacterCountU3E5__6_8;
		V_5 = (bool)((((int32_t)L_233) < ((int32_t)L_234))? 1 : 0);
		bool L_235 = V_5;
		if (L_235)
		{
			goto IL_013e;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		__this->___U3CiU3E5__20_22 = 0;
		goto IL_085e;
	}

IL_0706:
	{
		// scaleSortingOrder.Sort((a, b) => modifiedCharScale[a].CompareTo(modifiedCharScale[b]));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_236 = __this->___U3CscaleSortingOrderU3E5__5_7;
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_237 = __this->___U3CU3E8__1_3;
		NullCheck(L_237);
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_238 = L_237->___U3CU3E9__0_1;
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_239 = L_238;
		G_B20_0 = L_239;
		G_B20_1 = L_236;
		if (L_239)
		{
			G_B21_0 = L_239;
			G_B21_1 = L_236;
			goto IL_073d;
		}
	}
	{
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_240 = __this->___U3CU3E8__1_3;
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_241 = __this->___U3CU3E8__1_3;
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_242 = (Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89*)il2cpp_codegen_object_new(Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89_il2cpp_TypeInfo_var);
		NullCheck(L_242);
		Comparison_1__ctor_m7E05FE21370A028EA8A2792D028FFDAD83F24F6C(L_242, L_241, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m8E51A05E012CCFA439DCF10A8B5C4FA196E4344A_RuntimeMethod_var), NULL);
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_243 = L_242;
		V_6 = L_243;
		NullCheck(L_240);
		L_240->___U3CU3E9__0_1 = L_243;
		Il2CppCodeGenWriteBarrier((void**)(&L_240->___U3CU3E9__0_1), (void*)L_243);
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_244 = V_6;
		G_B21_0 = L_244;
		G_B21_1 = G_B20_1;
	}

IL_073d:
	{
		NullCheck(G_B21_1);
		List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4(G_B21_1, G_B21_0, List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4_RuntimeMethod_var);
		// textInfo.meshInfo[i].SortGeometry(scaleSortingOrder);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_245 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_245);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_246 = L_245->___meshInfo_16;
		int32_t L_247 = __this->___U3CiU3E5__20_22;
		NullCheck(L_246);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_248 = __this->___U3CscaleSortingOrderU3E5__5_7;
		TMP_MeshInfo_SortGeometry_m74ED0FE2065414A659EE9A9C809E1B0B4A8A7734(((L_246)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_247))), L_248, NULL);
		// textInfo.meshInfo[i].mesh.vertices = textInfo.meshInfo[i].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_249 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_249);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_250 = L_249->___meshInfo_16;
		int32_t L_251 = __this->___U3CiU3E5__20_22;
		NullCheck(L_250);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_252 = ((L_250)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_251)))->___mesh_4;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_253 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_253);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_254 = L_253->___meshInfo_16;
		int32_t L_255 = __this->___U3CiU3E5__20_22;
		NullCheck(L_254);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_256 = ((L_254)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_255)))->___vertices_6;
		NullCheck(L_252);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_252, L_256, NULL);
		// textInfo.meshInfo[i].mesh.uv = textInfo.meshInfo[i].uvs0;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_257 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_257);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_258 = L_257->___meshInfo_16;
		int32_t L_259 = __this->___U3CiU3E5__20_22;
		NullCheck(L_258);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_260 = ((L_258)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_259)))->___mesh_4;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_261 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_261);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_262 = L_261->___meshInfo_16;
		int32_t L_263 = __this->___U3CiU3E5__20_22;
		NullCheck(L_262);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_264 = ((L_262)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_263)))->___uvs0_9;
		NullCheck(L_260);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_260, L_264, NULL);
		// textInfo.meshInfo[i].mesh.colors32 = textInfo.meshInfo[i].colors32;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_265 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_265);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_266 = L_265->___meshInfo_16;
		int32_t L_267 = __this->___U3CiU3E5__20_22;
		NullCheck(L_266);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_268 = ((L_266)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_267)))->___mesh_4;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_269 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_269);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_270 = L_269->___meshInfo_16;
		int32_t L_271 = __this->___U3CiU3E5__20_22;
		NullCheck(L_270);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_272 = ((L_270)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_271)))->___colors32_11;
		NullCheck(L_268);
		Mesh_set_colors32_m0E4462B7A1D613E6FB15DD7584BCE5491C17820F(L_268, L_272, NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_273 = __this->___U3CU3E4__this_2;
		NullCheck(L_273);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_274 = L_273->___m_TextComponent_7;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_275 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_275);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_276 = L_275->___meshInfo_16;
		int32_t L_277 = __this->___U3CiU3E5__20_22;
		NullCheck(L_276);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_278 = ((L_276)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_277)))->___mesh_4;
		int32_t L_279 = __this->___U3CiU3E5__20_22;
		NullCheck(L_274);
		VirtualActionInvoker2< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_274, L_278, L_279);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_280 = __this->___U3CiU3E5__20_22;
		V_4 = L_280;
		int32_t L_281 = V_4;
		__this->___U3CiU3E5__20_22 = ((int32_t)il2cpp_codegen_add(L_281, 1));
	}

IL_085e:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_282 = __this->___U3CiU3E5__20_22;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_283 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_283);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_284 = L_283->___meshInfo_16;
		NullCheck(L_284);
		V_7 = (bool)((((int32_t)L_282) < ((int32_t)((int32_t)(((RuntimeArray*)L_284)->max_length))))? 1 : 0);
		bool L_285 = V_7;
		if (L_285)
		{
			goto IL_0706;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_286 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_286);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_286, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_286;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_286);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0895:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_089d:
	{
		// while (true)
		V_8 = (bool)1;
		goto IL_00a2;
	}
}
// System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m110CD16E89E725B1484D24FFB1753768F78A988B (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDE5E71C88F5096FD70EB061287ADF0B847732821 (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDE5E71C88F5096FD70EB061287ADF0B847732821_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_get_Current_m14B89756695EE73AEBB6F3A613F65E1343A8CC2C (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
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
// System.Void TMPro.Examples.WarpTextExample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarpTextExample_Awake_m92842E51B4DBB2E4341ACB179468049FAB23949F (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextComponent = gameObject.GetComponent<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1;
		L_1 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_0, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		__this->___m_TextComponent_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TextComponent_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void TMPro.Examples.WarpTextExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarpTextExample_Start_m3339EDC03B6FC498916520CBCCDB5F9FA090F809 (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(WarpText());
		RuntimeObject* L_0;
		L_0 = WarpTextExample_WarpText_mBE4B6E5B6D8AAE9340CD59B1FA9DFE9A34665E98(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::CopyAnimationCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* WarpTextExample_CopyAnimationCurve_m65A93388CC2CF58CD2E08CC8EF682A2C97C558FF (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_curve, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* V_0 = NULL;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* V_1 = NULL;
	{
		// AnimationCurve newCurve = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_0, NULL);
		V_0 = L_0;
		// newCurve.keys = curve.keys;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = ___0_curve;
		NullCheck(L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3;
		L_3 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_2, NULL);
		NullCheck(L_1);
		AnimationCurve_set_keys_mBE1284B44CDBB1D8381177A3D581A6E71467F95C(L_1, L_3, NULL);
		// return newCurve;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = V_0;
		V_1 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = V_1;
		return L_5;
	}
}
// System.Collections.IEnumerator TMPro.Examples.WarpTextExample::WarpText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WarpTextExample_WarpText_mBE4B6E5B6D8AAE9340CD59B1FA9DFE9A34665E98 (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* L_0 = (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E*)il2cpp_codegen_object_new(U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWarpTextU3Ed__8__ctor_m1943C34BBEAF121203BA8C5D725E991283A4A3BB(L_0, 0, NULL);
		U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TMPro.Examples.WarpTextExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarpTextExample__ctor_mBD48A5403123F25C45B5E60C19E1EA397FBA1795 (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve VertexCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(0.25f, 2.0f), new Keyframe(0.5f, 0), new Keyframe(0.75f, 2.0f), new Keyframe(1, 0f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)5);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (0.25f), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_6), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_7 = L_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_8), (0.75f), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_8);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_9 = L_7;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_10), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_10);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_11, L_9, NULL);
		__this->___VertexCurve_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VertexCurve_5), (void*)L_11);
		// public float AngleMultiplier = 1.0f;
		__this->___AngleMultiplier_6 = (1.0f);
		// public float SpeedMultiplier = 1.0f;
		__this->___SpeedMultiplier_7 = (1.0f);
		// public float CurveScale = 1.0f;
		__this->___CurveScale_8 = (1.0f);
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
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8__ctor_m1943C34BBEAF121203BA8C5D725E991283A4A3BB (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8_System_IDisposable_Dispose_m145D2DA1026419984AD79D5D62FBC38C9441AB53 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.WarpTextExample/<WarpText>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWarpTextU3Ed__8_MoveNext_mCE7A826C5E4854C2C509C77BD18F5A9B6D691B02 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B11_0 = 0;
	U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* G_B21_0 = NULL;
	U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* G_B20_0 = NULL;
	float G_B22_0 = 0.0f;
	U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* G_B22_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_0126;
	}

IL_0022:
	{
		goto IL_0713;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// VertexCurve.preWrapMode = WrapMode.Clamp;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_2 = __this->___U3CU3E4__this_2;
		NullCheck(L_2);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = L_2->___VertexCurve_5;
		NullCheck(L_3);
		AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D(L_3, 1, NULL);
		// VertexCurve.postWrapMode = WrapMode.Clamp;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = L_4->___VertexCurve_5;
		NullCheck(L_5);
		AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9(L_5, 1, NULL);
		// m_TextComponent.havePropertiesChanged = true; // Need to force the TextMeshPro Object to be updated.
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = L_6->___m_TextComponent_4;
		NullCheck(L_7);
		TMP_Text_set_havePropertiesChanged_mA38D7BC9E260BF29450738B827F2220A05662B31(L_7, (bool)1, NULL);
		// CurveScale *= 10;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_8 = __this->___U3CU3E4__this_2;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		float L_10 = L_9->___CurveScale_8;
		NullCheck(L_8);
		L_8->___CurveScale_8 = ((float)il2cpp_codegen_multiply(L_10, (10.0f)));
		// float old_CurveScale = CurveScale;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		float L_12 = L_11->___CurveScale_8;
		__this->___U3Cold_CurveScaleU3E5__3_5 = L_12;
		// AnimationCurve old_curve = CopyAnimationCurve(VertexCurve);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_13 = __this->___U3CU3E4__this_2;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_15 = L_14->___VertexCurve_5;
		NullCheck(L_13);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_16;
		L_16 = WarpTextExample_CopyAnimationCurve_m65A93388CC2CF58CD2E08CC8EF682A2C97C558FF(L_13, L_15, NULL);
		__this->___U3Cold_curveU3E5__4_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cold_curveU3E5__4_6), (void*)L_16);
		goto IL_0722;
	}

IL_00b5:
	{
		// if (!m_TextComponent.havePropertiesChanged && old_CurveScale == CurveScale && old_curve.keys[1].value == VertexCurve.keys[1].value)
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_17 = __this->___U3CU3E4__this_2;
		NullCheck(L_17);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_18 = L_17->___m_TextComponent_4;
		NullCheck(L_18);
		bool L_19;
		L_19 = TMP_Text_get_havePropertiesChanged_m42ECC7D1CA0DF6E59ACF761EB20635E81FCB8EFF(L_18, NULL);
		if (L_19)
		{
			goto IL_0110;
		}
	}
	{
		float L_20 = __this->___U3Cold_CurveScaleU3E5__3_5;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_21 = __this->___U3CU3E4__this_2;
		NullCheck(L_21);
		float L_22 = L_21->___CurveScale_8;
		if ((!(((float)L_20) == ((float)L_22))))
		{
			goto IL_0110;
		}
	}
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_23 = __this->___U3Cold_curveU3E5__4_6;
		NullCheck(L_23);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_24;
		L_24 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_23, NULL);
		NullCheck(L_24);
		float L_25;
		L_25 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C(((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), NULL);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_26 = __this->___U3CU3E4__this_2;
		NullCheck(L_26);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_27 = L_26->___VertexCurve_5;
		NullCheck(L_27);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_28;
		L_28 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_27, NULL);
		NullCheck(L_28);
		float L_29;
		L_29 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C(((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), NULL);
		G_B11_0 = ((((float)L_25) == ((float)L_29))? 1 : 0);
		goto IL_0111;
	}

IL_0110:
	{
		G_B11_0 = 0;
	}

IL_0111:
	{
		V_1 = (bool)G_B11_0;
		bool L_30 = V_1;
		if (!L_30)
		{
			goto IL_0132;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0126:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_0722;
	}

IL_0132:
	{
		// old_CurveScale = CurveScale;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_31 = __this->___U3CU3E4__this_2;
		NullCheck(L_31);
		float L_32 = L_31->___CurveScale_8;
		__this->___U3Cold_CurveScaleU3E5__3_5 = L_32;
		// old_curve = CopyAnimationCurve(VertexCurve);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_33 = __this->___U3CU3E4__this_2;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_34 = __this->___U3CU3E4__this_2;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_35 = L_34->___VertexCurve_5;
		NullCheck(L_33);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = WarpTextExample_CopyAnimationCurve_m65A93388CC2CF58CD2E08CC8EF682A2C97C558FF(L_33, L_35, NULL);
		__this->___U3Cold_curveU3E5__4_6 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cold_curveU3E5__4_6), (void*)L_36);
		// m_TextComponent.ForceMeshUpdate(); // Generate the mesh and populate the textInfo with data we can use and manipulate.
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_37 = __this->___U3CU3E4__this_2;
		NullCheck(L_37);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_38 = L_37->___m_TextComponent_4;
		NullCheck(L_38);
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_38, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_39 = __this->___U3CU3E4__this_2;
		NullCheck(L_39);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_40 = L_39->___m_TextComponent_4;
		NullCheck(L_40);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_41;
		L_41 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E(L_40, NULL);
		__this->___U3CtextInfoU3E5__5_7 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextInfoU3E5__5_7), (void*)L_41);
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_42 = __this->___U3CtextInfoU3E5__5_7;
		NullCheck(L_42);
		int32_t L_43 = L_42->___characterCount_3;
		__this->___U3CcharacterCountU3E5__6_8 = L_43;
		// if (characterCount == 0) continue;
		int32_t L_44 = __this->___U3CcharacterCountU3E5__6_8;
		V_2 = (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_2;
		if (!L_45)
		{
			goto IL_01ab;
		}
	}
	{
		// if (characterCount == 0) continue;
		goto IL_0722;
	}

IL_01ab:
	{
		// float boundsMinX = m_TextComponent.bounds.min.x;  //textInfo.meshInfo[0].mesh.bounds.min.x;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_46 = __this->___U3CU3E4__this_2;
		NullCheck(L_46);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_47 = L_46->___m_TextComponent_4;
		NullCheck(L_47);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_48;
		L_48 = TMP_Text_get_bounds_mAEE407DE6CA2E1D1180868C03A3F0A3B6E455189(L_47, NULL);
		V_3 = L_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_3), NULL);
		float L_50 = L_49.___x_2;
		__this->___U3CboundsMinXU3E5__7_9 = L_50;
		// float boundsMaxX = m_TextComponent.bounds.max.x;  //textInfo.meshInfo[0].mesh.bounds.max.x;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_51 = __this->___U3CU3E4__this_2;
		NullCheck(L_51);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_52 = L_51->___m_TextComponent_4;
		NullCheck(L_52);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_53;
		L_53 = TMP_Text_get_bounds_mAEE407DE6CA2E1D1180868C03A3F0A3B6E455189(L_52, NULL);
		V_3 = L_53;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&V_3), NULL);
		float L_55 = L_54.___x_2;
		__this->___U3CboundsMaxXU3E5__8_10 = L_55;
		// for (int i = 0; i < characterCount; i++)
		__this->___U3CiU3E5__9_11 = 0;
		goto IL_06d2;
	}

IL_01fd:
	{
		// if (!textInfo.characterInfo[i].isVisible)
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_56 = __this->___U3CtextInfoU3E5__5_7;
		NullCheck(L_56);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_57 = L_56->___characterInfo_11;
		int32_t L_58 = __this->___U3CiU3E5__9_11;
		NullCheck(L_57);
		bool L_59 = ((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___isVisible_40;
		V_4 = (bool)((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_4;
		if (!L_60)
		{
			goto IL_0227;
		}
	}
	{
		// continue;
		goto IL_06c0;
	}

IL_0227:
	{
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_61 = __this->___U3CtextInfoU3E5__5_7;
		NullCheck(L_61);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_62 = L_61->___characterInfo_11;
		int32_t L_63 = __this->___U3CiU3E5__9_11;
		NullCheck(L_62);
		int32_t L_64 = ((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___vertexIndex_14;
		__this->___U3CvertexIndexU3E5__10_12 = L_64;
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_65 = __this->___U3CtextInfoU3E5__5_7;
		NullCheck(L_65);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_66 = L_65->___characterInfo_11;
		int32_t L_67 = __this->___U3CiU3E5__9_11;
		NullCheck(L_66);
		int32_t L_68 = ((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___materialReferenceIndex_9;
		__this->___U3CmaterialIndexU3E5__11_13 = L_68;
		// vertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_69 = __this->___U3CtextInfoU3E5__5_7;
		NullCheck(L_69);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_70 = L_69->___meshInfo_16;
		int32_t L_71 = __this->___U3CmaterialIndexU3E5__11_13;
		NullCheck(L_70);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___vertices_6;
		__this->___U3CverticesU3E5__1_3 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CverticesU3E5__1_3), (void*)L_72);
		// Vector3 offsetToMidBaseline = new Vector2((vertices[vertexIndex + 0].x + vertices[vertexIndex + 2].x) / 2, textInfo.characterInfo[i].baseLine);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_73 = __this->___U3CverticesU3E5__1_3;
		int32_t L_74 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_73);
		float L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___x_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_76 = __this->___U3CverticesU3E5__1_3;
		int32_t L_77 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_76);
		float L_78 = ((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 2)))))->___x_2;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_79 = __this->___U3CtextInfoU3E5__5_7;
		NullCheck(L_79);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_80 = L_79->___characterInfo_11;
		int32_t L_81 = __this->___U3CiU3E5__9_11;
		NullCheck(L_80);
		float L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___baseLine_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_83), ((float)(((float)il2cpp_codegen_add(L_75, L_78))/(2.0f))), L_82, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_83, NULL);
		__this->___U3CoffsetToMidBaselineU3E5__12_14 = L_84;
		// vertices[vertexIndex + 0] += -offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_85 = __this->___U3CverticesU3E5__1_3;
		int32_t L_86 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_87 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = __this->___U3CoffsetToMidBaselineU3E5__12_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_89, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_88, L_90, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_87 = L_91;
		// vertices[vertexIndex + 1] += -offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_92 = __this->___U3CverticesU3E5__1_3;
		int32_t L_93 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_92);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_94 = ((L_92)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_94);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = __this->___U3CoffsetToMidBaselineU3E5__12_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_96, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_95, L_97, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_94 = L_98;
		// vertices[vertexIndex + 2] += -offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_99 = __this->___U3CverticesU3E5__1_3;
		int32_t L_100 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_99);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_101 = ((L_99)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_100, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = __this->___U3CoffsetToMidBaselineU3E5__12_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_103, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_102, L_104, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_101 = L_105;
		// vertices[vertexIndex + 3] += -offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_106 = __this->___U3CverticesU3E5__1_3;
		int32_t L_107 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_106);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_108 = ((L_106)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_107, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_108);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = __this->___U3CoffsetToMidBaselineU3E5__12_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_110, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_109, L_111, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_108 = L_112;
		// float x0 = (offsetToMidBaseline.x - boundsMinX) / (boundsMaxX - boundsMinX); // Character's position relative to the bounds of the mesh.
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_113 = (&__this->___U3CoffsetToMidBaselineU3E5__12_14);
		float L_114 = L_113->___x_2;
		float L_115 = __this->___U3CboundsMinXU3E5__7_9;
		float L_116 = __this->___U3CboundsMaxXU3E5__8_10;
		float L_117 = __this->___U3CboundsMinXU3E5__7_9;
		__this->___U3Cx0U3E5__13_15 = ((float)(((float)il2cpp_codegen_subtract(L_114, L_115))/((float)il2cpp_codegen_subtract(L_116, L_117))));
		// float x1 = x0 + 0.0001f;
		float L_118 = __this->___U3Cx0U3E5__13_15;
		__this->___U3Cx1U3E5__14_16 = ((float)il2cpp_codegen_add(L_118, (9.99999975E-05f)));
		// float y0 = VertexCurve.Evaluate(x0) * CurveScale;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_119 = __this->___U3CU3E4__this_2;
		NullCheck(L_119);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_120 = L_119->___VertexCurve_5;
		float L_121 = __this->___U3Cx0U3E5__13_15;
		NullCheck(L_120);
		float L_122;
		L_122 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_120, L_121, NULL);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_123 = __this->___U3CU3E4__this_2;
		NullCheck(L_123);
		float L_124 = L_123->___CurveScale_8;
		__this->___U3Cy0U3E5__15_17 = ((float)il2cpp_codegen_multiply(L_122, L_124));
		// float y1 = VertexCurve.Evaluate(x1) * CurveScale;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_125 = __this->___U3CU3E4__this_2;
		NullCheck(L_125);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_126 = L_125->___VertexCurve_5;
		float L_127 = __this->___U3Cx1U3E5__14_16;
		NullCheck(L_126);
		float L_128;
		L_128 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_126, L_127, NULL);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_129 = __this->___U3CU3E4__this_2;
		NullCheck(L_129);
		float L_130 = L_129->___CurveScale_8;
		__this->___U3Cy1U3E5__16_18 = ((float)il2cpp_codegen_multiply(L_128, L_130));
		// Vector3 horizontal = new Vector3(1, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		memset((&L_131), 0, sizeof(L_131));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_131), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___U3ChorizontalU3E5__17_19 = L_131;
		// Vector3 tangent = new Vector3(x1 * (boundsMaxX - boundsMinX) + boundsMinX, y1) - new Vector3(offsetToMidBaseline.x, y0);
		float L_132 = __this->___U3Cx1U3E5__14_16;
		float L_133 = __this->___U3CboundsMaxXU3E5__8_10;
		float L_134 = __this->___U3CboundsMinXU3E5__7_9;
		float L_135 = __this->___U3CboundsMinXU3E5__7_9;
		float L_136 = __this->___U3Cy1U3E5__16_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137;
		memset((&L_137), 0, sizeof(L_137));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_137), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_132, ((float)il2cpp_codegen_subtract(L_133, L_134)))), L_135)), L_136, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_138 = (&__this->___U3CoffsetToMidBaselineU3E5__12_14);
		float L_139 = L_138->___x_2;
		float L_140 = __this->___U3Cy0U3E5__15_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		memset((&L_141), 0, sizeof(L_141));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_141), L_139, L_140, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
		L_142 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_137, L_141, NULL);
		__this->___U3CtangentU3E5__18_20 = L_142;
		// float dot = Mathf.Acos(Vector3.Dot(horizontal, tangent.normalized)) * 57.2957795f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143 = __this->___U3ChorizontalU3E5__17_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_144 = (&__this->___U3CtangentU3E5__18_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
		L_145 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_144, NULL);
		float L_146;
		L_146 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_143, L_145, NULL);
		float L_147;
		L_147 = acosf(L_146);
		__this->___U3CdotU3E5__19_21 = ((float)il2cpp_codegen_multiply(L_147, (57.2957802f)));
		// Vector3 cross = Vector3.Cross(horizontal, tangent);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = __this->___U3ChorizontalU3E5__17_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149 = __this->___U3CtangentU3E5__18_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150;
		L_150 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_148, L_149, NULL);
		__this->___U3CcrossU3E5__20_22 = L_150;
		// float angle = cross.z > 0 ? dot : 360 - dot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_151 = (&__this->___U3CcrossU3E5__20_22);
		float L_152 = L_151->___z_4;
		G_B20_0 = __this;
		if ((((float)L_152) > ((float)(0.0f))))
		{
			G_B21_0 = __this;
			goto IL_04e8;
		}
	}
	{
		float L_153 = __this->___U3CdotU3E5__19_21;
		G_B22_0 = ((float)il2cpp_codegen_subtract((360.0f), L_153));
		G_B22_1 = G_B20_0;
		goto IL_04ee;
	}

IL_04e8:
	{
		float L_154 = __this->___U3CdotU3E5__19_21;
		G_B22_0 = L_154;
		G_B22_1 = G_B21_0;
	}

IL_04ee:
	{
		NullCheck(G_B22_1);
		G_B22_1->___U3CangleU3E5__21_23 = G_B22_0;
		// matrix = Matrix4x4.TRS(new Vector3(0, y0, 0), Quaternion.Euler(0, 0, angle), Vector3.one);
		float L_155 = __this->___U3Cy0U3E5__15_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156;
		memset((&L_156), 0, sizeof(L_156));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_156), (0.0f), L_155, (0.0f), /*hidden argument*/NULL);
		float L_157 = __this->___U3CangleU3E5__21_23;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_158;
		L_158 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), L_157, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159;
		L_159 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_160;
		L_160 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_156, L_158, L_159, NULL);
		__this->___U3CmatrixU3E5__2_4 = L_160;
		// vertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 0]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_161 = __this->___U3CverticesU3E5__1_3;
		int32_t L_162 = __this->___U3CvertexIndexU3E5__10_12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_163 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_164 = __this->___U3CverticesU3E5__1_3;
		int32_t L_165 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_164);
		int32_t L_166 = L_165;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168;
		L_168 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_163, L_167, NULL);
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(L_162), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_168);
		// vertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 1]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_169 = __this->___U3CverticesU3E5__1_3;
		int32_t L_170 = __this->___U3CvertexIndexU3E5__10_12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_171 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_172 = __this->___U3CverticesU3E5__1_3;
		int32_t L_173 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_172);
		int32_t L_174 = ((int32_t)il2cpp_codegen_add(L_173, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_176;
		L_176 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_171, L_175, NULL);
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_170, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_176);
		// vertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 2]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_177 = __this->___U3CverticesU3E5__1_3;
		int32_t L_178 = __this->___U3CvertexIndexU3E5__10_12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_179 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_180 = __this->___U3CverticesU3E5__1_3;
		int32_t L_181 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_180);
		int32_t L_182 = ((int32_t)il2cpp_codegen_add(L_181, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184;
		L_184 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_179, L_183, NULL);
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_178, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_184);
		// vertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 3]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_185 = __this->___U3CverticesU3E5__1_3;
		int32_t L_186 = __this->___U3CvertexIndexU3E5__10_12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_187 = (&__this->___U3CmatrixU3E5__2_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_188 = __this->___U3CverticesU3E5__1_3;
		int32_t L_189 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_188);
		int32_t L_190 = ((int32_t)il2cpp_codegen_add(L_189, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_191 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192;
		L_192 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_187, L_191, NULL);
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_186, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_192);
		// vertices[vertexIndex + 0] += offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_193 = __this->___U3CverticesU3E5__1_3;
		int32_t L_194 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_193);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_195 = ((L_193)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_194)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_196 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_195);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_197 = __this->___U3CoffsetToMidBaselineU3E5__12_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_198;
		L_198 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_196, L_197, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_195 = L_198;
		// vertices[vertexIndex + 1] += offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_199 = __this->___U3CverticesU3E5__1_3;
		int32_t L_200 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_199);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_201 = ((L_199)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_200, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_202 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_201);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_203 = __this->___U3CoffsetToMidBaselineU3E5__12_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_204;
		L_204 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_202, L_203, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_201 = L_204;
		// vertices[vertexIndex + 2] += offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_205 = __this->___U3CverticesU3E5__1_3;
		int32_t L_206 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_205);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_207 = ((L_205)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_206, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_208 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_207);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_209 = __this->___U3CoffsetToMidBaselineU3E5__12_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_210;
		L_210 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_208, L_209, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_207 = L_210;
		// vertices[vertexIndex + 3] += offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_211 = __this->___U3CverticesU3E5__1_3;
		int32_t L_212 = __this->___U3CvertexIndexU3E5__10_12;
		NullCheck(L_211);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_213 = ((L_211)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_212, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_214 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_213);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_215 = __this->___U3CoffsetToMidBaselineU3E5__12_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_216;
		L_216 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_214, L_215, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_213 = L_216;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_217 = (&__this->___U3CoffsetToMidBaselineU3E5__12_14);
		il2cpp_codegen_initobj(L_217, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_218 = (&__this->___U3ChorizontalU3E5__17_19);
		il2cpp_codegen_initobj(L_218, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_219 = (&__this->___U3CtangentU3E5__18_20);
		il2cpp_codegen_initobj(L_219, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_220 = (&__this->___U3CcrossU3E5__20_22);
		il2cpp_codegen_initobj(L_220, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}

IL_06c0:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_221 = __this->___U3CiU3E5__9_11;
		V_5 = L_221;
		int32_t L_222 = V_5;
		__this->___U3CiU3E5__9_11 = ((int32_t)il2cpp_codegen_add(L_222, 1));
	}

IL_06d2:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_223 = __this->___U3CiU3E5__9_11;
		int32_t L_224 = __this->___U3CcharacterCountU3E5__6_8;
		V_6 = (bool)((((int32_t)L_223) < ((int32_t)L_224))? 1 : 0);
		bool L_225 = V_6;
		if (L_225)
		{
			goto IL_01fd;
		}
	}
	{
		// m_TextComponent.UpdateVertexData();
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_226 = __this->___U3CU3E4__this_2;
		NullCheck(L_226);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_227 = L_226->___m_TextComponent_4;
		NullCheck(L_227);
		VirtualActionInvoker0::Invoke(109 /* System.Void TMPro.TMP_Text::UpdateVertexData() */, L_227);
		// yield return new WaitForSeconds(0.025f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_228 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_228);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_228, (0.0250000004f), NULL);
		__this->___U3CU3E2__current_1 = L_228;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_228);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0713:
	{
		__this->___U3CU3E1__state_0 = (-1);
		__this->___U3CtextInfoU3E5__5_7 = (TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextInfoU3E5__5_7), (void*)(TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D*)NULL);
	}

IL_0722:
	{
		// while (true)
		V_7 = (bool)1;
		goto IL_00b5;
	}
}
// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWarpTextU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD80368E9B7E259311C03E406B75161ED6F7618E3 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m07746C332D2D8CE5DEA59873C26F2FAD4B369B42 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m07746C332D2D8CE5DEA59873C26F2FAD4B369B42_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWarpTextU3Ed__8_System_Collections_IEnumerator_get_Current_m71D7F84D9DEF63BEC6B44866515DDCF35B142A19 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
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
// System.Void Polytope.PT_Create_Prefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PT_Create_Prefab__ctor_m4BC00C2AAEBAF92E18DA8988F570E6130FA9C4A0 (PT_Create_Prefab_tDE5FEE6302F4542D740AC4FFCAD12520243ADC3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB57A3E1F4B4ECD4893C8B6080ADC021BEB56E7D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tACE6654758D82222267EA18A347541711FD0AECA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<MeshType> meshes = new List<MeshType>
		// {
		//     new MeshType(TypeOfMesh.hair),
		//     new MeshType(TypeOfMesh.head),
		//     new MeshType(TypeOfMesh.beard),
		//     new MeshType(TypeOfMesh.helmet),
		//     new MeshType(TypeOfMesh.body),
		//     new MeshType(TypeOfMesh.boots),
		//     new MeshType(TypeOfMesh.cape),
		//     new MeshType(TypeOfMesh.gauntlets),
		//     new MeshType(TypeOfMesh.legs),
		//     new MeshType(TypeOfMesh.upper),
		//     new MeshType(TypeOfMesh.lower)
		// };
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_0 = (List_1_tACE6654758D82222267EA18A347541711FD0AECA*)il2cpp_codegen_object_new(List_1_tACE6654758D82222267EA18A347541711FD0AECA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB57A3E1F4B4ECD4893C8B6080ADC021BEB56E7D5(L_0, List_1__ctor_mB57A3E1F4B4ECD4893C8B6080ADC021BEB56E7D5_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___hair_0;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_3 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_3, L_2, NULL);
		NullCheck(L_1);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_1, L_3, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_4 = L_1;
		String_t* L_5 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___head_1;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_6 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_6, L_5, NULL);
		NullCheck(L_4);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_4, L_6, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_7 = L_4;
		String_t* L_8 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___beard_2;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_9 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_9, L_8, NULL);
		NullCheck(L_7);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_7, L_9, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_10 = L_7;
		String_t* L_11 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___helmet_3;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_12 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_12, L_11, NULL);
		NullCheck(L_10);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_10, L_12, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_13 = L_10;
		String_t* L_14 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___body_4;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_15 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_15, L_14, NULL);
		NullCheck(L_13);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_13, L_15, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_16 = L_13;
		String_t* L_17 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___boots_5;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_18 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_18, L_17, NULL);
		NullCheck(L_16);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_16, L_18, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_19 = L_16;
		String_t* L_20 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___cape_6;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_21 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_21, L_20, NULL);
		NullCheck(L_19);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_19, L_21, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_22 = L_19;
		String_t* L_23 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___gauntlets_7;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_24 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_24, L_23, NULL);
		NullCheck(L_22);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_22, L_24, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_25 = L_22;
		String_t* L_26 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___legs_8;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_27 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_27, L_26, NULL);
		NullCheck(L_25);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_25, L_27, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_28 = L_25;
		String_t* L_29 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___upper_9;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_30 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_30, L_29, NULL);
		NullCheck(L_28);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_28, L_30, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		List_1_tACE6654758D82222267EA18A347541711FD0AECA* L_31 = L_28;
		String_t* L_32 = ((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___lower_10;
		MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* L_33 = (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B*)il2cpp_codegen_object_new(MeshType_t96563BCFB81091D4D5419814985D65BF461F753B_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB(L_33, L_32, NULL);
		NullCheck(L_31);
		List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_inline(L_31, L_33, List_1_Add_mCD487EAA87C12A3AC150D7DD4B64E99747956E3F_RuntimeMethod_var);
		__this->___meshes_4 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshes_4), (void*)L_31);
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
void PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_Multicast(PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* currentDelegate = reinterpret_cast<PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_OpenInst(PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_OpenStatic(PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_OpenStaticInvoker(PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_ClosedStaticInvoker(PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133 (PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Polytope.PT_Create_Prefab/PreviewCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviewCallback__ctor_m818F07092CCF2EFFD88D5BACDDC5CEF038C8C5C9 (PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84_Multicast;
}
// System.Void Polytope.PT_Create_Prefab/PreviewCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviewCallback_Invoke_m7C13BABAB6495955F6CFDBB149E0B4E52201AB84 (PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Polytope.PT_Create_Prefab/PreviewCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PreviewCallback_BeginInvoke_m0F0845AC9188A0F1C140DC8878BAD7F5362FD874 (PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void Polytope.PT_Create_Prefab/PreviewCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviewCallback_EndInvoke_m0E62F3F91AB2406CD13D0B8B0507799DA00CB83A (PreviewCallback_tA662846126FD2FE2F67B12F3A196C3421A0A2133* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Polytope.PT_Create_Prefab/TypeOfMesh::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeOfMesh__cctor_mC311A912B26E0AF008EF42EFCA985D766BD9D7ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0509511F12B62E39B9F2DB9A7CCB47930F372A58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BD69EC6C9E191C57664923345F3742272616987);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E7E3FA4BB96AE8277DF1E51F00ADDEF3CC05486);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461EE177B772C8076E2D62C04952F00C85951024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral500FF24EC184A900F27907F13116703701E8CF87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A22C21379358369B84B929BD90C243CCA9D524F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral776837ADD4231179FC45FB2B6EF6516AF53A8491);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA82ABBB488D4C5BD45DD0E5C376FEBC531E5DD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC094FA7066B8AE20EF6FDC7EAFD9B600B668D85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2B90813D807BBAD32101646C912B7440032B3A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string hair = "hair";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___hair_0 = _stringLiteral3E7E3FA4BB96AE8277DF1E51F00ADDEF3CC05486;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___hair_0), (void*)_stringLiteral3E7E3FA4BB96AE8277DF1E51F00ADDEF3CC05486);
		// public static readonly string head = "head";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___head_1 = _stringLiteral461EE177B772C8076E2D62C04952F00C85951024;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___head_1), (void*)_stringLiteral461EE177B772C8076E2D62C04952F00C85951024);
		// public static readonly string beard = "beard";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___beard_2 = _stringLiteralCC094FA7066B8AE20EF6FDC7EAFD9B600B668D85;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___beard_2), (void*)_stringLiteralCC094FA7066B8AE20EF6FDC7EAFD9B600B668D85);
		// public static readonly string helmet = "helmet";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___helmet_3 = _stringLiteralEA2B90813D807BBAD32101646C912B7440032B3A;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___helmet_3), (void*)_stringLiteralEA2B90813D807BBAD32101646C912B7440032B3A);
		// public static readonly string body = "body";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___body_4 = _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___body_4), (void*)_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		// public static readonly string boots = "boots";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___boots_5 = _stringLiteral500FF24EC184A900F27907F13116703701E8CF87;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___boots_5), (void*)_stringLiteral500FF24EC184A900F27907F13116703701E8CF87);
		// public static readonly string cape = "cape";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___cape_6 = _stringLiteralBA82ABBB488D4C5BD45DD0E5C376FEBC531E5DD8;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___cape_6), (void*)_stringLiteralBA82ABBB488D4C5BD45DD0E5C376FEBC531E5DD8);
		// public static readonly string gauntlets = "gauntlets";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___gauntlets_7 = _stringLiteral6A22C21379358369B84B929BD90C243CCA9D524F;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___gauntlets_7), (void*)_stringLiteral6A22C21379358369B84B929BD90C243CCA9D524F);
		// public static readonly string legs = "legs";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___legs_8 = _stringLiteral1BD69EC6C9E191C57664923345F3742272616987;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___legs_8), (void*)_stringLiteral1BD69EC6C9E191C57664923345F3742272616987);
		// public static readonly string upper = "upper";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___upper_9 = _stringLiteral776837ADD4231179FC45FB2B6EF6516AF53A8491;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___upper_9), (void*)_stringLiteral776837ADD4231179FC45FB2B6EF6516AF53A8491);
		// public static readonly string lower = "lower";
		((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___lower_10 = _stringLiteral0509511F12B62E39B9F2DB9A7CCB47930F372A58;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_StaticFields*)il2cpp_codegen_static_fields_for(TypeOfMesh_t2B0EBC03E25F4020D440B8128E4B668D4983A749_il2cpp_TypeInfo_var))->___lower_10), (void*)_stringLiteral0509511F12B62E39B9F2DB9A7CCB47930F372A58);
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
// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_C::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ShaderProperties_C_get_Color_mF80DC4A674CD2C25043CDC0809749D500FF78216 (ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void Polytope.PT_Create_Prefab/ShaderProperties_C::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperties_C__ctor_m37A337F24E144C9391B0C854CDE87B61A1150E40 (ShaderProperties_C_t7F73BBBD9018D4DAFF427CE096FF0BAE23B18B0C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_CI::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ShaderProperties_CI_get_Color_mCAF8F1A44B2D025C88E2C0BAB062185232C863EE (ShaderProperties_CI_t9CBA7C7551B2E3C14417C0507021DE19105126FB* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Sprite Polytope.PT_Create_Prefab/ShaderProperties_CI::get_Image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ShaderProperties_CI_get_Image_m4C68D0E403C40BB13A5C26A953D49D48C1F90EF0 (ShaderProperties_CI_t9CBA7C7551B2E3C14417C0507021DE19105126FB* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		// public Sprite Image { get { return image; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___image_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Sprite Image { get { return image; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void Polytope.PT_Create_Prefab/ShaderProperties_CI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperties_CI__ctor_mA5609F1B808DD21694D15A1FF5464F0691BBA05E (ShaderProperties_CI_t9CBA7C7551B2E3C14417C0507021DE19105126FB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_CS::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ShaderProperties_CS_get_Color_mA027367C4662D0AFCFE6DAD09968D7EF5FDA9B55 (ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CS::get_Smoothness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShaderProperties_CS_get_Smoothness_m4FD02B85CC98159BD092844F949DF8A8473EF6EB (ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Smoothness { get { return smoothness; } }
		float L_0 = __this->___smoothness_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Smoothness { get { return smoothness; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Polytope.PT_Create_Prefab/ShaderProperties_CS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperties_CS__ctor_m496DF1DB1F4221AC61A9A09D5B46B04C352BDC91 (ShaderProperties_CS_t63E21160315B8F1FD2E56DCD0E7BA3FBEACDE82B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.Color Polytope.PT_Create_Prefab/ShaderProperties_CSM::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ShaderProperties_CSM_get_Color_m66BFC7910B517F9F7CACD9BF7A1679613B9023F2 (ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Color Color { get { return color; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CSM::get_Smoothness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShaderProperties_CSM_get_Smoothness_m91A4518BEAC15DA214D80E363EA8E5B38A3F6A31 (ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Smoothness { get { return smoothness; } }
		float L_0 = __this->___smoothness_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Smoothness { get { return smoothness; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Polytope.PT_Create_Prefab/ShaderProperties_CSM::get_Metallic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShaderProperties_CSM_get_Metallic_m5D7F3C6B5ECDFA4106E82E1A180B958CAFA1B98F (ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Metallic { get { return metallic; } }
		float L_0 = __this->___metallic_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Metallic { get { return metallic; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Polytope.PT_Create_Prefab/ShaderProperties_CSM::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperties_CSM__ctor_mA8E43A98AE5E649A0310ECDB1CAA16DE2501C358 (ShaderProperties_CSM_tCDBC79A9A9FA35B259AFF672936A85415A34A079* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Polytope.PT_Create_Prefab/ShaderProperties_CSP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperties_CSP__ctor_mC13DCDF23B54D0AE759C7EE6A44E202839B338F5 (ShaderProperties_CSP_t67F1677582890FAC9C9B0435A9FFB055BEA4013B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Polytope.PT_Create_Prefab/MeshType::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshType__ctor_mFA282554937EBB8A714F914848CF5052B5E7A4FB (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* __this, String_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m63D6348A803E41D37BE9E8CC33C99580918CA666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private int idx = 0;
		__this->___idx_1 = 0;
		// [SerializeField] private List<SkinnedMeshRenderer> list = new List<SkinnedMeshRenderer>();
		List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* L_0 = (List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96*)il2cpp_codegen_object_new(List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m63D6348A803E41D37BE9E8CC33C99580918CA666(L_0, List_1__ctor_m63D6348A803E41D37BE9E8CC33C99580918CA666_RuntimeMethod_var);
		__this->___list_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_2), (void*)L_0);
		// public MeshType(string type)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.type = type;
		String_t* L_1 = ___0_type;
		__this->___type_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_0), (void*)L_1);
		// }
		return;
	}
}
// System.String Polytope.PT_Create_Prefab/MeshType::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeshType_get_Type_m624B34B0627107BCC734E6D8D6466FD80F4ECAD8 (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// public string Type { get { return type; } }
		String_t* L_0 = __this->___type_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string Type { get { return type; } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Polytope.PT_Create_Prefab/MeshType::get_Idx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshType_get_Idx_mB6E031D96497C4DC0B14832FE10A7FE9720F7C29 (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public int Idx { get { return idx; } set { idx = value; } }
		int32_t L_0 = __this->___idx_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public int Idx { get { return idx; } set { idx = value; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Polytope.PT_Create_Prefab/MeshType::set_Idx(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshType_set_Idx_m641BCC77793DB868DB2FD1D00084629911EFA8CA (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Idx { get { return idx; } set { idx = value; } }
		int32_t L_0 = ___0_value;
		__this->___idx_1 = L_0;
		// public int Idx { get { return idx; } set { idx = value; } }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer> Polytope.PT_Create_Prefab/MeshType::get_List()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* MeshType_get_List_mE75D4EC39D14E32BA9297B6582C8F545F334351B (MeshType_t96563BCFB81091D4D5419814985D65BF461F753B* __this, const RuntimeMethod* method) 
{
	List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* V_0 = NULL;
	{
		// public List<SkinnedMeshRenderer> List { get { return list; } }
		List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* L_0 = __this->___list_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public List<SkinnedMeshRenderer> List { get { return list; } }
		List_1_t0CA48CEFC539B4745969780424B9DAFC7FCB1B96* L_1 = V_0;
		return L_1;
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
// System.Void Polytope.PT_Create_Prefab/MaterialType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialType__ctor_m2375349284543DE68EE68084650EC06602DE65A5 (MaterialType_t77459A212D2DDA81CDF7054273EBB9FB27DAC703* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityTemplateProjects.SimpleCameraController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_OnEnable_mD5E060BED4E0C5C0D40AA39C0DA7AE44CAAB217D (SimpleCameraController_t17AF9A37DB0C95045C639A9A74B1D80500082020* __this, const RuntimeMethod* method) 
{
	{
		// m_TargetCameraState.SetFromTransform(transform);
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_0 = __this->___m_TargetCameraState_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		CameraState_SetFromTransform_m3A7302F4586F37F7C78EDA2F0C476BAA22672360(L_0, L_1, NULL);
		// m_InterpolatingCameraState.SetFromTransform(transform);
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_2 = __this->___m_InterpolatingCameraState_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		CameraState_SetFromTransform_m3A7302F4586F37F7C78EDA2F0C476BAA22672360(L_2, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimpleCameraController_GetInputTranslationDirection_m62C42A7966EF22CB95BB847225D2BE2441A3CE0C (SimpleCameraController_t17AF9A37DB0C95045C639A9A74B1D80500082020* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// Vector3 direction = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// if (Input.GetKey(KeyCode.W))
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)119), NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// direction += Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		V_0 = L_4;
	}

IL_0022:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_5;
		L_5 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)115), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// direction += Vector3.back;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_8, NULL);
		V_0 = L_9;
	}

IL_003b:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_10;
		L_10 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)97), NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		// direction += Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_13, NULL);
		V_0 = L_14;
	}

IL_0054:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_15;
		L_15 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)100), NULL);
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		// direction += Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_18, NULL);
		V_0 = L_19;
	}

IL_006f:
	{
		// if (Input.GetKey(KeyCode.Q))
		bool L_20;
		L_20 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)113), NULL);
		V_5 = L_20;
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_008a;
		}
	}
	{
		// direction += Vector3.down;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_23, NULL);
		V_0 = L_24;
	}

IL_008a:
	{
		// if (Input.GetKey(KeyCode.E))
		bool L_25;
		L_25 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)101), NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00a5;
		}
	}
	{
		// direction += Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_28, NULL);
		V_0 = L_29;
	}

IL_00a5:
	{
		// return direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		V_7 = L_30;
		goto IL_00aa;
	}

IL_00aa:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_7;
		return L_31;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_Update_mDB9A4DA6CC1C82A704D3575DC196F44F17E5E0B5 (SimpleCameraController_t17AF9A37DB0C95045C639A9A74B1D80500082020* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	bool V_9 = false;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B9_2 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B10_3 = NULL;
	{
		// if (Input.GetKey(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)27), NULL);
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_0014:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_2;
		L_2 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(1, NULL);
		V_4 = L_2;
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
	}

IL_0029:
	{
		// if (Input.GetMouseButtonUp(1))
		bool L_4;
		L_4 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(1, NULL);
		V_5 = L_4;
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// Cursor.visible = true;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)1, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
	}

IL_0045:
	{
		// if (Input.GetMouseButton(1))
		bool L_6;
		L_6 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		V_6 = L_6;
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_00c8;
		}
	}
	{
		// var mouseMovement = new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y") * (invertY ? 1 : -1));
		float L_8;
		L_8 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_9;
		L_9 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		bool L_10 = __this->___invertY_10;
		G_B8_0 = L_9;
		G_B8_1 = L_8;
		G_B8_2 = (&V_7);
		if (L_10)
		{
			G_B9_0 = L_9;
			G_B9_1 = L_8;
			G_B9_2 = (&V_7);
			goto IL_0073;
		}
	}
	{
		G_B10_0 = (-1);
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_0074;
	}

IL_0073:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_0074:
	{
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline(G_B10_3, G_B10_2, ((float)il2cpp_codegen_multiply(G_B10_1, ((float)G_B10_0))), NULL);
		// var mouseSensitivityFactor = mouseSensitivityCurve.Evaluate(mouseMovement.magnitude);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = __this->___mouseSensitivityCurve_8;
		float L_12;
		L_12 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_7), NULL);
		NullCheck(L_11);
		float L_13;
		L_13 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_11, L_12, NULL);
		V_8 = L_13;
		// m_TargetCameraState.yaw += mouseMovement.x * mouseSensitivityFactor;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_14 = __this->___m_TargetCameraState_4;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_15 = L_14;
		NullCheck(L_15);
		float L_16 = L_15->___yaw_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_7;
		float L_18 = L_17.___x_0;
		float L_19 = V_8;
		NullCheck(L_15);
		L_15->___yaw_0 = ((float)il2cpp_codegen_add(L_16, ((float)il2cpp_codegen_multiply(L_18, L_19))));
		// m_TargetCameraState.pitch += mouseMovement.y * mouseSensitivityFactor;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_20 = __this->___m_TargetCameraState_4;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_21 = L_20;
		NullCheck(L_21);
		float L_22 = L_21->___pitch_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_7;
		float L_24 = L_23.___y_1;
		float L_25 = V_8;
		NullCheck(L_21);
		L_21->___pitch_1 = ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(L_24, L_25))));
	}

IL_00c8:
	{
		// var translation = GetInputTranslationDirection() * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = SimpleCameraController_GetInputTranslationDirection_m62C42A7966EF22CB95BB847225D2BE2441A3CE0C(__this, NULL);
		float L_27;
		L_27 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, L_27, NULL);
		V_0 = L_28;
		// if (Input.GetKey(KeyCode.LeftShift))
		bool L_29;
		L_29 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		V_9 = L_29;
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_00f7;
		}
	}
	{
		// translation *= 10.0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, (10.0f), NULL);
		V_0 = L_32;
	}

IL_00f7:
	{
		// boost += Input.mouseScrollDelta.y * 0.2f;
		float L_33 = __this->___boost_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74(NULL);
		float L_35 = L_34.___y_1;
		__this->___boost_6 = ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(L_35, (0.200000003f)))));
		// translation *= Mathf.Pow(2.0f, boost);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_0;
		float L_37 = __this->___boost_6;
		float L_38;
		L_38 = powf((2.0f), L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_36, L_38, NULL);
		V_0 = L_39;
		// m_TargetCameraState.Translate(translation);
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_40 = __this->___m_TargetCameraState_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_0;
		NullCheck(L_40);
		CameraState_Translate_m561F6D92E99F13444FBAC8D5B1A40762A26219F9(L_40, L_41, NULL);
		// var positionLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / positionLerpTime) * Time.deltaTime);
		float L_42;
		L_42 = logf((0.00999999046f));
		float L_43 = __this->___positionLerpTime_7;
		float L_44;
		L_44 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_45;
		L_45 = expf(((float)il2cpp_codegen_multiply(((float)(L_42/L_43)), L_44)));
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), L_45));
		// var rotationLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / rotationLerpTime) * Time.deltaTime);
		float L_46;
		L_46 = logf((0.00999999046f));
		float L_47 = __this->___rotationLerpTime_9;
		float L_48;
		L_48 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_49;
		L_49 = expf(((float)il2cpp_codegen_multiply(((float)(L_46/L_47)), L_48)));
		V_2 = ((float)il2cpp_codegen_subtract((1.0f), L_49));
		// m_InterpolatingCameraState.LerpTowards(m_TargetCameraState, positionLerpPct, rotationLerpPct);
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_50 = __this->___m_InterpolatingCameraState_5;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_51 = __this->___m_TargetCameraState_4;
		float L_52 = V_1;
		float L_53 = V_2;
		NullCheck(L_50);
		CameraState_LerpTowards_mFDC0E1CA19B6791CDB6EE8AC262944DC1143FCF9(L_50, L_51, L_52, L_53, NULL);
		// m_InterpolatingCameraState.UpdateTransform(transform);
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_54 = __this->___m_InterpolatingCameraState_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_54);
		CameraState_UpdateTransform_m03320D760E52E809272776B58C7E741B2EE1D73E(L_54, L_55, NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController__ctor_m224B705F449A3DA440346B08A6237479A91D7136 (SimpleCameraController_t17AF9A37DB0C95045C639A9A74B1D80500082020* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraState m_TargetCameraState = new CameraState();
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_0 = (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD*)il2cpp_codegen_object_new(CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CameraState__ctor_m33568E59E39C953BDE6CD28D35A34BE52AE25504(L_0, NULL);
		__this->___m_TargetCameraState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TargetCameraState_4), (void*)L_0);
		// CameraState m_InterpolatingCameraState = new CameraState();
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_1 = (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD*)il2cpp_codegen_object_new(CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CameraState__ctor_m33568E59E39C953BDE6CD28D35A34BE52AE25504(L_1, NULL);
		__this->___m_InterpolatingCameraState_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InterpolatingCameraState_5), (void*)L_1);
		// public float boost = 3.5f;
		__this->___boost_6 = (3.5f);
		// public float positionLerpTime = 0.2f;
		__this->___positionLerpTime_7 = (0.200000003f);
		// public AnimationCurve mouseSensitivityCurve = new AnimationCurve(new Keyframe(0f, 0.5f, 0f, 5f), new Keyframe(1f, 2.5f, 0f, 0f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_2 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_2;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_4), (0.0f), (0.5f), (0.0f), (5.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_6), (1.0f), (2.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_7, L_5, NULL);
		__this->___mouseSensitivityCurve_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mouseSensitivityCurve_8), (void*)L_7);
		// public float rotationLerpTime = 0.01f;
		__this->___rotationLerpTime_9 = (0.00999999978f);
		// public bool invertY = false;
		__this->___invertY_10 = (bool)0;
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
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_m3A7302F4586F37F7C78EDA2F0C476BAA22672360 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) 
{
	{
		// pitch = t.eulerAngles.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_t;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___pitch_1 = L_2;
		// yaw = t.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_t;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		float L_5 = L_4.___y_3;
		__this->___yaw_0 = L_5;
		// roll = t.eulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___0_t;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_6, NULL);
		float L_8 = L_7.___z_4;
		__this->___roll_2 = L_8;
		// x = t.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___0_t;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___x_2;
		__this->___x_3 = L_11;
		// y = t.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___0_t;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___y_3;
		__this->___y_4 = L_14;
		// z = t.position.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___0_t;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		__this->___z_5 = L_17;
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m561F6D92E99F13444FBAC8D5B1A40762A26219F9 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotatedTranslation = Quaternion.Euler(pitch, yaw, roll) * translation;
		float L_0 = __this->___pitch_1;
		float L_1 = __this->___yaw_0;
		float L_2 = __this->___roll_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_0, L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_translation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_3, L_4, NULL);
		V_0 = L_5;
		// x += rotatedTranslation.x;
		float L_6 = __this->___x_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___x_2;
		__this->___x_3 = ((float)il2cpp_codegen_add(L_6, L_8));
		// y += rotatedTranslation.y;
		float L_9 = __this->___y_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___y_3;
		__this->___y_4 = ((float)il2cpp_codegen_add(L_9, L_11));
		// z += rotatedTranslation.z;
		float L_12 = __this->___z_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___z_4;
		__this->___z_5 = ((float)il2cpp_codegen_add(L_12, L_14));
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_mFDC0E1CA19B6791CDB6EE8AC262944DC1143FCF9 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* ___0_target, float ___1_positionLerpPct, float ___2_rotationLerpPct, const RuntimeMethod* method) 
{
	{
		// yaw = Mathf.Lerp(yaw, target.yaw, rotationLerpPct);
		float L_0 = __this->___yaw_0;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_1 = ___0_target;
		NullCheck(L_1);
		float L_2 = L_1->___yaw_0;
		float L_3 = ___2_rotationLerpPct;
		float L_4;
		L_4 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_0, L_2, L_3, NULL);
		__this->___yaw_0 = L_4;
		// pitch = Mathf.Lerp(pitch, target.pitch, rotationLerpPct);
		float L_5 = __this->___pitch_1;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_6 = ___0_target;
		NullCheck(L_6);
		float L_7 = L_6->___pitch_1;
		float L_8 = ___2_rotationLerpPct;
		float L_9;
		L_9 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_5, L_7, L_8, NULL);
		__this->___pitch_1 = L_9;
		// roll = Mathf.Lerp(roll, target.roll, rotationLerpPct);
		float L_10 = __this->___roll_2;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_11 = ___0_target;
		NullCheck(L_11);
		float L_12 = L_11->___roll_2;
		float L_13 = ___2_rotationLerpPct;
		float L_14;
		L_14 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_10, L_12, L_13, NULL);
		__this->___roll_2 = L_14;
		// x = Mathf.Lerp(x, target.x, positionLerpPct);
		float L_15 = __this->___x_3;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_16 = ___0_target;
		NullCheck(L_16);
		float L_17 = L_16->___x_3;
		float L_18 = ___1_positionLerpPct;
		float L_19;
		L_19 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_15, L_17, L_18, NULL);
		__this->___x_3 = L_19;
		// y = Mathf.Lerp(y, target.y, positionLerpPct);
		float L_20 = __this->___y_4;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_21 = ___0_target;
		NullCheck(L_21);
		float L_22 = L_21->___y_4;
		float L_23 = ___1_positionLerpPct;
		float L_24;
		L_24 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_20, L_22, L_23, NULL);
		__this->___y_4 = L_24;
		// z = Mathf.Lerp(z, target.z, positionLerpPct);
		float L_25 = __this->___z_5;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_26 = ___0_target;
		NullCheck(L_26);
		float L_27 = L_26->___z_5;
		float L_28 = ___1_positionLerpPct;
		float L_29;
		L_29 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_25, L_27, L_28, NULL);
		__this->___z_5 = L_29;
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_m03320D760E52E809272776B58C7E741B2EE1D73E (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) 
{
	{
		// t.eulerAngles = new Vector3(pitch, yaw, roll);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_t;
		float L_1 = __this->___pitch_1;
		float L_2 = __this->___yaw_0;
		float L_3 = __this->___roll_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_4, NULL);
		// t.position = new Vector3(x, y, z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_t;
		float L_6 = __this->___x_3;
		float L_7 = __this->___y_4;
		float L_8 = __this->___z_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m33568E59E39C953BDE6CD28D35A34BE52AE25504 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void CartoonHeroes.SetCharacter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_Start_m1CE09ADBC8A5636E8857F1896FFC498157007C38 (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CartoonHeroes.SetCharacter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_Update_mEF583F736385B7377148140FBACC34FB59A56065 (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// UnityEngine.GameObject CartoonHeroes.SetCharacter::AddItem(CartoonHeroes.SetCharacter/ItemGroup,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SetCharacter_AddItem_mC86F6593FC6DB6067EC53E753868DB4CE4D50E5D (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* ___0_itemGroup, int32_t ___1_itemSlot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F);
		s_Il2CppMethodInitialized = true;
	}
	Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// Item item = itemGroup.items[itemSlot];
		ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* L_0 = ___0_itemGroup;
		NullCheck(L_0);
		ItemU5BU5D_tE88E39DBBFE3C18F83572B13B26BCA8B81493166* L_1 = L_0->___items_1;
		int32_t L_2 = ___1_itemSlot;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// GameObject itemInstance = GameObject.Instantiate(item.prefab);
		Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1* L_5 = V_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___prefab_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_1 = L_7;
		// itemInstance.name = itemInstance.name.Substring(0, itemInstance.name.Length - "(Clone)".Length);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		NullCheck(_stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F, NULL);
		NullCheck(L_10);
		String_t* L_15;
		L_15 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_10, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		NullCheck(L_8);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_8, L_15, NULL);
		// RemoveAnimator(itemInstance);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_1;
		SetCharacter_RemoveAnimator_mCC2A6A1C17B3F47E4C9377FFBC3AC6BCE5BF131B(__this, L_16, NULL);
		// ParentObjectAndBones(itemInstance);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_1;
		SetCharacter_ParentObjectAndBones_m518EF36F95448CE5EDE0ACC95B373B48A63EE95F(__this, L_17, NULL);
		// SetGraySkeletonVisibility(!VisibleItems());
		bool L_18;
		L_18 = SetCharacter_VisibleItems_mD67AE10F9BF97EA1BDD23235D5A094B766888B8C(__this, NULL);
		SetCharacter_SetGraySkeletonVisibility_m41564C723B7BE370E77D3101E451CF94309AD42A(__this, (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0), NULL);
		// return itemInstance;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_1;
		V_2 = L_19;
		goto IL_0063;
	}

IL_0063:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
		return L_20;
	}
}
// System.Boolean CartoonHeroes.SetCharacter::VisibleItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetCharacter_VisibleItems_mD67AE10F9BF97EA1BDD23235D5A094B766888B8C (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// for(int i = 0; i < itemGroups.Length; i++)
		V_0 = 0;
		goto IL_0045;
	}

IL_0005:
	{
		// for(int n = 0; n < itemGroups[i].items.Length; n++)
		V_1 = 0;
		goto IL_0028;
	}

IL_000a:
	{
		// if(HasItem(itemGroups[i], n))
		ItemGroupU5BU5D_t33B38B410FC63D24B6E6DBF06885A9AB2448F33C* L_0 = __this->___itemGroups_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = V_1;
		bool L_5;
		L_5 = SetCharacter_HasItem_mDD2AC0F9F270E6F2ED8E12DA702CFA8A3FA9E8AC(__this, L_3, L_4, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_005a;
	}

IL_0023:
	{
		// for(int n = 0; n < itemGroups[i].items.Length; n++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0028:
	{
		// for(int n = 0; n < itemGroups[i].items.Length; n++)
		int32_t L_8 = V_1;
		ItemGroupU5BU5D_t33B38B410FC63D24B6E6DBF06885A9AB2448F33C* L_9 = __this->___itemGroups_5;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		ItemU5BU5D_tE88E39DBBFE3C18F83572B13B26BCA8B81493166* L_13 = L_12->___items_1;
		NullCheck(L_13);
		V_4 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_000a;
		}
	}
	{
		// for(int i = 0; i < itemGroups.Length; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0045:
	{
		// for(int i = 0; i < itemGroups.Length; i++)
		int32_t L_16 = V_0;
		ItemGroupU5BU5D_t33B38B410FC63D24B6E6DBF06885A9AB2448F33C* L_17 = __this->___itemGroups_5;
		NullCheck(L_17);
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_005a;
	}

IL_005a:
	{
		// }
		bool L_19 = V_3;
		return L_19;
	}
}
// System.Void CartoonHeroes.SetCharacter::SetGraySkeletonVisibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_SetGraySkeletonVisibility_m41564C723B7BE370E77D3101E451CF94309AD42A (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, bool ___0_set, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA28DCFB7E0DE73B401C62DCA6BF38A1B7D944C1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (!set)
		bool L_0 = ___0_set;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0060;
		}
	}
	{
		// Transform[] allCharacterChildren = GetAllCharacterChildren();
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2;
		L_2 = SetCharacter_GetAllCharacterChildren_m5FFE97A7F91E192BA6E9894756E3BF321FCD839C(__this, NULL);
		V_1 = L_2;
		// for (int i = 0; i < allCharacterChildren.Length; i++)
		V_2 = 0;
		goto IL_0051;
	}

IL_0015:
	{
		// if (allCharacterChildren[i].name.Contains(hideString))
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_7, _stringLiteralEA28DCFB7E0DE73B401C62DCA6BF38A1B7D944C1, NULL);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		// disabledGraySkeleton = allCharacterChildren[i].gameObject;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		__this->___disabledGraySkeleton_8 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___disabledGraySkeleton_8), (void*)L_14);
		// allCharacterChildren[i].gameObject.SetActive(false);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
		// break;
		goto IL_005d;
	}

IL_004c:
	{
		// for (int i = 0; i < allCharacterChildren.Length; i++)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0051:
	{
		// for (int i = 0; i < allCharacterChildren.Length; i++)
		int32_t L_21 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_22 = V_1;
		NullCheck(L_22);
		V_4 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0);
		bool L_23 = V_4;
		if (L_23)
		{
			goto IL_0015;
		}
	}

IL_005d:
	{
		goto IL_0083;
	}

IL_0060:
	{
		// if (disabledGraySkeleton != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___disabledGraySkeleton_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_0082;
		}
	}
	{
		// disabledGraySkeleton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___disabledGraySkeleton_8;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)1, NULL);
	}

IL_0082:
	{
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Boolean CartoonHeroes.SetCharacter::HasItem(CartoonHeroes.SetCharacter/ItemGroup,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetCharacter_HasItem_mDD2AC0F9F270E6F2ED8E12DA702CFA8A3FA9E8AC (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* ___0_itemGroup, int32_t ___1_itemSlot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326807296C186F707668947A270EF59FBA873FFC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (itemGroup.items[itemSlot] != null && itemGroup.items[itemSlot].prefab != null)
		ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* L_0 = ___0_itemGroup;
		NullCheck(L_0);
		ItemU5BU5D_tE88E39DBBFE3C18F83572B13B26BCA8B81493166* L_1 = L_0->___items_1;
		int32_t L_2 = ___1_itemSlot;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* L_5 = ___0_itemGroup;
		NullCheck(L_5);
		ItemU5BU5D_tE88E39DBBFE3C18F83572B13B26BCA8B81493166* L_6 = L_5->___items_1;
		int32_t L_7 = ___1_itemSlot;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___prefab_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_11));
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_0 = (bool)G_B3_0;
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0097;
		}
	}
	{
		// Transform root = GetRoot();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = SetCharacter_GetRoot_m0DAFBDF299BF735F5CE0B6710AB32F9957DFC1C8(__this, NULL);
		V_1 = L_13;
		// Transform prefab = itemGroup.items[itemSlot].prefab.transform;
		ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* L_14 = ___0_itemGroup;
		NullCheck(L_14);
		ItemU5BU5D_tE88E39DBBFE3C18F83572B13B26BCA8B81493166* L_15 = L_14->___items_1;
		int32_t L_16 = ___1_itemSlot;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = L_18->___prefab_0;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		V_2 = L_20;
		// for (int i = 0; i < root.childCount; i++)
		V_3 = 0;
		goto IL_0087;
	}

IL_0044:
	{
		// Transform child = root.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_21, L_22, NULL);
		V_4 = L_23;
		// if (child.name.Contains(prefab.name) && child.name.Contains(namePrefix))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_4;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_2;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_26, NULL);
		NullCheck(L_25);
		bool L_28;
		L_28 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_25, L_27, NULL);
		if (!L_28)
		{
			goto IL_0075;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_4;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_29, NULL);
		NullCheck(L_30);
		bool L_31;
		L_31 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_30, _stringLiteral326807296C186F707668947A270EF59FBA873FFC, NULL);
		G_B8_0 = ((int32_t)(L_31));
		goto IL_0076;
	}

IL_0075:
	{
		G_B8_0 = 0;
	}

IL_0076:
	{
		V_5 = (bool)G_B8_0;
		bool L_32 = V_5;
		if (!L_32)
		{
			goto IL_0082;
		}
	}
	{
		// return true;
		V_6 = (bool)1;
		goto IL_009c;
	}

IL_0082:
	{
		// for (int i = 0; i < root.childCount; i++)
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0087:
	{
		// for (int i = 0; i < root.childCount; i++)
		int32_t L_34 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_35, NULL);
		V_7 = (bool)((((int32_t)L_34) < ((int32_t)L_36))? 1 : 0);
		bool L_37 = V_7;
		if (L_37)
		{
			goto IL_0044;
		}
	}
	{
	}

IL_0097:
	{
		// return false;
		V_6 = (bool)0;
		goto IL_009c;
	}

IL_009c:
	{
		// }
		bool L_38 = V_6;
		return L_38;
	}
}
// System.Void CartoonHeroes.SetCharacter::ParentObjectAndBones(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_ParentObjectAndBones_m518EF36F95448CE5EDE0ACC95B373B48A63EE95F (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_itemInstance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9B15E800128549D648CD61F87228399E16EB934A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326807296C186F707668947A270EF59FBA873FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_0 = NULL;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	{
		// Transform[] allCharacterChildren = GetAllCharacterChildren();
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0;
		L_0 = SetCharacter_GetAllCharacterChildren_m5FFE97A7F91E192BA6E9894756E3BF321FCD839C(__this, NULL);
		V_0 = L_0;
		// Transform[] allItemChildren = itemInstance.GetComponentsInChildren<Transform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_itemInstance;
		NullCheck(L_1);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2;
		L_2 = GameObject_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9B15E800128549D648CD61F87228399E16EB934A(L_1, GameObject_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9B15E800128549D648CD61F87228399E16EB934A_RuntimeMethod_var);
		V_1 = L_2;
		// itemInstance.transform.position = transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_itemInstance;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_6, NULL);
		// itemInstance.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___0_itemInstance;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_8, L_9, NULL);
		// string[] allItemChildren_NewNames= new string[allItemChildren.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = V_1;
		NullCheck(L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		V_2 = L_11;
		// for(int i = 0; i < allItemChildren.Length; i++)
		V_3 = 0;
		goto IL_0116;
	}

IL_0048:
	{
		// for (int n = 0; n < allCharacterChildren.Length; n++)
		V_4 = 0;
		goto IL_008f;
	}

IL_004e:
	{
		// if(allItemChildren[i].name == allCharacterChildren[n].name)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = V_1;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_15, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_20, NULL);
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, L_21, NULL);
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0088;
		}
	}
	{
		// MatchTransform(allItemChildren[i], allCharacterChildren[n]);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_24 = V_1;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_28 = V_0;
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		SetCharacter_MatchTransform_m39BA0FAABEA71F13C632F691667EC36E7AC7A038(__this, L_27, L_31, NULL);
		// allItemChildren[i].parent = allCharacterChildren[n];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_32 = V_1;
		int32_t L_33 = V_3;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_36 = V_0;
		int32_t L_37 = V_4;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_35);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_35, L_39, NULL);
	}

IL_0088:
	{
		// for (int n = 0; n < allCharacterChildren.Length; n++)
		int32_t L_40 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_008f:
	{
		// for (int n = 0; n < allCharacterChildren.Length; n++)
		int32_t L_41 = V_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_42 = V_0;
		NullCheck(L_42);
		V_6 = (bool)((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))? 1 : 0);
		bool L_43 = V_6;
		if (L_43)
		{
			goto IL_004e;
		}
	}
	{
		// allItemChildren_NewNames[i] = allItemChildren[i].name;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = V_2;
		int32_t L_45 = V_3;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_46 = V_1;
		int32_t L_47 = V_3;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		String_t* L_50;
		L_50 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_49, NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_50);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (String_t*)L_50);
		// if (!allItemChildren[i].name.Contains(namePrefix))
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_51 = V_1;
		int32_t L_52 = V_3;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		String_t* L_55;
		L_55 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_54, NULL);
		NullCheck(L_55);
		bool L_56;
		L_56 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_55, _stringLiteral326807296C186F707668947A270EF59FBA873FFC, NULL);
		V_7 = (bool)((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
		bool L_57 = V_7;
		if (!L_57)
		{
			goto IL_00d9;
		}
	}
	{
		// allItemChildren_NewNames[i] = namePrefix + allItemChildren[i].name;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = V_2;
		int32_t L_59 = V_3;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_60 = V_1;
		int32_t L_61 = V_3;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		String_t* L_64;
		L_64 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_63, NULL);
		String_t* L_65;
		L_65 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral326807296C186F707668947A270EF59FBA873FFC, L_64, NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_65);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (String_t*)L_65);
	}

IL_00d9:
	{
		// if (!allItemChildren[i].name.Contains(itemInstance.name))
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_66 = V_1;
		int32_t L_67 = V_3;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		String_t* L_70;
		L_70 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_69, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = ___0_itemInstance;
		NullCheck(L_71);
		String_t* L_72;
		L_72 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_71, NULL);
		NullCheck(L_70);
		bool L_73;
		L_73 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_70, L_72, NULL);
		V_8 = (bool)((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_8;
		if (!L_74)
		{
			goto IL_0111;
		}
	}
	{
		// allItemChildren_NewNames[i] += "_" + itemInstance.name;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = V_2;
		int32_t L_76 = V_3;
		NullCheck(L_75);
		String_t** L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)));
		String_t* L_78 = *((String_t**)L_77);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79 = ___0_itemInstance;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_79, NULL);
		String_t* L_81;
		L_81 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_78, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_80, NULL);
		*((RuntimeObject**)L_77) = (RuntimeObject*)L_81;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_77, (void*)(RuntimeObject*)L_81);
	}

IL_0111:
	{
		// for(int i = 0; i < allItemChildren.Length; i++)
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_0116:
	{
		// for(int i = 0; i < allItemChildren.Length; i++)
		int32_t L_83 = V_3;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_84 = V_1;
		NullCheck(L_84);
		V_9 = (bool)((((int32_t)L_83) < ((int32_t)((int32_t)(((RuntimeArray*)L_84)->max_length))))? 1 : 0);
		bool L_85 = V_9;
		if (L_85)
		{
			goto IL_0048;
		}
	}
	{
		// for(int i = 0; i < allItemChildren.Length; i++)
		V_10 = 0;
		goto IL_0140;
	}

IL_012a:
	{
		// allItemChildren[i].name = allItemChildren_NewNames[i];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_86 = V_1;
		int32_t L_87 = V_10;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = V_2;
		int32_t L_91 = V_10;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		String_t* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_89);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_89, L_93, NULL);
		// for(int i = 0; i < allItemChildren.Length; i++)
		int32_t L_94 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_0140:
	{
		// for(int i = 0; i < allItemChildren.Length; i++)
		int32_t L_95 = V_10;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_96 = V_1;
		NullCheck(L_96);
		V_11 = (bool)((((int32_t)L_95) < ((int32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))))? 1 : 0);
		bool L_97 = V_11;
		if (L_97)
		{
			goto IL_012a;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Transform CartoonHeroes.SetCharacter::GetRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SetCharacter_GetRoot_m0DAFBDF299BF735F5CE0B6710AB32F9957DFC1C8 (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	bool V_1 = false;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	{
		// if (characterRoot == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___characterRoot_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// root = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		V_0 = L_3;
		goto IL_0025;
	}

IL_001c:
	{
		// root = characterRoot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___characterRoot_4;
		V_0 = L_4;
	}

IL_0025:
	{
		// return root;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		V_2 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_2;
		return L_6;
	}
}
// UnityEngine.Transform[] CartoonHeroes.SetCharacter::GetAllCharacterChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* SetCharacter_GetAllCharacterChildren_m5FFE97A7F91E192BA6E9894756E3BF321FCD839C (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_1 = NULL;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_2 = NULL;
	{
		// Transform root = GetRoot();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = SetCharacter_GetRoot_m0DAFBDF299BF735F5CE0B6710AB32F9957DFC1C8(__this, NULL);
		V_0 = L_0;
		// Transform[] allCharacterChildren = root.GetComponentsInChildren<Transform>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		NullCheck(L_1);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2;
		L_2 = Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28(L_1, Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28_RuntimeMethod_var);
		V_1 = L_2;
		// return allCharacterChildren;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = V_1;
		V_2 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = V_2;
		return L_4;
	}
}
// System.Boolean CartoonHeroes.SetCharacter::BelongsToItem(UnityEngine.Transform,CartoonHeroes.SetCharacter/ItemGroup,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetCharacter_BelongsToItem_m6CA70F64F1D20D7DFF4B6B0290C0720230C09234 (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_obj, ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* ___1_itemGroup, int32_t ___2_itemSlot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326807296C186F707668947A270EF59FBA873FFC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if(obj == null || itemGroup.items[itemSlot].prefab == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* L_2 = ___1_itemGroup;
		NullCheck(L_2);
		ItemU5BU5D_tE88E39DBBFE3C18F83572B13B26BCA8B81493166* L_3 = L_2->___items_1;
		int32_t L_4 = ___2_itemSlot;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___prefab_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_8));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0029;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_005e;
	}

IL_0029:
	{
		// return (obj.name.Contains(namePrefix) && obj.name.Contains(itemGroup.items[itemSlot].prefab.name));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___0_obj;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_11, _stringLiteral326807296C186F707668947A270EF59FBA873FFC, NULL);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___0_obj;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* L_15 = ___1_itemGroup;
		NullCheck(L_15);
		ItemU5BU5D_tE88E39DBBFE3C18F83572B13B26BCA8B81493166* L_16 = L_15->___items_1;
		int32_t L_17 = ___2_itemSlot;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___prefab_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_20, NULL);
		NullCheck(L_14);
		bool L_22;
		L_22 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_14, L_21, NULL);
		G_B8_0 = ((int32_t)(L_22));
		goto IL_005b;
	}

IL_005a:
	{
		G_B8_0 = 0;
	}

IL_005b:
	{
		V_1 = (bool)G_B8_0;
		goto IL_005e;
	}

IL_005e:
	{
		// }
		bool L_23 = V_1;
		return L_23;
	}
}
// System.Void CartoonHeroes.SetCharacter::RemoveAnimator(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_RemoveAnimator_mCC2A6A1C17B3F47E4C9377FFBC3AC6BCE5BF131B (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_0 = NULL;
	bool V_1 = false;
	{
		// Animator animator = item.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_item;
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		V_0 = L_1;
		// if(animator != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// DestroyImmediate(animator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void CartoonHeroes.SetCharacter::MatchTransform(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter_MatchTransform_m39BA0FAABEA71F13C632F691667EC36E7AC7A038 (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_obj, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_target, const RuntimeMethod* method) 
{
	{
		// obj.position = target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_obj;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_target;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// obj.rotation = target.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_obj;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___1_target;
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> CartoonHeroes.SetCharacter::GetRemoveObjList(CartoonHeroes.SetCharacter/ItemGroup,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* SetCharacter_GetRemoveObjList_m25D27778D65EF4A2689F3B643F45A15A1175DA2D (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* ___0_itemGroup, int32_t ___1_itemSlot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_0 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_5 = NULL;
	{
		// Transform[] allChildren = GetAllCharacterChildren();
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0;
		L_0 = SetCharacter_GetAllCharacterChildren_m5FFE97A7F91E192BA6E9894756E3BF321FCD839C(__this, NULL);
		V_0 = L_0;
		// List<GameObject> removeList = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_1 = L_1;
		// for (int i = 0; i < allChildren.Length; i++)
		V_2 = 0;
		goto IL_0038;
	}

IL_0012:
	{
		// if(BelongsToItem(allChildren[i], itemGroup, itemSlot))
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* L_6 = ___0_itemGroup;
		int32_t L_7 = ___1_itemSlot;
		bool L_8;
		L_8 = SetCharacter_BelongsToItem_m6CA70F64F1D20D7DFF4B6B0290C0720230C09234(__this, L_5, L_6, L_7, NULL);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		// removeList.Add(allChildren[i].gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_10);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_10, L_15, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
	}

IL_0033:
	{
		// for (int i = 0; i < allChildren.Length; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < allChildren.Length; i++)
		int32_t L_17 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_18 = V_0;
		NullCheck(L_18);
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))? 1 : 0);
		bool L_19 = V_4;
		if (L_19)
		{
			goto IL_0012;
		}
	}
	{
		// SetGraySkeletonVisibility(!VisibleItems());
		bool L_20;
		L_20 = SetCharacter_VisibleItems_mD67AE10F9BF97EA1BDD23235D5A094B766888B8C(__this, NULL);
		SetCharacter_SetGraySkeletonVisibility_m41564C723B7BE370E77D3101E451CF94309AD42A(__this, (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0), NULL);
		// return removeList;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_21 = V_1;
		V_5 = L_21;
		goto IL_0059;
	}

IL_0059:
	{
		// }
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = V_5;
		return L_22;
	}
}
// System.Void CartoonHeroes.SetCharacter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetCharacter__ctor_mC875FCEB58E78866CFE5383197638CF92877469A (SetCharacter_tA2E3D95CD59DEB3230C40B7BACC69CDA7615F2A2* __this, const RuntimeMethod* method) 
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
// System.Void CartoonHeroes.SetCharacter/ItemGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemGroup__ctor_m01DE32972E771B9ABCC101B71178EA7BFF39580F (ItemGroup_tB60925FF76DB51F801636139D4B8D8697E481919* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void CartoonHeroes.SetCharacter/Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_mEE21AA7022E3EC3489F809AE69E2C4FF59920009 (Item_t10ECD23F1334CDCBFEF3061D6DC639A177696AC1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_c;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_c;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___0_r;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_PingPong_mB1D6A10F386CE1EEA99DB69486DDA6DA531D799D_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___1_length;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(L_0, ((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		___0_t = L_2;
		float L_3 = ___1_length;
		float L_4 = ___0_t;
		float L_5 = ___1_length;
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract(L_4, L_5)));
		V_0 = ((float)il2cpp_codegen_subtract(L_3, L_6));
		goto IL_001d;
	}

IL_001d:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline (float ___0_from, float ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		float L_2 = ___2_t;
		float L_3 = ___2_t;
		float L_4 = ___2_t;
		float L_5 = ___2_t;
		float L_6 = ___2_t;
		___2_t = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_2)), L_3)), L_4)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_5)), L_6))));
		float L_7 = ___1_to;
		float L_8 = ___2_t;
		float L_9 = ___0_from;
		float L_10 = ___2_t;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_9, ((float)il2cpp_codegen_subtract((1.0f), L_10))))));
		goto IL_0030;
	}

IL_0030:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_lhs;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_rhs;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_lhs;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_rhs;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_lhs;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___1_rhs;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
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
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		return;
	}

IL_0034:
	{
		float L_9 = ___0_item;
		((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		NullCheck(L_4);
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___1_length;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___1_length;
		float L_5 = ___1_length;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
