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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4*, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>
struct ARTrackable_2_tFF6F0375EE13CB57F97ED570DAFE3435720C68C8;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<Qualcomm.Snapdragon.Spaces.SpatialAnchor,System.Boolean>
struct Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Qualcomm.Snapdragon.Spaces.SpatialAnchor>
struct IEnumerable_1_t96D4C1DE463BE1C11AAA08560B0DDC4A0F8F755B;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.ComponentVersion>
struct List_1_tB6E5C0EE0D90F5DBD45E6CD7EAE2AEF029927ECD;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchor>
struct List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2;
// System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem>
struct List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct List_1_t160F335B05E7692BA4234AFD249D62316B990635;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData>
struct Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280;
// System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData>
struct Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemWithProvider_3_t9B46676D7BE943A96773ABEE0697A7F35EA89C3B;
// System.Tuple`2<UnityEngine.Pose,System.Int32Enum>
struct Tuple_2_t64E8A40E5B0C8963DDD7A1A22CF280BB9AFAE3C9;
// System.Tuple`2<UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState>
struct Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature[]
struct OpenXRFeatureU5BU5D_t1E8B328877C0D98F92ADE93D6F8C6536F92C3F3F;
// Qualcomm.Snapdragon.Spaces.SpatialAnchor[]
struct SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem[]
struct SpatialAnchorsSubsystemU5BU5D_tAD4057CF23B6543868EC528799F01A30D66F3A1D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.XR.ARSubsystems.TrackableId[]
struct TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.XR.ARSubsystems.XRAnchor[]
struct XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor[]
struct XRAnchorSubsystemDescriptorU5BU5D_t622C4B4F37D8BD43713D648D3300BF4299237567;
// UnityEngine.XR.XRMeshSubsystemDescriptor[]
struct XRMeshSubsystemDescriptorU5BU5D_t3B992422B03C712E6A939E14D9CF3F3799D62E72;
// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData[]
struct LoadAnchorDataU5BU5D_t1A49C7C496260C906E4CF7CC554448A2CE82557A;
// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData[]
struct SaveAnchorDataU5BU5D_tF7E758EAE93166DF4D4DDDD48130E964D26F09FF;
// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature
struct BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143;
// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore
struct SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3;
// Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature
struct SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15;
// Qualcomm.Snapdragon.Spaces.SpatialAnchor
struct SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature
struct SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem
struct SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577;
// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature
struct SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor
struct XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30;
// Qualcomm.Snapdragon.Spaces.XrSceneCreateInfoMSFT
struct XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99;
// Qualcomm.Snapdragon.Spaces.XrSceneObserverCreateInfoMSFT
struct XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB;
// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT
struct XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D;
// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT
struct XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824;
// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT
struct XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80;
// Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature/xrGetComponentVersionsQCOMDelegate
struct xrGetComponentVersionsQCOMDelegate_tEA756FCE3D1860D267015AE96BC0A350AE0CF686;
// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData
struct LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B;
// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData
struct SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A;
// Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature/GetInstanceProcAddrDelegate
struct GetInstanceProcAddrDelegate_t389B857CBE93C73021F92B74FABFE7E8A1A4A468;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/ClearSpatialAnchorStoreMSFTDelegate
struct ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorFromPersistedNameMSFTDelegate
struct CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorMSFTDelegate
struct CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorSpaceMSFTDelegate
struct CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorStoreConnectionMSFTDelegate
struct CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorMSFTDelegate
struct DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorStoreConnectionMSFTDelegate
struct DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/EnumeratePersistedSpatialAnchorNamesMSFTDelegate
struct EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/LocateSpaceDelegate
struct LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/PersistSpatialAnchorMSFTDelegate
struct PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/UnpersistSpatialAnchorMSFTDelegate
struct UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider
struct SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1;
// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/ComputeNewSceneMSFTDelegate
struct ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572;
// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneMSFTDelegate
struct CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237;
// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneObserverMSFTDelegate
struct CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D;
// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComponentsMSFTDelegate
struct GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C;
// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComputeStateMSFTDelegate
struct GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6;
// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/LocateSceneComponentsMSFTDelegate
struct LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C;
// Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t4A75B306CBEEB639FDB932B596C5E96BB6AF4F9F;

IL2CPP_EXTERN_C RuntimeClass* BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t96D4C1DE463BE1C11AAA08560B0DDC4A0F8F755B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t3240BEEBEC023533A9DED76A7D5C825BE515AA32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t160F335B05E7692BA4234AFD249D62316B990635_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t4A75B306CBEEB639FDB932B596C5E96BB6AF4F9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSceneComputeStateMSFT_t78B065899ED6908CAEDD63C51C044BC9A2A2E907_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0263CDE65576EFB61171D212B2BDB5BD6E21FD25;
IL2CPP_EXTERN_C String_t* _stringLiteral099A2CB2E419C642ABAAD41487335BEEB5FB298A;
IL2CPP_EXTERN_C String_t* _stringLiteral12DBF631E149291A3FF90F48DE43CBFC6CA2AE85;
IL2CPP_EXTERN_C String_t* _stringLiteral15DC6D8E60353BA29C613B9A4E4070593812B027;
IL2CPP_EXTERN_C String_t* _stringLiteral1BD167829B298933C2E8DE3F777C7386513F8723;
IL2CPP_EXTERN_C String_t* _stringLiteral27453113E4C46F39FAE188EB6BE821F8BE895AD4;
IL2CPP_EXTERN_C String_t* _stringLiteral27D8CD22AFB37AED842D47EDFF210DFF0E723553;
IL2CPP_EXTERN_C String_t* _stringLiteral28ACD8FB093C165EACAF5BBF7017DBE986679E51;
IL2CPP_EXTERN_C String_t* _stringLiteral2C570AB7E857CCA2E3818DE95407873516EF1C8F;
IL2CPP_EXTERN_C String_t* _stringLiteral31F9F6F608BA218BA4D5A3531EF0FB899057AA84;
IL2CPP_EXTERN_C String_t* _stringLiteral320859545BEB023ECCB93969AB60B562A115E368;
IL2CPP_EXTERN_C String_t* _stringLiteral38B9F1CB9CF23E3E0AC214B4D9D904450340D969;
IL2CPP_EXTERN_C String_t* _stringLiteral4FE4A52579EDBC97BD81EEB8651E5D831CB96E95;
IL2CPP_EXTERN_C String_t* _stringLiteral54DFA1D178E216AA2B40713E9051E3DB672F6066;
IL2CPP_EXTERN_C String_t* _stringLiteral5B81DE069B2D1D9832F452DEB6AEF3696BBC31E5;
IL2CPP_EXTERN_C String_t* _stringLiteral5C34943E579AFC840667A592188870A70A94491D;
IL2CPP_EXTERN_C String_t* _stringLiteral6248E5925278513527B27D5AF71EFFD0B663532C;
IL2CPP_EXTERN_C String_t* _stringLiteral62BD1C8D995572306375E4430AD3BBEDECC09C8B;
IL2CPP_EXTERN_C String_t* _stringLiteral73858565ADE9E6C69230CC172BFE518B09A31AB7;
IL2CPP_EXTERN_C String_t* _stringLiteral7409B41108DA3BD3FA802E1D1C35557644E36911;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD16C3AA52251E09CD639EE929B7545F392408C;
IL2CPP_EXTERN_C String_t* _stringLiteral80A60F67E45968ADC4421C8C440C0B2EA21ED295;
IL2CPP_EXTERN_C String_t* _stringLiteral82EECFA7F650718796894A00082A09F13D2D5AA0;
IL2CPP_EXTERN_C String_t* _stringLiteral8FF72BE13A9011D3A7965EB4F58924E9C9F3CB41;
IL2CPP_EXTERN_C String_t* _stringLiteral915F1B31898382A9071FC5780B3D0C58D1A9175E;
IL2CPP_EXTERN_C String_t* _stringLiteral938F7DEE9DC17D094545C894D547E74457E49727;
IL2CPP_EXTERN_C String_t* _stringLiteralA00A7596D36AA2EEBC965CDC36F6AA90012D6200;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F9E614749173B51C22950E079DB273A4810A88;
IL2CPP_EXTERN_C String_t* _stringLiteralA6D9A9E6E972A1D503F069AA3E597BFACBD6ABA8;
IL2CPP_EXTERN_C String_t* _stringLiteralC06017740288603FFE2B95F8B770CF76DFB8A441;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2823FF80F294C2E27C72D59E1536D8595822A3A;
IL2CPP_EXTERN_C String_t* _stringLiteralCAEB56BB7CF6A80CCE72DCF7B8CFE450EF4B618B;
IL2CPP_EXTERN_C String_t* _stringLiteralCB5A3B7158BD9A0F7AFF2E23F38CDD31388F48A4;
IL2CPP_EXTERN_C String_t* _stringLiteralCD36B7131460C2D9DFD9D4732CF27B6879A305AF;
IL2CPP_EXTERN_C String_t* _stringLiteralCD9DA198A6553861EFC11CEC4F15FE43629CFC17;
IL2CPP_EXTERN_C String_t* _stringLiteralD9ADFCB0EDC737D3AE236ECD30C168D4B22D2431;
IL2CPP_EXTERN_C String_t* _stringLiteralDA0D2B9C7A43C887E96E30EAA79E23F4C7435A8F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE00476386CF0930C51BAA57740620E1B0D914A96;
IL2CPP_EXTERN_C String_t* _stringLiteralE1046E554B5BA21F2A286E15E630D376A6854825;
IL2CPP_EXTERN_C String_t* _stringLiteralE8625B69117EC8CC48C2A74C32449392F5AAC588;
IL2CPP_EXTERN_C String_t* _stringLiteralEE96C0F142389FE724C22669FFCDF0493ED43364;
IL2CPP_EXTERN_C String_t* _stringLiteralF0B938CC10F3ACE4BBE04B8ED4EB1E697A0453DC;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D9970F43C3DFB2541D095311D8CF5F82577AC6;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisSpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_m4524B0C8E5EBAFE5D59B059326EF5DE407F15FE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisSpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_m3A13620CF21F9ECC76045CB0EE8FB7FB6FFBD0ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8711EE6EDB68F781AF7508D53F6A8739AA70B319_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4AF4E3462FC0BBEADFF375FE85AFA952B562C931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1849CC9628E9820B1E154C8571087C7EB27E1F0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06_mC1309DAD78DEC012EEC2A4F3CFEE6D6CA979DD67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m64A9DC3111539F78DAC0B7DE3FCA2E697DC52DB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBFB2398AAC501B87FD4DD8BB135317B410B87B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC24DE096851AEDE481519F382ACBED033F68D73F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m3D23AEC65C341831CFDFE2656D73BC43EAFBAB7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6B4673E5C499167247CD6B09815C7BA11197A5F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mE904A9877FADE8FE2EF74E23ABA4012A6EA48C11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_m3F15BEB78D893E8545DB7E3E79E8A7EE2E5AB371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDD99FA8E89F7A91AFDF78326B64B530338719CD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m4418AC8A7D7AD5C183D1434F52F6A944A9E9E015_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m3CB45F40625A83042E827143810B98A862D21368_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mBB373528ED218F661B25D7DB1341304445A732B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1E0633DCBBB5A1F3AF4AA84B12C620A62407081D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5FC8231E7AD227BE95BEBC4BB2623D8F815985D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m682623DC0033EAC5551C187880D6ACCC57983142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA9B1C7C77F5BADC0627DDA81747E01CA8F5030FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB384A94B775793199D6172CD1A2B3139DD608F17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3CD14A511539DB2BB34275C9D59659B728CDC188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m55F9DFF90B1F9806589176ACC2272325137D7479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2751EE0511B835CA426BCDBFCC6D72ED9564730A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_PtrToStructure_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m70539381E92750BCB3C3A5CA5A4709219CBF9DF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m1AA3B83CE23E17F43FFE7C588891B28C46DE5571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m11D688A3CCF590C123A379B9F4CFCD51CD65E876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_CreateSubsystem_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_mB2088E2E277565FA29F7243004B2CAAF473C8436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_DestroySubsystem_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_m9E64ED523D10A2C1B636102E9E361B08D7251943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_StopSubsystem_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_m62C50016A0EAD59B9E18540141833571D489CCB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRSettings_GetFeature_TisBaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4_mFBAD671AC603BC219554DB1975A41D3E64C81C6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRSettings_GetFeature_TisSpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_m0DC4F3A332A2C2FAB3F7C7B6666326953FD05EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m5C50B8D4215E1B4724013F89772FF132DD0AA46A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m6CDDB0AC5DAF992440B57108F532FEECD28D9A65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mF16B7EBDE797D2DD134FB11FAA8905ABBBA19747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mFA9F01640FC6B1862948D672D010436370E24367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mBCFE624359E8991718D9932AAB3461ED9D23754D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mD5C400533705C1F81C27FA2DFF322609E9BB8177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m4D7D5D4921AFC1AD5A45B76A30750343CFDAFEE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mE1C682F9621D237941F3AF3D07DD5ECC1EEAD5A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpacesAnchorStore_LoadSavedAnchorAsync_mCA4947513D33D0704355373DCEF03E4920A433F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpacesAnchorStore_SaveAnchorAsync_m34F1A3389F987583D0351F9BA53DC477B36E4210_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpacesOpenXRFeature_HookMethod_TisClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29_m652CA8164BEDBBAFF4B4E0898EE880E1B5AE2216_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A_mF82D10800AE33E88C5B8E3480F18E9C017112E2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6_m4DF92E6F2957E27F254E27AEE57D99DEC4760674_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697_m900BBF13E15ADAEBDFD97776EFB88D98F35BEC56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032_mE4FAB26AB3409665BBF6C9F760B5C05B4E8B2D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpacesOpenXRFeature_HookMethod_TisDestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058_m557FE401E005B09F516EC6057B2FB8BDA6A690BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpacesOpenXRFeature_HookMethod_TisDestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF_m9A9D9402128DE21D61E6A1B6CB855204E6D22601_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpacesOpenXRFeature_HookMethod_TisEnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6_m146E96CBE7A1AA6385D2EBA40B0188BDF286408E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpacesOpenXRFeature_HookMethod_TisLocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043_m793C943E240F9636122A62A529C33DA94FDE2B03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpacesOpenXRFeature_HookMethod_TisPersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54_m9080CF5F35616E5B6729B7517E7F05F83578202F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpacesOpenXRFeature_HookMethod_TisUnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC_m09A1B3FA7F67F3DB04480A3572E63898A49D965A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpatialAnchorsProvider_U3CGetChangesU3Eb__8_0_mA68F31AF0754A8BCA256BA851FDE39EB13DA0808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisSpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577_m357842F38EDBC52B4BFD82BDF74D7380456A06B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1_CopyFrom_m5D8CC6A8E601C7AACFCD60AAFD39D828C11B1319_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2__ctor_m1670B56AEE76DB94F787F3081A471B00BD8621B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_m69996795EF12EE0AE5AF64577557865B8266FC57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m23EA9CB73F9040C266AD7FABA432166C20C319D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CTryRemoveAnchorU3Eb__0_mEA2D710CE16513F1A4F68F5B851BDDDE80152642_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99;;
struct XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshaled_pinvoke;
struct XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshaled_pinvoke;;
struct XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB;;
struct XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshaled_pinvoke;
struct XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshaled_pinvoke;;
struct XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D;;
struct XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshaled_pinvoke;
struct XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshaled_pinvoke;;
struct XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824;;
struct XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshaled_pinvoke;
struct XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshaled_pinvoke;;
struct XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80;;
struct XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshaled_pinvoke;
struct XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0;
struct XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
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

// System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchor>
struct List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem>
struct List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpatialAnchorsSubsystemU5BU5D_tAD4057CF23B6543868EC528799F01A30D66F3A1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct List_1_t160F335B05E7692BA4234AFD249D62316B990635  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRAnchorSubsystemDescriptorU5BU5D_t622C4B4F37D8BD43713D648D3300BF4299237567* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRMeshSubsystemDescriptorU5BU5D_t3B992422B03C712E6A939E14D9CF3F3799D62E72* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData>
struct Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	LoadAnchorDataU5BU5D_t1A49C7C496260C906E4CF7CC554448A2CE82557A* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData>
struct Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	SaveAnchorDataU5BU5D_tF7E758EAE93166DF4D4DDDD48130E964D26F09FF* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
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

// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData
struct LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B  : public RuntimeObject
{
	// System.String Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData::AnchorName
	String_t* ___AnchorName_0;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData::AnchorHandle
	uint64_t ___AnchorHandle_1;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData::SpaceHandle
	uint64_t ___SpaceHandle_2;
	// System.Action`1<System.Boolean> Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData::OnLoadedCallback
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnLoadedCallback_3;
	// System.Boolean Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData::Success
	bool ___Success_4;
	// System.Int32 Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData::UsingResource
	int32_t ___UsingResource_5;
};

// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData
struct SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A  : public RuntimeObject
{
	// UnityEngine.XR.ARFoundation.ARAnchor Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData::Anchor
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___Anchor_0;
	// System.String Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData::AnchorName
	String_t* ___AnchorName_1;
	// System.Action`1<System.Boolean> Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData::OnSavedCallback
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnSavedCallback_2;
	// System.Boolean Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData::Success
	bool ___Success_3;
	// System.Int32 Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData::UsingResource
	int32_t ___UsingResource_4;
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

// System.Collections.Generic.List`1/Enumerator<Qualcomm.Snapdragon.Spaces.SpatialAnchor>
struct Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* ____current_3;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct SubsystemProvider_1_t22A73CFC0FBED238F54239530C581C40C8C1E4AB  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemWithProvider_3_t9B46676D7BE943A96773ABEE0697A7F35EA89C3B  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* ___U3CproviderU3Ek__BackingField_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// Qualcomm.Snapdragon.Spaces.XrQuaternionf
struct XrQuaternionf_t9BA18EA5352E99545E378DF18DB9FC1B0257061C 
{
	// System.Single Qualcomm.Snapdragon.Spaces.XrQuaternionf::_x
	float ____x_0;
	// System.Single Qualcomm.Snapdragon.Spaces.XrQuaternionf::_y
	float ____y_1;
	// System.Single Qualcomm.Snapdragon.Spaces.XrQuaternionf::_z
	float ____z_2;
	// System.Single Qualcomm.Snapdragon.Spaces.XrQuaternionf::_w
	float ____w_3;
};

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT
struct XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80 
{
	// System.String Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT::Name
	String_t* ___Name_0;
};
// Native definition for P/Invoke marshalling of Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT
struct XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshaled_pinvoke
{
	char ___Name_0[256];
};
// Native definition for COM marshalling of Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT
struct XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshaled_com
{
	char ___Name_0[256];
};

// Qualcomm.Snapdragon.Spaces.XrVector3f
struct XrVector3f_t9550816D8E35F45AC919E6CAA4153949DE6AB62B 
{
	// System.Single Qualcomm.Snapdragon.Spaces.XrVector3f::_x
	float ____x_0;
	// System.Single Qualcomm.Snapdragon.Spaces.XrVector3f::_y
	float ____y_1;
	// System.Single Qualcomm.Snapdragon.Spaces.XrVector3f::_z
	float ____z_2;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92
struct __StaticArrayInitTypeSizeU3D92_t26A9F1FE8626EE613AED41D155156FABCA2AAA07 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D92_t26A9F1FE8626EE613AED41D155156FABCA2AAA07__padding[92];
	};
};

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384 
{
	// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct TrackingSubsystem_4_tAE598621837B470F57C1F0867DC899BE9FDE8956  : public SubsystemWithProvider_3_t9B46676D7BE943A96773ABEE0697A7F35EA89C3B
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tA0BB32051DB421EF50F2CFAFEF450DC66F052E7F  : public RuntimeObject
{
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Qualcomm.Snapdragon.Spaces.XrPosef
struct XrPosef_tF9DBBA377A37D440CA0ABFA1181DC109236B036B 
{
	// Qualcomm.Snapdragon.Spaces.XrQuaternionf Qualcomm.Snapdragon.Spaces.XrPosef::_orientation
	XrQuaternionf_t9BA18EA5352E99545E378DF18DB9FC1B0257061C ____orientation_0;
	// Qualcomm.Snapdragon.Spaces.XrVector3f Qualcomm.Snapdragon.Spaces.XrPosef::_position
	XrVector3f_t9550816D8E35F45AC919E6CAA4153949DE6AB62B ____position_1;
};

// Qualcomm.Snapdragon.Spaces.XrSceneBoundsMSFT
struct XrSceneBoundsMSFT_tBF620CC83FF71A6624CBFC4F20D2C422F2D554A5 
{
	// System.UInt64 Qualcomm.Snapdragon.Spaces.XrSceneBoundsMSFT::_space
	uint64_t ____space_0;
	// System.Int64 Qualcomm.Snapdragon.Spaces.XrSceneBoundsMSFT::_time
	int64_t ____time_1;
	// System.UInt32 Qualcomm.Snapdragon.Spaces.XrSceneBoundsMSFT::_sphereCount
	uint32_t ____sphereCount_2;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSceneBoundsMSFT::_spheres
	intptr_t ____spheres_3;
	// System.UInt32 Qualcomm.Snapdragon.Spaces.XrSceneBoundsMSFT::_boxCount
	uint32_t ____boxCount_4;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSceneBoundsMSFT::_boxes
	intptr_t ____boxes_5;
	// System.UInt32 Qualcomm.Snapdragon.Spaces.XrSceneBoundsMSFT::_frustumCount
	uint32_t ____frustumCount_6;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSceneBoundsMSFT::_frustums
	intptr_t ____frustums_7;
};

// Qualcomm.Snapdragon.Spaces.XrSceneComponentLocationsMSFT
struct XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA 
{
	// Qualcomm.Snapdragon.Spaces.XrStructureType Qualcomm.Snapdragon.Spaces.XrSceneComponentLocationsMSFT::_type
	int32_t ____type_0;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSceneComponentLocationsMSFT::_next
	intptr_t ____next_1;
	// System.UInt32 Qualcomm.Snapdragon.Spaces.XrSceneComponentLocationsMSFT::_locationCount
	uint32_t ____locationCount_2;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSceneComponentLocationsMSFT::_locations
	intptr_t ____locations_3;
};

// Qualcomm.Snapdragon.Spaces.XrSceneComponentsGetInfoMSFT
struct XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8 
{
	// Qualcomm.Snapdragon.Spaces.XrStructureType Qualcomm.Snapdragon.Spaces.XrSceneComponentsGetInfoMSFT::_type
	int32_t ____type_0;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSceneComponentsGetInfoMSFT::_next
	intptr_t ____next_1;
	// Qualcomm.Snapdragon.Spaces.XrSceneComponentTypeMSFT Qualcomm.Snapdragon.Spaces.XrSceneComponentsGetInfoMSFT::_componentType
	int32_t ____componentType_2;
};

// Qualcomm.Snapdragon.Spaces.XrSceneComponentsLocateInfoMSFT
struct XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332 
{
	// Qualcomm.Snapdragon.Spaces.XrStructureType Qualcomm.Snapdragon.Spaces.XrSceneComponentsLocateInfoMSFT::_type
	int32_t ____type_0;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSceneComponentsLocateInfoMSFT::_next
	intptr_t ____next_1;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.XrSceneComponentsLocateInfoMSFT::_baseSpace
	uint64_t ____baseSpace_2;
	// System.Int64 Qualcomm.Snapdragon.Spaces.XrSceneComponentsLocateInfoMSFT::_time
	int64_t ____time_3;
	// System.UInt32 Qualcomm.Snapdragon.Spaces.XrSceneComponentsLocateInfoMSFT::_componentIdCount
	uint32_t ____componentIdCount_4;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSceneComponentsLocateInfoMSFT::_componentIds
	intptr_t ____componentIds_5;
};

// Qualcomm.Snapdragon.Spaces.XrSceneComponentsMSFT
struct XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509 
{
	// Qualcomm.Snapdragon.Spaces.XrStructureType Qualcomm.Snapdragon.Spaces.XrSceneComponentsMSFT::_type
	int32_t ____type_0;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSceneComponentsMSFT::_next
	intptr_t ____next_1;
	// System.UInt32 Qualcomm.Snapdragon.Spaces.XrSceneComponentsMSFT::_componentCapacityInput
	uint32_t ____componentCapacityInput_2;
	// System.UInt32 Qualcomm.Snapdragon.Spaces.XrSceneComponentsMSFT::_componentCountOutput
	uint32_t ____componentCountOutput_3;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSceneComponentsMSFT::_components
	intptr_t ____components_4;
};

// Qualcomm.Snapdragon.Spaces.XrSceneCreateInfoMSFT
struct XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99  : public RuntimeObject
{
	// Qualcomm.Snapdragon.Spaces.XrStructureType Qualcomm.Snapdragon.Spaces.XrSceneCreateInfoMSFT::_type
	int32_t ____type_0;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSceneCreateInfoMSFT::_next
	intptr_t ____next_1;
};
// Native definition for P/Invoke marshalling of Qualcomm.Snapdragon.Spaces.XrSceneCreateInfoMSFT
struct XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshaled_pinvoke
{
	int32_t ____type_0;
	intptr_t ____next_1;
};
// Native definition for COM marshalling of Qualcomm.Snapdragon.Spaces.XrSceneCreateInfoMSFT
struct XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshaled_com
{
	int32_t ____type_0;
	intptr_t ____next_1;
};

// Qualcomm.Snapdragon.Spaces.XrSceneObserverCreateInfoMSFT
struct XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB  : public RuntimeObject
{
	// Qualcomm.Snapdragon.Spaces.XrStructureType Qualcomm.Snapdragon.Spaces.XrSceneObserverCreateInfoMSFT::_type
	int32_t ____type_0;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSceneObserverCreateInfoMSFT::_next
	intptr_t ____next_1;
};
// Native definition for P/Invoke marshalling of Qualcomm.Snapdragon.Spaces.XrSceneObserverCreateInfoMSFT
struct XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshaled_pinvoke
{
	int32_t ____type_0;
	intptr_t ____next_1;
};
// Native definition for COM marshalling of Qualcomm.Snapdragon.Spaces.XrSceneObserverCreateInfoMSFT
struct XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshaled_com
{
	int32_t ____type_0;
	intptr_t ____next_1;
};

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT
struct XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D 
{
	// Qualcomm.Snapdragon.Spaces.XrStructureType Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT::_type
	int32_t ____type_0;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT::_next
	intptr_t ____next_1;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT::_spatialAnchorStore
	uint64_t ____spatialAnchorStore_2;
	// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT::_spatialAnchorPersistenceName
	XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80 ____spatialAnchorPersistenceName_3;
};
// Native definition for P/Invoke marshalling of Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT
struct XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshaled_pinvoke
{
	int32_t ____type_0;
	intptr_t ____next_1;
	uint64_t ____spatialAnchorStore_2;
	XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshaled_pinvoke ____spatialAnchorPersistenceName_3;
};
// Native definition for COM marshalling of Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT
struct XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshaled_com
{
	int32_t ____type_0;
	intptr_t ____next_1;
	uint64_t ____spatialAnchorStore_2;
	XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshaled_com ____spatialAnchorPersistenceName_3;
};

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT
struct XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824 
{
	// Qualcomm.Snapdragon.Spaces.XrStructureType Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT::_type
	int32_t ____type_0;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT::_next
	intptr_t ____next_1;
	// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT::_spatialAnchorPersistenceName
	XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80 ____spatialAnchorPersistenceName_2;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT::_spatialAnchor
	uint64_t ____spatialAnchor_3;
};
// Native definition for P/Invoke marshalling of Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT
struct XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshaled_pinvoke
{
	int32_t ____type_0;
	intptr_t ____next_1;
	XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshaled_pinvoke ____spatialAnchorPersistenceName_2;
	uint64_t ____spatialAnchor_3;
};
// Native definition for COM marshalling of Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT
struct XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshaled_com
{
	int32_t ____type_0;
	intptr_t ____next_1;
	XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshaled_com ____spatialAnchorPersistenceName_2;
	uint64_t ____spatialAnchor_3;
};

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C  : public SubsystemProvider_1_t22A73CFC0FBED238F54239530C581C40C8C1E4AB
{
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t4A75B306CBEEB639FDB932B596C5E96BB6AF4F9F  : public RuntimeObject
{
	// UnityEngine.XR.ARSubsystems.TrackableId Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider/<>c__DisplayClass12_0::anchorId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___anchorId_0;
};

// System.Tuple`2<UnityEngine.Pose,System.Int32Enum>
struct Tuple_2_t64E8A40E5B0C8963DDD7A1A22CF280BB9AFAE3C9  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	int32_t ___m_Item2_1;
};

// System.Tuple`2<UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState>
struct Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	int32_t ___m_Item2_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF  : public TrackingSubsystem_4_tAE598621837B470F57C1F0867DC899BE9FDE8956
{
};

// Qualcomm.Snapdragon.Spaces.XrNewSceneComputeInfoMSFT
struct XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38 
{
	// Qualcomm.Snapdragon.Spaces.XrStructureType Qualcomm.Snapdragon.Spaces.XrNewSceneComputeInfoMSFT::_type
	int32_t ____type_0;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrNewSceneComputeInfoMSFT::_next
	intptr_t ____next_1;
	// System.UInt32 Qualcomm.Snapdragon.Spaces.XrNewSceneComputeInfoMSFT::_requestedFeatureCount
	uint32_t ____requestedFeatureCount_2;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrNewSceneComputeInfoMSFT::_requestedFeatures
	intptr_t ____requestedFeatures_3;
	// Qualcomm.Snapdragon.Spaces.XrSceneComputeConsistencyMSFT Qualcomm.Snapdragon.Spaces.XrNewSceneComputeInfoMSFT::_consistency
	int32_t ____consistency_4;
	// Qualcomm.Snapdragon.Spaces.XrSceneBoundsMSFT Qualcomm.Snapdragon.Spaces.XrNewSceneComputeInfoMSFT::_bounds
	XrSceneBoundsMSFT_tBF620CC83FF71A6624CBFC4F20D2C422F2D554A5 ____bounds_5;
};

// Qualcomm.Snapdragon.Spaces.XrSpaceLocation
struct XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F 
{
	// Qualcomm.Snapdragon.Spaces.XrStructureType Qualcomm.Snapdragon.Spaces.XrSpaceLocation::_type
	int32_t ____type_0;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSpaceLocation::_next
	intptr_t ____next_1;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.XrSpaceLocation::_locationFlags
	uint64_t ____locationFlags_2;
	// Qualcomm.Snapdragon.Spaces.XrPosef Qualcomm.Snapdragon.Spaces.XrSpaceLocation::_pose
	XrPosef_tF9DBBA377A37D440CA0ABFA1181DC109236B036B ____pose_3;
};

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorCreateInfoMSFT
struct XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87 
{
	// Qualcomm.Snapdragon.Spaces.XrStructureType Qualcomm.Snapdragon.Spaces.XrSpatialAnchorCreateInfoMSFT::_type
	int32_t ____type_0;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSpatialAnchorCreateInfoMSFT::_next
	intptr_t ____next_1;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.XrSpatialAnchorCreateInfoMSFT::_space
	uint64_t ____space_2;
	// Qualcomm.Snapdragon.Spaces.XrPosef Qualcomm.Snapdragon.Spaces.XrSpatialAnchorCreateInfoMSFT::_pose
	XrPosef_tF9DBBA377A37D440CA0ABFA1181DC109236B036B ____pose_3;
	// System.Int64 Qualcomm.Snapdragon.Spaces.XrSpatialAnchorCreateInfoMSFT::_time
	int64_t ____time_4;
};

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorSpaceCreateInfoMSFT
struct XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE 
{
	// Qualcomm.Snapdragon.Spaces.XrStructureType Qualcomm.Snapdragon.Spaces.XrSpatialAnchorSpaceCreateInfoMSFT::_type
	int32_t ____type_0;
	// System.IntPtr Qualcomm.Snapdragon.Spaces.XrSpatialAnchorSpaceCreateInfoMSFT::_next
	intptr_t ____next_1;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.XrSpatialAnchorSpaceCreateInfoMSFT::_anchor
	uint64_t ____anchor_2;
	// Qualcomm.Snapdragon.Spaces.XrPosef Qualcomm.Snapdragon.Spaces.XrSpatialAnchorSpaceCreateInfoMSFT::_poseInAnchorSpace
	XrPosef_tF9DBBA377A37D440CA0ABFA1181DC109236B036B ____poseInAnchorSpace_3;
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider
struct SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1  : public Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C
{
	// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::_underlyingFeature
	SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* ____underlyingFeature_1;
	// System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchor> Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::_activeSpatialAnchors
	List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* ____activeSpatialAnchors_2;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor> Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::_xrAnchorsToAdd
	List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* ____xrAnchorsToAdd_3;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId> Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::_trackablesToRemove
	List_1_t160F335B05E7692BA4234AFD249D62316B990635* ____trackablesToRemove_4;
	// Qualcomm.Snapdragon.Spaces.SpatialAnchor Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::_persistentAnchorCanditate
	SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* ____persistentAnchorCanditate_5;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Func`2<Qualcomm.Snapdragon.Spaces.SpatialAnchor,System.Boolean>
struct Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE  : public MulticastDelegate_t
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

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;
};

// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.OpenXR.Features.OpenXRFeature[] UnityEngine.XR.OpenXR.OpenXRSettings::features
	OpenXRFeatureU5BU5D_t1E8B328877C0D98F92ADE93D6F8C6536F92C3F3F* ___features_4;
	// UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode UnityEngine.XR.OpenXR.OpenXRSettings::m_renderMode
	int32_t ___m_renderMode_5;
	// UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode UnityEngine.XR.OpenXR.OpenXRSettings::m_depthSubmissionMode
	int32_t ___m_depthSubmissionMode_6;
};

// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchor
struct SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F  : public RuntimeObject
{
	// UnityEngine.XR.ARSubsystems.XRAnchor Qualcomm.Snapdragon.Spaces.SpatialAnchor::SubsystemAnchor
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___SubsystemAnchor_0;
	// System.String Qualcomm.Snapdragon.Spaces.SpatialAnchor::SavedName
	String_t* ___SavedName_1;
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem
struct SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577  : public XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/ClearSpatialAnchorStoreMSFTDelegate
struct ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorFromPersistedNameMSFTDelegate
struct CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorMSFTDelegate
struct CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorSpaceMSFTDelegate
struct CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorStoreConnectionMSFTDelegate
struct CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorMSFTDelegate
struct DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorStoreConnectionMSFTDelegate
struct DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/EnumeratePersistedSpatialAnchorNamesMSFTDelegate
struct EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/LocateSpaceDelegate
struct LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/PersistSpatialAnchorMSFTDelegate
struct PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/UnpersistSpatialAnchorMSFTDelegate
struct UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/ComputeNewSceneMSFTDelegate
struct ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneMSFTDelegate
struct CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneObserverMSFTDelegate
struct CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComponentsMSFTDelegate
struct GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComputeStateMSFTDelegate
struct GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/LocateSceneComponentsMSFTDelegate
struct LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature
struct SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
	// System.UInt64 Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::<SessionHandle>k__BackingField
	uint64_t ___U3CSessionHandleU3Ek__BackingField_16;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::<SystemIDHandle>k__BackingField
	uint64_t ___U3CSystemIDHandleU3Ek__BackingField_17;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::<InstanceHandle>k__BackingField
	uint64_t ___U3CInstanceHandleU3Ek__BackingField_18;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::<SpaceHandle>k__BackingField
	uint64_t ___U3CSpaceHandleU3Ek__BackingField_19;
	// System.Boolean Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::<IsSessionRunning>k__BackingField
	bool ___U3CIsSessionRunningU3Ek__BackingField_20;
	// System.Int32 Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::<SessionState>k__BackingField
	int32_t ___U3CSessionStateU3Ek__BackingField_21;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature
struct BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4  : public SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15
{
	// System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.ComponentVersion> Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature::_componentVersions
	List_1_tB6E5C0EE0D90F5DBD45E6CD7EAE2AEF029927ECD* ____componentVersions_25;
	// System.Boolean Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature::CheckInstalledRuntime
	bool ___CheckInstalledRuntime_29;
	// System.Boolean Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature::LaunchAppOnViewer
	bool ___LaunchAppOnViewer_30;
	// System.Boolean Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature::ShowLaunchMessageOnHost
	bool ___ShowLaunchMessageOnHost_31;
	// System.Boolean Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature::LaunchControllerOnHost
	bool ___LaunchControllerOnHost_32;
	// System.Boolean Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature::UseCustomController
	bool ___UseCustomController_33;
	// System.Boolean Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature::ExportHeadless
	bool ___ExportHeadless_34;
	// System.String Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature::AlternateStartActivity
	String_t* ___AlternateStartActivity_35;
	// System.Boolean Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature::SkipPermissionChecks
	bool ___SkipPermissionChecks_36;
};

// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore
struct SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::_feature
	SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* ____feature_4;
	// Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::_subsystem
	SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577* ____subsystem_5;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::_spatialAnchorStore
	uint64_t ____spatialAnchorStore_6;
	// System.Boolean Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::_isStoreLoaded
	bool ____isStoreLoaded_7;
	// System.Int32 Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::_saveAnchorUsingResource
	int32_t ____saveAnchorUsingResource_8;
	// System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData> Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::_saveAnchorPendingQueue
	Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2* ____saveAnchorPendingQueue_9;
	// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::_lastSaveAnchorData
	SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* ____lastSaveAnchorData_10;
	// System.Int32 Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::_loadAnchorUsingResource
	int32_t ____loadAnchorUsingResource_11;
	// System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData> Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::_loadAnchorPendingQueue
	Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280* ____loadAnchorPendingQueue_12;
	// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::_lastLoadAnchorData
	LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* ____lastLoadAnchorData_13;
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature
struct SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C  : public SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15
{
	// Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::_baseRuntimeFeature
	BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4* ____baseRuntimeFeature_27;
};

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature
struct SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA  : public SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15
{
	// Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::_baseRuntimeFeature
	BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4* ____baseRuntimeFeature_27;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06  : public ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchor>
struct List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchor>

// System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem>
struct List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpatialAnchorsSubsystemU5BU5D_tAD4057CF23B6543868EC528799F01A30D66F3A1D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem>

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct List_1_t160F335B05E7692BA4234AFD249D62316B990635_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor>

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRAnchorSubsystemDescriptorU5BU5D_t622C4B4F37D8BD43713D648D3300BF4299237567* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>

// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRMeshSubsystemDescriptorU5BU5D_t3B992422B03C712E6A939E14D9CF3F3799D62E72* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData>

// System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData>

// System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData>

// System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData>

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.SubsystemsImplementation.SubsystemProvider

// UnityEngine.SubsystemsImplementation.SubsystemProvider

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider

// System.ValueType

// System.ValueType

// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData

// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData

// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData

// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<Qualcomm.Snapdragon.Spaces.SpatialAnchor>

// System.Collections.Generic.List`1/Enumerator<Qualcomm.Snapdragon.Spaces.SpatialAnchor>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

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

// System.Void

// System.Void

// Qualcomm.Snapdragon.Spaces.XrQuaternionf

// Qualcomm.Snapdragon.Spaces.XrQuaternionf

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT

// Qualcomm.Snapdragon.Spaces.XrVector3f

// Qualcomm.Snapdragon.Spaces.XrVector3f

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tA0BB32051DB421EF50F2CFAFEF450DC66F052E7F_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92 <PrivateImplementationDetails>::51EFBC2981CB25FF9E3021739B8E87C770A93BBD1780C1592A0D36E92A719B88
	__StaticArrayInitTypeSizeU3D92_t26A9F1FE8626EE613AED41D155156FABCA2AAA07 ___51EFBC2981CB25FF9E3021739B8E87C770A93BBD1780C1592A0D36E92A719B88_0;
};

// <PrivateImplementationDetails>

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Qualcomm.Snapdragon.Spaces.XrPosef

// Qualcomm.Snapdragon.Spaces.XrPosef

// Qualcomm.Snapdragon.Spaces.XrSceneBoundsMSFT

// Qualcomm.Snapdragon.Spaces.XrSceneBoundsMSFT

// Qualcomm.Snapdragon.Spaces.XrSceneComponentLocationsMSFT

// Qualcomm.Snapdragon.Spaces.XrSceneComponentLocationsMSFT

// Qualcomm.Snapdragon.Spaces.XrSceneComponentsGetInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSceneComponentsGetInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSceneComponentsLocateInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSceneComponentsLocateInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSceneComponentsMSFT

// Qualcomm.Snapdragon.Spaces.XrSceneComponentsMSFT

// Qualcomm.Snapdragon.Spaces.XrSceneCreateInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSceneCreateInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSceneObserverCreateInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSceneObserverCreateInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider/<>c__DisplayClass12_0

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider/<>c__DisplayClass12_0

// System.Tuple`2<UnityEngine.Pose,System.Int32Enum>

// System.Tuple`2<UnityEngine.Pose,System.Int32Enum>

// System.Tuple`2<UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState>

// System.Tuple`2<UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRAnchor

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem

// Qualcomm.Snapdragon.Spaces.XrNewSceneComputeInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrNewSceneComputeInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSpaceLocation

// Qualcomm.Snapdragon.Spaces.XrSpaceLocation

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorCreateInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorCreateInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorSpaceCreateInfoMSFT

// Qualcomm.Snapdragon.Spaces.XrSpatialAnchorSpaceCreateInfoMSFT

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider

// System.Action`1<System.Boolean>

// System.Action`1<System.Boolean>

// System.Func`2<Qualcomm.Snapdragon.Spaces.SpatialAnchor,System.Boolean>

// System.Func`2<Qualcomm.Snapdragon.Spaces.SpatialAnchor,System.Boolean>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.InvalidOperationException

// System.InvalidOperationException

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143_StaticFields
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature

// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55_StaticFields
{
	// UnityEngine.XR.OpenXR.OpenXRSettings UnityEngine.XR.OpenXR.OpenXRSettings::s_RuntimeInstance
	OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* ___s_RuntimeInstance_8;
};

// UnityEngine.XR.OpenXR.OpenXRSettings

// System.Threading.ParameterizedThreadStart

// System.Threading.ParameterizedThreadStart

// Qualcomm.Snapdragon.Spaces.SpatialAnchor

// Qualcomm.Snapdragon.Spaces.SpatialAnchor

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem

// UnityEngine.Transform

// UnityEngine.Transform

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/ClearSpatialAnchorStoreMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/ClearSpatialAnchorStoreMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorFromPersistedNameMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorFromPersistedNameMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorSpaceMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorSpaceMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorStoreConnectionMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorStoreConnectionMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorStoreConnectionMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorStoreConnectionMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/EnumeratePersistedSpatialAnchorNamesMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/EnumeratePersistedSpatialAnchorNamesMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/LocateSpaceDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/LocateSpaceDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/PersistSpatialAnchorMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/PersistSpatialAnchorMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/UnpersistSpatialAnchorMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/UnpersistSpatialAnchorMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/ComputeNewSceneMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/ComputeNewSceneMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneObserverMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneObserverMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComponentsMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComponentsMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComputeStateMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComputeStateMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/LocateSceneComponentsMSFTDelegate

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/LocateSceneComponentsMSFTDelegate

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature
struct SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15_StaticFields
{
	// Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature/GetInstanceProcAddrDelegate Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::GetInstanceProcAddrPtr
	GetInstanceProcAddrDelegate_t389B857CBE93C73021F92B74FABFE7E8A1A4A468* ___GetInstanceProcAddrPtr_22;
};

// Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature

// UnityEngine.XR.ARFoundation.ARTrackable

// UnityEngine.XR.ARFoundation.ARTrackable

// Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature
struct BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4_StaticFields
{
	// Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature/xrGetComponentVersionsQCOMDelegate Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature::_xrGetComponentVersionsQCOM
	xrGetComponentVersionsQCOMDelegate_tEA756FCE3D1860D267015AE96BC0A350AE0CF686* ____xrGetComponentVersionsQCOM_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor> Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature::_sessionSubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ____sessionSubsystemDescriptors_37;
	// System.Int64 Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature::_predictedDisplayTime
	int64_t ____predictedDisplayTime_39;
};

// Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature

// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore

// Qualcomm.Snapdragon.Spaces.SpacesAnchorStore

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature
struct SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor> Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::_spatialAnchorsSubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ____spatialAnchorsSubsystemDescriptors_28;
	// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::_xrCreateSpatialAnchorMSFTPtr
	CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* ____xrCreateSpatialAnchorMSFTPtr_29;
	// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorSpaceMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::_xrCreateSpatialAnchorSpaceMSFTPtr
	CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* ____xrCreateSpatialAnchorSpaceMSFTPtr_30;
	// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::_xrDestroySpatialAnchorMSFTPtr
	DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* ____xrDestroySpatialAnchorMSFTPtr_31;
	// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorStoreConnectionMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::_xrCreateSpatialAnchorStoreConnectionMSFT
	CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* ____xrCreateSpatialAnchorStoreConnectionMSFT_32;
	// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorStoreConnectionMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::_xrDestroySpatialAnchorStoreConnectionMSFT
	DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* ____xrDestroySpatialAnchorStoreConnectionMSFT_33;
	// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/PersistSpatialAnchorMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::_xrPersistSpatialAnchorMSFT
	PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* ____xrPersistSpatialAnchorMSFT_34;
	// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/UnpersistSpatialAnchorMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::_xrUnpersistSpatialAnchorMSFT
	UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* ____xrUnpersistSpatialAnchorMSFT_35;
	// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/EnumeratePersistedSpatialAnchorNamesMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::_xrEnumeratePersistedSpatialAnchorNamesMSFT
	EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* ____xrEnumeratePersistedSpatialAnchorNamesMSFT_36;
	// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorFromPersistedNameMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::_xrCreateSpatialAnchorFromPersistedNameMSFT
	CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* ____xrCreateSpatialAnchorFromPersistedNameMSFT_37;
	// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/ClearSpatialAnchorStoreMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::_xrClearSpatialAnchorStoreMSFT
	ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* ____xrClearSpatialAnchorStoreMSFT_38;
	// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/LocateSpaceDelegate Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::_xrLocateSpacePtr
	LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* ____xrLocateSpacePtr_39;
};

// Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature
struct SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor> Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::_meshSubsystemDescriptors
	List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* ____meshSubsystemDescriptors_28;
	// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneObserverMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::_xrCreateSceneObserverMSFT
	CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D* ____xrCreateSceneObserverMSFT_30;
	// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/ComputeNewSceneMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::_xrComputeNewSceneMSFT
	ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572* ____xrComputeNewSceneMSFT_31;
	// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComputeStateMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::_xrGetSceneComputeStateMSFT
	GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6* ____xrGetSceneComputeStateMSFT_32;
	// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::_xrCreateSceneMSFT
	CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237* ____xrCreateSceneMSFT_33;
	// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComponentsMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::_xrGetSceneComponentsMSFT
	GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C* ____xrGetSceneComponentsMSFT_34;
	// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/LocateSceneComponentsMSFTDelegate Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::_xrLocateSceneComponentMSFT
	LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1* ____xrLocateSceneComponentMSFT_35;
};

// Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>

// UnityEngine.XR.ARFoundation.ARAnchor

// UnityEngine.XR.ARFoundation.ARAnchor
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Qualcomm.Snapdragon.Spaces.SpatialAnchor[]
struct SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7  : public RuntimeArray
{
	ALIGN_FIELD (8) SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* m_Items[1];

	inline SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.ARSubsystems.XRAnchor[]
struct XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8  : public RuntimeArray
{
	ALIGN_FIELD (8) XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 m_Items[1];

	inline XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.ARSubsystems.TrackableId[]
struct TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0  : public RuntimeArray
{
	ALIGN_FIELD (8) TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 m_Items[1];

	inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 value)
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

IL2CPP_EXTERN_C void XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshal_pinvoke(const XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824& unmarshaled, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshal_pinvoke_back(const XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshaled_pinvoke& marshaled, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824& unmarshaled);
IL2CPP_EXTERN_C void XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshal_pinvoke_cleanup(XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshal_pinvoke(const XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80& unmarshaled, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshal_pinvoke_back(const XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshaled_pinvoke& marshaled, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80& unmarshaled);
IL2CPP_EXTERN_C void XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshal_pinvoke_cleanup(XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshal_pinvoke(const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D& unmarshaled, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshal_pinvoke_back(const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshaled_pinvoke& marshaled, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D& unmarshaled);
IL2CPP_EXTERN_C void XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshal_pinvoke_cleanup(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshal_pinvoke(const XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB& unmarshaled, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshal_pinvoke_back(const XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshaled_pinvoke& marshaled, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB& unmarshaled);
IL2CPP_EXTERN_C void XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshal_pinvoke_cleanup(XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshal_pinvoke(const XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99& unmarshaled, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshal_pinvoke_back(const XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshaled_pinvoke& marshaled, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99& unmarshaled);
IL2CPP_EXTERN_C void XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshal_pinvoke_cleanup(XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshaled_pinvoke& marshaled);

// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mCBA01F889BE624767358AB5494CD2D7F1B2FB064_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_subsystems, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.Extensions.SubsystemExtensions::GetProvider<System.Object,System.Object,System.Object>(UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<TSubsystem,TDescriptor,TProvider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubsystemExtensions_GetProvider_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mB9F4B7F290E207CAAB828B7A01C92E1DF676308A_gshared (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* ___0_subsystem, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARTrackable_2_get_trackableId_m9D479A1FA0E9EC30E115D2DC287A593587956F25_gshared (ARTrackable_2_tFF6F0375EE13CB57F97ED570DAFE3435720C68C8* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T1 System.Tuple`2<UnityEngine.Pose,System.Int32Enum>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Tuple_2_get_Item1_m7ED4F8FD11A2EFEE86D317A88A36D575F10384C2_gshared_inline (Tuple_2_t64E8A40E5B0C8963DDD7A1A22CF280BB9AFAE3C9* __this, const RuntimeMethod* method) ;
// T2 System.Tuple`2<UnityEngine.Pose,System.Int32Enum>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item2_mC345D48D1EA913C4808B587B2CC1FAEA314F304A_gshared_inline (Tuple_2_t64E8A40E5B0C8963DDD7A1A22CF280BB9AFAE3C9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m8962B65060EE47BA2A88FE24CDED2724A6F3C51B_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_StopSubsystem_TisRuntimeObject_m1728B76D0581F2DB06F23933C72937B0824A7A73_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_DestroySubsystem_TisRuntimeObject_m34F0E133C03B7EF23B5C1CA652929AF7753CD427_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::HookMethod<System.Object>(System.String,TDelegate&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesOpenXRFeature_HookMethod_TisRuntimeObject_mB855A2D3C53866F8E3DB3F2244F1FA509AE40D60_gshared (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, String_t* ___0_methodName, RuntimeObject** ___1_delegatePointer, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<UnityEngine.Pose,System.Int32Enum>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_mB58573F00EA8A427AAA8FC985B834D1B36578BC8_gshared (Tuple_2_t64E8A40E5B0C8963DDD7A1A22CF280BB9AFAE3C9* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_item1, int32_t ___1_item2, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m1AA3B83CE23E17F43FFE7C588891B28C46DE5571_gshared (const RuntimeMethod* method) ;
// T System.Runtime.InteropServices.Marshal::PtrToStructure<Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80 Marshal_PtrToStructure_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m70539381E92750BCB3C3A5CA5A4709219CBF9DF8_gshared (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA9B1C7C77F5BADC0627DDA81747E01CA8F5030FF_gshared (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1E0633DCBBB5A1F3AF4AA84B12C620A62407081D_gshared (List_1_t160F335B05E7692BA4234AFD249D62316B990635* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mDA4751F464411AB4C757C63C6EDBF4891BFD6891_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mC24DE096851AEDE481519F382ACBED033F68D73F_gshared_inline (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* __this, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8* List_1_ToArray_mBB373528ED218F661B25D7DB1341304445A732B7_gshared (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(T[],Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m11D688A3CCF590C123A379B9F4CFCD51CD65E876_gshared (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A* __this, XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8* ___0_array, int32_t ___1_allocator, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* List_1_ToArray_m3CB45F40625A83042E827143810B98A862D21368_gshared (List_1_t160F335B05E7692BA4234AFD249D62316B990635* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(T[],Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_gshared (NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E* __this, TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* ___0_array, int32_t ___1_allocator, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::CopyFrom(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931 TrackableChanges_1_CopyFrom_m5D8CC6A8E601C7AACFCD60AAFD39D828C11B1319_gshared (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___0_added, NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___1_updated, NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___2_removed, int32_t ___3_allocator, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6B4673E5C499167247CD6B09815C7BA11197A5F7_gshared_inline (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m3D23AEC65C341831CFDFE2656D73BC43EAFBAB7A_gshared_inline (List_1_t160F335B05E7692BA4234AFD249D62316B990635* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SingleOrDefault_TisRuntimeObject_m96E15D999D3DAF8B31946255524EBB46907CFF17_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m64A9DC3111539F78DAC0B7DE3FCA2E697DC52DB0_gshared_inline (List_1_t160F335B05E7692BA4234AFD249D62316B990635* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE904A9877FADE8FE2EF74E23ABA4012A6EA48C11_gshared (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* __this, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_item, const RuntimeMethod* method) ;

// UnityEngine.XR.OpenXR.OpenXRSettings UnityEngine.XR.OpenXR.OpenXRSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* OpenXRSettings_get_Instance_m0F645DB8A0ECC1325AD730F18479BCDCB92D1920 (const RuntimeMethod* method) ;
// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature>()
inline SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* OpenXRSettings_GetFeature_TisSpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_m0DC4F3A332A2C2FAB3F7C7B6666326953FD05EC9 (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method)
{
	return ((  SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* (*) (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55*, const RuntimeMethod*))OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem>::.ctor()
inline void List_1__ctor_m5FC8231E7AD227BE95BEBC4BB2623D8F815985D1 (List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetInstances_TisSpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577_m357842F38EDBC52B4BFD82BDF74D7380456A06B7 (List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449* ___0_subsystems, const RuntimeMethod* method)
{
	((  void (*) (List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449*, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mCBA01F889BE624767358AB5494CD2D7F1B2FB064_gshared)(___0_subsystems, method);
}
// System.Int32 System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem>::get_Count()
inline int32_t List_1_get_Count_m3CD14A511539DB2BB34275C9D59659B728CDC188_inline (List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem>::get_Item(System.Int32)
inline SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577* List_1_get_Item_m2751EE0511B835CA426BCDBFCC6D72ED9564730A (List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577* (*) (List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::LoadStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_LoadStore_m11896D71787E5BAA076CE9197DE226FFB5DABDF6 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Exchange(System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.Extensions.SubsystemExtensions::GetProvider<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>(UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<TSubsystem,TDescriptor,TProvider>)
inline Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F (SubsystemWithProvider_3_t9B46676D7BE943A96773ABEE0697A7F35EA89C3B* ___0_subsystem, const RuntimeMethod* method)
{
	return ((  Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* (*) (SubsystemWithProvider_3_t9B46676D7BE943A96773ABEE0697A7F35EA89C3B*, const RuntimeMethod*))SubsystemExtensions_GetProvider_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mB9F4B7F290E207CAAB828B7A01C92E1DF676308A_gshared)(___0_subsystem, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>::get_trackableId()
inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A (ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B* __this, const RuntimeMethod* method)
{
	return ((  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 (*) (ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B*, const RuntimeMethod*))ARTrackable_2_get_trackableId_m9D479A1FA0E9EC30E115D2DC287A593587956F25_gshared)(__this, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::UpdateAnchorSavedName(UnityEngine.XR.ARSubsystems.TrackableId,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsProvider_UpdateAnchorSavedName_m497685B1A1FC34271A9D1FCCAC011DEAD644A648 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_anchorId, String_t* ___1_savedName, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___0_obj, method);
}
// System.Int32 System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData>::get_Count()
inline int32_t Queue_1_get_Count_mE1C682F9621D237941F3AF3D07DD5ECC1EEAD5A7_inline (Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData>::Dequeue()
inline SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* Queue_1_Dequeue_m5C50B8D4215E1B4724013F89772FF132DD0AA46A (Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2* __this, const RuntimeMethod* method)
{
	return ((  SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* (*) (Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718 (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* ___0_start, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, RuntimeObject* ___0_parameter, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchor::.ctor(System.UInt64,System.UInt64,UnityEngine.Pose,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchor__ctor_mCE1DFED5316F7C86DA886D9F7D6FF6107DAD6CFE (SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* __this, uint64_t ___0_anchorHandle, uint64_t ___1_anchorSpaceHandle, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___2_pose, String_t* ___3_name, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::SetPersistentAnchorCandidate(Qualcomm.Snapdragon.Spaces.SpatialAnchor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpatialAnchorsProvider_SetPersistentAnchorCandidate_m39F58BBE288998D8DCF8668964036C32CD729E2A_inline (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* ___0_persistentAnchorCandidate, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.XR.ARFoundation.ARAnchor>()
inline ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* GameObject_AddComponent_TisARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06_mC1309DAD78DEC012EEC2A4F3CFEE6D6CA979DD67 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData>::get_Count()
inline int32_t Queue_1_get_Count_m4D7D5D4921AFC1AD5A45B76A30750343CFDAFEE3_inline (Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData>::Dequeue()
inline LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* Queue_1_Dequeue_m6CDDB0AC5DAF992440B57108F532FEECD28D9A65 (Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280* __this, const RuntimeMethod* method)
{
	return ((  LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* (*) (Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryCreateSpatialAnchorStoreConnection(System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryCreateSpatialAnchorStoreConnection_m8B05FD91A3DAF31A4F95A89E125CDA8EC908BF32 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t* ___0_spatialAnchorStore, const RuntimeMethod* method) ;
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryDestroySpatialAnchorStoreConnection(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryDestroySpatialAnchorStoreConnection_m4BEC6B257130BC4C2B76859D043C7AA10CE5F8C3 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method) ;
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryClearSpatialAnchorStoreMSFT(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryClearSpatialAnchorStoreMSFT_mE2CB7E2C660A56E601C93EEBA9E86E3C6C34D656 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::ClearAllAnchorSavedNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsProvider_ClearAllAnchorSavedNames_mD29F12637E25DE3B8F2A7E81C4DAAE3A3F716DB4 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData::.ctor(UnityEngine.XR.ARFoundation.ARAnchor,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveAnchorData__ctor_m7B1CF4ED4CEF7509D8F71D5220857DDAC7EC6350 (SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___0_anchor, String_t* ___1_anchorName, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___2_onSavedCallback, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData>::Enqueue(T)
inline void Queue_1_Enqueue_mF16B7EBDE797D2DD134FB11FAA8905ABBBA19747 (Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2* __this, SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2*, SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Int32 System.DateTime::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_GetHashCode_m206A3B9394E6D089311A1A81305A5A1AB30B2D99 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::SaveAnchor(UnityEngine.XR.ARFoundation.ARAnchor,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_SaveAnchor_mA318437CDC8B7BF2B010BEB009BEB58DC99F2557 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___0_anchor, String_t* ___1_anchorName, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___2_onSavedCallback, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryPersistSpatialAnchor(System.UInt64,System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryPersistSpatialAnchor_m72087B23956BD80C912277F2E71E719BAA80D965 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_spatialAnchorStore, uint64_t ___1_spatialAnchorHandle, String_t* ___2_anchorName, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryUnpersistSpatialAnchor(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryUnpersistSpatialAnchor_m8D4D1AD7BF28030DC6193DBAC13C5DD5105967C5 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_spatialAnchorStore, String_t* ___1_anchorName, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData::.ctor(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAnchorData__ctor_mCA956DC558E2139C8D449DA3AE7E09568CA921F1 (LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* __this, String_t* ___0_anchorName, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___1_onLoadedCallback, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData>::Enqueue(T)
inline void Queue_1_Enqueue_mFA9F01640FC6B1862948D672D010436370E24367 (Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280* __this, LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280*, LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::TryAddAnchorFromPersistentName(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsProvider_TryAddAnchorFromPersistentName_m34B7DD94ACB60DC573DBC04CFE35204D91926F75 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, uint64_t ___0_spatialAnchorStore, String_t* ___1_spatialAnchorName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryCreateSpatialAnchorFromPersistedNameMSFT(System.UInt64,System.String,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryCreateSpatialAnchorFromPersistedNameMSFT_m564DFAA8B0802B284872BAC1B37B4C7AD060C73B (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_spatialAnchorStore, String_t* ___1_spatialAnchorName, uint64_t* ___2_spatialAnchor, const RuntimeMethod* method) ;
// System.UInt64 Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryCreateSpatialAnchorSpaceHandle(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SpatialAnchorsFeature_TryCreateSpatialAnchorSpaceHandle_mED98DCE76E5721F42ACE282B5E59F6B190A7B5F6 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_anchorHandle, const RuntimeMethod* method) ;
// System.String[] Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::GetSavedAnchorNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* SpacesAnchorStore_GetSavedAnchorNames_mDF6A8348BC71BE9C4F60B6E3FFB24BDF7CE168F4 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::LoadSavedAnchor(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_LoadSavedAnchor_m5D981A8880C785E09E57A89CDA747A93849FDE1D (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, String_t* ___0_anchorName, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___1_onLoadedCallback, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.String>()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryEnumeratePersistedSpatialAnchorNames(System.UInt64,System.String[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryEnumeratePersistedSpatialAnchorNames_m65120244410EBC374EAFE68DD7FC0BE692A44DD3 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_spatialAnchorStore, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** ___1_namesList, const RuntimeMethod* method) ;
// System.String Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::TryGetSavedNameFromTrackableId(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpatialAnchorsProvider_TryGetSavedNameFromTrackableId_mF37BF9A04A5E321A4D8A91EF85D86EE5CEDCC875 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData>::.ctor()
inline void Queue_1__ctor_mBCFE624359E8991718D9932AAB3461ED9D23754D (Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData>::.ctor()
inline void Queue_1__ctor_mD5C400533705C1F81C27FA2DFF322609E9BB8177 (Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::get_trackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___0_subId1, uint64_t ___1_subId2, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRAnchor::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchor__ctor_mDD8A7F48E03A25972AA93D2C89C1D773635CA15B (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, intptr_t ___3_nativePtr, const RuntimeMethod* method) ;
// T1 System.Tuple`2<UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState>::get_Item1()
inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Tuple_2_get_Item1_m69996795EF12EE0AE5AF64577557865B8266FC57_inline (Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* __this, const RuntimeMethod* method)
{
	return ((  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 (*) (Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18*, const RuntimeMethod*))Tuple_2_get_Item1_m7ED4F8FD11A2EFEE86D317A88A36D575F10384C2_gshared_inline)(__this, method);
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRAnchor_get_pose_m2347783C1262EEFBC0B817EF0357FA4BB4BF053F_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Pose::Equals(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pose_Equals_m31979E7A46252DBB620F4A0EA3BDBA61782DA498 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_other, const RuntimeMethod* method) ;
// T2 System.Tuple`2<UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState>::get_Item2()
inline int32_t Tuple_2_get_Item2_m23EA9CB73F9040C266AD7FABA432166C20C319D5_inline (Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18*, const RuntimeMethod*))Tuple_2_get_Item2_mC345D48D1EA913C4808B587B2CC1FAEA314F304A_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRAnchor_get_trackingState_m6124A26C36CA93C25C57548576CB00C1F496ED83_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRAnchor_get_nativePtr_mC0551FA7E8DB8A0DA1EAE02D9B0BFD9D47389C26_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) ;
// System.Boolean Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpacesOpenXRFeature_OnInstanceCreate_m0324D4194E2B85DE1F841E6F07FD59E585DAB336 (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, uint64_t ___0_instanceHandle, const RuntimeMethod* method) ;
// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature>()
inline BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4* OpenXRSettings_GetFeature_TisBaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4_mFBAD671AC603BC219554DB1975A41D3E64C81C6F (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method)
{
	return ((  BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4* (*) (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55*, const RuntimeMethod*))OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<System.String> Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::GetMissingExtensions(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpacesOpenXRFeature_GetMissingExtensions_mC574B76CDC275762A5368CF9214ACA2DF6722361 (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, String_t* ___0_extensions, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___0_source, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158 (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::CreateSubsystem<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void OpenXRFeature_CreateSubsystem_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_mB2088E2E277565FA29F7243004B2CAAF473C8436 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE*, String_t*, const RuntimeMethod*))OpenXRFeature_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m8962B65060EE47BA2A88FE24CDED2724A6F3C51B_gshared)(__this, ___0_descriptors, ___1_id, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::StopSubsystem<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>()
inline void OpenXRFeature_StopSubsystem_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_m62C50016A0EAD59B9E18540141833571D489CCB6 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, const RuntimeMethod*))OpenXRFeature_StopSubsystem_TisRuntimeObject_m1728B76D0581F2DB06F23933C72937B0824A7A73_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::DestroySubsystem<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>()
inline void OpenXRFeature_DestroySubsystem_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_m9E64ED523D10A2C1B636102E9E361B08D7251943 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, const RuntimeMethod*))OpenXRFeature_DestroySubsystem_TisRuntimeObject_m34F0E133C03B7EF23B5C1CA652929AF7753CD427_gshared)(__this, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::HookMethod<Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorMSFTDelegate>(System.String,TDelegate&)
inline void SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6_m4DF92E6F2957E27F254E27AEE57D99DEC4760674 (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, String_t* ___0_methodName, CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6** ___1_delegatePointer, const RuntimeMethod* method)
{
	((  void (*) (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15*, String_t*, CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6**, const RuntimeMethod*))SpacesOpenXRFeature_HookMethod_TisRuntimeObject_mB855A2D3C53866F8E3DB3F2244F1FA509AE40D60_gshared)(__this, ___0_methodName, ___1_delegatePointer, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::HookMethod<Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorSpaceMSFTDelegate>(System.String,TDelegate&)
inline void SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697_m900BBF13E15ADAEBDFD97776EFB88D98F35BEC56 (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, String_t* ___0_methodName, CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697** ___1_delegatePointer, const RuntimeMethod* method)
{
	((  void (*) (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15*, String_t*, CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697**, const RuntimeMethod*))SpacesOpenXRFeature_HookMethod_TisRuntimeObject_mB855A2D3C53866F8E3DB3F2244F1FA509AE40D60_gshared)(__this, ___0_methodName, ___1_delegatePointer, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::HookMethod<Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorMSFTDelegate>(System.String,TDelegate&)
inline void SpacesOpenXRFeature_HookMethod_TisDestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058_m557FE401E005B09F516EC6057B2FB8BDA6A690BF (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, String_t* ___0_methodName, DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058** ___1_delegatePointer, const RuntimeMethod* method)
{
	((  void (*) (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15*, String_t*, DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058**, const RuntimeMethod*))SpacesOpenXRFeature_HookMethod_TisRuntimeObject_mB855A2D3C53866F8E3DB3F2244F1FA509AE40D60_gshared)(__this, ___0_methodName, ___1_delegatePointer, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::HookMethod<Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/LocateSpaceDelegate>(System.String,TDelegate&)
inline void SpacesOpenXRFeature_HookMethod_TisLocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043_m793C943E240F9636122A62A529C33DA94FDE2B03 (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, String_t* ___0_methodName, LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043** ___1_delegatePointer, const RuntimeMethod* method)
{
	((  void (*) (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15*, String_t*, LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043**, const RuntimeMethod*))SpacesOpenXRFeature_HookMethod_TisRuntimeObject_mB855A2D3C53866F8E3DB3F2244F1FA509AE40D60_gshared)(__this, ___0_methodName, ___1_delegatePointer, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::HookMethod<Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorStoreConnectionMSFTDelegate>(System.String,TDelegate&)
inline void SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032_mE4FAB26AB3409665BBF6C9F760B5C05B4E8B2D99 (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, String_t* ___0_methodName, CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032** ___1_delegatePointer, const RuntimeMethod* method)
{
	((  void (*) (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15*, String_t*, CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032**, const RuntimeMethod*))SpacesOpenXRFeature_HookMethod_TisRuntimeObject_mB855A2D3C53866F8E3DB3F2244F1FA509AE40D60_gshared)(__this, ___0_methodName, ___1_delegatePointer, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::HookMethod<Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorStoreConnectionMSFTDelegate>(System.String,TDelegate&)
inline void SpacesOpenXRFeature_HookMethod_TisDestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF_m9A9D9402128DE21D61E6A1B6CB855204E6D22601 (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, String_t* ___0_methodName, DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF** ___1_delegatePointer, const RuntimeMethod* method)
{
	((  void (*) (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15*, String_t*, DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF**, const RuntimeMethod*))SpacesOpenXRFeature_HookMethod_TisRuntimeObject_mB855A2D3C53866F8E3DB3F2244F1FA509AE40D60_gshared)(__this, ___0_methodName, ___1_delegatePointer, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::HookMethod<Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/PersistSpatialAnchorMSFTDelegate>(System.String,TDelegate&)
inline void SpacesOpenXRFeature_HookMethod_TisPersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54_m9080CF5F35616E5B6729B7517E7F05F83578202F (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, String_t* ___0_methodName, PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54** ___1_delegatePointer, const RuntimeMethod* method)
{
	((  void (*) (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15*, String_t*, PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54**, const RuntimeMethod*))SpacesOpenXRFeature_HookMethod_TisRuntimeObject_mB855A2D3C53866F8E3DB3F2244F1FA509AE40D60_gshared)(__this, ___0_methodName, ___1_delegatePointer, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::HookMethod<Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/UnpersistSpatialAnchorMSFTDelegate>(System.String,TDelegate&)
inline void SpacesOpenXRFeature_HookMethod_TisUnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC_m09A1B3FA7F67F3DB04480A3572E63898A49D965A (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, String_t* ___0_methodName, UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC** ___1_delegatePointer, const RuntimeMethod* method)
{
	((  void (*) (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15*, String_t*, UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC**, const RuntimeMethod*))SpacesOpenXRFeature_HookMethod_TisRuntimeObject_mB855A2D3C53866F8E3DB3F2244F1FA509AE40D60_gshared)(__this, ___0_methodName, ___1_delegatePointer, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::HookMethod<Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/EnumeratePersistedSpatialAnchorNamesMSFTDelegate>(System.String,TDelegate&)
inline void SpacesOpenXRFeature_HookMethod_TisEnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6_m146E96CBE7A1AA6385D2EBA40B0188BDF286408E (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, String_t* ___0_methodName, EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6** ___1_delegatePointer, const RuntimeMethod* method)
{
	((  void (*) (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15*, String_t*, EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6**, const RuntimeMethod*))SpacesOpenXRFeature_HookMethod_TisRuntimeObject_mB855A2D3C53866F8E3DB3F2244F1FA509AE40D60_gshared)(__this, ___0_methodName, ___1_delegatePointer, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::HookMethod<Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorFromPersistedNameMSFTDelegate>(System.String,TDelegate&)
inline void SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A_mF82D10800AE33E88C5B8E3480F18E9C017112E2E (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, String_t* ___0_methodName, CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A** ___1_delegatePointer, const RuntimeMethod* method)
{
	((  void (*) (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15*, String_t*, CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A**, const RuntimeMethod*))SpacesOpenXRFeature_HookMethod_TisRuntimeObject_mB855A2D3C53866F8E3DB3F2244F1FA509AE40D60_gshared)(__this, ___0_methodName, ___1_delegatePointer, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::HookMethod<Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/ClearSpatialAnchorStoreMSFTDelegate>(System.String,TDelegate&)
inline void SpacesOpenXRFeature_HookMethod_TisClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29_m652CA8164BEDBBAFF4B4E0898EE880E1B5AE2216 (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, String_t* ___0_methodName, ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29** ___1_delegatePointer, const RuntimeMethod* method)
{
	((  void (*) (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15*, String_t*, ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29**, const RuntimeMethod*))SpacesOpenXRFeature_HookMethod_TisRuntimeObject_mB855A2D3C53866F8E3DB3F2244F1FA509AE40D60_gshared)(__this, ___0_methodName, ___1_delegatePointer, method);
}
// System.UInt64 Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::get_SpaceHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t SpacesOpenXRFeature_get_SpaceHandle_m3A8C3EA515461E2D805C79E15857736C89CF87D0_inline (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, const RuntimeMethod* method) ;
// System.Int64 Qualcomm.Snapdragon.Spaces.BaseRuntimeFeature::get_PredictedDisplayTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BaseRuntimeFeature_get_PredictedDisplayTime_m432B805A627B7F73C14298F21CE791AA90999DAC_inline (BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4* __this, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.XrSpatialAnchorCreateInfoMSFT::.ctor(UnityEngine.Pose,System.UInt64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrSpatialAnchorCreateInfoMSFT__ctor_m30BEA3DC5CBAF77172B5CF78783DC2A0A4441DC6 (XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, uint64_t ___1_space, int64_t ___2_time, const RuntimeMethod* method) ;
// System.UInt64 Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::get_SessionHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t SpacesOpenXRFeature_get_SessionHandle_mC1D5AE58DB4A5326847DA40475D9459B6AF58F16_inline (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, const RuntimeMethod* method) ;
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorCreateInfoMSFT,System.UInt64&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorMSFTDelegate_Invoke_m360D2AD6BC6A9FCD2DBE1323F109BB0A392647B0_inline (CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* __this, uint64_t ___0_session, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87 ___1_createInfoMSFT, uint64_t* ___2_anchor, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.String System.Enum::GetName(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_GetName_m05FE85181853F756BA6BB2C033DD3590E6114D29 (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.XrSpatialAnchorSpaceCreateInfoMSFT::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrSpatialAnchorSpaceCreateInfoMSFT__ctor_m0E7262C30F18E0E1FE14CBC5E9F2DEDBE55EC70E (XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE* __this, uint64_t ___0_anchorHandle, const RuntimeMethod* method) ;
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorSpaceMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorSpaceCreateInfoMSFT,System.UInt64&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorSpaceMSFTDelegate_Invoke_m83C7DD3FD8A7B5167C7C927E20E644E323CCAF0B_inline (CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* __this, uint64_t ___0_session, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE ___1_createInfo, uint64_t* ___2_space, const RuntimeMethod* method) ;
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorMSFTDelegate::Invoke(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DestroySpatialAnchorMSFTDelegate_Invoke_mD43C523B6B300A640A89403B0740723BF92F7579_inline (DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* __this, uint64_t ___0_anchor, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState>::.ctor(T1,T2)
inline void Tuple_2__ctor_m1670B56AEE76DB94F787F3081A471B00BD8621B8 (Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_item1, int32_t ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, int32_t, const RuntimeMethod*))Tuple_2__ctor_mB58573F00EA8A427AAA8FC985B834D1B36578BC8_gshared)(__this, ___0_item1, ___1_item2, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.XrSpaceLocation::InitStructureType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrSpaceLocation_InitStructureType_m42DB29E751707B06F9BD6F9D572DF0F5B9EC5466 (XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* __this, const RuntimeMethod* method) ;
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/LocateSpaceDelegate::Invoke(System.UInt64,System.UInt64,System.Int64,Qualcomm.Snapdragon.Spaces.XrSpaceLocation&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LocateSpaceDelegate_Invoke_m09F2C746A247677A863DA20FE8FDDE4E5245F8C5_inline (LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* __this, uint64_t ___0_space, uint64_t ___1_baseSpace, int64_t ___2_time, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* ___3_location, const RuntimeMethod* method) ;
// UnityEngine.Pose Qualcomm.Snapdragon.Spaces.XrSpaceLocation::GetPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XrSpaceLocation_GetPose_m45AE7E0E2ADECD3E177598478CDAD84EC9A6E2FA (XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Qualcomm.Snapdragon.Spaces.XrSpaceLocation::GetTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XrSpaceLocation_GetTrackingState_mC12F5FB6F53F113B8717D98F01ED775F6AA4D536 (XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* __this, const RuntimeMethod* method) ;
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorStoreConnectionMSFTDelegate::Invoke(System.UInt64,System.UInt64&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorStoreConnectionMSFTDelegate_Invoke_m968E41F34BB96E29AFDA75A7F60C001C8768FB7A_inline (CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* __this, uint64_t ___0_session, uint64_t* ___1_spatialAnchorStore, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorStoreConnectionMSFTDelegate::Invoke(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DestroySpatialAnchorStoreConnectionMSFTDelegate_Invoke_mEFB181C09A6237E3F36CB3887981360C060A54C0_inline (DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method) ;
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/ClearSpatialAnchorStoreMSFTDelegate::Invoke(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ClearSpatialAnchorStoreMSFTDelegate_Invoke_m1A2CD0184B4A8D1F231BE3F57EF07CBA20C62AA1_inline (ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT::.ctor(System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrSpatialAnchorPersistenceInfoMSFT__ctor_m597F42F50F6786918CF94BA946517678E9E2557B (XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824* __this, String_t* ___0_name, uint64_t ___1_spatialAnchor, const RuntimeMethod* method) ;
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/PersistSpatialAnchorMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PersistSpatialAnchorMSFTDelegate_Invoke_m629801285D0E38414C2A1E7537960F98D5CB887B_inline (PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824* ___1_spatialAnchorPersistenceInfo, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XrSpatialAnchorPersistenceNameMSFT__ctor_m79DF56CBF47872031AD00EFF1B94980060D679C8_inline (XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/UnpersistSpatialAnchorMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnpersistSpatialAnchorMSFTDelegate_Invoke_m574686A42D506A5CFF44232D1040363433728E28_inline (UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* ___1_spatialAnchorPersistenceName, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT::.ctor(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT__ctor_m51AE46AEA9B4290FBC9288833FC4BE71C8C52B68 (XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D* __this, uint64_t ___0_spatialAnchorStore, String_t* ___1_spatialAnchorName, const RuntimeMethod* method) ;
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorFromPersistedNameMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT&,System.UInt64&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorFromPersistedNameMSFTDelegate_Invoke_m8EE7A705BDFF61921963C9A9AD603B9A4DCD0F3C_inline (CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* __this, uint64_t ___0_session, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D* ___1_spatialAnchorCreateInfo, uint64_t* ___2_spatialAnchor, const RuntimeMethod* method) ;
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/EnumeratePersistedSpatialAnchorNamesMSFTDelegate::Invoke(System.UInt64,System.UInt32,System.UInt32&,System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnumeratePersistedSpatialAnchorNamesMSFTDelegate_Invoke_m8D01B6BEA1F353BEF629E24877FF8020028F47CE_inline (EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* __this, uint64_t ___0_spatialAnchorStore, uint32_t ___1_spatialAnchorNamesCapacityInput, uint32_t* ___2_spatialAnchorNamesCountOutput, intptr_t ___3_spatialAnchorPersistenceNames, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT>()
inline int32_t Marshal_SizeOf_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m1AA3B83CE23E17F43FFE7C588891B28C46DE5571 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Marshal_SizeOf_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m1AA3B83CE23E17F43FFE7C588891B28C46DE5571_gshared)(method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___0_cb, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___0_pointer, int32_t ___1_offset, const RuntimeMethod* method) ;
// T System.Runtime.InteropServices.Marshal::PtrToStructure<Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT>(System.IntPtr)
inline XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80 Marshal_PtrToStructure_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m70539381E92750BCB3C3A5CA5A4709219CBF9DF8 (intptr_t ___0_ptr, const RuntimeMethod* method)
{
	return ((  XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80 (*) (intptr_t, const RuntimeMethod*))Marshal_PtrToStructure_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m70539381E92750BCB3C3A5CA5A4709219CBF9DF8_gshared)(___0_ptr, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesOpenXRFeature__ctor_mFC1AC4D00ABFBCF3DC87141BF5ECEB49DCF5EE16 (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mB384A94B775793199D6172CD1A2B3139DD608F17 (List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6344F3700C1D743D82AB9E74925F7687925734A6_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m0E291C22B0B2CF634024F32ECA2E424F18157ACF_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5C5CAAC167444FE1BD48C1A16AA904E8DFF7052_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m58F12783B1EF42ED420CC99E0585FA6ED046C4AD_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_Create_m81AF7F8FB3993C02C7AB93B292F6D7C65D8050AC (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384 ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystem__ctor_m7475F45C8D0D2B0E0FE0B91E45A03A0F6541138D (XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchor>::.ctor()
inline void List_1__ctor_m682623DC0033EAC5551C187880D6ACCC57983142 (List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor()
inline void List_1__ctor_mA9B1C7C77F5BADC0627DDA81747E01CA8F5030FF (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14*, const RuntimeMethod*))List_1__ctor_mA9B1C7C77F5BADC0627DDA81747E01CA8F5030FF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor()
inline void List_1__ctor_m1E0633DCBBB5A1F3AF4AA84B12C620A62407081D (List_1_t160F335B05E7692BA4234AFD249D62316B990635* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t160F335B05E7692BA4234AFD249D62316B990635*, const RuntimeMethod*))List_1__ctor_m1E0633DCBBB5A1F3AF4AA84B12C620A62407081D_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchor>::get_Count()
inline int32_t List_1_get_Count_m55F9DFF90B1F9806589176ACC2272325137D7479_inline (List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchor>::CopyTo(T[])
inline void List_1_CopyTo_m3F15BEB78D893E8545DB7E3E79E8A7EE2E5AB371 (List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* __this, SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2*, SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7*, const RuntimeMethod*))List_1_CopyTo_mDA4751F464411AB4C757C63C6EDBF4891BFD6891_gshared)(__this, ___0_array, method);
}
// System.Void System.Func`2<Qualcomm.Snapdragon.Spaces.SpatialAnchor,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m895AEA0FFF2182D101A389D0DEFBF38D3EC858C0 (Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Qualcomm.Snapdragon.Spaces.SpatialAnchor>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisSpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_m3A13620CF21F9ECC76045CB0EE8FB7FB6FFBD0ED (RuntimeObject* ___0_source, Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// System.UInt64 Qualcomm.Snapdragon.Spaces.SpatialAnchor::get_AnchorSpaceHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SpatialAnchor_get_AnchorSpaceHandle_mE8F3965555552781A06C6BC24362E3A277667520 (SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* __this, const RuntimeMethod* method) ;
// System.Tuple`2<UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState> Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryGetSpatialAnchorSpacePoseAndTrackingState(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* SpatialAnchorsFeature_TryGetSpatialAnchorSpacePoseAndTrackingState_mD664863791E7F1A5813CF9EEA1E9D7868A9118B6 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_anchorSpaceHandle, const RuntimeMethod* method) ;
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchor::UpdateSubsystemAnchorPoseAndTrackingState(System.Tuple`2<UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchor_UpdateSubsystemAnchorPoseAndTrackingState_mDD00EA979ED3C6DAB1140CAD072BCD22BADA7C29 (SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* __this, Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* ___0_poseAndState, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Add(T)
inline void List_1_Add_mC24DE096851AEDE481519F382ACBED033F68D73F_inline (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* __this, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14*, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82, const RuntimeMethod*))List_1_Add_mC24DE096851AEDE481519F382ACBED033F68D73F_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor>::ToArray()
inline XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8* List_1_ToArray_mBB373528ED218F661B25D7DB1341304445A732B7 (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* __this, const RuntimeMethod* method)
{
	return ((  XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8* (*) (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14*, const RuntimeMethod*))List_1_ToArray_mBB373528ED218F661B25D7DB1341304445A732B7_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(T[],Unity.Collections.Allocator)
inline void NativeArray_1__ctor_m11D688A3CCF590C123A379B9F4CFCD51CD65E876 (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A* __this, XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8* ___0_array, int32_t ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A*, XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8*, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m11D688A3CCF590C123A379B9F4CFCD51CD65E876_gshared)(__this, ___0_array, ___1_allocator, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>::ToArray()
inline TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* List_1_ToArray_m3CB45F40625A83042E827143810B98A862D21368 (List_1_t160F335B05E7692BA4234AFD249D62316B990635* __this, const RuntimeMethod* method)
{
	return ((  TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* (*) (List_1_t160F335B05E7692BA4234AFD249D62316B990635*, const RuntimeMethod*))List_1_ToArray_m3CB45F40625A83042E827143810B98A862D21368_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(T[],Unity.Collections.Allocator)
inline void NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715 (NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E* __this, TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* ___0_array, int32_t ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E*, TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0*, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_gshared)(__this, ___0_array, ___1_allocator, method);
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::CopyFrom(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>,Unity.Collections.Allocator)
inline TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931 TrackableChanges_1_CopyFrom_m5D8CC6A8E601C7AACFCD60AAFD39D828C11B1319 (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___0_added, NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___1_updated, NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___2_removed, int32_t ___3_allocator, const RuntimeMethod* method)
{
	return ((  TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931 (*) (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A, NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A, NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E, int32_t, const RuntimeMethod*))TrackableChanges_1_CopyFrom_m5D8CC6A8E601C7AACFCD60AAFD39D828C11B1319_gshared)(___0_added, ___1_updated, ___2_removed, ___3_allocator, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Clear()
inline void List_1_Clear_m6B4673E5C499167247CD6B09815C7BA11197A5F7_inline (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14*, const RuntimeMethod*))List_1_Clear_m6B4673E5C499167247CD6B09815C7BA11197A5F7_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>::Clear()
inline void List_1_Clear_m3D23AEC65C341831CFDFE2656D73BC43EAFBAB7A_inline (List_1_t160F335B05E7692BA4234AFD249D62316B990635* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t160F335B05E7692BA4234AFD249D62316B990635*, const RuntimeMethod*))List_1_Clear_m3D23AEC65C341831CFDFE2656D73BC43EAFBAB7A_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchor>::Add(T)
inline void List_1_Add_mBFB2398AAC501B87FD4DD8BB135317B410B87B24_inline (List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* __this, SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2*, SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.UInt64 Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryCreateSpatialAnchorHandle(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SpatialAnchorsFeature_TryCreateSpatialAnchorHandle_m4685D97C85E540F32B9B33712A19B3C4543AD359 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 XRAnchor_get_defaultValue_mF68ABF2D0EC8B54DD8D5333FCD56EEF14A985A9A_inline (const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mA3AC481E5A4A2ECA5CA0EE0EF14402D2B7805973 (U3CU3Ec__DisplayClass12_0_t4A75B306CBEEB639FDB932B596C5E96BB6AF4F9F* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::SingleOrDefault<Qualcomm.Snapdragon.Spaces.SpatialAnchor>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* Enumerable_SingleOrDefault_TisSpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_m4524B0C8E5EBAFE5D59B059326EF5DE407F15FE5 (RuntimeObject* ___0_source, Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE* ___1_predicate, const RuntimeMethod* method)
{
	return ((  SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* (*) (RuntimeObject*, Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE*, const RuntimeMethod*))Enumerable_SingleOrDefault_TisRuntimeObject_m96E15D999D3DAF8B31946255524EBB46907CFF17_gshared)(___0_source, ___1_predicate, method);
}
// System.UInt64 Qualcomm.Snapdragon.Spaces.SpatialAnchor::get_AnchorHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SpatialAnchor_get_AnchorHandle_m8FEEBED7F5E30675BAEF12E407A98517146BFDCC (SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* __this, const RuntimeMethod* method) ;
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryDestroySpatialAnchor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryDestroySpatialAnchor_mB19090DFCA8F13FFD7710A751387F959BC0D5C67 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_anchorHandle, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>::Add(T)
inline void List_1_Add_m64A9DC3111539F78DAC0B7DE3FCA2E697DC52DB0_inline (List_1_t160F335B05E7692BA4234AFD249D62316B990635* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t160F335B05E7692BA4234AFD249D62316B990635*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))List_1_Add_m64A9DC3111539F78DAC0B7DE3FCA2E697DC52DB0_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchor>::Remove(T)
inline bool List_1_Remove_m4418AC8A7D7AD5C183D1434F52F6A944A9E9E015 (List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* __this, SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2*, SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_m4BE1AD91726751D994E6FB864B231BE5D7D3F85F (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Qualcomm.Snapdragon.Spaces.SpatialAnchor>::GetEnumerator()
inline Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6 List_1_GetEnumerator_mDD99FA8E89F7A91AFDF78326B64B530338719CD4 (List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6 (*) (List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Qualcomm.Snapdragon.Spaces.SpatialAnchor>::Dispose()
inline void Enumerator_Dispose_m8711EE6EDB68F781AF7508D53F6A8739AA70B319 (Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Qualcomm.Snapdragon.Spaces.SpatialAnchor>::get_Current()
inline SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* Enumerator_get_Current_m1849CC9628E9820B1E154C8571087C7EB27E1F0B_inline (Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6* __this, const RuntimeMethod* method)
{
	return ((  SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* (*) (Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::op_Equality(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_op_Equality_m9E51E31C58CA710A1BD2E3AE1D2286E2FE5B3529 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_lhs, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Qualcomm.Snapdragon.Spaces.SpatialAnchor>::MoveNext()
inline bool Enumerator_MoveNext_m4AF4E3462FC0BBEADFF375FE85AFA952B562C931 (Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mEC1254B41F2C452FD31DE2DF6F9D8AA5A4E4FB94 (Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Contains(T)
inline bool List_1_Contains_mE904A9877FADE8FE2EF74E23ABA4012A6EA48C11 (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* __this, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14*, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82, const RuntimeMethod*))List_1_Contains_mE904A9877FADE8FE2EF74E23ABA4012A6EA48C11_gshared)(__this, ___0_item, method);
}
// System.UInt32 Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::RequestLayers(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SpacesOpenXRFeature_RequestLayers_m14C99CB5811B2F000D19FD2AE2BCDD2866FF5E88 (String_t* ___0_requestedLayers, const RuntimeMethod* method) ;
// System.IntPtr Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::Internal_GetInterceptedInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpatialMeshingFeature_Internal_GetInterceptedInstanceProcAddr_m9688A072EEBA614133E53F5A7FD25E1AD397029F (intptr_t ___0_xrGetInstanceProcAddr, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::Internal_RegisterMeshingLifecycleProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_Internal_RegisterMeshingLifecycleProvider_m5BD0977192D0C5323EA3A2BAD41BBE8DE4F18744 (const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::Internal_SetInstanceHandle(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_Internal_SetInstanceHandle_mAFCFE24FB40E7F7D108619005E2349A9EA80EFC1 (uint64_t ___0_instance, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::CreateSubsystem<UnityEngine.XR.XRMeshSubsystemDescriptor,UnityEngine.XR.XRMeshSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22*, String_t*, const RuntimeMethod*))OpenXRFeature_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m8962B65060EE47BA2A88FE24CDED2724A6F3C51B_gshared)(__this, ___0_descriptors, ___1_id, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::StopSubsystem<UnityEngine.XR.XRMeshSubsystem>()
inline void OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, const RuntimeMethod*))OpenXRFeature_StopSubsystem_TisRuntimeObject_m1728B76D0581F2DB06F23933C72937B0824A7A73_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::DestroySubsystem<UnityEngine.XR.XRMeshSubsystem>()
inline void OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, const RuntimeMethod*))OpenXRFeature_DestroySubsystem_TisRuntimeObject_m34F0E133C03B7EF23B5C1CA652929AF7753CD427_gshared)(__this, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::OnSessionCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesOpenXRFeature_OnSessionCreate_m36B81205F47352B84F2039C94CE58DBBB66A1804 (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, uint64_t ___0_sessionHandle, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::Internal_SetSessionHandle(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_Internal_SetSessionHandle_mA55D51A96361262F56449C9E27111C60F38F5022 (uint64_t ___0_session, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::OnAppSpaceChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesOpenXRFeature_OnAppSpaceChange_mB3B954691F79C6A6CCD5C2E900EB445696E7AC87 (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, uint64_t ___0_spaceHandle, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::Internal_SetSpaceHandle(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_Internal_SetSpaceHandle_mAB5E5F895CE3BBE833A2FBA2F256510DDDC197C0 (uint64_t ___0_space, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756 (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.XrSceneObserverCreateInfoMSFT::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrSceneObserverCreateInfoMSFT__ctor_m0AFC5A1189B4C5E151A642B0AACBD5E235E5815F (XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB* __this, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.XrSceneCreateInfoMSFT::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrSceneCreateInfoMSFT__ctor_mC36C9038DD64C3A1DA6F45FAC007F5EBA27D0582 (XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMeshingProvider_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetInterceptedInstanceProcAddr(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMeshingProvider_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL RegisterMeshingLifecycleProvider();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMeshingProvider_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetInstanceHandle(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMeshingProvider_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetSessionHandle(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMeshingProvider_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetSpaceHandle(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMeshingProvider_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL RegisterProviderWithSceneObserver(char*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMeshingProvider_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnregisterProviderWithSceneObserver(char*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_Awake_m21E040879F16C1478E6155F154E767DA1DAEBD4F (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5FC8231E7AD227BE95BEBC4BB2623D8F815985D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3CD14A511539DB2BB34275C9D59659B728CDC188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2751EE0511B835CA426BCDBFCC6D72ED9564730A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_GetFeature_TisSpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_m0DC4F3A332A2C2FAB3F7C7B6666326953FD05EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisSpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577_m357842F38EDBC52B4BFD82BDF74D7380456A06B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1046E554B5BA21F2A286E15E630D376A6854825);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449* V_0 = NULL;
	{
		// _feature = OpenXRSettings.Instance.GetFeature<SpatialAnchorsFeature>();
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_0;
		L_0 = OpenXRSettings_get_Instance_m0F645DB8A0ECC1325AD730F18479BCDCB92D1920(NULL);
		NullCheck(L_0);
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_1;
		L_1 = OpenXRSettings_GetFeature_TisSpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_m0DC4F3A332A2C2FAB3F7C7B6666326953FD05EC9(L_0, OpenXRSettings_GetFeature_TisSpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_m0DC4F3A332A2C2FAB3F7C7B6666326953FD05EC9_RuntimeMethod_var);
		__this->____feature_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____feature_4), (void*)L_1);
		// var subsystems = new List<SpatialAnchorsSubsystem>();
		List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449* L_2 = (List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449*)il2cpp_codegen_object_new(List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m5FC8231E7AD227BE95BEBC4BB2623D8F815985D1(L_2, List_1__ctor_m5FC8231E7AD227BE95BEBC4BB2623D8F815985D1_RuntimeMethod_var);
		V_0 = L_2;
		// SubsystemManager.GetInstances(subsystems);
		List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisSpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577_m357842F38EDBC52B4BFD82BDF74D7380456A06B7(L_3, SubsystemManager_GetInstances_TisSpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577_m357842F38EDBC52B4BFD82BDF74D7380456A06B7_RuntimeMethod_var);
		// if (subsystems.Count > 0) {
		List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m3CD14A511539DB2BB34275C9D59659B728CDC188_inline(L_4, List_1_get_Count_m3CD14A511539DB2BB34275C9D59659B728CDC188_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		// _subsystem = subsystems[0];
		List_1_t17602E75306962AC0C09518D8EFDCCE3324CD449* L_6 = V_0;
		NullCheck(L_6);
		SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577* L_7;
		L_7 = List_1_get_Item_m2751EE0511B835CA426BCDBFCC6D72ED9564730A(L_6, 0, List_1_get_Item_m2751EE0511B835CA426BCDBFCC6D72ED9564730A_RuntimeMethod_var);
		__this->____subsystem_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subsystem_5), (void*)L_7);
		goto IL_003f;
	}

IL_0034:
	{
		// Debug.LogError("Failed to get SpatialAnchorsSubsystem instance. Aborting SpacesSpatialAnchorStore initialization!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE1046E554B5BA21F2A286E15E630D376A6854825, NULL);
		// return;
		return;
	}

IL_003f:
	{
		// LoadStore();
		SpacesAnchorStore_LoadStore_m11896D71787E5BAA076CE9197DE226FFB5DABDF6(__this, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_Update_m01E7D6F42B463722C1FADC24B9BACE93FAB80E96 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06_mC1309DAD78DEC012EEC2A4F3CFEE6D6CA979DD67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m5C50B8D4215E1B4724013F89772FF132DD0AA46A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m6CDDB0AC5DAF992440B57108F532FEECD28D9A65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m4D7D5D4921AFC1AD5A45B76A30750343CFDAFEE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mE1C682F9621D237941F3AF3D07DD5ECC1EEAD5A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpacesAnchorStore_LoadSavedAnchorAsync_mCA4947513D33D0704355373DCEF03E4920A433F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpacesAnchorStore_SaveAnchorAsync_m34F1A3389F987583D0351F9BA53DC477B36E4210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* V_0 = NULL;
	LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B6_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B5_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B17_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B16_0 = NULL;
	{
		// if (_lastSaveAnchorData != null && Interlocked.Exchange(ref _lastSaveAnchorData.UsingResource, 1) == 0) {
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_0 = __this->____lastSaveAnchorData_10;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_1 = __this->____lastSaveAnchorData_10;
		NullCheck(L_1);
		int32_t* L_2 = (&L_1->___UsingResource_4);
		int32_t L_3;
		L_3 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_2, 1, NULL);
		if (L_3)
		{
			goto IL_0080;
		}
	}
	{
		// if (_lastSaveAnchorData.Success) {
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_4 = __this->____lastSaveAnchorData_10;
		NullCheck(L_4);
		bool L_5 = L_4->___Success_3;
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		// var provider = (SpatialAnchorsSubsystem.SpatialAnchorsProvider) _subsystem.GetProvider();
		SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577* L_6 = __this->____subsystem_5;
		Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* L_7;
		L_7 = SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F(L_6, SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F_RuntimeMethod_var);
		// provider.UpdateAnchorSavedName(_lastSaveAnchorData.Anchor.trackableId, _lastSaveAnchorData.AnchorName);
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_8 = __this->____lastSaveAnchorData_10;
		NullCheck(L_8);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_9 = L_8->___Anchor_0;
		NullCheck(L_9);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_10;
		L_10 = ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A(L_9, ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A_RuntimeMethod_var);
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_11 = __this->____lastSaveAnchorData_10;
		NullCheck(L_11);
		String_t* L_12 = L_11->___AnchorName_1;
		NullCheck(((SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1*)CastclassClass((RuntimeObject*)L_7, SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var)));
		SpatialAnchorsProvider_UpdateAnchorSavedName_m497685B1A1FC34271A9D1FCCAC011DEAD644A648(((SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1*)CastclassClass((RuntimeObject*)L_7, SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var)), L_10, L_12, NULL);
	}

IL_0058:
	{
		// _lastSaveAnchorData.OnSavedCallback?.Invoke(_lastSaveAnchorData.Success);
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_13 = __this->____lastSaveAnchorData_10;
		NullCheck(L_13);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_14 = L_13->___OnSavedCallback_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_15 = L_14;
		G_B5_0 = L_15;
		if (L_15)
		{
			G_B6_0 = L_15;
			goto IL_0069;
		}
	}
	{
		goto IL_0079;
	}

IL_0069:
	{
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_16 = __this->____lastSaveAnchorData_10;
		NullCheck(L_16);
		bool L_17 = L_16->___Success_3;
		NullCheck(G_B6_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B6_0, L_17, NULL);
	}

IL_0079:
	{
		// _lastSaveAnchorData = null;
		__this->____lastSaveAnchorData_10 = (SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastSaveAnchorData_10), (void*)(SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A*)NULL);
	}

IL_0080:
	{
		// if (_saveAnchorPendingQueue.Count > 0 && Interlocked.Exchange(ref _saveAnchorUsingResource, 1) == 0) {
		Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2* L_18 = __this->____saveAnchorPendingQueue_9;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Queue_1_get_Count_mE1C682F9621D237941F3AF3D07DD5ECC1EEAD5A7_inline(L_18, Queue_1_get_Count_mE1C682F9621D237941F3AF3D07DD5ECC1EEAD5A7_RuntimeMethod_var);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_00d3;
		}
	}
	{
		int32_t* L_20 = (&__this->____saveAnchorUsingResource_8);
		int32_t L_21;
		L_21 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_20, 1, NULL);
		if (L_21)
		{
			goto IL_00d3;
		}
	}
	{
		// var saveAnchorData = _saveAnchorPendingQueue.Dequeue();
		Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2* L_22 = __this->____saveAnchorPendingQueue_9;
		NullCheck(L_22);
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_23;
		L_23 = Queue_1_Dequeue_m5C50B8D4215E1B4724013F89772FF132DD0AA46A(L_22, Queue_1_Dequeue_m5C50B8D4215E1B4724013F89772FF132DD0AA46A_RuntimeMethod_var);
		V_0 = L_23;
		// Interlocked.Exchange(ref saveAnchorData.UsingResource, 1);
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_24 = V_0;
		NullCheck(L_24);
		int32_t* L_25 = (&L_24->___UsingResource_4);
		int32_t L_26;
		L_26 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_25, 1, NULL);
		// Thread thread = new Thread(SaveAnchorAsync);
		ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* L_27 = (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9*)il2cpp_codegen_object_new(ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718(L_27, __this, (intptr_t)((void*)SpacesAnchorStore_SaveAnchorAsync_m34F1A3389F987583D0351F9BA53DC477B36E4210_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_28 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700(L_28, L_27, NULL);
		// thread.Start(saveAnchorData);
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_29 = V_0;
		NullCheck(L_28);
		Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566(L_28, L_29, NULL);
		// _lastSaveAnchorData = saveAnchorData;
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_30 = V_0;
		__this->____lastSaveAnchorData_10 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastSaveAnchorData_10), (void*)L_30);
	}

IL_00d3:
	{
		// if (_lastLoadAnchorData != null && Interlocked.Exchange(ref _lastLoadAnchorData.UsingResource, 1) == 0) {
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_31 = __this->____lastLoadAnchorData_13;
		if (!L_31)
		{
			goto IL_01b6;
		}
	}
	{
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_32 = __this->____lastLoadAnchorData_13;
		NullCheck(L_32);
		int32_t* L_33 = (&L_32->___UsingResource_5);
		int32_t L_34;
		L_34 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_33, 1, NULL);
		if (L_34)
		{
			goto IL_01b6;
		}
	}
	{
		// if (_lastLoadAnchorData.Success) {
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_35 = __this->____lastLoadAnchorData_13;
		NullCheck(L_35);
		bool L_36 = L_35->___Success_4;
		if (!L_36)
		{
			goto IL_018e;
		}
	}
	{
		// GameObject go = new GameObject { name = _lastLoadAnchorData.AnchorName, transform = { position = Vector3.zero, rotation = Quaternion.identity}};
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_37, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = L_37;
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_39 = __this->____lastLoadAnchorData_13;
		NullCheck(L_39);
		String_t* L_40 = L_39->___AnchorName_0;
		NullCheck(L_38);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_38, L_40, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = L_38;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_42);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_42, L_43, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = L_41;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_44, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46;
		L_46 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_45);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_45, L_46, NULL);
		// go.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = L_44;
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)0, NULL);
		// var provider = (SpatialAnchorsSubsystem.SpatialAnchorsProvider) _subsystem.GetProvider();
		SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577* L_48 = __this->____subsystem_5;
		Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* L_49;
		L_49 = SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F(L_48, SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F_RuntimeMethod_var);
		// provider.SetPersistentAnchorCandidate(new SpatialAnchor(_lastLoadAnchorData.AnchorHandle, _lastLoadAnchorData.SpaceHandle, Pose.identity, _lastLoadAnchorData.AnchorName));
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_50 = __this->____lastLoadAnchorData_13;
		NullCheck(L_50);
		uint64_t L_51 = L_50->___AnchorHandle_1;
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_52 = __this->____lastLoadAnchorData_13;
		NullCheck(L_52);
		uint64_t L_53 = L_52->___SpaceHandle_2;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_54;
		L_54 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_55 = __this->____lastLoadAnchorData_13;
		NullCheck(L_55);
		String_t* L_56 = L_55->___AnchorName_0;
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_57 = (SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F*)il2cpp_codegen_object_new(SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		SpatialAnchor__ctor_mCE1DFED5316F7C86DA886D9F7D6FF6107DAD6CFE(L_57, L_51, L_53, L_54, L_56, NULL);
		NullCheck(((SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1*)CastclassClass((RuntimeObject*)L_49, SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var)));
		SpatialAnchorsProvider_SetPersistentAnchorCandidate_m39F58BBE288998D8DCF8668964036C32CD729E2A_inline(((SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1*)CastclassClass((RuntimeObject*)L_49, SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var)), L_57, NULL);
		// go.AddComponent<ARAnchor>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = L_47;
		NullCheck(L_58);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_59;
		L_59 = GameObject_AddComponent_TisARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06_mC1309DAD78DEC012EEC2A4F3CFEE6D6CA979DD67(L_58, GameObject_AddComponent_TisARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06_mC1309DAD78DEC012EEC2A4F3CFEE6D6CA979DD67_RuntimeMethod_var);
		// go.SetActive(true);
		NullCheck(L_58);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)1, NULL);
	}

IL_018e:
	{
		// _lastLoadAnchorData.OnLoadedCallback?.Invoke(_lastLoadAnchorData.Success);
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_60 = __this->____lastLoadAnchorData_13;
		NullCheck(L_60);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_61 = L_60->___OnLoadedCallback_3;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_62 = L_61;
		G_B16_0 = L_62;
		if (L_62)
		{
			G_B17_0 = L_62;
			goto IL_019f;
		}
	}
	{
		goto IL_01af;
	}

IL_019f:
	{
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_63 = __this->____lastLoadAnchorData_13;
		NullCheck(L_63);
		bool L_64 = L_63->___Success_4;
		NullCheck(G_B17_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B17_0, L_64, NULL);
	}

IL_01af:
	{
		// _lastLoadAnchorData = null;
		__this->____lastLoadAnchorData_13 = (LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastLoadAnchorData_13), (void*)(LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B*)NULL);
	}

IL_01b6:
	{
		// if (_loadAnchorPendingQueue.Count > 0 && Interlocked.Exchange(ref _loadAnchorUsingResource, 1) == 0) {
		Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280* L_65 = __this->____loadAnchorPendingQueue_12;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = Queue_1_get_Count_m4D7D5D4921AFC1AD5A45B76A30750343CFDAFEE3_inline(L_65, Queue_1_get_Count_m4D7D5D4921AFC1AD5A45B76A30750343CFDAFEE3_RuntimeMethod_var);
		if ((((int32_t)L_66) <= ((int32_t)0)))
		{
			goto IL_0209;
		}
	}
	{
		int32_t* L_67 = (&__this->____loadAnchorUsingResource_11);
		int32_t L_68;
		L_68 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_67, 1, NULL);
		if (L_68)
		{
			goto IL_0209;
		}
	}
	{
		// var loadAnchorData = _loadAnchorPendingQueue.Dequeue();
		Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280* L_69 = __this->____loadAnchorPendingQueue_12;
		NullCheck(L_69);
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_70;
		L_70 = Queue_1_Dequeue_m6CDDB0AC5DAF992440B57108F532FEECD28D9A65(L_69, Queue_1_Dequeue_m6CDDB0AC5DAF992440B57108F532FEECD28D9A65_RuntimeMethod_var);
		V_1 = L_70;
		// Interlocked.Exchange(ref loadAnchorData.UsingResource, 1);
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_71 = V_1;
		NullCheck(L_71);
		int32_t* L_72 = (&L_71->___UsingResource_5);
		int32_t L_73;
		L_73 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_72, 1, NULL);
		// Thread thread = new Thread(LoadSavedAnchorAsync);
		ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* L_74 = (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9*)il2cpp_codegen_object_new(ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		NullCheck(L_74);
		ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718(L_74, __this, (intptr_t)((void*)SpacesAnchorStore_LoadSavedAnchorAsync_mCA4947513D33D0704355373DCEF03E4920A433F5_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_75 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_75);
		Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700(L_75, L_74, NULL);
		// thread.Start(loadAnchorData);
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_76 = V_1;
		NullCheck(L_75);
		Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566(L_75, L_76, NULL);
		// _lastLoadAnchorData = loadAnchorData;
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_77 = V_1;
		__this->____lastLoadAnchorData_13 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastLoadAnchorData_13), (void*)L_77);
	}

IL_0209:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::LoadStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_LoadStore_m11896D71787E5BAA076CE9197DE226FFB5DABDF6 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, const RuntimeMethod* method) 
{
	{
		// if (_feature.TryCreateSpatialAnchorStoreConnection(out _spatialAnchorStore)) {
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_0 = __this->____feature_4;
		uint64_t* L_1 = (&__this->____spatialAnchorStore_6);
		NullCheck(L_0);
		bool L_2;
		L_2 = SpatialAnchorsFeature_TryCreateSpatialAnchorStoreConnection_m8B05FD91A3DAF31A4F95A89E125CDA8EC908BF32(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// _isStoreLoaded = true;
		__this->____isStoreLoaded_7 = (bool)1;
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::UnloadStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_UnloadStore_m54F54486ABE25C6B279F0773D994F2413A996485 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, const RuntimeMethod* method) 
{
	{
		// if (_isStoreLoaded) {
		bool L_0 = __this->____isStoreLoaded_7;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// _feature.TryDestroySpatialAnchorStoreConnection(_spatialAnchorStore);
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_1 = __this->____feature_4;
		uint64_t L_2 = __this->____spatialAnchorStore_6;
		NullCheck(L_1);
		bool L_3;
		L_3 = SpatialAnchorsFeature_TryDestroySpatialAnchorStoreConnection_m4BEC6B257130BC4C2B76859D043C7AA10CE5F8C3(L_1, L_2, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::ClearStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_ClearStore_m41494FDA4367B14DB783792FD8FA571E987B29BE (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isStoreLoaded && _feature.TryClearSpatialAnchorStoreMSFT(_spatialAnchorStore)) {
		bool L_0 = __this->____isStoreLoaded_7;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_1 = __this->____feature_4;
		uint64_t L_2 = __this->____spatialAnchorStore_6;
		NullCheck(L_1);
		bool L_3;
		L_3 = SpatialAnchorsFeature_TryClearSpatialAnchorStoreMSFT_mE2CB7E2C660A56E601C93EEBA9E86E3C6C34D656(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// var provider = (SpatialAnchorsSubsystem.SpatialAnchorsProvider)_subsystem.GetProvider();
		SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577* L_4 = __this->____subsystem_5;
		Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* L_5;
		L_5 = SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F(L_4, SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F_RuntimeMethod_var);
		// provider.ClearAllAnchorSavedNames();
		NullCheck(((SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1*)CastclassClass((RuntimeObject*)L_5, SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var)));
		SpatialAnchorsProvider_ClearAllAnchorSavedNames_mD29F12637E25DE3B8F2A7E81C4DAAE3A3F716DB4(((SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1*)CastclassClass((RuntimeObject*)L_5, SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var)), NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::SaveAnchor(UnityEngine.XR.ARFoundation.ARAnchor,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_SaveAnchor_mA318437CDC8B7BF2B010BEB009BEB58DC99F2557 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___0_anchor, String_t* ___1_anchorName, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___2_onSavedCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mF16B7EBDE797D2DD134FB11FAA8905ABBBA19747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isStoreLoaded) {
		bool L_0 = __this->____isStoreLoaded_7;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// _saveAnchorPendingQueue.Enqueue(new SaveAnchorData(anchor, anchorName, onSavedCallback));
		Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2* L_1 = __this->____saveAnchorPendingQueue_9;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_2 = ___0_anchor;
		String_t* L_3 = ___1_anchorName;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = ___2_onSavedCallback;
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_5 = (SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A*)il2cpp_codegen_object_new(SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SaveAnchorData__ctor_m7B1CF4ED4CEF7509D8F71D5220857DDAC7EC6350(L_5, L_2, L_3, L_4, NULL);
		NullCheck(L_1);
		Queue_1_Enqueue_mF16B7EBDE797D2DD134FB11FAA8905ABBBA19747(L_1, L_5, Queue_1_Enqueue_mF16B7EBDE797D2DD134FB11FAA8905ABBBA19747_RuntimeMethod_var);
		return;
	}

IL_001c:
	{
		// onSavedCallback?.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = ___2_onSavedCallback;
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = ___2_onSavedCallback;
		NullCheck(L_7);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_7, (bool)0, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::SaveAnchor(UnityEngine.XR.ARFoundation.ARAnchor,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_SaveAnchor_mEB5CAF37BDDC441EDB7CC4A8705987174BBD2ACB (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___0_anchor, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___1_onSavedCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int hashCode = anchor.trackableId.GetHashCode();
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_0 = ___0_anchor;
		NullCheck(L_0);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1;
		L_1 = ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A(L_0, ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A_RuntimeMethod_var);
		V_1 = L_1;
		int32_t L_2;
		L_2 = TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537((&V_1), NULL);
		V_0 = L_2;
		// hashCode = hashCode * 4999559 + DateTime.Now.GetHashCode();
		int32_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = DateTime_GetHashCode_m206A3B9394E6D089311A1A81305A5A1AB30B2D99((&V_2), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)4999559))), L_5));
		// SaveAnchor(anchor, hashCode.ToString(), onSavedCallback);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_6 = ___0_anchor;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8 = ___1_onSavedCallback;
		SpacesAnchorStore_SaveAnchor_mA318437CDC8B7BF2B010BEB009BEB58DC99F2557(__this, L_6, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::SaveAnchor(UnityEngine.XR.ARFoundation.ARAnchor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_SaveAnchor_m8D47C8AFD0C2930D5C5B9A415E7700DA3321AB76 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___0_anchor, String_t* ___1_anchorName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (_isStoreLoaded) {
		bool L_0 = __this->____isStoreLoaded_7;
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		// ulong anchorHandle = anchor.trackableId.subId1;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_1 = ___0_anchor;
		NullCheck(L_1);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2;
		L_2 = ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A(L_1, ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A_RuntimeMethod_var);
		V_1 = L_2;
		uint64_t L_3;
		L_3 = TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_inline((&V_1), NULL);
		V_0 = L_3;
		// if (_feature.TryPersistSpatialAnchor(_spatialAnchorStore, anchorHandle, anchorName)) {
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_4 = __this->____feature_4;
		uint64_t L_5 = __this->____spatialAnchorStore_6;
		uint64_t L_6 = V_0;
		String_t* L_7 = ___1_anchorName;
		NullCheck(L_4);
		bool L_8;
		L_8 = SpatialAnchorsFeature_TryPersistSpatialAnchor_m72087B23956BD80C912277F2E71E719BAA80D965(L_4, L_5, L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		// var provider = (SpatialAnchorsSubsystem.SpatialAnchorsProvider)_subsystem.GetProvider();
		SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577* L_9 = __this->____subsystem_5;
		Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* L_10;
		L_10 = SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F(L_9, SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F_RuntimeMethod_var);
		// provider.UpdateAnchorSavedName(anchor.trackableId, anchorName);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_11 = ___0_anchor;
		NullCheck(L_11);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_12;
		L_12 = ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A(L_11, ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A_RuntimeMethod_var);
		String_t* L_13 = ___1_anchorName;
		NullCheck(((SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1*)CastclassClass((RuntimeObject*)L_10, SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var)));
		SpatialAnchorsProvider_UpdateAnchorSavedName_m497685B1A1FC34271A9D1FCCAC011DEAD644A648(((SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1*)CastclassClass((RuntimeObject*)L_10, SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var)), L_12, L_13, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::SaveAnchorAsync(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_SaveAnchorAsync_m34F1A3389F987583D0351F9BA53DC477B36E4210 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, RuntimeObject* ___0_saveAnchorDataObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* V_0 = NULL;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var data = (SaveAnchorData) saveAnchorDataObject;
		RuntimeObject* L_0 = ___0_saveAnchorDataObject;
		V_0 = ((SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A*)CastclassClass((RuntimeObject*)L_0, SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A_il2cpp_TypeInfo_var));
		// if (_feature.TryPersistSpatialAnchor(_spatialAnchorStore, data.Anchor.trackableId.subId1, data.AnchorName)) {
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_1 = __this->____feature_4;
		uint64_t L_2 = __this->____spatialAnchorStore_6;
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_3 = V_0;
		NullCheck(L_3);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_4 = L_3->___Anchor_0;
		NullCheck(L_4);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_5;
		L_5 = ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A(L_4, ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A_RuntimeMethod_var);
		V_1 = L_5;
		uint64_t L_6;
		L_6 = TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_inline((&V_1), NULL);
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___AnchorName_1;
		NullCheck(L_1);
		bool L_9;
		L_9 = SpatialAnchorsFeature_TryPersistSpatialAnchor_m72087B23956BD80C912277F2E71E719BAA80D965(L_1, L_2, L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		// data.Success = true;
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_10 = V_0;
		NullCheck(L_10);
		L_10->___Success_3 = (bool)1;
	}

IL_003a:
	{
		// Interlocked.Exchange(ref data.UsingResource, 0);
		SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* L_11 = V_0;
		NullCheck(L_11);
		int32_t* L_12 = (&L_11->___UsingResource_4);
		int32_t L_13;
		L_13 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_12, 0, NULL);
		// Interlocked.Exchange(ref _saveAnchorUsingResource, 0);
		int32_t* L_14 = (&__this->____saveAnchorUsingResource_8);
		int32_t L_15;
		L_15 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_14, 0, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::DeleteSavedAnchor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_DeleteSavedAnchor_m814A7ABD19B50A6B7946AC248C27EE428AC874C0 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, String_t* ___0_anchorName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE96C0F142389FE724C22669FFCDF0493ED43364);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isStoreLoaded) {
		bool L_0 = __this->____isStoreLoaded_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (anchorName == string.Empty) {
		String_t* L_1 = ___0_anchorName;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// Debug.LogError("Can't delete an anchor with an empty name.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEE96C0F142389FE724C22669FFCDF0493ED43364, NULL);
		// return;
		return;
	}

IL_0021:
	{
		// _feature.TryUnpersistSpatialAnchor(_spatialAnchorStore, anchorName);
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_4 = __this->____feature_4;
		uint64_t L_5 = __this->____spatialAnchorStore_6;
		String_t* L_6 = ___0_anchorName;
		NullCheck(L_4);
		bool L_7;
		L_7 = SpatialAnchorsFeature_TryUnpersistSpatialAnchor_m8D4D1AD7BF28030DC6193DBAC13C5DD5105967C5(L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::LoadSavedAnchor(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_LoadSavedAnchor_m5D981A8880C785E09E57A89CDA747A93849FDE1D (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, String_t* ___0_anchorName, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___1_onLoadedCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mFA9F01640FC6B1862948D672D010436370E24367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA00A7596D36AA2EEBC965CDC36F6AA90012D6200);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isStoreLoaded) {
		bool L_0 = __this->____isStoreLoaded_7;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// onLoadedCallback?.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___1_onLoadedCallback;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___1_onLoadedCallback;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, (bool)0, NULL);
	}

IL_0012:
	{
		// return;
		return;
	}

IL_0013:
	{
		// if (anchorName == string.Empty) {
		String_t* L_3 = ___0_anchorName;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.LogError("Can't create an anchor with an empty name.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralA00A7596D36AA2EEBC965CDC36F6AA90012D6200, NULL);
		// onLoadedCallback?.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = ___1_onLoadedCallback;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = ___1_onLoadedCallback;
		NullCheck(L_7);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_7, (bool)0, NULL);
	}

IL_0034:
	{
		// return;
		return;
	}

IL_0035:
	{
		// _loadAnchorPendingQueue.Enqueue(new LoadAnchorData(anchorName, onLoadedCallback));
		Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280* L_8 = __this->____loadAnchorPendingQueue_12;
		String_t* L_9 = ___0_anchorName;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = ___1_onLoadedCallback;
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_11 = (LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B*)il2cpp_codegen_object_new(LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		LoadAnchorData__ctor_mCA956DC558E2139C8D449DA3AE7E09568CA921F1(L_11, L_9, L_10, NULL);
		NullCheck(L_8);
		Queue_1_Enqueue_mFA9F01640FC6B1862948D672D010436370E24367(L_8, L_11, Queue_1_Enqueue_mFA9F01640FC6B1862948D672D010436370E24367_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::LoadSavedAnchor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpacesAnchorStore_LoadSavedAnchor_m88B070A69A96D9B9A21EF992BC09C196C6FF4851 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, String_t* ___0_anchorName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06_mC1309DAD78DEC012EEC2A4F3CFEE6D6CA979DD67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA00A7596D36AA2EEBC965CDC36F6AA90012D6200);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// if (!_isStoreLoaded) {
		bool L_0 = __this->____isStoreLoaded_7;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (anchorName == string.Empty) {
		String_t* L_1 = ___0_anchorName;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// Debug.LogError("Can't create an anchor with an empty name.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralA00A7596D36AA2EEBC965CDC36F6AA90012D6200, NULL);
		// return false;
		return (bool)0;
	}

IL_0023:
	{
		// GameObject go = new GameObject { name = anchorName, transform = { position = Vector3.zero, rotation = Quaternion.identity}};
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		String_t* L_6 = ___0_anchorName;
		NullCheck(L_5);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_5, L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_5;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_7;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_11);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_12, NULL);
		V_0 = L_10;
		// go.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// var provider = (SpatialAnchorsSubsystem.SpatialAnchorsProvider)_subsystem.GetProvider();
		SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577* L_14 = __this->____subsystem_5;
		Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* L_15;
		L_15 = SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F(L_14, SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F_RuntimeMethod_var);
		// if (!provider.TryAddAnchorFromPersistentName(_spatialAnchorStore, anchorName)) {
		uint64_t L_16 = __this->____spatialAnchorStore_6;
		String_t* L_17 = ___0_anchorName;
		NullCheck(((SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1*)CastclassClass((RuntimeObject*)L_15, SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var)));
		bool L_18;
		L_18 = SpatialAnchorsProvider_TryAddAnchorFromPersistentName_m34B7DD94ACB60DC573DBC04CFE35204D91926F75(((SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1*)CastclassClass((RuntimeObject*)L_15, SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var)), L_16, L_17, NULL);
		if (L_18)
		{
			goto IL_007d;
		}
	}
	{
		// Destroy(go);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_19, NULL);
		// return false;
		return (bool)0;
	}

IL_007d:
	{
		// go.AddComponent<ARAnchor>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_0;
		NullCheck(L_20);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_21;
		L_21 = GameObject_AddComponent_TisARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06_mC1309DAD78DEC012EEC2A4F3CFEE6D6CA979DD67(L_20, GameObject_AddComponent_TisARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06_mC1309DAD78DEC012EEC2A4F3CFEE6D6CA979DD67_RuntimeMethod_var);
		// go.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_0;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)1, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::LoadSavedAnchorAsync(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_LoadSavedAnchorAsync_mCA4947513D33D0704355373DCEF03E4920A433F5 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, RuntimeObject* ___0_loadAnchorData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* V_0 = NULL;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		// LoadAnchorData data = (LoadAnchorData) loadAnchorData;
		RuntimeObject* L_0 = ___0_loadAnchorData;
		V_0 = ((LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B*)CastclassClass((RuntimeObject*)L_0, LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B_il2cpp_TypeInfo_var));
		// if (_feature.TryCreateSpatialAnchorFromPersistedNameMSFT(_spatialAnchorStore, data.AnchorName, out ulong spatialAnchorHandle)) {
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_1 = __this->____feature_4;
		uint64_t L_2 = __this->____spatialAnchorStore_6;
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___AnchorName_0;
		NullCheck(L_1);
		bool L_5;
		L_5 = SpatialAnchorsFeature_TryCreateSpatialAnchorFromPersistedNameMSFT_m564DFAA8B0802B284872BAC1B37B4C7AD060C73B(L_1, L_2, L_4, (&V_1), NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		// ulong anchorSpaceHandle = _feature.TryCreateSpatialAnchorSpaceHandle(spatialAnchorHandle);
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_6 = __this->____feature_4;
		uint64_t L_7 = V_1;
		NullCheck(L_6);
		uint64_t L_8;
		L_8 = SpatialAnchorsFeature_TryCreateSpatialAnchorSpaceHandle_mED98DCE76E5721F42ACE282B5E59F6B190A7B5F6(L_6, L_7, NULL);
		V_2 = L_8;
		// if (anchorSpaceHandle != 0) {
		uint64_t L_9 = V_2;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		// data.AnchorHandle = spatialAnchorHandle;
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_10 = V_0;
		uint64_t L_11 = V_1;
		NullCheck(L_10);
		L_10->___AnchorHandle_1 = L_11;
		// data.SpaceHandle = anchorSpaceHandle;
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_12 = V_0;
		uint64_t L_13 = V_2;
		NullCheck(L_12);
		L_12->___SpaceHandle_2 = L_13;
		// data.Success = true;
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_14 = V_0;
		NullCheck(L_14);
		L_14->___Success_4 = (bool)1;
		goto IL_0050;
	}

IL_0049:
	{
		// data.Success = false;
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_15 = V_0;
		NullCheck(L_15);
		L_15->___Success_4 = (bool)0;
	}

IL_0050:
	{
		// Interlocked.Exchange(ref data.UsingResource, 0);
		LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* L_16 = V_0;
		NullCheck(L_16);
		int32_t* L_17 = (&L_16->___UsingResource_5);
		int32_t L_18;
		L_18 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_17, 0, NULL);
		// Interlocked.Exchange(ref _loadAnchorUsingResource, 0);
		int32_t* L_19 = (&__this->____loadAnchorUsingResource_11);
		int32_t L_20;
		L_20 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_19, 0, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::LoadAllSavedAnchors(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore_LoadAllSavedAnchors_m06CACF8FDD130B02A9212FA75BCAA1DF594EC1CC (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_onLoadedCallback, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// if (!_isStoreLoaded) {
		bool L_0 = __this->____isStoreLoaded_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// string[] anchorNames = GetSavedAnchorNames();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = SpacesAnchorStore_GetSavedAnchorNames_mDF6A8348BC71BE9C4F60B6E3FFB24BDF7CE168F4(__this, NULL);
		// foreach (var anchorName in anchorNames) {
		V_0 = L_1;
		V_1 = 0;
		goto IL_0024;
	}

IL_0014:
	{
		// foreach (var anchorName in anchorNames) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// LoadSavedAnchor(anchorName, onLoadedCallback);
		String_t* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = ___0_onLoadedCallback;
		SpacesAnchorStore_LoadSavedAnchor_m5D981A8880C785E09E57A89CDA747A93849FDE1D(__this, L_6, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0024:
	{
		// foreach (var anchorName in anchorNames) {
		int32_t L_9 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}
}
// System.String[] Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::GetSavedAnchorNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* SpacesAnchorStore_GetSavedAnchorNames_mDF6A8348BC71BE9C4F60B6E3FFB24BDF7CE168F4 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// if (!_isStoreLoaded) {
		bool L_0 = __this->____isStoreLoaded_7;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return Array.Empty<string>();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		return L_1;
	}

IL_000e:
	{
		// _feature.TryEnumeratePersistedSpatialAnchorNames(_spatialAnchorStore, out string[] namesList);
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_2 = __this->____feature_4;
		uint64_t L_3 = __this->____spatialAnchorStore_6;
		NullCheck(L_2);
		bool L_4;
		L_4 = SpatialAnchorsFeature_TryEnumeratePersistedSpatialAnchorNames_m65120244410EBC374EAFE68DD7FC0BE692A44DD3(L_2, L_3, (&V_0), NULL);
		// return namesList;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		return L_5;
	}
}
// System.String Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::GetSavedAnchorNameFromARAnchor(UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpacesAnchorStore_GetSavedAnchorNameFromARAnchor_m004B1635DE15C4253A230E0F22E14A855699A054 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___0_anchor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isStoreLoaded) {
		bool L_0 = __this->____isStoreLoaded_7;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		// var provider = (SpatialAnchorsSubsystem.SpatialAnchorsProvider)_subsystem.GetProvider();
		SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577* L_2 = __this->____subsystem_5;
		Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* L_3;
		L_3 = SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F(L_2, SubsystemExtensions_GetProvider_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisProvider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C_m7C5F642735B5B3D0366BE562E162E6B6693E206F_RuntimeMethod_var);
		// return provider.TryGetSavedNameFromTrackableId(anchor.trackableId);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_4 = ___0_anchor;
		NullCheck(L_4);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_5;
		L_5 = ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A(L_4, ARTrackable_2_get_trackableId_m9D88A32C449E1226856A188BAA961706E948DF3A_RuntimeMethod_var);
		NullCheck(((SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1*)CastclassClass((RuntimeObject*)L_3, SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var)));
		String_t* L_6;
		L_6 = SpatialAnchorsProvider_TryGetSavedNameFromTrackableId_mF37BF9A04A5E321A4D8A91EF85D86EE5CEDCC875(((SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1*)CastclassClass((RuntimeObject*)L_3, SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_il2cpp_TypeInfo_var)), L_5, NULL);
		return L_6;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesAnchorStore__ctor_m0BFD7AF87D342C45A0F96FAA6BFF9174EF6C61F6 (SpacesAnchorStore_tE581F42441A85317061F5B6A903BA806A87C81F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mBCFE624359E8991718D9932AAB3461ED9D23754D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mD5C400533705C1F81C27FA2DFF322609E9BB8177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Queue<SaveAnchorData> _saveAnchorPendingQueue = new Queue<SaveAnchorData>();
		Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2* L_0 = (Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2*)il2cpp_codegen_object_new(Queue_1_tC5CDA18A82D7362369DDEE52618568D6B3257CE2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mBCFE624359E8991718D9932AAB3461ED9D23754D(L_0, Queue_1__ctor_mBCFE624359E8991718D9932AAB3461ED9D23754D_RuntimeMethod_var);
		__this->____saveAnchorPendingQueue_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____saveAnchorPendingQueue_9), (void*)L_0);
		// private Queue<LoadAnchorData> _loadAnchorPendingQueue = new Queue<LoadAnchorData>();
		Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280* L_1 = (Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280*)il2cpp_codegen_object_new(Queue_1_t2ED71B5BE183F39A91A6CBBF8F12706FF7CBF280_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue_1__ctor_mD5C400533705C1F81C27FA2DFF322609E9BB8177(L_1, Queue_1__ctor_mD5C400533705C1F81C27FA2DFF322609E9BB8177_RuntimeMethod_var);
		__this->____loadAnchorPendingQueue_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____loadAnchorPendingQueue_12), (void*)L_1);
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
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/SaveAnchorData::.ctor(UnityEngine.XR.ARFoundation.ARAnchor,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveAnchorData__ctor_m7B1CF4ED4CEF7509D8F71D5220857DDAC7EC6350 (SaveAnchorData_t1ADFFFC445E7E0B77FF339183F5BFFBD26AC958A* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___0_anchor, String_t* ___1_anchorName, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___2_onSavedCallback, const RuntimeMethod* method) 
{
	{
		// public SaveAnchorData(ARAnchor anchor, string anchorName, Action<bool> onSavedCallback) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Anchor = anchor;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_0 = ___0_anchor;
		__this->___Anchor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Anchor_0), (void*)L_0);
		// AnchorName = anchorName;
		String_t* L_1 = ___1_anchorName;
		__this->___AnchorName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AnchorName_1), (void*)L_1);
		// OnSavedCallback = onSavedCallback;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___2_onSavedCallback;
		__this->___OnSavedCallback_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnSavedCallback_2), (void*)L_2);
		// Success = false;
		__this->___Success_3 = (bool)0;
		// UsingResource = 0;
		__this->___UsingResource_4 = 0;
		// }
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
// System.Void Qualcomm.Snapdragon.Spaces.SpacesAnchorStore/LoadAnchorData::.ctor(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAnchorData__ctor_mCA956DC558E2139C8D449DA3AE7E09568CA921F1 (LoadAnchorData_t4BD98C638BA8E22DFCCE47C726308C635B18601B* __this, String_t* ___0_anchorName, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___1_onLoadedCallback, const RuntimeMethod* method) 
{
	{
		// public LoadAnchorData(string anchorName, Action<bool> onLoadedCallback) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// AnchorName = anchorName;
		String_t* L_0 = ___0_anchorName;
		__this->___AnchorName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AnchorName_0), (void*)L_0);
		// AnchorHandle = 0;
		__this->___AnchorHandle_1 = ((int64_t)0);
		// SpaceHandle = 0;
		__this->___SpaceHandle_2 = ((int64_t)0);
		// OnLoadedCallback = onLoadedCallback;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___1_onLoadedCallback;
		__this->___OnLoadedCallback_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnLoadedCallback_3), (void*)L_1);
		// Success = false;
		__this->___Success_4 = (bool)0;
		// UsingResource = 0;
		__this->___UsingResource_5 = 0;
		// }
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
// System.UInt64 Qualcomm.Snapdragon.Spaces.SpatialAnchor::get_AnchorHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SpatialAnchor_get_AnchorHandle_m8FEEBED7F5E30675BAEF12E407A98517146BFDCC (SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* __this, const RuntimeMethod* method) 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public ulong AnchorHandle => SubsystemAnchor.trackableId.subId1;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_0 = (&__this->___SubsystemAnchor_0);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1;
		L_1 = XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE_inline(L_0, NULL);
		V_0 = L_1;
		uint64_t L_2;
		L_2 = TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_inline((&V_0), NULL);
		return L_2;
	}
}
// System.UInt64 Qualcomm.Snapdragon.Spaces.SpatialAnchor::get_AnchorSpaceHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SpatialAnchor_get_AnchorSpaceHandle_mE8F3965555552781A06C6BC24362E3A277667520 (SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* __this, const RuntimeMethod* method) 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public ulong AnchorSpaceHandle => SubsystemAnchor.trackableId.subId2;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_0 = (&__this->___SubsystemAnchor_0);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1;
		L_1 = XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE_inline(L_0, NULL);
		V_0 = L_1;
		uint64_t L_2;
		L_2 = TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchor::.ctor(System.UInt64,System.UInt64,UnityEngine.Pose,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchor__ctor_mCE1DFED5316F7C86DA886D9F7D6FF6107DAD6CFE (SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* __this, uint64_t ___0_anchorHandle, uint64_t ___1_anchorSpaceHandle, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___2_pose, String_t* ___3_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SpatialAnchor(ulong anchorHandle, ulong anchorSpaceHandle, Pose pose, string name = "") {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SavedName = name;
		String_t* L_0 = ___3_name;
		__this->___SavedName_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SavedName_1), (void*)L_0);
		// SubsystemAnchor = new XRAnchor(new TrackableId(anchorHandle, anchorSpaceHandle), pose, TrackingState.None, IntPtr.Zero);
		uint64_t L_1 = ___0_anchorHandle;
		uint64_t L_2 = ___1_anchorSpaceHandle;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5((&L_3), L_1, L_2, /*hidden argument*/NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = ___2_pose;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_6;
		memset((&L_6), 0, sizeof(L_6));
		XRAnchor__ctor_mDD8A7F48E03A25972AA93D2C89C1D773635CA15B((&L_6), L_3, L_4, 0, L_5, /*hidden argument*/NULL);
		__this->___SubsystemAnchor_0 = L_6;
		// }
		return;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchor::UpdateSubsystemAnchorPoseAndTrackingState(System.Tuple`2<UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchor_UpdateSubsystemAnchorPoseAndTrackingState_mDD00EA979ED3C6DAB1140CAD072BCD22BADA7C29 (SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* __this, Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* ___0_poseAndState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_m69996795EF12EE0AE5AF64577557865B8266FC57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m23EA9CB73F9040C266AD7FABA432166C20C319D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (poseAndState.Item1.Equals(SubsystemAnchor.pose) && poseAndState.Item2 == SubsystemAnchor.trackingState) {
		Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* L_0 = ___0_poseAndState;
		NullCheck(L_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Tuple_2_get_Item1_m69996795EF12EE0AE5AF64577557865B8266FC57_inline(L_0, Tuple_2_get_Item1_m69996795EF12EE0AE5AF64577557865B8266FC57_RuntimeMethod_var);
		V_0 = L_1;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_2 = (&__this->___SubsystemAnchor_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = XRAnchor_get_pose_m2347783C1262EEFBC0B817EF0357FA4BB4BF053F_inline(L_2, NULL);
		bool L_4;
		L_4 = Pose_Equals_m31979E7A46252DBB620F4A0EA3BDBA61782DA498((&V_0), L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* L_5 = ___0_poseAndState;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Tuple_2_get_Item2_m23EA9CB73F9040C266AD7FABA432166C20C319D5_inline(L_5, Tuple_2_get_Item2_m23EA9CB73F9040C266AD7FABA432166C20C319D5_RuntimeMethod_var);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_7 = (&__this->___SubsystemAnchor_0);
		int32_t L_8;
		L_8 = XRAnchor_get_trackingState_m6124A26C36CA93C25C57548576CB00C1F496ED83_inline(L_7, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0030;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0030:
	{
		// SubsystemAnchor = new XRAnchor(SubsystemAnchor.trackableId, poseAndState.Item1, poseAndState.Item2, SubsystemAnchor.nativePtr);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_9 = (&__this->___SubsystemAnchor_0);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_10;
		L_10 = XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE_inline(L_9, NULL);
		Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* L_11 = ___0_poseAndState;
		NullCheck(L_11);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12;
		L_12 = Tuple_2_get_Item1_m69996795EF12EE0AE5AF64577557865B8266FC57_inline(L_11, Tuple_2_get_Item1_m69996795EF12EE0AE5AF64577557865B8266FC57_RuntimeMethod_var);
		Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* L_13 = ___0_poseAndState;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Tuple_2_get_Item2_m23EA9CB73F9040C266AD7FABA432166C20C319D5_inline(L_13, Tuple_2_get_Item2_m23EA9CB73F9040C266AD7FABA432166C20C319D5_RuntimeMethod_var);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_15 = (&__this->___SubsystemAnchor_0);
		intptr_t L_16;
		L_16 = XRAnchor_get_nativePtr_mC0551FA7E8DB8A0DA1EAE02D9B0BFD9D47389C26_inline(L_15, NULL);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_17;
		memset((&L_17), 0, sizeof(L_17));
		XRAnchor__ctor_mDD8A7F48E03A25972AA93D2C89C1D773635CA15B((&L_17), L_10, L_12, L_14, L_16, /*hidden argument*/NULL);
		__this->___SubsystemAnchor_0 = L_17;
		// return true;
		return (bool)1;
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
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::get_IsRequiringBaseRuntimeFeature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_get_IsRequiringBaseRuntimeFeature_mAF0EA26323F10AF6D2AAA0530A5BA1D21F0E21B4 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, const RuntimeMethod* method) 
{
	{
		// protected override bool IsRequiringBaseRuntimeFeature => true;
		return (bool)1;
	}
}
// System.String Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::GetXrLayersToLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpatialAnchorsFeature_GetXrLayersToLoad_m8604DA06AE0184EBE94C29E871C996E7D85F2C0B (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0263CDE65576EFB61171D212B2BDB5BD6E21FD25);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "XR_APILAYER_anchor";
		return _stringLiteral0263CDE65576EFB61171D212B2BDB5BD6E21FD25;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_OnInstanceCreate_m1965A9C370CC7E834B7B470F50115328CA4E072A (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_instanceHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_GetFeature_TisBaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4_mFBAD671AC603BC219554DB1975A41D3E64C81C6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320859545BEB023ECCB93969AB60B562A115E368);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FF72BE13A9011D3A7965EB4F58924E9C9F3CB41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// base.OnInstanceCreate(instanceHandle);
		uint64_t L_0 = ___0_instanceHandle;
		bool L_1;
		L_1 = SpacesOpenXRFeature_OnInstanceCreate_m0324D4194E2B85DE1F841E6F07FD59E585DAB336(__this, L_0, NULL);
		// _baseRuntimeFeature = OpenXRSettings.Instance.GetFeature<BaseRuntimeFeature>();
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_2;
		L_2 = OpenXRSettings_get_Instance_m0F645DB8A0ECC1325AD730F18479BCDCB92D1920(NULL);
		NullCheck(L_2);
		BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4* L_3;
		L_3 = OpenXRSettings_GetFeature_TisBaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4_mFBAD671AC603BC219554DB1975A41D3E64C81C6F(L_2, OpenXRSettings_GetFeature_TisBaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4_mFBAD671AC603BC219554DB1975A41D3E64C81C6F_RuntimeMethod_var);
		__this->____baseRuntimeFeature_27 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____baseRuntimeFeature_27), (void*)L_3);
		// var missingExtensions = GetMissingExtensions(FeatureExtensions);
		RuntimeObject* L_4;
		L_4 = SpacesOpenXRFeature_GetMissingExtensions_mC574B76CDC275762A5368CF9214ACA2DF6722361(__this, _stringLiteral320859545BEB023ECCB93969AB60B562A115E368, NULL);
		V_0 = L_4;
		// if (missingExtensions.Any()) {
		RuntimeObject* L_5 = V_0;
		bool L_6;
		L_6 = Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D(L_5, Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// Debug.Log(FeatureName + " is missing following extension in the runtime: " + String.Join(",", missingExtensions));
		RuntimeObject* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8FF72BE13A9011D3A7965EB4F58924E9C9F3CB41, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// return false;
		return (bool)0;
	}

IL_0048:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::OnSubsystemCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsFeature_OnSubsystemCreate_m279245F1D49560839F61A53CD97A7C67C220FB7F (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_CreateSubsystem_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_mB2088E2E277565FA29F7243004B2CAAF473C8436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D9970F43C3DFB2541D095311D8CF5F82577AC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override void OnSubsystemCreate() => CreateSubsystem<XRAnchorSubsystemDescriptor, XRAnchorSubsystem>(_spatialAnchorsSubsystemDescriptors, SpatialAnchorsSubsystem.ID);
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* L_0 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____spatialAnchorsSubsystemDescriptors_28;
		OpenXRFeature_CreateSubsystem_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_mB2088E2E277565FA29F7243004B2CAAF473C8436(__this, L_0, _stringLiteralF9D9970F43C3DFB2541D095311D8CF5F82577AC6, OpenXRFeature_CreateSubsystem_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_mB2088E2E277565FA29F7243004B2CAAF473C8436_RuntimeMethod_var);
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::OnSubsystemStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsFeature_OnSubsystemStop_m46BD0E199567738406AF385CC5B00E8259CB6239 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_StopSubsystem_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_m62C50016A0EAD59B9E18540141833571D489CCB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override void OnSubsystemStop() => StopSubsystem<XRAnchorSubsystem>();
		OpenXRFeature_StopSubsystem_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_m62C50016A0EAD59B9E18540141833571D489CCB6(__this, OpenXRFeature_StopSubsystem_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_m62C50016A0EAD59B9E18540141833571D489CCB6_RuntimeMethod_var);
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::OnSubsystemDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsFeature_OnSubsystemDestroy_m6D0EBDB38708E3C11B5250D5E8FD9147C45B10AF (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_DestroySubsystem_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_m9E64ED523D10A2C1B636102E9E361B08D7251943_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override void OnSubsystemDestroy()  => DestroySubsystem<XRAnchorSubsystem>();
		OpenXRFeature_DestroySubsystem_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_m9E64ED523D10A2C1B636102E9E361B08D7251943(__this, OpenXRFeature_DestroySubsystem_TisXRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF_m9E64ED523D10A2C1B636102E9E361B08D7251943_RuntimeMethod_var);
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::OnHookMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsFeature_OnHookMethods_m9A6036B77D73B75CFD691DD52CD72070CBCC5F45 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpacesOpenXRFeature_HookMethod_TisClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29_m652CA8164BEDBBAFF4B4E0898EE880E1B5AE2216_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A_mF82D10800AE33E88C5B8E3480F18E9C017112E2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6_m4DF92E6F2957E27F254E27AEE57D99DEC4760674_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697_m900BBF13E15ADAEBDFD97776EFB88D98F35BEC56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032_mE4FAB26AB3409665BBF6C9F760B5C05B4E8B2D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpacesOpenXRFeature_HookMethod_TisDestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058_m557FE401E005B09F516EC6057B2FB8BDA6A690BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpacesOpenXRFeature_HookMethod_TisDestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF_m9A9D9402128DE21D61E6A1B6CB855204E6D22601_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpacesOpenXRFeature_HookMethod_TisEnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6_m146E96CBE7A1AA6385D2EBA40B0188BDF286408E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpacesOpenXRFeature_HookMethod_TisLocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043_m793C943E240F9636122A62A529C33DA94FDE2B03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpacesOpenXRFeature_HookMethod_TisPersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54_m9080CF5F35616E5B6729B7517E7F05F83578202F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpacesOpenXRFeature_HookMethod_TisUnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC_m09A1B3FA7F67F3DB04480A3572E63898A49D965A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BD167829B298933C2E8DE3F777C7386513F8723);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27453113E4C46F39FAE188EB6BE821F8BE895AD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28ACD8FB093C165EACAF5BBF7017DBE986679E51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B9F1CB9CF23E3E0AC214B4D9D904450340D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B81DE069B2D1D9832F452DEB6AEF3696BBC31E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73858565ADE9E6C69230CC172BFE518B09A31AB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7409B41108DA3BD3FA802E1D1C35557644E36911);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AD16C3AA52251E09CD639EE929B7545F392408C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC06017740288603FFE2B95F8B770CF76DFB8A441);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2823FF80F294C2E27C72D59E1536D8595822A3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD9DA198A6553861EFC11CEC4F15FE43629CFC17);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HookMethod("xrCreateSpatialAnchorMSFT", out _xrCreateSpatialAnchorMSFTPtr);
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6_m4DF92E6F2957E27F254E27AEE57D99DEC4760674(__this, _stringLiteral27453113E4C46F39FAE188EB6BE821F8BE895AD4, (&((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrCreateSpatialAnchorMSFTPtr_29), SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6_m4DF92E6F2957E27F254E27AEE57D99DEC4760674_RuntimeMethod_var);
		// HookMethod("xrCreateSpatialAnchorSpaceMSFT", out _xrCreateSpatialAnchorSpaceMSFTPtr);
		SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697_m900BBF13E15ADAEBDFD97776EFB88D98F35BEC56(__this, _stringLiteral7409B41108DA3BD3FA802E1D1C35557644E36911, (&((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrCreateSpatialAnchorSpaceMSFTPtr_30), SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697_m900BBF13E15ADAEBDFD97776EFB88D98F35BEC56_RuntimeMethod_var);
		// HookMethod("xrDestroySpatialAnchorMSFT", out _xrDestroySpatialAnchorMSFTPtr);
		SpacesOpenXRFeature_HookMethod_TisDestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058_m557FE401E005B09F516EC6057B2FB8BDA6A690BF(__this, _stringLiteral73858565ADE9E6C69230CC172BFE518B09A31AB7, (&((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrDestroySpatialAnchorMSFTPtr_31), SpacesOpenXRFeature_HookMethod_TisDestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058_m557FE401E005B09F516EC6057B2FB8BDA6A690BF_RuntimeMethod_var);
		// HookMethod("xrLocateSpace", out _xrLocateSpacePtr);
		SpacesOpenXRFeature_HookMethod_TisLocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043_m793C943E240F9636122A62A529C33DA94FDE2B03(__this, _stringLiteral28ACD8FB093C165EACAF5BBF7017DBE986679E51, (&((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrLocateSpacePtr_39), SpacesOpenXRFeature_HookMethod_TisLocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043_m793C943E240F9636122A62A529C33DA94FDE2B03_RuntimeMethod_var);
		// HookMethod("xrCreateSpatialAnchorStoreConnectionMSFT", out _xrCreateSpatialAnchorStoreConnectionMSFT);
		SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032_mE4FAB26AB3409665BBF6C9F760B5C05B4E8B2D99(__this, _stringLiteral38B9F1CB9CF23E3E0AC214B4D9D904450340D969, (&((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrCreateSpatialAnchorStoreConnectionMSFT_32), SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032_mE4FAB26AB3409665BBF6C9F760B5C05B4E8B2D99_RuntimeMethod_var);
		// HookMethod("xrDestroySpatialAnchorStoreConnectionMSFT", out _xrDestroySpatialAnchorStoreConnectionMSFT);
		SpacesOpenXRFeature_HookMethod_TisDestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF_m9A9D9402128DE21D61E6A1B6CB855204E6D22601(__this, _stringLiteral1BD167829B298933C2E8DE3F777C7386513F8723, (&((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrDestroySpatialAnchorStoreConnectionMSFT_33), SpacesOpenXRFeature_HookMethod_TisDestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF_m9A9D9402128DE21D61E6A1B6CB855204E6D22601_RuntimeMethod_var);
		// HookMethod("xrPersistSpatialAnchorMSFT", out _xrPersistSpatialAnchorMSFT);
		SpacesOpenXRFeature_HookMethod_TisPersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54_m9080CF5F35616E5B6729B7517E7F05F83578202F(__this, _stringLiteral5B81DE069B2D1D9832F452DEB6AEF3696BBC31E5, (&((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrPersistSpatialAnchorMSFT_34), SpacesOpenXRFeature_HookMethod_TisPersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54_m9080CF5F35616E5B6729B7517E7F05F83578202F_RuntimeMethod_var);
		// HookMethod("xrUnpersistSpatialAnchorMSFT", out _xrUnpersistSpatialAnchorMSFT);
		SpacesOpenXRFeature_HookMethod_TisUnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC_m09A1B3FA7F67F3DB04480A3572E63898A49D965A(__this, _stringLiteralC06017740288603FFE2B95F8B770CF76DFB8A441, (&((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrUnpersistSpatialAnchorMSFT_35), SpacesOpenXRFeature_HookMethod_TisUnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC_m09A1B3FA7F67F3DB04480A3572E63898A49D965A_RuntimeMethod_var);
		// HookMethod("xrEnumeratePersistedSpatialAnchorNamesMSFT", out _xrEnumeratePersistedSpatialAnchorNamesMSFT);
		SpacesOpenXRFeature_HookMethod_TisEnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6_m146E96CBE7A1AA6385D2EBA40B0188BDF286408E(__this, _stringLiteralCD9DA198A6553861EFC11CEC4F15FE43629CFC17, (&((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrEnumeratePersistedSpatialAnchorNamesMSFT_36), SpacesOpenXRFeature_HookMethod_TisEnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6_m146E96CBE7A1AA6385D2EBA40B0188BDF286408E_RuntimeMethod_var);
		// HookMethod("xrCreateSpatialAnchorFromPersistedNameMSFT", out _xrCreateSpatialAnchorFromPersistedNameMSFT);
		SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A_mF82D10800AE33E88C5B8E3480F18E9C017112E2E(__this, _stringLiteralC2823FF80F294C2E27C72D59E1536D8595822A3A, (&((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrCreateSpatialAnchorFromPersistedNameMSFT_37), SpacesOpenXRFeature_HookMethod_TisCreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A_mF82D10800AE33E88C5B8E3480F18E9C017112E2E_RuntimeMethod_var);
		// HookMethod("xrClearSpatialAnchorStoreMSFT", out _xrClearSpatialAnchorStoreMSFT);
		SpacesOpenXRFeature_HookMethod_TisClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29_m652CA8164BEDBBAFF4B4E0898EE880E1B5AE2216(__this, _stringLiteral7AD16C3AA52251E09CD639EE929B7545F392408C, (&((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrClearSpatialAnchorStoreMSFT_38), SpacesOpenXRFeature_HookMethod_TisClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29_m652CA8164BEDBBAFF4B4E0898EE880E1B5AE2216_RuntimeMethod_var);
		// }
		return;
	}
}
// System.UInt64 Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryCreateSpatialAnchorHandle(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SpatialAnchorsFeature_TryCreateSpatialAnchorHandle_m4685D97C85E540F32B9B33712A19B3C4543AD359 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8625B69117EC8CC48C2A74C32449392F5AAC588);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// ulong anchorHandle = 0;
		V_0 = ((int64_t)0);
		// if (_xrCreateSpatialAnchorMSFTPtr != null) {
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* L_0 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrCreateSpatialAnchorMSFTPtr_29;
		if (!L_0)
		{
			goto IL_005e;
		}
	}
	{
		// var spatialAnchorCreateInfo = new XrSpatialAnchorCreateInfoMSFT(pose, SpaceHandle, _baseRuntimeFeature.PredictedDisplayTime);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = ___0_pose;
		uint64_t L_2;
		L_2 = SpacesOpenXRFeature_get_SpaceHandle_m3A8C3EA515461E2D805C79E15857736C89CF87D0_inline(__this, NULL);
		BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4* L_3 = __this->____baseRuntimeFeature_27;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = BaseRuntimeFeature_get_PredictedDisplayTime_m432B805A627B7F73C14298F21CE791AA90999DAC_inline(L_3, NULL);
		XrSpatialAnchorCreateInfoMSFT__ctor_m30BEA3DC5CBAF77172B5CF78783DC2A0A4441DC6((&V_1), L_1, L_2, L_4, NULL);
		// var callResult = _xrCreateSpatialAnchorMSFTPtr(SessionHandle, spatialAnchorCreateInfo, ref anchorHandle);
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* L_5 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrCreateSpatialAnchorMSFTPtr_29;
		uint64_t L_6;
		L_6 = SpacesOpenXRFeature_get_SessionHandle_mC1D5AE58DB4A5326847DA40475D9459B6AF58F16_inline(__this, NULL);
		XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87 L_7 = V_1;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = CreateSpatialAnchorMSFTDelegate_Invoke_m360D2AD6BC6A9FCD2DBE1323F109BB0A392647B0_inline(L_5, L_6, L_7, (&V_0), NULL);
		V_2 = L_8;
		// if (callResult != XrResult.XR_SUCCESS) {
		int32_t L_9 = V_2;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		// Debug.LogError("Creating Spatial Anchor failed with error: " + Enum.GetName(typeof(XrResult), callResult));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var, &L_13);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = Enum_GetName_m05FE85181853F756BA6BB2C033DD3590E6114D29(L_11, L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE8625B69117EC8CC48C2A74C32449392F5AAC588, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_16, NULL);
	}

IL_005e:
	{
		// return anchorHandle;
		uint64_t L_17 = V_0;
		return L_17;
	}
}
// System.UInt64 Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryCreateSpatialAnchorSpaceHandle(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SpatialAnchorsFeature_TryCreateSpatialAnchorSpaceHandle_mED98DCE76E5721F42ACE282B5E59F6B190A7B5F6 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_anchorHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FE4A52579EDBC97BD81EEB8651E5D831CB96E95);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// ulong anchorSpaceHandle = 0;
		V_0 = ((int64_t)0);
		// if (_xrCreateSpatialAnchorSpaceMSFTPtr != null) {
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* L_0 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrCreateSpatialAnchorSpaceMSFTPtr_30;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		// var spatialAnchorSpaceCreateInfo = new XrSpatialAnchorSpaceCreateInfoMSFT(anchorHandle);
		uint64_t L_1 = ___0_anchorHandle;
		XrSpatialAnchorSpaceCreateInfoMSFT__ctor_m0E7262C30F18E0E1FE14CBC5E9F2DEDBE55EC70E((&V_1), L_1, NULL);
		// var callResult = _xrCreateSpatialAnchorSpaceMSFTPtr(SessionHandle, spatialAnchorSpaceCreateInfo, ref anchorSpaceHandle);
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* L_2 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrCreateSpatialAnchorSpaceMSFTPtr_30;
		uint64_t L_3;
		L_3 = SpacesOpenXRFeature_get_SessionHandle_mC1D5AE58DB4A5326847DA40475D9459B6AF58F16_inline(__this, NULL);
		XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE L_4 = V_1;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = CreateSpatialAnchorSpaceMSFTDelegate_Invoke_m83C7DD3FD8A7B5167C7C927E20E644E323CCAF0B_inline(L_2, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		// if (callResult != XrResult.XR_SUCCESS) {
		int32_t L_6 = V_2;
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		// Debug.LogError("Creating Spatial Anchor Space failed with error: " + Enum.GetName(typeof(XrResult), callResult));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var, &L_10);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = Enum_GetName_m05FE85181853F756BA6BB2C033DD3590E6114D29(L_8, L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4FE4A52579EDBC97BD81EEB8651E5D831CB96E95, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_13, NULL);
	}

IL_004d:
	{
		// return anchorSpaceHandle;
		uint64_t L_14 = V_0;
		return L_14;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryDestroySpatialAnchor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryDestroySpatialAnchor_mB19090DFCA8F13FFD7710A751387F959BC0D5C67 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_anchorHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54DFA1D178E216AA2B40713E9051E3DB672F6066);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_xrDestroySpatialAnchorMSFTPtr != null) {
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* L_0 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrDestroySpatialAnchorMSFTPtr_31;
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		// var callResult = _xrDestroySpatialAnchorMSFTPtr(anchorHandle);
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* L_1 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrDestroySpatialAnchorMSFTPtr_31;
		uint64_t L_2 = ___0_anchorHandle;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = DestroySpatialAnchorMSFTDelegate_Invoke_mD43C523B6B300A640A89403B0740723BF92F7579_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// if (callResult == XrResult.XR_SUCCESS) {
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0018:
	{
		// Debug.LogError("Destroying Spatial Anchor failed with error: " + Enum.GetName(typeof(XrResult), callResult));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var, &L_8);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = Enum_GetName_m05FE85181853F756BA6BB2C033DD3590E6114D29(L_6, L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral54DFA1D178E216AA2B40713E9051E3DB672F6066, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_11, NULL);
	}

IL_003c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Tuple`2<UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState> Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryGetSpatialAnchorSpacePoseAndTrackingState(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* SpatialAnchorsFeature_TryGetSpatialAnchorSpacePoseAndTrackingState_mD664863791E7F1A5813CF9EEA1E9D7868A9118B6 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_anchorSpaceHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2__ctor_m1670B56AEE76DB94F787F3081A471B00BD8621B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12DBF631E149291A3FF90F48DE43CBFC6CA2AE85);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* V_0 = NULL;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// var returnValue = new Tuple<Pose, TrackingState>(new Pose(), TrackingState.None);
		il2cpp_codegen_initobj((&V_1), sizeof(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = V_1;
		Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* L_1 = (Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18*)il2cpp_codegen_object_new(Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Tuple_2__ctor_m1670B56AEE76DB94F787F3081A471B00BD8621B8(L_1, L_0, 0, Tuple_2__ctor_m1670B56AEE76DB94F787F3081A471B00BD8621B8_RuntimeMethod_var);
		V_0 = L_1;
		// if (_xrLocateSpacePtr != null) {
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* L_2 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrLocateSpacePtr_39;
		if (!L_2)
		{
			goto IL_0086;
		}
	}
	{
		// var spaceLocation = new XrSpaceLocation();
		il2cpp_codegen_initobj((&V_2), sizeof(XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F));
		// spaceLocation.InitStructureType();
		XrSpaceLocation_InitStructureType_m42DB29E751707B06F9BD6F9D572DF0F5B9EC5466((&V_2), NULL);
		// var callResult = _xrLocateSpacePtr(anchorSpaceHandle, SpaceHandle, _baseRuntimeFeature.PredictedDisplayTime, ref spaceLocation);
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* L_3 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrLocateSpacePtr_39;
		uint64_t L_4 = ___0_anchorSpaceHandle;
		uint64_t L_5;
		L_5 = SpacesOpenXRFeature_get_SpaceHandle_m3A8C3EA515461E2D805C79E15857736C89CF87D0_inline(__this, NULL);
		BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4* L_6 = __this->____baseRuntimeFeature_27;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = BaseRuntimeFeature_get_PredictedDisplayTime_m432B805A627B7F73C14298F21CE791AA90999DAC_inline(L_6, NULL);
		NullCheck(L_3);
		int32_t L_8;
		L_8 = LocateSpaceDelegate_Invoke_m09F2C746A247677A863DA20FE8FDDE4E5245F8C5_inline(L_3, L_4, L_5, L_7, (&V_2), NULL);
		V_3 = L_8;
		// if (callResult == XrResult.XR_SUCCESS) {
		int32_t L_9 = V_3;
		if (L_9)
		{
			goto IL_0062;
		}
	}
	{
		// var pose = spaceLocation.GetPose();
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		L_10 = XrSpaceLocation_GetPose_m45AE7E0E2ADECD3E177598478CDAD84EC9A6E2FA((&V_2), NULL);
		// var trackingState = spaceLocation.GetTrackingState();
		int32_t L_11;
		L_11 = XrSpaceLocation_GetTrackingState_mC12F5FB6F53F113B8717D98F01ED775F6AA4D536((&V_2), NULL);
		V_4 = L_11;
		// returnValue = new Tuple<Pose, TrackingState>(pose, trackingState);
		int32_t L_12 = V_4;
		Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* L_13 = (Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18*)il2cpp_codegen_object_new(Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Tuple_2__ctor_m1670B56AEE76DB94F787F3081A471B00BD8621B8(L_13, L_10, L_12, Tuple_2__ctor_m1670B56AEE76DB94F787F3081A471B00BD8621B8_RuntimeMethod_var);
		V_0 = L_13;
		goto IL_0086;
	}

IL_0062:
	{
		// Debug.LogError("Locating Spatial Anchor Space failed with error: " + Enum.GetName(typeof(XrResult), callResult));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var, &L_17);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = Enum_GetName_m05FE85181853F756BA6BB2C033DD3590E6114D29(L_15, L_18, NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral12DBF631E149291A3FF90F48DE43CBFC6CA2AE85, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_20, NULL);
	}

IL_0086:
	{
		// return returnValue;
		Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* L_21 = V_0;
		return L_21;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryCreateSpatialAnchorStoreConnection(System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryCreateSpatialAnchorStoreConnection_m8B05FD91A3DAF31A4F95A89E125CDA8EC908BF32 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t* ___0_spatialAnchorStore, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80A60F67E45968ADC4421C8C440C0B2EA21ED295);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0B938CC10F3ACE4BBE04B8ED4EB1E697A0453DC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// spatialAnchorStore = 0;
		uint64_t* L_0 = ___0_spatialAnchorStore;
		*((int64_t*)L_0) = (int64_t)((int64_t)0);
		// if (_xrCreateSpatialAnchorStoreConnectionMSFT == null) {
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* L_1 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrCreateSpatialAnchorStoreConnectionMSFT_32;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogError("xrCreateSpatialAnchorStoreConnectionMSFT method not found!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral80A60F67E45968ADC4421C8C440C0B2EA21ED295, NULL);
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// XrResult result = _xrCreateSpatialAnchorStoreConnectionMSFT(SessionHandle, ref spatialAnchorStore);
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* L_2 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrCreateSpatialAnchorStoreConnectionMSFT_32;
		uint64_t L_3;
		L_3 = SpacesOpenXRFeature_get_SessionHandle_mC1D5AE58DB4A5326847DA40475D9459B6AF58F16_inline(__this, NULL);
		uint64_t* L_4 = ___0_spatialAnchorStore;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = CreateSpatialAnchorStoreConnectionMSFTDelegate_Invoke_m968E41F34BB96E29AFDA75A7F60C001C8768FB7A_inline(L_2, L_3, L_4, NULL);
		V_0 = L_5;
		// if (result != XrResult.XR_SUCCESS) {
		int32_t L_6 = V_0;
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// Debug.LogError("Failed to create spatial anchor store connection: " + result);
		Il2CppFakeBox<int32_t> L_7(XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF0B938CC10F3ACE4BBE04B8ED4EB1E697A0453DC, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryDestroySpatialAnchorStoreConnection(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryDestroySpatialAnchorStoreConnection_m4BEC6B257130BC4C2B76859D043C7AA10CE5F8C3 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C34943E579AFC840667A592188870A70A94491D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral915F1B31898382A9071FC5780B3D0C58D1A9175E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_xrDestroySpatialAnchorStoreConnectionMSFT == null) {
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* L_0 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrDestroySpatialAnchorStoreConnectionMSFT_33;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("xrDestroySpatialAnchorStoreConnectionMSFT method not found!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral915F1B31898382A9071FC5780B3D0C58D1A9175E, NULL);
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// XrResult result = _xrDestroySpatialAnchorStoreConnectionMSFT(spatialAnchorStore);
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* L_1 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrDestroySpatialAnchorStoreConnectionMSFT_33;
		uint64_t L_2 = ___0_spatialAnchorStore;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = DestroySpatialAnchorStoreConnectionMSFTDelegate_Invoke_mEFB181C09A6237E3F36CB3887981360C060A54C0_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// if (result != XrResult.XR_SUCCESS) {
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// Debug.LogError("Failed to destroy spatial anchor store connection: " + result);
		Il2CppFakeBox<int32_t> L_5(XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5C34943E579AFC840667A592188870A70A94491D, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryClearSpatialAnchorStoreMSFT(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryClearSpatialAnchorStoreMSFT_mE2CB7E2C660A56E601C93EEBA9E86E3C6C34D656 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31F9F6F608BA218BA4D5A3531EF0FB899057AA84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6D9A9E6E972A1D503F069AA3E597BFACBD6ABA8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_xrClearSpatialAnchorStoreMSFT == null) {
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* L_0 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrClearSpatialAnchorStoreMSFT_38;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("xrClearSpatialAnchorStoreMSFT method not found!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralA6D9A9E6E972A1D503F069AA3E597BFACBD6ABA8, NULL);
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// XrResult result = _xrClearSpatialAnchorStoreMSFT(spatialAnchorStore);
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* L_1 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrClearSpatialAnchorStoreMSFT_38;
		uint64_t L_2 = ___0_spatialAnchorStore;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = ClearSpatialAnchorStoreMSFTDelegate_Invoke_m1A2CD0184B4A8D1F231BE3F57EF07CBA20C62AA1_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// if (result != XrResult.XR_SUCCESS) {
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// Debug.LogError("Failed to clear spatial anchor store: " + result);
		Il2CppFakeBox<int32_t> L_5(XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral31F9F6F608BA218BA4D5A3531EF0FB899057AA84, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryPersistSpatialAnchor(System.UInt64,System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryPersistSpatialAnchor_m72087B23956BD80C912277F2E71E719BAA80D965 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_spatialAnchorStore, uint64_t ___1_spatialAnchorHandle, String_t* ___2_anchorName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6248E5925278513527B27D5AF71EFFD0B663532C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE00476386CF0930C51BAA57740620E1B0D914A96);
		s_Il2CppMethodInitialized = true;
	}
	XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (_xrPersistSpatialAnchorMSFT == null) {
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* L_0 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrPersistSpatialAnchorMSFT_34;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("xrPersistSpatialAnchorMSFT method not found!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6248E5925278513527B27D5AF71EFFD0B663532C, NULL);
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// XrSpatialAnchorPersistenceInfoMSFT info = new XrSpatialAnchorPersistenceInfoMSFT(anchorName, spatialAnchorHandle);
		String_t* L_1 = ___2_anchorName;
		uint64_t L_2 = ___1_spatialAnchorHandle;
		XrSpatialAnchorPersistenceInfoMSFT__ctor_m597F42F50F6786918CF94BA946517678E9E2557B((&V_0), L_1, L_2, NULL);
		// XrResult result = _xrPersistSpatialAnchorMSFT(spatialAnchorStore, ref info);
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* L_3 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrPersistSpatialAnchorMSFT_34;
		uint64_t L_4 = ___0_spatialAnchorStore;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = PersistSpatialAnchorMSFTDelegate_Invoke_m629801285D0E38414C2A1E7537960F98D5CB887B_inline(L_3, L_4, (&V_0), NULL);
		V_1 = L_5;
		// if (result != XrResult.XR_SUCCESS) {
		int32_t L_6 = V_1;
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		// Debug.LogError("Failed to persist spatial anchor: " + result);
		Il2CppFakeBox<int32_t> L_7(XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE00476386CF0930C51BAA57740620E1B0D914A96, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
		// return false;
		return (bool)0;
	}

IL_004b:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryUnpersistSpatialAnchor(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryUnpersistSpatialAnchor_m8D4D1AD7BF28030DC6193DBAC13C5DD5105967C5 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_spatialAnchorStore, String_t* ___1_anchorName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral099A2CB2E419C642ABAAD41487335BEEB5FB298A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA0D2B9C7A43C887E96E30EAA79E23F4C7435A8F);
		s_Il2CppMethodInitialized = true;
	}
	XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (_xrUnpersistSpatialAnchorMSFT == null) {
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* L_0 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrUnpersistSpatialAnchorMSFT_35;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("xrUnpersistSpatialAnchorMSFT method not found!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralDA0D2B9C7A43C887E96E30EAA79E23F4C7435A8F, NULL);
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// XrSpatialAnchorPersistenceNameMSFT spatialAnchorPersistenceName = new XrSpatialAnchorPersistenceNameMSFT(anchorName);
		String_t* L_1 = ___1_anchorName;
		XrSpatialAnchorPersistenceNameMSFT__ctor_m79DF56CBF47872031AD00EFF1B94980060D679C8_inline((&V_0), L_1, NULL);
		// XrResult result = _xrUnpersistSpatialAnchorMSFT(spatialAnchorStore, ref spatialAnchorPersistenceName);
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* L_2 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrUnpersistSpatialAnchorMSFT_35;
		uint64_t L_3 = ___0_spatialAnchorStore;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = UnpersistSpatialAnchorMSFTDelegate_Invoke_m574686A42D506A5CFF44232D1040363433728E28_inline(L_2, L_3, (&V_0), NULL);
		V_1 = L_4;
		// if (result != XrResult.XR_SUCCESS) {
		int32_t L_5 = V_1;
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// Debug.LogError("Failed to unpersist spatial anchor: " + result);
		Il2CppFakeBox<int32_t> L_6(XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral099A2CB2E419C642ABAAD41487335BEEB5FB298A, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_8, NULL);
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryCreateSpatialAnchorFromPersistedNameMSFT(System.UInt64,System.String,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryCreateSpatialAnchorFromPersistedNameMSFT_m564DFAA8B0802B284872BAC1B37B4C7AD060C73B (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_spatialAnchorStore, String_t* ___1_spatialAnchorName, uint64_t* ___2_spatialAnchor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C570AB7E857CCA2E3818DE95407873516EF1C8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62BD1C8D995572306375E4430AD3BBEDECC09C8B);
		s_Il2CppMethodInitialized = true;
	}
	XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// spatialAnchor = 0;
		uint64_t* L_0 = ___2_spatialAnchor;
		*((int64_t*)L_0) = (int64_t)((int64_t)0);
		// if (_xrCreateSpatialAnchorFromPersistedNameMSFT == null) {
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* L_1 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrCreateSpatialAnchorFromPersistedNameMSFT_37;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogError("xrCreateSpatialAnchorFromPersistedNameMSFT method not found!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral62BD1C8D995572306375E4430AD3BBEDECC09C8B, NULL);
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT createInfo = new XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT(spatialAnchorStore, spatialAnchorName);
		uint64_t L_2 = ___0_spatialAnchorStore;
		String_t* L_3 = ___1_spatialAnchorName;
		XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT__ctor_m51AE46AEA9B4290FBC9288833FC4BE71C8C52B68((&V_0), L_2, L_3, NULL);
		// XrResult result = _xrCreateSpatialAnchorFromPersistedNameMSFT(SessionHandle, ref createInfo, ref spatialAnchor);
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* L_4 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrCreateSpatialAnchorFromPersistedNameMSFT_37;
		uint64_t L_5;
		L_5 = SpacesOpenXRFeature_get_SessionHandle_mC1D5AE58DB4A5326847DA40475D9459B6AF58F16_inline(__this, NULL);
		uint64_t* L_6 = ___2_spatialAnchor;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = CreateSpatialAnchorFromPersistedNameMSFTDelegate_Invoke_m8EE7A705BDFF61921963C9A9AD603B9A4DCD0F3C_inline(L_4, L_5, (&V_0), L_6, NULL);
		V_1 = L_7;
		// if (result != XrResult.XR_SUCCESS) {
		int32_t L_8 = V_1;
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		// Debug.LogError("Failed to create spatial anchor from persisted name: " + result);
		Il2CppFakeBox<int32_t> L_9(XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_10;
		L_10 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_9), NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2C570AB7E857CCA2E3818DE95407873516EF1C8F, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_11, NULL);
		// return false;
		return (bool)0;
	}

IL_0055:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::TryEnumeratePersistedSpatialAnchorNames(System.UInt64,System.String[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsFeature_TryEnumeratePersistedSpatialAnchorNames_m65120244410EBC374EAFE68DD7FC0BE692A44DD3 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, uint64_t ___0_spatialAnchorStore, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** ___1_namesList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_PtrToStructure_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m70539381E92750BCB3C3A5CA5A4709219CBF9DF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_SizeOf_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m1AA3B83CE23E17F43FFE7C588891B28C46DE5571_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15DC6D8E60353BA29C613B9A4E4070593812B027);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D8CD22AFB37AED842D47EDFF210DFF0E723553);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD36B7131460C2D9DFD9D4732CF27B6879A305AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9ADFCB0EDC737D3AE236ECD30C168D4B22D2431);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// namesList = Array.Empty<string>();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** L_0 = ___1_namesList;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// if (_xrEnumeratePersistedSpatialAnchorNamesMSFT == null) {
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* L_2 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrEnumeratePersistedSpatialAnchorNamesMSFT_36;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.LogError("xrEnumeratePersistedSpatialAnchorNamesMSFT method not found!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD9ADFCB0EDC737D3AE236ECD30C168D4B22D2431, NULL);
		// return false;
		return (bool)0;
	}

IL_001a:
	{
		// uint namesCountOutput = 0;
		V_0 = 0;
		// XrResult result = _xrEnumeratePersistedSpatialAnchorNamesMSFT(spatialAnchorStore,
		//     0, ref namesCountOutput, IntPtr.Zero);
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* L_3 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrEnumeratePersistedSpatialAnchorNamesMSFT_36;
		uint64_t L_4 = ___0_spatialAnchorStore;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = EnumeratePersistedSpatialAnchorNamesMSFTDelegate_Invoke_m8D01B6BEA1F353BEF629E24877FF8020028F47CE_inline(L_3, L_4, 0, (&V_0), L_5, NULL);
		V_1 = L_6;
		// if (result != XrResult.XR_SUCCESS) {
		int32_t L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// Debug.LogError("Failed to get spatial anchor names count output: " + result);
		Il2CppFakeBox<int32_t> L_8(XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral27D8CD22AFB37AED842D47EDFF210DFF0E723553, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_10, NULL);
		// return false;
		return (bool)0;
	}

IL_0051:
	{
		// if (namesCountOutput == 0) {
		uint32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0060;
		}
	}
	{
		// Debug.Log("No spatial anchor names found.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCD36B7131460C2D9DFD9D4732CF27B6879A305AF, NULL);
		// return true;
		return (bool)1;
	}

IL_0060:
	{
		// uint namesCapacityInput = namesCountOutput;
		uint32_t L_12 = V_0;
		V_2 = L_12;
		// IntPtr namesPtr = Marshal.AllocHGlobal(Marshal.SizeOf<XrSpatialAnchorPersistenceNameMSFT>() * (int)namesCountOutput);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Marshal_SizeOf_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m1AA3B83CE23E17F43FFE7C588891B28C46DE5571(Marshal_SizeOf_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m1AA3B83CE23E17F43FFE7C588891B28C46DE5571_RuntimeMethod_var);
		uint32_t L_14 = V_0;
		intptr_t L_15;
		L_15 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(((int32_t)il2cpp_codegen_multiply(L_13, (int32_t)L_14)), NULL);
		V_3 = L_15;
		// result = _xrEnumeratePersistedSpatialAnchorNamesMSFT(spatialAnchorStore,
		//     namesCapacityInput, ref namesCountOutput, namesPtr);
		il2cpp_codegen_runtime_class_init_inline(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* L_16 = ((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____xrEnumeratePersistedSpatialAnchorNamesMSFT_36;
		uint64_t L_17 = ___0_spatialAnchorStore;
		uint32_t L_18 = V_2;
		intptr_t L_19 = V_3;
		NullCheck(L_16);
		int32_t L_20;
		L_20 = EnumeratePersistedSpatialAnchorNamesMSFTDelegate_Invoke_m8D01B6BEA1F353BEF629E24877FF8020028F47CE_inline(L_16, L_17, L_18, (&V_0), L_19, NULL);
		V_1 = L_20;
		// if (result != XrResult.XR_SUCCESS) {
		int32_t L_21 = V_1;
		if (!L_21)
		{
			goto IL_00a0;
		}
	}
	{
		// Debug.LogError("Failed to enumerate persisted spatial anchor names: " + result);
		Il2CppFakeBox<int32_t> L_22(XrResult_t4D8ED857473D5678C4F7DD9AA54D989E3C6959AA_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_23;
		L_23 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_22), NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral15DC6D8E60353BA29C613B9A4E4070593812B027, L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_24, NULL);
		// return false;
		return (bool)0;
	}

IL_00a0:
	{
		// namesList = new string[namesCountOutput];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** L_25 = ___1_namesList;
		uint32_t L_26 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_26);
		*((RuntimeObject**)L_25) = (RuntimeObject*)L_27;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_25, (void*)(RuntimeObject*)L_27);
		// for (int i = 0; i < namesCountOutput; i++) {
		V_4 = 0;
		goto IL_00d4;
	}

IL_00ad:
	{
		// IntPtr namePtr = namesPtr + Marshal.SizeOf<XrSpatialAnchorPersistenceNameMSFT>() * i;
		intptr_t L_28 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = Marshal_SizeOf_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m1AA3B83CE23E17F43FFE7C588891B28C46DE5571(Marshal_SizeOf_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m1AA3B83CE23E17F43FFE7C588891B28C46DE5571_RuntimeMethod_var);
		int32_t L_30 = V_4;
		intptr_t L_31;
		L_31 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_28, ((int32_t)il2cpp_codegen_multiply(L_29, L_30)), NULL);
		// var anchorName = Marshal.PtrToStructure<XrSpatialAnchorPersistenceNameMSFT>(namePtr);
		XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80 L_32;
		L_32 = Marshal_PtrToStructure_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m70539381E92750BCB3C3A5CA5A4709219CBF9DF8(L_31, Marshal_PtrToStructure_TisXrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_m70539381E92750BCB3C3A5CA5A4709219CBF9DF8_RuntimeMethod_var);
		V_5 = L_32;
		// namesList[i] = anchorName.Name;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** L_33 = ___1_namesList;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = *((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248**)L_33);
		int32_t L_35 = V_4;
		XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80 L_36 = V_5;
		String_t* L_37 = L_36.___Name_0;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (String_t*)L_37);
		// for (int i = 0; i < namesCountOutput; i++) {
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00d4:
	{
		// for (int i = 0; i < namesCountOutput; i++) {
		int32_t L_39 = V_4;
		uint32_t L_40 = V_0;
		if ((((int64_t)((int64_t)L_39)) < ((int64_t)((int64_t)(uint64_t)L_40))))
		{
			goto IL_00ad;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsFeature__ctor_m5C5B37C43F1CFBCAB96944961B62806DB1478C64 (SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* __this, const RuntimeMethod* method) 
{
	{
		SpacesOpenXRFeature__ctor_mFC1AC4D00ABFBCF3DC87141BF5ECEB49DCF5EE16(__this, NULL);
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsFeature__cctor_mEA98ED48B34FE6A2289DCDE8E4ADB6D4911DD35E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB384A94B775793199D6172CD1A2B3139DD608F17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRAnchorSubsystemDescriptor> _spatialAnchorsSubsystemDescriptors = new List<XRAnchorSubsystemDescriptor>();
		List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* L_0 = (List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE*)il2cpp_codegen_object_new(List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB384A94B775793199D6172CD1A2B3139DD608F17(L_0, List_1__ctor_mB384A94B775793199D6172CD1A2B3139DD608F17_RuntimeMethod_var);
		((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____spatialAnchorsSubsystemDescriptors_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_il2cpp_TypeInfo_var))->____spatialAnchorsSubsystemDescriptors_28), (void*)L_0);
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
int32_t CreateSpatialAnchorMSFTDelegate_Invoke_m360D2AD6BC6A9FCD2DBE1323F109BB0A392647B0_Multicast(CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* __this, uint64_t ___0_session, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87 ___1_createInfoMSFT, uint64_t* ___2_anchor, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* currentDelegate = reinterpret_cast<CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87, uint64_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_session, ___1_createInfoMSFT, ___2_anchor, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t CreateSpatialAnchorMSFTDelegate_Invoke_m360D2AD6BC6A9FCD2DBE1323F109BB0A392647B0_OpenInst(CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* __this, uint64_t ___0_session, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87 ___1_createInfoMSFT, uint64_t* ___2_anchor, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_session, ___1_createInfoMSFT, ___2_anchor, method);
}
int32_t CreateSpatialAnchorMSFTDelegate_Invoke_m360D2AD6BC6A9FCD2DBE1323F109BB0A392647B0_OpenStatic(CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* __this, uint64_t ___0_session, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87 ___1_createInfoMSFT, uint64_t* ___2_anchor, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_session, ___1_createInfoMSFT, ___2_anchor, method);
}
int32_t CreateSpatialAnchorMSFTDelegate_Invoke_m360D2AD6BC6A9FCD2DBE1323F109BB0A392647B0_OpenStaticInvoker(CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* __this, uint64_t ___0_session, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87 ___1_createInfoMSFT, uint64_t* ___2_anchor, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_session, ___1_createInfoMSFT, ___2_anchor);
}
int32_t CreateSpatialAnchorMSFTDelegate_Invoke_m360D2AD6BC6A9FCD2DBE1323F109BB0A392647B0_ClosedStaticInvoker(CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* __this, uint64_t ___0_session, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87 ___1_createInfoMSFT, uint64_t* ___2_anchor, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_session, ___1_createInfoMSFT, ___2_anchor);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6 (CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* __this, uint64_t ___0_session, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87 ___1_createInfoMSFT, uint64_t* ___2_anchor, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(uint64_t, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87, uint64_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_session, ___1_createInfoMSFT, ___2_anchor);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSpatialAnchorMSFTDelegate__ctor_mF691172F5B23677D9490298005F408C139DA9ED7 (CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateSpatialAnchorMSFTDelegate_Invoke_m360D2AD6BC6A9FCD2DBE1323F109BB0A392647B0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CreateSpatialAnchorMSFTDelegate_Invoke_m360D2AD6BC6A9FCD2DBE1323F109BB0A392647B0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateSpatialAnchorMSFTDelegate_Invoke_m360D2AD6BC6A9FCD2DBE1323F109BB0A392647B0_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&CreateSpatialAnchorMSFTDelegate_Invoke_m360D2AD6BC6A9FCD2DBE1323F109BB0A392647B0_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorCreateInfoMSFT,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorMSFTDelegate_Invoke_m360D2AD6BC6A9FCD2DBE1323F109BB0A392647B0 (CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* __this, uint64_t ___0_session, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87 ___1_createInfoMSFT, uint64_t* ___2_anchor, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_session, ___1_createInfoMSFT, ___2_anchor, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorMSFTDelegate::BeginInvoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorCreateInfoMSFT,System.UInt64&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateSpatialAnchorMSFTDelegate_BeginInvoke_m1C7B3461BB6990C29739E57A9AE4692F035A3496 (CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* __this, uint64_t ___0_session, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87 ___1_createInfoMSFT, uint64_t* ___2_anchor, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_session);
	__d_args[1] = Box(XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87_il2cpp_TypeInfo_var, &___1_createInfoMSFT);
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___2_anchor);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorMSFTDelegate::EndInvoke(System.UInt64&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorMSFTDelegate_EndInvoke_m1C2A701467D24A8580907B36250536DB370F4670 (CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* __this, uint64_t* ___0_anchor, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_anchor,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t CreateSpatialAnchorSpaceMSFTDelegate_Invoke_m83C7DD3FD8A7B5167C7C927E20E644E323CCAF0B_Multicast(CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* __this, uint64_t ___0_session, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE ___1_createInfo, uint64_t* ___2_space, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* currentDelegate = reinterpret_cast<CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE, uint64_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_session, ___1_createInfo, ___2_space, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t CreateSpatialAnchorSpaceMSFTDelegate_Invoke_m83C7DD3FD8A7B5167C7C927E20E644E323CCAF0B_OpenInst(CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* __this, uint64_t ___0_session, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE ___1_createInfo, uint64_t* ___2_space, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_session, ___1_createInfo, ___2_space, method);
}
int32_t CreateSpatialAnchorSpaceMSFTDelegate_Invoke_m83C7DD3FD8A7B5167C7C927E20E644E323CCAF0B_OpenStatic(CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* __this, uint64_t ___0_session, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE ___1_createInfo, uint64_t* ___2_space, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_session, ___1_createInfo, ___2_space, method);
}
int32_t CreateSpatialAnchorSpaceMSFTDelegate_Invoke_m83C7DD3FD8A7B5167C7C927E20E644E323CCAF0B_OpenStaticInvoker(CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* __this, uint64_t ___0_session, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE ___1_createInfo, uint64_t* ___2_space, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_session, ___1_createInfo, ___2_space);
}
int32_t CreateSpatialAnchorSpaceMSFTDelegate_Invoke_m83C7DD3FD8A7B5167C7C927E20E644E323CCAF0B_ClosedStaticInvoker(CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* __this, uint64_t ___0_session, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE ___1_createInfo, uint64_t* ___2_space, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_session, ___1_createInfo, ___2_space);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697 (CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* __this, uint64_t ___0_session, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE ___1_createInfo, uint64_t* ___2_space, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(uint64_t, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE, uint64_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_session, ___1_createInfo, ___2_space);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorSpaceMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSpatialAnchorSpaceMSFTDelegate__ctor_m36F40E5A4543496C5D3481973CDC1878BB75305A (CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateSpatialAnchorSpaceMSFTDelegate_Invoke_m83C7DD3FD8A7B5167C7C927E20E644E323CCAF0B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CreateSpatialAnchorSpaceMSFTDelegate_Invoke_m83C7DD3FD8A7B5167C7C927E20E644E323CCAF0B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateSpatialAnchorSpaceMSFTDelegate_Invoke_m83C7DD3FD8A7B5167C7C927E20E644E323CCAF0B_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&CreateSpatialAnchorSpaceMSFTDelegate_Invoke_m83C7DD3FD8A7B5167C7C927E20E644E323CCAF0B_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorSpaceMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorSpaceCreateInfoMSFT,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorSpaceMSFTDelegate_Invoke_m83C7DD3FD8A7B5167C7C927E20E644E323CCAF0B (CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* __this, uint64_t ___0_session, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE ___1_createInfo, uint64_t* ___2_space, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_session, ___1_createInfo, ___2_space, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorSpaceMSFTDelegate::BeginInvoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorSpaceCreateInfoMSFT,System.UInt64&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateSpatialAnchorSpaceMSFTDelegate_BeginInvoke_m0E2845D2F498D296941D6101E20B4F6A89BE65D0 (CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* __this, uint64_t ___0_session, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE ___1_createInfo, uint64_t* ___2_space, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_session);
	__d_args[1] = Box(XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE_il2cpp_TypeInfo_var, &___1_createInfo);
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___2_space);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorSpaceMSFTDelegate::EndInvoke(System.UInt64&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorSpaceMSFTDelegate_EndInvoke_m05E5BB2179A08ED8A2454F3571FFB7BED6AD154E (CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* __this, uint64_t* ___0_space, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_space,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t DestroySpatialAnchorMSFTDelegate_Invoke_mD43C523B6B300A640A89403B0740723BF92F7579_Multicast(DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* __this, uint64_t ___0_anchor, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* currentDelegate = reinterpret_cast<DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_anchor, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t DestroySpatialAnchorMSFTDelegate_Invoke_mD43C523B6B300A640A89403B0740723BF92F7579_OpenInst(DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* __this, uint64_t ___0_anchor, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_anchor, method);
}
int32_t DestroySpatialAnchorMSFTDelegate_Invoke_mD43C523B6B300A640A89403B0740723BF92F7579_OpenStatic(DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* __this, uint64_t ___0_anchor, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_anchor, method);
}
int32_t DestroySpatialAnchorMSFTDelegate_Invoke_mD43C523B6B300A640A89403B0740723BF92F7579_OpenStaticInvoker(DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* __this, uint64_t ___0_anchor, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_anchor);
}
int32_t DestroySpatialAnchorMSFTDelegate_Invoke_mD43C523B6B300A640A89403B0740723BF92F7579_ClosedStaticInvoker(DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* __this, uint64_t ___0_anchor, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_anchor);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058 (DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* __this, uint64_t ___0_anchor, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_anchor);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroySpatialAnchorMSFTDelegate__ctor_m439B1234EC35634A19BE7A7257B679DC73658BD9 (DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DestroySpatialAnchorMSFTDelegate_Invoke_mD43C523B6B300A640A89403B0740723BF92F7579_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DestroySpatialAnchorMSFTDelegate_Invoke_mD43C523B6B300A640A89403B0740723BF92F7579_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DestroySpatialAnchorMSFTDelegate_Invoke_mD43C523B6B300A640A89403B0740723BF92F7579_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&DestroySpatialAnchorMSFTDelegate_Invoke_mD43C523B6B300A640A89403B0740723BF92F7579_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorMSFTDelegate::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DestroySpatialAnchorMSFTDelegate_Invoke_mD43C523B6B300A640A89403B0740723BF92F7579 (DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* __this, uint64_t ___0_anchor, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_anchor, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorMSFTDelegate::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroySpatialAnchorMSFTDelegate_BeginInvoke_mE6F9BF75F9DD2E9AA5EEA78B26560C5660F444D6 (DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* __this, uint64_t ___0_anchor, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_anchor);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorMSFTDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DestroySpatialAnchorMSFTDelegate_EndInvoke_m0448013075FE053F62D3785B285F7CAAA4C6FE46 (DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t CreateSpatialAnchorStoreConnectionMSFTDelegate_Invoke_m968E41F34BB96E29AFDA75A7F60C001C8768FB7A_Multicast(CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* __this, uint64_t ___0_session, uint64_t* ___1_spatialAnchorStore, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* currentDelegate = reinterpret_cast<CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_session, ___1_spatialAnchorStore, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t CreateSpatialAnchorStoreConnectionMSFTDelegate_Invoke_m968E41F34BB96E29AFDA75A7F60C001C8768FB7A_OpenInst(CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* __this, uint64_t ___0_session, uint64_t* ___1_spatialAnchorStore, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_session, ___1_spatialAnchorStore, method);
}
int32_t CreateSpatialAnchorStoreConnectionMSFTDelegate_Invoke_m968E41F34BB96E29AFDA75A7F60C001C8768FB7A_OpenStatic(CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* __this, uint64_t ___0_session, uint64_t* ___1_spatialAnchorStore, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_session, ___1_spatialAnchorStore, method);
}
int32_t CreateSpatialAnchorStoreConnectionMSFTDelegate_Invoke_m968E41F34BB96E29AFDA75A7F60C001C8768FB7A_OpenStaticInvoker(CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* __this, uint64_t ___0_session, uint64_t* ___1_spatialAnchorStore, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, uint64_t, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_session, ___1_spatialAnchorStore);
}
int32_t CreateSpatialAnchorStoreConnectionMSFTDelegate_Invoke_m968E41F34BB96E29AFDA75A7F60C001C8768FB7A_ClosedStaticInvoker(CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* __this, uint64_t ___0_session, uint64_t* ___1_spatialAnchorStore, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, uint64_t, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_session, ___1_spatialAnchorStore);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032 (CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* __this, uint64_t ___0_session, uint64_t* ___1_spatialAnchorStore, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(uint64_t, uint64_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_session, ___1_spatialAnchorStore);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorStoreConnectionMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSpatialAnchorStoreConnectionMSFTDelegate__ctor_m9E39505763F871F9AC0AF22C21E715FD84FCB73B (CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateSpatialAnchorStoreConnectionMSFTDelegate_Invoke_m968E41F34BB96E29AFDA75A7F60C001C8768FB7A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CreateSpatialAnchorStoreConnectionMSFTDelegate_Invoke_m968E41F34BB96E29AFDA75A7F60C001C8768FB7A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateSpatialAnchorStoreConnectionMSFTDelegate_Invoke_m968E41F34BB96E29AFDA75A7F60C001C8768FB7A_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&CreateSpatialAnchorStoreConnectionMSFTDelegate_Invoke_m968E41F34BB96E29AFDA75A7F60C001C8768FB7A_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorStoreConnectionMSFTDelegate::Invoke(System.UInt64,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorStoreConnectionMSFTDelegate_Invoke_m968E41F34BB96E29AFDA75A7F60C001C8768FB7A (CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* __this, uint64_t ___0_session, uint64_t* ___1_spatialAnchorStore, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_session, ___1_spatialAnchorStore, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorStoreConnectionMSFTDelegate::BeginInvoke(System.UInt64,System.UInt64&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateSpatialAnchorStoreConnectionMSFTDelegate_BeginInvoke_mA966E548D9865DA0AF8F745C12AC3A2DD2C1BB50 (CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* __this, uint64_t ___0_session, uint64_t* ___1_spatialAnchorStore, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_session);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___1_spatialAnchorStore);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorStoreConnectionMSFTDelegate::EndInvoke(System.UInt64&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorStoreConnectionMSFTDelegate_EndInvoke_mAC419F701336F5A413E6A84BAB5A93E9464C70E8 (CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* __this, uint64_t* ___0_spatialAnchorStore, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_spatialAnchorStore,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t DestroySpatialAnchorStoreConnectionMSFTDelegate_Invoke_mEFB181C09A6237E3F36CB3887981360C060A54C0_Multicast(DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* currentDelegate = reinterpret_cast<DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_spatialAnchorStore, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t DestroySpatialAnchorStoreConnectionMSFTDelegate_Invoke_mEFB181C09A6237E3F36CB3887981360C060A54C0_OpenInst(DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_spatialAnchorStore, method);
}
int32_t DestroySpatialAnchorStoreConnectionMSFTDelegate_Invoke_mEFB181C09A6237E3F36CB3887981360C060A54C0_OpenStatic(DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_spatialAnchorStore, method);
}
int32_t DestroySpatialAnchorStoreConnectionMSFTDelegate_Invoke_mEFB181C09A6237E3F36CB3887981360C060A54C0_OpenStaticInvoker(DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_spatialAnchorStore);
}
int32_t DestroySpatialAnchorStoreConnectionMSFTDelegate_Invoke_mEFB181C09A6237E3F36CB3887981360C060A54C0_ClosedStaticInvoker(DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_spatialAnchorStore);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF (DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_spatialAnchorStore);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorStoreConnectionMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroySpatialAnchorStoreConnectionMSFTDelegate__ctor_mE63BDD395A7C62C3CA5926C796D7F025E8F9313A (DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DestroySpatialAnchorStoreConnectionMSFTDelegate_Invoke_mEFB181C09A6237E3F36CB3887981360C060A54C0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DestroySpatialAnchorStoreConnectionMSFTDelegate_Invoke_mEFB181C09A6237E3F36CB3887981360C060A54C0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DestroySpatialAnchorStoreConnectionMSFTDelegate_Invoke_mEFB181C09A6237E3F36CB3887981360C060A54C0_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&DestroySpatialAnchorStoreConnectionMSFTDelegate_Invoke_mEFB181C09A6237E3F36CB3887981360C060A54C0_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorStoreConnectionMSFTDelegate::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DestroySpatialAnchorStoreConnectionMSFTDelegate_Invoke_mEFB181C09A6237E3F36CB3887981360C060A54C0 (DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_spatialAnchorStore, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorStoreConnectionMSFTDelegate::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroySpatialAnchorStoreConnectionMSFTDelegate_BeginInvoke_m88C2CFD7A6D411A927319CEF4187D341777AA6FA (DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* __this, uint64_t ___0_spatialAnchorStore, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_spatialAnchorStore);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/DestroySpatialAnchorStoreConnectionMSFTDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DestroySpatialAnchorStoreConnectionMSFTDelegate_EndInvoke_m428E95F457E0810EF96800E304549C264483BED2 (DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t PersistSpatialAnchorMSFTDelegate_Invoke_m629801285D0E38414C2A1E7537960F98D5CB887B_Multicast(PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824* ___1_spatialAnchorPersistenceInfo, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* currentDelegate = reinterpret_cast<PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_spatialAnchorStore, ___1_spatialAnchorPersistenceInfo, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t PersistSpatialAnchorMSFTDelegate_Invoke_m629801285D0E38414C2A1E7537960F98D5CB887B_OpenInst(PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824* ___1_spatialAnchorPersistenceInfo, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_spatialAnchorStore, ___1_spatialAnchorPersistenceInfo, method);
}
int32_t PersistSpatialAnchorMSFTDelegate_Invoke_m629801285D0E38414C2A1E7537960F98D5CB887B_OpenStatic(PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824* ___1_spatialAnchorPersistenceInfo, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_spatialAnchorStore, ___1_spatialAnchorPersistenceInfo, method);
}
int32_t PersistSpatialAnchorMSFTDelegate_Invoke_m629801285D0E38414C2A1E7537960F98D5CB887B_OpenStaticInvoker(PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824* ___1_spatialAnchorPersistenceInfo, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, uint64_t, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_spatialAnchorStore, ___1_spatialAnchorPersistenceInfo);
}
int32_t PersistSpatialAnchorMSFTDelegate_Invoke_m629801285D0E38414C2A1E7537960F98D5CB887B_ClosedStaticInvoker(PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824* ___1_spatialAnchorPersistenceInfo, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, uint64_t, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_spatialAnchorStore, ___1_spatialAnchorPersistenceInfo);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54 (PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824* ___1_spatialAnchorPersistenceInfo, const RuntimeMethod* method)
{


	typedef int32_t (CDECL *PInvokeFunc)(uint64_t, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_spatialAnchorPersistenceInfo' to native representation
	XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshaled_pinvoke* ____1_spatialAnchorPersistenceInfo_marshaled = NULL;
	XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshaled_pinvoke ____1_spatialAnchorPersistenceInfo_marshaled_dereferenced = {};
	XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshal_pinvoke(*___1_spatialAnchorPersistenceInfo, ____1_spatialAnchorPersistenceInfo_marshaled_dereferenced);
	____1_spatialAnchorPersistenceInfo_marshaled = &____1_spatialAnchorPersistenceInfo_marshaled_dereferenced;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_spatialAnchorStore, ____1_spatialAnchorPersistenceInfo_marshaled);

	// Marshaling of parameter '___1_spatialAnchorPersistenceInfo' back from native representation
	XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824 _____1_spatialAnchorPersistenceInfo_marshaled_unmarshaled_dereferenced;
	memset((&_____1_spatialAnchorPersistenceInfo_marshaled_unmarshaled_dereferenced), 0, sizeof(_____1_spatialAnchorPersistenceInfo_marshaled_unmarshaled_dereferenced));
	XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshal_pinvoke_back(*____1_spatialAnchorPersistenceInfo_marshaled, _____1_spatialAnchorPersistenceInfo_marshaled_unmarshaled_dereferenced);
	XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_marshal_pinvoke_cleanup(*____1_spatialAnchorPersistenceInfo_marshaled);
	*___1_spatialAnchorPersistenceInfo = _____1_spatialAnchorPersistenceInfo_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((&((___1_spatialAnchorPersistenceInfo)->____spatialAnchorPersistenceName_2))->___Name_0), (void*)NULL);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/PersistSpatialAnchorMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistSpatialAnchorMSFTDelegate__ctor_m76A5D24CCC511B93896DD6A263B61D7C90DD10F1 (PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PersistSpatialAnchorMSFTDelegate_Invoke_m629801285D0E38414C2A1E7537960F98D5CB887B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PersistSpatialAnchorMSFTDelegate_Invoke_m629801285D0E38414C2A1E7537960F98D5CB887B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PersistSpatialAnchorMSFTDelegate_Invoke_m629801285D0E38414C2A1E7537960F98D5CB887B_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&PersistSpatialAnchorMSFTDelegate_Invoke_m629801285D0E38414C2A1E7537960F98D5CB887B_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/PersistSpatialAnchorMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PersistSpatialAnchorMSFTDelegate_Invoke_m629801285D0E38414C2A1E7537960F98D5CB887B (PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824* ___1_spatialAnchorPersistenceInfo, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_spatialAnchorStore, ___1_spatialAnchorPersistenceInfo, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/PersistSpatialAnchorMSFTDelegate::BeginInvoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PersistSpatialAnchorMSFTDelegate_BeginInvoke_m3AB30F69A6807F12BB5891259468C11294298174 (PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824* ___1_spatialAnchorPersistenceInfo, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_spatialAnchorStore);
	__d_args[1] = Box(XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824_il2cpp_TypeInfo_var, &*___1_spatialAnchorPersistenceInfo);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/PersistSpatialAnchorMSFTDelegate::EndInvoke(Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceInfoMSFT&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PersistSpatialAnchorMSFTDelegate_EndInvoke_m8F4DD6950A6C2DB1F52AA391B2522356CDD37C0B (PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* __this, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824* ___0_spatialAnchorPersistenceInfo, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_spatialAnchorPersistenceInfo,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t UnpersistSpatialAnchorMSFTDelegate_Invoke_m574686A42D506A5CFF44232D1040363433728E28_Multicast(UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* ___1_spatialAnchorPersistenceName, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* currentDelegate = reinterpret_cast<UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_spatialAnchorStore, ___1_spatialAnchorPersistenceName, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t UnpersistSpatialAnchorMSFTDelegate_Invoke_m574686A42D506A5CFF44232D1040363433728E28_OpenInst(UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* ___1_spatialAnchorPersistenceName, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_spatialAnchorStore, ___1_spatialAnchorPersistenceName, method);
}
int32_t UnpersistSpatialAnchorMSFTDelegate_Invoke_m574686A42D506A5CFF44232D1040363433728E28_OpenStatic(UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* ___1_spatialAnchorPersistenceName, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_spatialAnchorStore, ___1_spatialAnchorPersistenceName, method);
}
int32_t UnpersistSpatialAnchorMSFTDelegate_Invoke_m574686A42D506A5CFF44232D1040363433728E28_OpenStaticInvoker(UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* ___1_spatialAnchorPersistenceName, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, uint64_t, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_spatialAnchorStore, ___1_spatialAnchorPersistenceName);
}
int32_t UnpersistSpatialAnchorMSFTDelegate_Invoke_m574686A42D506A5CFF44232D1040363433728E28_ClosedStaticInvoker(UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* ___1_spatialAnchorPersistenceName, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, uint64_t, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_spatialAnchorStore, ___1_spatialAnchorPersistenceName);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC (UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* ___1_spatialAnchorPersistenceName, const RuntimeMethod* method)
{


	typedef int32_t (CDECL *PInvokeFunc)(uint64_t, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_spatialAnchorPersistenceName' to native representation
	XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshaled_pinvoke* ____1_spatialAnchorPersistenceName_marshaled = NULL;
	XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshaled_pinvoke ____1_spatialAnchorPersistenceName_marshaled_dereferenced = {};
	XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshal_pinvoke(*___1_spatialAnchorPersistenceName, ____1_spatialAnchorPersistenceName_marshaled_dereferenced);
	____1_spatialAnchorPersistenceName_marshaled = &____1_spatialAnchorPersistenceName_marshaled_dereferenced;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_spatialAnchorStore, ____1_spatialAnchorPersistenceName_marshaled);

	// Marshaling of parameter '___1_spatialAnchorPersistenceName' back from native representation
	XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80 _____1_spatialAnchorPersistenceName_marshaled_unmarshaled_dereferenced;
	memset((&_____1_spatialAnchorPersistenceName_marshaled_unmarshaled_dereferenced), 0, sizeof(_____1_spatialAnchorPersistenceName_marshaled_unmarshaled_dereferenced));
	XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshal_pinvoke_back(*____1_spatialAnchorPersistenceName_marshaled, _____1_spatialAnchorPersistenceName_marshaled_unmarshaled_dereferenced);
	XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_marshal_pinvoke_cleanup(*____1_spatialAnchorPersistenceName_marshaled);
	*___1_spatialAnchorPersistenceName = _____1_spatialAnchorPersistenceName_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___1_spatialAnchorPersistenceName)->___Name_0), (void*)NULL);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/UnpersistSpatialAnchorMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnpersistSpatialAnchorMSFTDelegate__ctor_mE32740AEC3B347F059C4C52BB95953FA78A94694 (UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnpersistSpatialAnchorMSFTDelegate_Invoke_m574686A42D506A5CFF44232D1040363433728E28_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnpersistSpatialAnchorMSFTDelegate_Invoke_m574686A42D506A5CFF44232D1040363433728E28_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnpersistSpatialAnchorMSFTDelegate_Invoke_m574686A42D506A5CFF44232D1040363433728E28_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&UnpersistSpatialAnchorMSFTDelegate_Invoke_m574686A42D506A5CFF44232D1040363433728E28_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/UnpersistSpatialAnchorMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnpersistSpatialAnchorMSFTDelegate_Invoke_m574686A42D506A5CFF44232D1040363433728E28 (UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* ___1_spatialAnchorPersistenceName, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_spatialAnchorStore, ___1_spatialAnchorPersistenceName, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/UnpersistSpatialAnchorMSFTDelegate::BeginInvoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnpersistSpatialAnchorMSFTDelegate_BeginInvoke_m5E68648C9DAEC00E814CA1430405C5220A60FD38 (UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* ___1_spatialAnchorPersistenceName, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_spatialAnchorStore);
	__d_args[1] = Box(XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80_il2cpp_TypeInfo_var, &*___1_spatialAnchorPersistenceName);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/UnpersistSpatialAnchorMSFTDelegate::EndInvoke(Qualcomm.Snapdragon.Spaces.XrSpatialAnchorPersistenceNameMSFT&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnpersistSpatialAnchorMSFTDelegate_EndInvoke_m16F28F6EA37DCD0715B79CF7A0C0105BCD48A883 (UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* __this, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* ___0_spatialAnchorPersistenceName, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_spatialAnchorPersistenceName,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t EnumeratePersistedSpatialAnchorNamesMSFTDelegate_Invoke_m8D01B6BEA1F353BEF629E24877FF8020028F47CE_Multicast(EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* __this, uint64_t ___0_spatialAnchorStore, uint32_t ___1_spatialAnchorNamesCapacityInput, uint32_t* ___2_spatialAnchorNamesCountOutput, intptr_t ___3_spatialAnchorPersistenceNames, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* currentDelegate = reinterpret_cast<EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint32_t, uint32_t*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_spatialAnchorStore, ___1_spatialAnchorNamesCapacityInput, ___2_spatialAnchorNamesCountOutput, ___3_spatialAnchorPersistenceNames, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t EnumeratePersistedSpatialAnchorNamesMSFTDelegate_Invoke_m8D01B6BEA1F353BEF629E24877FF8020028F47CE_OpenInst(EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* __this, uint64_t ___0_spatialAnchorStore, uint32_t ___1_spatialAnchorNamesCapacityInput, uint32_t* ___2_spatialAnchorNamesCountOutput, intptr_t ___3_spatialAnchorPersistenceNames, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, uint32_t, uint32_t*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_spatialAnchorStore, ___1_spatialAnchorNamesCapacityInput, ___2_spatialAnchorNamesCountOutput, ___3_spatialAnchorPersistenceNames, method);
}
int32_t EnumeratePersistedSpatialAnchorNamesMSFTDelegate_Invoke_m8D01B6BEA1F353BEF629E24877FF8020028F47CE_OpenStatic(EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* __this, uint64_t ___0_spatialAnchorStore, uint32_t ___1_spatialAnchorNamesCapacityInput, uint32_t* ___2_spatialAnchorNamesCountOutput, intptr_t ___3_spatialAnchorPersistenceNames, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, uint32_t, uint32_t*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_spatialAnchorStore, ___1_spatialAnchorNamesCapacityInput, ___2_spatialAnchorNamesCountOutput, ___3_spatialAnchorPersistenceNames, method);
}
int32_t EnumeratePersistedSpatialAnchorNamesMSFTDelegate_Invoke_m8D01B6BEA1F353BEF629E24877FF8020028F47CE_OpenStaticInvoker(EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* __this, uint64_t ___0_spatialAnchorStore, uint32_t ___1_spatialAnchorNamesCapacityInput, uint32_t* ___2_spatialAnchorNamesCountOutput, intptr_t ___3_spatialAnchorPersistenceNames, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, uint64_t, uint32_t, uint32_t*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_spatialAnchorStore, ___1_spatialAnchorNamesCapacityInput, ___2_spatialAnchorNamesCountOutput, ___3_spatialAnchorPersistenceNames);
}
int32_t EnumeratePersistedSpatialAnchorNamesMSFTDelegate_Invoke_m8D01B6BEA1F353BEF629E24877FF8020028F47CE_ClosedStaticInvoker(EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* __this, uint64_t ___0_spatialAnchorStore, uint32_t ___1_spatialAnchorNamesCapacityInput, uint32_t* ___2_spatialAnchorNamesCountOutput, intptr_t ___3_spatialAnchorPersistenceNames, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, uint64_t, uint32_t, uint32_t*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_spatialAnchorStore, ___1_spatialAnchorNamesCapacityInput, ___2_spatialAnchorNamesCountOutput, ___3_spatialAnchorPersistenceNames);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6 (EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* __this, uint64_t ___0_spatialAnchorStore, uint32_t ___1_spatialAnchorNamesCapacityInput, uint32_t* ___2_spatialAnchorNamesCountOutput, intptr_t ___3_spatialAnchorPersistenceNames, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(uint64_t, uint32_t, uint32_t*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_spatialAnchorStore, ___1_spatialAnchorNamesCapacityInput, ___2_spatialAnchorNamesCountOutput, ___3_spatialAnchorPersistenceNames);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/EnumeratePersistedSpatialAnchorNamesMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumeratePersistedSpatialAnchorNamesMSFTDelegate__ctor_mAFAFD2711DF12FD7E0AFDDC6D67BF601E2861B32 (EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EnumeratePersistedSpatialAnchorNamesMSFTDelegate_Invoke_m8D01B6BEA1F353BEF629E24877FF8020028F47CE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EnumeratePersistedSpatialAnchorNamesMSFTDelegate_Invoke_m8D01B6BEA1F353BEF629E24877FF8020028F47CE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EnumeratePersistedSpatialAnchorNamesMSFTDelegate_Invoke_m8D01B6BEA1F353BEF629E24877FF8020028F47CE_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&EnumeratePersistedSpatialAnchorNamesMSFTDelegate_Invoke_m8D01B6BEA1F353BEF629E24877FF8020028F47CE_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/EnumeratePersistedSpatialAnchorNamesMSFTDelegate::Invoke(System.UInt64,System.UInt32,System.UInt32&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumeratePersistedSpatialAnchorNamesMSFTDelegate_Invoke_m8D01B6BEA1F353BEF629E24877FF8020028F47CE (EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* __this, uint64_t ___0_spatialAnchorStore, uint32_t ___1_spatialAnchorNamesCapacityInput, uint32_t* ___2_spatialAnchorNamesCountOutput, intptr_t ___3_spatialAnchorPersistenceNames, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint32_t, uint32_t*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_spatialAnchorStore, ___1_spatialAnchorNamesCapacityInput, ___2_spatialAnchorNamesCountOutput, ___3_spatialAnchorPersistenceNames, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/EnumeratePersistedSpatialAnchorNamesMSFTDelegate::BeginInvoke(System.UInt64,System.UInt32,System.UInt32&,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnumeratePersistedSpatialAnchorNamesMSFTDelegate_BeginInvoke_mF20189A65702D6A04D9C95BA7F58A6D93FB173E3 (EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* __this, uint64_t ___0_spatialAnchorStore, uint32_t ___1_spatialAnchorNamesCapacityInput, uint32_t* ___2_spatialAnchorNamesCountOutput, intptr_t ___3_spatialAnchorPersistenceNames, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_spatialAnchorStore);
	__d_args[1] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___1_spatialAnchorNamesCapacityInput);
	__d_args[2] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &*___2_spatialAnchorNamesCountOutput);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___3_spatialAnchorPersistenceNames);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/EnumeratePersistedSpatialAnchorNamesMSFTDelegate::EndInvoke(System.UInt32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumeratePersistedSpatialAnchorNamesMSFTDelegate_EndInvoke_m3767A6B38656AD3D3A049B5A956D9502AB0CA418 (EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* __this, uint32_t* ___0_spatialAnchorNamesCountOutput, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_spatialAnchorNamesCountOutput,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t CreateSpatialAnchorFromPersistedNameMSFTDelegate_Invoke_m8EE7A705BDFF61921963C9A9AD603B9A4DCD0F3C_Multicast(CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* __this, uint64_t ___0_session, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D* ___1_spatialAnchorCreateInfo, uint64_t* ___2_spatialAnchor, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* currentDelegate = reinterpret_cast<CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D*, uint64_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_session, ___1_spatialAnchorCreateInfo, ___2_spatialAnchor, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t CreateSpatialAnchorFromPersistedNameMSFTDelegate_Invoke_m8EE7A705BDFF61921963C9A9AD603B9A4DCD0F3C_OpenInst(CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* __this, uint64_t ___0_session, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D* ___1_spatialAnchorCreateInfo, uint64_t* ___2_spatialAnchor, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_session, ___1_spatialAnchorCreateInfo, ___2_spatialAnchor, method);
}
int32_t CreateSpatialAnchorFromPersistedNameMSFTDelegate_Invoke_m8EE7A705BDFF61921963C9A9AD603B9A4DCD0F3C_OpenStatic(CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* __this, uint64_t ___0_session, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D* ___1_spatialAnchorCreateInfo, uint64_t* ___2_spatialAnchor, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_session, ___1_spatialAnchorCreateInfo, ___2_spatialAnchor, method);
}
int32_t CreateSpatialAnchorFromPersistedNameMSFTDelegate_Invoke_m8EE7A705BDFF61921963C9A9AD603B9A4DCD0F3C_OpenStaticInvoker(CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* __this, uint64_t ___0_session, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D* ___1_spatialAnchorCreateInfo, uint64_t* ___2_spatialAnchor, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D*, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_session, ___1_spatialAnchorCreateInfo, ___2_spatialAnchor);
}
int32_t CreateSpatialAnchorFromPersistedNameMSFTDelegate_Invoke_m8EE7A705BDFF61921963C9A9AD603B9A4DCD0F3C_ClosedStaticInvoker(CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* __this, uint64_t ___0_session, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D* ___1_spatialAnchorCreateInfo, uint64_t* ___2_spatialAnchor, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D*, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_session, ___1_spatialAnchorCreateInfo, ___2_spatialAnchor);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A (CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* __this, uint64_t ___0_session, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D* ___1_spatialAnchorCreateInfo, uint64_t* ___2_spatialAnchor, const RuntimeMethod* method)
{


	typedef int32_t (CDECL *PInvokeFunc)(uint64_t, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshaled_pinvoke*, uint64_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_spatialAnchorCreateInfo' to native representation
	XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshaled_pinvoke* ____1_spatialAnchorCreateInfo_marshaled = NULL;
	XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshaled_pinvoke ____1_spatialAnchorCreateInfo_marshaled_dereferenced = {};
	XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshal_pinvoke(*___1_spatialAnchorCreateInfo, ____1_spatialAnchorCreateInfo_marshaled_dereferenced);
	____1_spatialAnchorCreateInfo_marshaled = &____1_spatialAnchorCreateInfo_marshaled_dereferenced;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_session, ____1_spatialAnchorCreateInfo_marshaled, ___2_spatialAnchor);

	// Marshaling of parameter '___1_spatialAnchorCreateInfo' back from native representation
	XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D _____1_spatialAnchorCreateInfo_marshaled_unmarshaled_dereferenced;
	memset((&_____1_spatialAnchorCreateInfo_marshaled_unmarshaled_dereferenced), 0, sizeof(_____1_spatialAnchorCreateInfo_marshaled_unmarshaled_dereferenced));
	XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshal_pinvoke_back(*____1_spatialAnchorCreateInfo_marshaled, _____1_spatialAnchorCreateInfo_marshaled_unmarshaled_dereferenced);
	XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_marshal_pinvoke_cleanup(*____1_spatialAnchorCreateInfo_marshaled);
	*___1_spatialAnchorCreateInfo = _____1_spatialAnchorCreateInfo_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((&((___1_spatialAnchorCreateInfo)->____spatialAnchorPersistenceName_3))->___Name_0), (void*)NULL);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorFromPersistedNameMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSpatialAnchorFromPersistedNameMSFTDelegate__ctor_mC0C7549B313907B39BF54E087D5BBCE7172C05A8 (CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateSpatialAnchorFromPersistedNameMSFTDelegate_Invoke_m8EE7A705BDFF61921963C9A9AD603B9A4DCD0F3C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CreateSpatialAnchorFromPersistedNameMSFTDelegate_Invoke_m8EE7A705BDFF61921963C9A9AD603B9A4DCD0F3C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateSpatialAnchorFromPersistedNameMSFTDelegate_Invoke_m8EE7A705BDFF61921963C9A9AD603B9A4DCD0F3C_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&CreateSpatialAnchorFromPersistedNameMSFTDelegate_Invoke_m8EE7A705BDFF61921963C9A9AD603B9A4DCD0F3C_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorFromPersistedNameMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT&,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorFromPersistedNameMSFTDelegate_Invoke_m8EE7A705BDFF61921963C9A9AD603B9A4DCD0F3C (CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* __this, uint64_t ___0_session, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D* ___1_spatialAnchorCreateInfo, uint64_t* ___2_spatialAnchor, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_session, ___1_spatialAnchorCreateInfo, ___2_spatialAnchor, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorFromPersistedNameMSFTDelegate::BeginInvoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT&,System.UInt64&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateSpatialAnchorFromPersistedNameMSFTDelegate_BeginInvoke_m48433F3303F65A228720F2EBC11C52CC39C3D10D (CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* __this, uint64_t ___0_session, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D* ___1_spatialAnchorCreateInfo, uint64_t* ___2_spatialAnchor, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_session);
	__d_args[1] = Box(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D_il2cpp_TypeInfo_var, &*___1_spatialAnchorCreateInfo);
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___2_spatialAnchor);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/CreateSpatialAnchorFromPersistedNameMSFTDelegate::EndInvoke(Qualcomm.Snapdragon.Spaces.XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT&,System.UInt64&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorFromPersistedNameMSFTDelegate_EndInvoke_m7E349F63CB0710A23B99E39FF39B08BA043DF541 (CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* __this, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D* ___0_spatialAnchorCreateInfo, uint64_t* ___1_spatialAnchor, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_spatialAnchorCreateInfo,
	___1_spatialAnchor,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t ClearSpatialAnchorStoreMSFTDelegate_Invoke_m1A2CD0184B4A8D1F231BE3F57EF07CBA20C62AA1_Multicast(ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* currentDelegate = reinterpret_cast<ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_spatialAnchorStore, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t ClearSpatialAnchorStoreMSFTDelegate_Invoke_m1A2CD0184B4A8D1F231BE3F57EF07CBA20C62AA1_OpenInst(ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_spatialAnchorStore, method);
}
int32_t ClearSpatialAnchorStoreMSFTDelegate_Invoke_m1A2CD0184B4A8D1F231BE3F57EF07CBA20C62AA1_OpenStatic(ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_spatialAnchorStore, method);
}
int32_t ClearSpatialAnchorStoreMSFTDelegate_Invoke_m1A2CD0184B4A8D1F231BE3F57EF07CBA20C62AA1_OpenStaticInvoker(ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_spatialAnchorStore);
}
int32_t ClearSpatialAnchorStoreMSFTDelegate_Invoke_m1A2CD0184B4A8D1F231BE3F57EF07CBA20C62AA1_ClosedStaticInvoker(ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_spatialAnchorStore);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29 (ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_spatialAnchorStore);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/ClearSpatialAnchorStoreMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSpatialAnchorStoreMSFTDelegate__ctor_m13D0AE7888E8B13D91AE3AB946240621F184719B (ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ClearSpatialAnchorStoreMSFTDelegate_Invoke_m1A2CD0184B4A8D1F231BE3F57EF07CBA20C62AA1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ClearSpatialAnchorStoreMSFTDelegate_Invoke_m1A2CD0184B4A8D1F231BE3F57EF07CBA20C62AA1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ClearSpatialAnchorStoreMSFTDelegate_Invoke_m1A2CD0184B4A8D1F231BE3F57EF07CBA20C62AA1_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&ClearSpatialAnchorStoreMSFTDelegate_Invoke_m1A2CD0184B4A8D1F231BE3F57EF07CBA20C62AA1_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/ClearSpatialAnchorStoreMSFTDelegate::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClearSpatialAnchorStoreMSFTDelegate_Invoke_m1A2CD0184B4A8D1F231BE3F57EF07CBA20C62AA1 (ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_spatialAnchorStore, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/ClearSpatialAnchorStoreMSFTDelegate::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClearSpatialAnchorStoreMSFTDelegate_BeginInvoke_m6CCF5D13AC2EDDD1A9BDA4B152B869E05134EED0 (ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* __this, uint64_t ___0_spatialAnchorStore, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_spatialAnchorStore);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/ClearSpatialAnchorStoreMSFTDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClearSpatialAnchorStoreMSFTDelegate_EndInvoke_mA9F7719B9F48972F2A74970861F77F71DDBB9AAB (ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t LocateSpaceDelegate_Invoke_m09F2C746A247677A863DA20FE8FDDE4E5245F8C5_Multicast(LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* __this, uint64_t ___0_space, uint64_t ___1_baseSpace, int64_t ___2_time, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* ___3_location, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* currentDelegate = reinterpret_cast<LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t, int64_t, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_space, ___1_baseSpace, ___2_time, ___3_location, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t LocateSpaceDelegate_Invoke_m09F2C746A247677A863DA20FE8FDDE4E5245F8C5_OpenInst(LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* __this, uint64_t ___0_space, uint64_t ___1_baseSpace, int64_t ___2_time, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* ___3_location, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, uint64_t, int64_t, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_space, ___1_baseSpace, ___2_time, ___3_location, method);
}
int32_t LocateSpaceDelegate_Invoke_m09F2C746A247677A863DA20FE8FDDE4E5245F8C5_OpenStatic(LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* __this, uint64_t ___0_space, uint64_t ___1_baseSpace, int64_t ___2_time, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* ___3_location, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, uint64_t, int64_t, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_space, ___1_baseSpace, ___2_time, ___3_location, method);
}
int32_t LocateSpaceDelegate_Invoke_m09F2C746A247677A863DA20FE8FDDE4E5245F8C5_OpenStaticInvoker(LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* __this, uint64_t ___0_space, uint64_t ___1_baseSpace, int64_t ___2_time, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* ___3_location, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, uint64_t, uint64_t, int64_t, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_space, ___1_baseSpace, ___2_time, ___3_location);
}
int32_t LocateSpaceDelegate_Invoke_m09F2C746A247677A863DA20FE8FDDE4E5245F8C5_ClosedStaticInvoker(LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* __this, uint64_t ___0_space, uint64_t ___1_baseSpace, int64_t ___2_time, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* ___3_location, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, uint64_t, uint64_t, int64_t, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_space, ___1_baseSpace, ___2_time, ___3_location);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043 (LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* __this, uint64_t ___0_space, uint64_t ___1_baseSpace, int64_t ___2_time, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* ___3_location, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(uint64_t, uint64_t, int64_t, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_space, ___1_baseSpace, ___2_time, ___3_location);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/LocateSpaceDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateSpaceDelegate__ctor_m2BF0040304888E95146FFB3E1E71F82C7C0DBAFB (LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LocateSpaceDelegate_Invoke_m09F2C746A247677A863DA20FE8FDDE4E5245F8C5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LocateSpaceDelegate_Invoke_m09F2C746A247677A863DA20FE8FDDE4E5245F8C5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LocateSpaceDelegate_Invoke_m09F2C746A247677A863DA20FE8FDDE4E5245F8C5_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&LocateSpaceDelegate_Invoke_m09F2C746A247677A863DA20FE8FDDE4E5245F8C5_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/LocateSpaceDelegate::Invoke(System.UInt64,System.UInt64,System.Int64,Qualcomm.Snapdragon.Spaces.XrSpaceLocation&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocateSpaceDelegate_Invoke_m09F2C746A247677A863DA20FE8FDDE4E5245F8C5 (LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* __this, uint64_t ___0_space, uint64_t ___1_baseSpace, int64_t ___2_time, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* ___3_location, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t, int64_t, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_space, ___1_baseSpace, ___2_time, ___3_location, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/LocateSpaceDelegate::BeginInvoke(System.UInt64,System.UInt64,System.Int64,Qualcomm.Snapdragon.Spaces.XrSpaceLocation&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocateSpaceDelegate_BeginInvoke_m813FD8C8E5C188A33A7F4B974E4EFD6C7243DCF6 (LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* __this, uint64_t ___0_space, uint64_t ___1_baseSpace, int64_t ___2_time, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* ___3_location, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_space);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___1_baseSpace);
	__d_args[2] = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &___2_time);
	__d_args[3] = Box(XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F_il2cpp_TypeInfo_var, &*___3_location);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialAnchorsFeature/LocateSpaceDelegate::EndInvoke(Qualcomm.Snapdragon.Spaces.XrSpaceLocation&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocateSpaceDelegate_EndInvoke_mAD80E9503E4D5E516D5F9638F7128059864E35DD (LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* __this, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* ___0_location, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_location,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsSubsystem_RegisterDescriptor_mEFE16FC3EB00C57718F03116E4AD3B1543286349 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D9970F43C3DFB2541D095311D8CF5F82577AC6);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// XRAnchorSubsystemDescriptor.Create(new XRAnchorSubsystemDescriptor.Cinfo {
		//     id = ID,
		//     providerType = typeof(SpatialAnchorsProvider),
		//     subsystemTypeOverride = typeof(SpatialAnchorsSubsystem),
		//     supportsTrackableAttachments = false
		// });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384));
		Cinfo_set_id_m6344F3700C1D743D82AB9E74925F7687925734A6_inline((&V_0), _stringLiteralF9D9970F43C3DFB2541D095311D8CF5F82577AC6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Cinfo_set_providerType_m0E291C22B0B2CF634024F32ECA2E424F18157ACF_inline((&V_0), L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Cinfo_set_subsystemTypeOverride_mD5C5CAAC167444FE1BD48C1A16AA904E8DFF7052_inline((&V_0), L_3, NULL);
		Cinfo_set_supportsTrackableAttachments_m58F12783B1EF42ED420CC99E0585FA6ED046C4AD_inline((&V_0), (bool)0, NULL);
		Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384 L_4 = V_0;
		XRAnchorSubsystemDescriptor_Create_m81AF7F8FB3993C02C7AB93B292F6D7C65D8050AC(L_4, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsSubsystem__ctor_m3DA4F79A357AF845F3AF8E8B5AA6BE430FCDD82B (SpatialAnchorsSubsystem_t75C23AAC19D63F6737CBF30774D1F7ABCEEC2577* __this, const RuntimeMethod* method) 
{
	{
		XRAnchorSubsystem__ctor_m7475F45C8D0D2B0E0FE0B91E45A03A0F6541138D(__this, NULL);
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
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsProvider_Start_m315EF3EF6CFEF3FEF626DDFFA49F0F53F2847652 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1E0633DCBBB5A1F3AF4AA84B12C620A62407081D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m682623DC0033EAC5551C187880D6ACCC57983142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA9B1C7C77F5BADC0627DDA81747E01CA8F5030FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t160F335B05E7692BA4234AFD249D62316B990635_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_GetFeature_TisSpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_m0DC4F3A332A2C2FAB3F7C7B6666326953FD05EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _underlyingFeature = OpenXRSettings.Instance.GetFeature<SpatialAnchorsFeature>();
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_0;
		L_0 = OpenXRSettings_get_Instance_m0F645DB8A0ECC1325AD730F18479BCDCB92D1920(NULL);
		NullCheck(L_0);
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_1;
		L_1 = OpenXRSettings_GetFeature_TisSpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_m0DC4F3A332A2C2FAB3F7C7B6666326953FD05EC9(L_0, OpenXRSettings_GetFeature_TisSpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C_m0DC4F3A332A2C2FAB3F7C7B6666326953FD05EC9_RuntimeMethod_var);
		__this->____underlyingFeature_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____underlyingFeature_1), (void*)L_1);
		// _activeSpatialAnchors = new List<SpatialAnchor>();
		List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* L_2 = (List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2*)il2cpp_codegen_object_new(List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m682623DC0033EAC5551C187880D6ACCC57983142(L_2, List_1__ctor_m682623DC0033EAC5551C187880D6ACCC57983142_RuntimeMethod_var);
		__this->____activeSpatialAnchors_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeSpatialAnchors_2), (void*)L_2);
		// _xrAnchorsToAdd = new List<XRAnchor>();
		List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* L_3 = (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14*)il2cpp_codegen_object_new(List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mA9B1C7C77F5BADC0627DDA81747E01CA8F5030FF(L_3, List_1__ctor_mA9B1C7C77F5BADC0627DDA81747E01CA8F5030FF_RuntimeMethod_var);
		__this->____xrAnchorsToAdd_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xrAnchorsToAdd_3), (void*)L_3);
		// _trackablesToRemove = new List<TrackableId>();
		List_1_t160F335B05E7692BA4234AFD249D62316B990635* L_4 = (List_1_t160F335B05E7692BA4234AFD249D62316B990635*)il2cpp_codegen_object_new(List_1_t160F335B05E7692BA4234AFD249D62316B990635_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m1E0633DCBBB5A1F3AF4AA84B12C620A62407081D(L_4, List_1__ctor_m1E0633DCBBB5A1F3AF4AA84B12C620A62407081D_RuntimeMethod_var);
		__this->____trackablesToRemove_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trackablesToRemove_4), (void*)L_4);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsProvider_Stop_m583C80431D1F330E1EEC7BA1C12DDBE5AF2E1D8F (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, const RuntimeMethod* method) 
{
	{
		// public override void Stop() => Destroy();
		VirtualActionInvoker0::Invoke(7 /* System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>::Destroy() */, __this);
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsProvider_Destroy_m00F3AAB4418AFE6487E7753D86AA59DB42E04FD8 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_CopyTo_m3F15BEB78D893E8545DB7E3E79E8A7EE2E5AB371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m55F9DFF90B1F9806589176ACC2272325137D7479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7* V_0 = NULL;
	SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7* V_1 = NULL;
	int32_t V_2 = 0;
	SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* V_3 = NULL;
	{
		// if (_activeSpatialAnchors == null) {
		List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* L_0 = __this->____activeSpatialAnchors_2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// SpatialAnchor[] activeAnchorsToRemove = new SpatialAnchor[_activeSpatialAnchors.Count];
		List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* L_1 = __this->____activeSpatialAnchors_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m55F9DFF90B1F9806589176ACC2272325137D7479_inline(L_1, List_1_get_Count_m55F9DFF90B1F9806589176ACC2272325137D7479_RuntimeMethod_var);
		SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7* L_3 = (SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7*)(SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7*)SZArrayNew(SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		// _activeSpatialAnchors.CopyTo(activeAnchorsToRemove);
		List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* L_4 = __this->____activeSpatialAnchors_2;
		SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7* L_5 = V_0;
		NullCheck(L_4);
		List_1_CopyTo_m3F15BEB78D893E8545DB7E3E79E8A7EE2E5AB371(L_4, L_5, List_1_CopyTo_m3F15BEB78D893E8545DB7E3E79E8A7EE2E5AB371_RuntimeMethod_var);
		// foreach (var anchor in activeAnchorsToRemove) {
		SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7* L_6 = V_0;
		V_1 = L_6;
		V_2 = 0;
		goto IL_0046;
	}

IL_002c:
	{
		// foreach (var anchor in activeAnchorsToRemove) {
		SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		// TryRemoveAnchor(anchor.SubsystemAnchor.trackableId);
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_11 = V_3;
		NullCheck(L_11);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_12 = (&L_11->___SubsystemAnchor_0);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_13;
		L_13 = XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE_inline(L_12, NULL);
		bool L_14;
		L_14 = VirtualFuncInvoker1< bool, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 >::Invoke(11 /* System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::TryRemoveAnchor(UnityEngine.XR.ARSubsystems.TrackableId) */, __this, L_13);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0046:
	{
		// foreach (var anchor in activeAnchorsToRemove) {
		int32_t L_16 = V_2;
		SpatialAnchorU5BU5D_t7E63ED163EC13BCA74D849028AEDD50EBAAF66B7* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_002c;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor> Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::GetChanges(UnityEngine.XR.ARSubsystems.XRAnchor,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931 SpatialAnchorsProvider_GetChanges_m80C33A43A87FFE3EF1A5DBED4A9086DEBA5370C5 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_defaultAnchor, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisSpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_m3A13620CF21F9ECC76045CB0EE8FB7FB6FFBD0ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t96D4C1DE463BE1C11AAA08560B0DDC4A0F8F755B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3240BEEBEC023533A9DED76A7D5C825BE515AA32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC24DE096851AEDE481519F382ACBED033F68D73F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m3D23AEC65C341831CFDFE2656D73BC43EAFBAB7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6B4673E5C499167247CD6B09815C7BA11197A5F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m3CB45F40625A83042E827143810B98A862D21368_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mBB373528ED218F661B25D7DB1341304445A732B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA9B1C7C77F5BADC0627DDA81747E01CA8F5030FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m11D688A3CCF590C123A379B9F4CFCD51CD65E876_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchorsProvider_U3CGetChangesU3Eb__8_0_mA68F31AF0754A8BCA256BA851FDE39EB13DA0808_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1_CopyFrom_m5D8CC6A8E601C7AACFCD60AAFD39D828C11B1319_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* V_2 = NULL;
	Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* V_3 = NULL;
	{
		// var updatedAnchors = new List<XRAnchor>();
		List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* L_0 = (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14*)il2cpp_codegen_object_new(List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA9B1C7C77F5BADC0627DDA81747E01CA8F5030FF(L_0, List_1__ctor_mA9B1C7C77F5BADC0627DDA81747E01CA8F5030FF_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var spatialAnchor in _activeSpatialAnchors.Where(spatialAnchor => !_xrAnchorsToAdd.Contains(spatialAnchor.SubsystemAnchor))) {
		List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* L_1 = __this->____activeSpatialAnchors_2;
		Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE* L_2 = (Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE*)il2cpp_codegen_object_new(Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_2__ctor_m895AEA0FFF2182D101A389D0DEFBF38D3EC858C0(L_2, __this, (intptr_t)((void*)SpatialAnchorsProvider_U3CGetChangesU3Eb__8_0_mA68F31AF0754A8BCA256BA851FDE39EB13DA0808_RuntimeMethod_var), NULL);
		RuntimeObject* L_3;
		L_3 = Enumerable_Where_TisSpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_m3A13620CF21F9ECC76045CB0EE8FB7FB6FFBD0ED(L_1, L_2, Enumerable_Where_TisSpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_m3A13620CF21F9ECC76045CB0EE8FB7FB6FFBD0ED_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Qualcomm.Snapdragon.Spaces.SpatialAnchor>::GetEnumerator() */, IEnumerable_1_t96D4C1DE463BE1C11AAA08560B0DDC4A0F8F755B_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0066;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0066:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0053_1;
			}

IL_0025_1:
			{
				// foreach (var spatialAnchor in _activeSpatialAnchors.Where(spatialAnchor => !_xrAnchorsToAdd.Contains(spatialAnchor.SubsystemAnchor))) {
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_8;
				L_8 = InterfaceFuncInvoker0< SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Qualcomm.Snapdragon.Spaces.SpatialAnchor>::get_Current() */, IEnumerator_1_t3240BEEBEC023533A9DED76A7D5C825BE515AA32_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				// var poseAndState = _underlyingFeature.TryGetSpatialAnchorSpacePoseAndTrackingState(spatialAnchor.AnchorSpaceHandle);
				SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_9 = __this->____underlyingFeature_1;
				SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_10 = V_2;
				NullCheck(L_10);
				uint64_t L_11;
				L_11 = SpatialAnchor_get_AnchorSpaceHandle_mE8F3965555552781A06C6BC24362E3A277667520(L_10, NULL);
				NullCheck(L_9);
				Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* L_12;
				L_12 = SpatialAnchorsFeature_TryGetSpatialAnchorSpacePoseAndTrackingState_mD664863791E7F1A5813CF9EEA1E9D7868A9118B6(L_9, L_11, NULL);
				V_3 = L_12;
				// if (spatialAnchor.UpdateSubsystemAnchorPoseAndTrackingState(poseAndState)) {
				SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_13 = V_2;
				Tuple_2_t0B903DE1C818459997F703B48029A80B6DB80B18* L_14 = V_3;
				NullCheck(L_13);
				bool L_15;
				L_15 = SpatialAnchor_UpdateSubsystemAnchorPoseAndTrackingState_mDD00EA979ED3C6DAB1140CAD072BCD22BADA7C29(L_13, L_14, NULL);
				if (!L_15)
				{
					goto IL_0053_1;
				}
			}
			{
				// updatedAnchors.Add(spatialAnchor.SubsystemAnchor);
				List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* L_16 = V_0;
				SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_17 = V_2;
				NullCheck(L_17);
				XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_18 = L_17->___SubsystemAnchor_0;
				NullCheck(L_16);
				List_1_Add_mC24DE096851AEDE481519F382ACBED033F68D73F_inline(L_16, L_18, List_1_Add_mC24DE096851AEDE481519F382ACBED033F68D73F_RuntimeMethod_var);
			}

IL_0053_1:
			{
				// foreach (var spatialAnchor in _activeSpatialAnchors.Where(spatialAnchor => !_xrAnchorsToAdd.Contains(spatialAnchor.SubsystemAnchor))) {
				RuntimeObject* L_19 = V_1;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		// var trackableChanges = TrackableChanges<XRAnchor>.CopyFrom(
		//     new NativeArray<XRAnchor>(_xrAnchorsToAdd.ToArray(), allocator),
		//     new NativeArray<XRAnchor>(updatedAnchors.ToArray(), allocator),
		//     new NativeArray<TrackableId>(_trackablesToRemove.ToArray(), allocator),
		//     allocator);
		List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* L_21 = __this->____xrAnchorsToAdd_3;
		NullCheck(L_21);
		XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8* L_22;
		L_22 = List_1_ToArray_mBB373528ED218F661B25D7DB1341304445A732B7(L_21, List_1_ToArray_mBB373528ED218F661B25D7DB1341304445A732B7_RuntimeMethod_var);
		int32_t L_23 = ___1_allocator;
		NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A L_24;
		memset((&L_24), 0, sizeof(L_24));
		NativeArray_1__ctor_m11D688A3CCF590C123A379B9F4CFCD51CD65E876((&L_24), L_22, L_23, /*hidden argument*/NativeArray_1__ctor_m11D688A3CCF590C123A379B9F4CFCD51CD65E876_RuntimeMethod_var);
		List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* L_25 = V_0;
		NullCheck(L_25);
		XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8* L_26;
		L_26 = List_1_ToArray_mBB373528ED218F661B25D7DB1341304445A732B7(L_25, List_1_ToArray_mBB373528ED218F661B25D7DB1341304445A732B7_RuntimeMethod_var);
		int32_t L_27 = ___1_allocator;
		NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A L_28;
		memset((&L_28), 0, sizeof(L_28));
		NativeArray_1__ctor_m11D688A3CCF590C123A379B9F4CFCD51CD65E876((&L_28), L_26, L_27, /*hidden argument*/NativeArray_1__ctor_m11D688A3CCF590C123A379B9F4CFCD51CD65E876_RuntimeMethod_var);
		List_1_t160F335B05E7692BA4234AFD249D62316B990635* L_29 = __this->____trackablesToRemove_4;
		NullCheck(L_29);
		TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_30;
		L_30 = List_1_ToArray_m3CB45F40625A83042E827143810B98A862D21368(L_29, List_1_ToArray_m3CB45F40625A83042E827143810B98A862D21368_RuntimeMethod_var);
		int32_t L_31 = ___1_allocator;
		NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E L_32;
		memset((&L_32), 0, sizeof(L_32));
		NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715((&L_32), L_30, L_31, /*hidden argument*/NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_RuntimeMethod_var);
		int32_t L_33 = ___1_allocator;
		TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931 L_34;
		L_34 = TrackableChanges_1_CopyFrom_m5D8CC6A8E601C7AACFCD60AAFD39D828C11B1319(L_24, L_28, L_32, L_33, TrackableChanges_1_CopyFrom_m5D8CC6A8E601C7AACFCD60AAFD39D828C11B1319_RuntimeMethod_var);
		// _xrAnchorsToAdd.Clear();
		List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* L_35 = __this->____xrAnchorsToAdd_3;
		NullCheck(L_35);
		List_1_Clear_m6B4673E5C499167247CD6B09815C7BA11197A5F7_inline(L_35, List_1_Clear_m6B4673E5C499167247CD6B09815C7BA11197A5F7_RuntimeMethod_var);
		// _trackablesToRemove.Clear();
		List_1_t160F335B05E7692BA4234AFD249D62316B990635* L_36 = __this->____trackablesToRemove_4;
		NullCheck(L_36);
		List_1_Clear_m3D23AEC65C341831CFDFE2656D73BC43EAFBAB7A_inline(L_36, List_1_Clear_m3D23AEC65C341831CFDFE2656D73BC43EAFBAB7A_RuntimeMethod_var);
		// return trackableChanges;
		return L_34;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::TryAddAnchor(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsProvider_TryAddAnchor_mB860D534301AD7AEDB3A994B044C4A70F74B7A95 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* ___1_anchor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBFB2398AAC501B87FD4DD8BB135317B410B87B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC24DE096851AEDE481519F382ACBED033F68D73F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* V_2 = NULL;
	{
		// if (_persistentAnchorCanditate != null) {
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_0 = __this->____persistentAnchorCanditate_5;
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		// _activeSpatialAnchors.Add(_persistentAnchorCanditate);
		List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* L_1 = __this->____activeSpatialAnchors_2;
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_2 = __this->____persistentAnchorCanditate_5;
		NullCheck(L_1);
		List_1_Add_mBFB2398AAC501B87FD4DD8BB135317B410B87B24_inline(L_1, L_2, List_1_Add_mBFB2398AAC501B87FD4DD8BB135317B410B87B24_RuntimeMethod_var);
		// _xrAnchorsToAdd.Add(_persistentAnchorCanditate.SubsystemAnchor);
		List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* L_3 = __this->____xrAnchorsToAdd_3;
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_4 = __this->____persistentAnchorCanditate_5;
		NullCheck(L_4);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_5 = L_4->___SubsystemAnchor_0;
		NullCheck(L_3);
		List_1_Add_mC24DE096851AEDE481519F382ACBED033F68D73F_inline(L_3, L_5, List_1_Add_mC24DE096851AEDE481519F382ACBED033F68D73F_RuntimeMethod_var);
		// anchor = _persistentAnchorCanditate.SubsystemAnchor;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_6 = ___1_anchor;
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_7 = __this->____persistentAnchorCanditate_5;
		NullCheck(L_7);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_8 = L_7->___SubsystemAnchor_0;
		*(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*)L_6 = L_8;
		// _persistentAnchorCanditate = null;
		__this->____persistentAnchorCanditate_5 = (SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____persistentAnchorCanditate_5), (void*)(SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F*)NULL);
		// return true;
		return (bool)1;
	}

IL_0049:
	{
		// ulong anchorHandle = _underlyingFeature.TryCreateSpatialAnchorHandle(pose);
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_9 = __this->____underlyingFeature_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = ___0_pose;
		NullCheck(L_9);
		uint64_t L_11;
		L_11 = SpatialAnchorsFeature_TryCreateSpatialAnchorHandle_m4685D97C85E540F32B9B33712A19B3C4543AD359(L_9, L_10, NULL);
		V_0 = L_11;
		// if (anchorHandle != 0) {
		uint64_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_00a2;
		}
	}
	{
		// ulong anchorSpaceHandle = _underlyingFeature.TryCreateSpatialAnchorSpaceHandle(anchorHandle);
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_13 = __this->____underlyingFeature_1;
		uint64_t L_14 = V_0;
		NullCheck(L_13);
		uint64_t L_15;
		L_15 = SpatialAnchorsFeature_TryCreateSpatialAnchorSpaceHandle_mED98DCE76E5721F42ACE282B5E59F6B190A7B5F6(L_13, L_14, NULL);
		V_1 = L_15;
		// if (anchorSpaceHandle != 0) {
		uint64_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_00a2;
		}
	}
	{
		// var newAnchor = new SpatialAnchor(anchorHandle, anchorSpaceHandle, pose);
		uint64_t L_17 = V_0;
		uint64_t L_18 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19 = ___0_pose;
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_20 = (SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F*)il2cpp_codegen_object_new(SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		SpatialAnchor__ctor_mCE1DFED5316F7C86DA886D9F7D6FF6107DAD6CFE(L_20, L_17, L_18, L_19, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_2 = L_20;
		// _activeSpatialAnchors.Add(newAnchor);
		List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* L_21 = __this->____activeSpatialAnchors_2;
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_22 = V_2;
		NullCheck(L_21);
		List_1_Add_mBFB2398AAC501B87FD4DD8BB135317B410B87B24_inline(L_21, L_22, List_1_Add_mBFB2398AAC501B87FD4DD8BB135317B410B87B24_RuntimeMethod_var);
		// _xrAnchorsToAdd.Add(newAnchor.SubsystemAnchor);
		List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* L_23 = __this->____xrAnchorsToAdd_3;
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_24 = V_2;
		NullCheck(L_24);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_25 = L_24->___SubsystemAnchor_0;
		NullCheck(L_23);
		List_1_Add_mC24DE096851AEDE481519F382ACBED033F68D73F_inline(L_23, L_25, List_1_Add_mC24DE096851AEDE481519F382ACBED033F68D73F_RuntimeMethod_var);
		// anchor = newAnchor.SubsystemAnchor;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_26 = ___1_anchor;
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_27 = V_2;
		NullCheck(L_27);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_28 = L_27->___SubsystemAnchor_0;
		*(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*)L_26 = L_28;
		// return true;
		return (bool)1;
	}

IL_00a2:
	{
		// anchor = XRAnchor.defaultValue;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_29 = ___1_anchor;
		il2cpp_codegen_runtime_class_init_inline(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_30;
		L_30 = XRAnchor_get_defaultValue_mF68ABF2D0EC8B54DD8D5333FCD56EEF14A985A9A_inline(NULL);
		*(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*)L_29 = L_30;
		// return false;
		return (bool)0;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::TryAddAnchorFromPersistentName(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsProvider_TryAddAnchorFromPersistentName_m34B7DD94ACB60DC573DBC04CFE35204D91926F75 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, uint64_t ___0_spatialAnchorStore, String_t* ___1_spatialAnchorName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		// if (_underlyingFeature.TryCreateSpatialAnchorFromPersistedNameMSFT(spatialAnchorStore, spatialAnchorName, out ulong spatialAnchorHandle)) {
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_0 = __this->____underlyingFeature_1;
		uint64_t L_1 = ___0_spatialAnchorStore;
		String_t* L_2 = ___1_spatialAnchorName;
		NullCheck(L_0);
		bool L_3;
		L_3 = SpatialAnchorsFeature_TryCreateSpatialAnchorFromPersistedNameMSFT_m564DFAA8B0802B284872BAC1B37B4C7AD060C73B(L_0, L_1, L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// ulong anchorSpaceHandle = _underlyingFeature.TryCreateSpatialAnchorSpaceHandle(spatialAnchorHandle);
		SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_4 = __this->____underlyingFeature_1;
		uint64_t L_5 = V_0;
		NullCheck(L_4);
		uint64_t L_6;
		L_6 = SpatialAnchorsFeature_TryCreateSpatialAnchorSpaceHandle_mED98DCE76E5721F42ACE282B5E59F6B190A7B5F6(L_4, L_5, NULL);
		V_1 = L_6;
		// if (anchorSpaceHandle != 0) {
		uint64_t L_7 = V_1;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// _persistentAnchorCanditate = new SpatialAnchor(spatialAnchorHandle, anchorSpaceHandle, Pose.identity, spatialAnchorName);
		uint64_t L_8 = V_0;
		uint64_t L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		L_10 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		String_t* L_11 = ___1_spatialAnchorName;
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_12 = (SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F*)il2cpp_codegen_object_new(SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		SpatialAnchor__ctor_mCE1DFED5316F7C86DA886D9F7D6FF6107DAD6CFE(L_12, L_8, L_9, L_10, L_11, NULL);
		__this->____persistentAnchorCanditate_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____persistentAnchorCanditate_5), (void*)L_12);
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::SetPersistentAnchorCandidate(Qualcomm.Snapdragon.Spaces.SpatialAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsProvider_SetPersistentAnchorCandidate_m39F58BBE288998D8DCF8668964036C32CD729E2A (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* ___0_persistentAnchorCandidate, const RuntimeMethod* method) 
{
	{
		// _persistentAnchorCanditate = persistentAnchorCandidate;
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_0 = ___0_persistentAnchorCandidate;
		__this->____persistentAnchorCanditate_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____persistentAnchorCanditate_5), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::TryRemoveAnchor(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsProvider_TryRemoveAnchor_m57FD042A12277644B5136F9291219DB51323FF67 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_anchorId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SingleOrDefault_TisSpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_m4524B0C8E5EBAFE5D59B059326EF5DE407F15FE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m64A9DC3111539F78DAC0B7DE3FCA2E697DC52DB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m4418AC8A7D7AD5C183D1434F52F6A944A9E9E015_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CTryRemoveAnchorU3Eb__0_mEA2D710CE16513F1A4F68F5B851BDDDE80152642_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t4A75B306CBEEB639FDB932B596C5E96BB6AF4F9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t4A75B306CBEEB639FDB932B596C5E96BB6AF4F9F* V_0 = NULL;
	SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* V_1 = NULL;
	bool V_2 = false;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass12_0_t4A75B306CBEEB639FDB932B596C5E96BB6AF4F9F* L_0 = (U3CU3Ec__DisplayClass12_0_t4A75B306CBEEB639FDB932B596C5E96BB6AF4F9F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t4A75B306CBEEB639FDB932B596C5E96BB6AF4F9F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_mA3AC481E5A4A2ECA5CA0EE0EF14402D2B7805973(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t4A75B306CBEEB639FDB932B596C5E96BB6AF4F9F* L_1 = V_0;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2 = ___0_anchorId;
		NullCheck(L_1);
		L_1->___anchorId_0 = L_2;
	}
	try
	{// begin try (depth: 1)
		{
			// var anchorToRemove = _activeSpatialAnchors.SingleOrDefault(anchor => anchor.SubsystemAnchor.trackableId == anchorId);
			List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* L_3 = __this->____activeSpatialAnchors_2;
			U3CU3Ec__DisplayClass12_0_t4A75B306CBEEB639FDB932B596C5E96BB6AF4F9F* L_4 = V_0;
			Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE* L_5 = (Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE*)il2cpp_codegen_object_new(Func_2_tBFE35D236F560D23D2F1399B80B776CE49DC3EBE_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			Func_2__ctor_m895AEA0FFF2182D101A389D0DEFBF38D3EC858C0(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CTryRemoveAnchorU3Eb__0_mEA2D710CE16513F1A4F68F5B851BDDDE80152642_RuntimeMethod_var), NULL);
			SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_6;
			L_6 = Enumerable_SingleOrDefault_TisSpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_m4524B0C8E5EBAFE5D59B059326EF5DE407F15FE5(L_3, L_5, Enumerable_SingleOrDefault_TisSpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F_m4524B0C8E5EBAFE5D59B059326EF5DE407F15FE5_RuntimeMethod_var);
			V_1 = L_6;
			// if (_underlyingFeature.TryDestroySpatialAnchor(anchorToRemove.AnchorHandle)) {
			SpatialAnchorsFeature_t65786853D385A3B8CD2A4A537C8ED5B07CA7220C* L_7 = __this->____underlyingFeature_1;
			SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_8 = V_1;
			NullCheck(L_8);
			uint64_t L_9;
			L_9 = SpatialAnchor_get_AnchorHandle_m8FEEBED7F5E30675BAEF12E407A98517146BFDCC(L_8, NULL);
			NullCheck(L_7);
			bool L_10;
			L_10 = SpatialAnchorsFeature_TryDestroySpatialAnchor_mB19090DFCA8F13FFD7710A751387F959BC0D5C67(L_7, L_9, NULL);
			if (!L_10)
			{
				goto IL_005f_1;
			}
		}
		{
			// _trackablesToRemove.Add(anchorToRemove.SubsystemAnchor.trackableId);
			List_1_t160F335B05E7692BA4234AFD249D62316B990635* L_11 = __this->____trackablesToRemove_4;
			SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_12 = V_1;
			NullCheck(L_12);
			XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_13 = (&L_12->___SubsystemAnchor_0);
			TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_14;
			L_14 = XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE_inline(L_13, NULL);
			NullCheck(L_11);
			List_1_Add_m64A9DC3111539F78DAC0B7DE3FCA2E697DC52DB0_inline(L_11, L_14, List_1_Add_m64A9DC3111539F78DAC0B7DE3FCA2E697DC52DB0_RuntimeMethod_var);
			// _activeSpatialAnchors.Remove(anchorToRemove);
			List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* L_15 = __this->____activeSpatialAnchors_2;
			SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_16 = V_1;
			NullCheck(L_15);
			bool L_17;
			L_17 = List_1_Remove_m4418AC8A7D7AD5C183D1434F52F6A944A9E9E015(L_15, L_16, List_1_Remove_m4418AC8A7D7AD5C183D1434F52F6A944A9E9E015_RuntimeMethod_var);
			// return true;
			V_2 = (bool)1;
			goto IL_0089;
		}

IL_005f_1:
		{
			// } catch (InvalidOperationException ) {
			goto IL_0087;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0061;
		}
		throw e;
	}

CATCH_0061:
	{// begin catch(System.InvalidOperationException)
		// } catch (InvalidOperationException ) {
		// Debug.LogError("Trying to remove XRAnchor with an invalid Trackable ID: " + anchorId);
		U3CU3Ec__DisplayClass12_0_t4A75B306CBEEB639FDB932B596C5E96BB6AF4F9F* L_18 = V_0;
		NullCheck(L_18);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_19 = L_18->___anchorId_0;
		V_3 = L_19;
		String_t* L_20;
		L_20 = TrackableId_ToString_m4BE1AD91726751D994E6FB864B231BE5D7D3F85F((&V_3), NULL);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCAEB56BB7CF6A80CCE72DCF7B8CFE450EF4B618B)), L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_21, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0087;
	}// end catch (depth: 1)

IL_0087:
	{
		// return false;
		return (bool)0;
	}

IL_0089:
	{
		// }
		bool L_22 = V_2;
		return L_22;
	}
}
// System.String Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::TryGetSavedNameFromTrackableId(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpatialAnchorsProvider_TryGetSavedNameFromTrackableId_mF37BF9A04A5E321A4D8A91EF85D86EE5CEDCC875 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8711EE6EDB68F781AF7508D53F6A8739AA70B319_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4AF4E3462FC0BBEADFF375FE85AFA952B562C931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1849CC9628E9820B1E154C8571087C7EB27E1F0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDD99FA8E89F7A91AFDF78326B64B530338719CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// foreach (var activeAnchor in _activeSpatialAnchors) {
		List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* L_0 = __this->____activeSpatialAnchors_2;
		NullCheck(L_0);
		Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6 L_1;
		L_1 = List_1_GetEnumerator_mDD99FA8E89F7A91AFDF78326B64B530338719CD4(L_0, List_1_GetEnumerator_mDD99FA8E89F7A91AFDF78326B64B530338719CD4_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8711EE6EDB68F781AF7508D53F6A8739AA70B319((&V_0), Enumerator_Dispose_m8711EE6EDB68F781AF7508D53F6A8739AA70B319_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_000e_1:
			{
				// foreach (var activeAnchor in _activeSpatialAnchors) {
				SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_2;
				L_2 = Enumerator_get_Current_m1849CC9628E9820B1E154C8571087C7EB27E1F0B_inline((&V_0), Enumerator_get_Current_m1849CC9628E9820B1E154C8571087C7EB27E1F0B_RuntimeMethod_var);
				V_1 = L_2;
				// if (activeAnchor.SubsystemAnchor.trackableId == trackableId) {
				SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_3 = V_1;
				NullCheck(L_3);
				XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_4 = (&L_3->___SubsystemAnchor_0);
				TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_5;
				L_5 = XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE_inline(L_4, NULL);
				TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_6 = ___0_trackableId;
				il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
				bool L_7;
				L_7 = TrackableId_op_Equality_m9E51E31C58CA710A1BD2E3AE1D2286E2FE5B3529(L_5, L_6, NULL);
				if (!L_7)
				{
					goto IL_0032_1;
				}
			}
			{
				// return activeAnchor.SavedName;
				SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_8 = V_1;
				NullCheck(L_8);
				String_t* L_9 = L_8->___SavedName_1;
				V_2 = L_9;
				goto IL_0051;
			}

IL_0032_1:
			{
				// foreach (var activeAnchor in _activeSpatialAnchors) {
				bool L_10;
				L_10 = Enumerator_MoveNext_m4AF4E3462FC0BBEADFF375FE85AFA952B562C931((&V_0), Enumerator_MoveNext_m4AF4E3462FC0BBEADFF375FE85AFA952B562C931_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// return string.Empty;
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_11;
	}

IL_0051:
	{
		// }
		String_t* L_12 = V_2;
		return L_12;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::UpdateAnchorSavedName(UnityEngine.XR.ARSubsystems.TrackableId,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsProvider_UpdateAnchorSavedName_m497685B1A1FC34271A9D1FCCAC011DEAD644A648 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_anchorId, String_t* ___1_savedName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8711EE6EDB68F781AF7508D53F6A8739AA70B319_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4AF4E3462FC0BBEADFF375FE85AFA952B562C931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1849CC9628E9820B1E154C8571087C7EB27E1F0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDD99FA8E89F7A91AFDF78326B64B530338719CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* V_1 = NULL;
	{
		// foreach (var activeAnchor in _activeSpatialAnchors) {
		List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* L_0 = __this->____activeSpatialAnchors_2;
		NullCheck(L_0);
		Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6 L_1;
		L_1 = List_1_GetEnumerator_mDD99FA8E89F7A91AFDF78326B64B530338719CD4(L_0, List_1_GetEnumerator_mDD99FA8E89F7A91AFDF78326B64B530338719CD4_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8711EE6EDB68F781AF7508D53F6A8739AA70B319((&V_0), Enumerator_Dispose_m8711EE6EDB68F781AF7508D53F6A8739AA70B319_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_000e_1:
			{
				// foreach (var activeAnchor in _activeSpatialAnchors) {
				SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_2;
				L_2 = Enumerator_get_Current_m1849CC9628E9820B1E154C8571087C7EB27E1F0B_inline((&V_0), Enumerator_get_Current_m1849CC9628E9820B1E154C8571087C7EB27E1F0B_RuntimeMethod_var);
				V_1 = L_2;
				// if (activeAnchor.SubsystemAnchor.trackableId == anchorId) {
				SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_3 = V_1;
				NullCheck(L_3);
				XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_4 = (&L_3->___SubsystemAnchor_0);
				TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_5;
				L_5 = XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE_inline(L_4, NULL);
				TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_6 = ___0_anchorId;
				il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
				bool L_7;
				L_7 = TrackableId_op_Equality_m9E51E31C58CA710A1BD2E3AE1D2286E2FE5B3529(L_5, L_6, NULL);
				if (!L_7)
				{
					goto IL_0032_1;
				}
			}
			{
				// activeAnchor.SavedName = savedName;
				SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_8 = V_1;
				String_t* L_9 = ___1_savedName;
				NullCheck(L_8);
				L_8->___SavedName_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&L_8->___SavedName_1), (void*)L_9);
				// return;
				goto IL_004b;
			}

IL_0032_1:
			{
				// foreach (var activeAnchor in _activeSpatialAnchors) {
				bool L_10;
				L_10 = Enumerator_MoveNext_m4AF4E3462FC0BBEADFF375FE85AFA952B562C931((&V_0), Enumerator_MoveNext_m4AF4E3462FC0BBEADFF375FE85AFA952B562C931_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::ClearAllAnchorSavedNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsProvider_ClearAllAnchorSavedNames_mD29F12637E25DE3B8F2A7E81C4DAAE3A3F716DB4 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8711EE6EDB68F781AF7508D53F6A8739AA70B319_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4AF4E3462FC0BBEADFF375FE85AFA952B562C931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1849CC9628E9820B1E154C8571087C7EB27E1F0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDD99FA8E89F7A91AFDF78326B64B530338719CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var activeAnchor in _activeSpatialAnchors) {
		List_1_tCB1EB56C188600E3D79A26B129D8EBACC2E519B2* L_0 = __this->____activeSpatialAnchors_2;
		NullCheck(L_0);
		Enumerator_t8FB98582046844230DF9FE18E4A2D49162E13EC6 L_1;
		L_1 = List_1_GetEnumerator_mDD99FA8E89F7A91AFDF78326B64B530338719CD4(L_0, List_1_GetEnumerator_mDD99FA8E89F7A91AFDF78326B64B530338719CD4_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8711EE6EDB68F781AF7508D53F6A8739AA70B319((&V_0), Enumerator_Dispose_m8711EE6EDB68F781AF7508D53F6A8739AA70B319_RuntimeMethod_var);
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
				// foreach (var activeAnchor in _activeSpatialAnchors) {
				SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_2;
				L_2 = Enumerator_get_Current_m1849CC9628E9820B1E154C8571087C7EB27E1F0B_inline((&V_0), Enumerator_get_Current_m1849CC9628E9820B1E154C8571087C7EB27E1F0B_RuntimeMethod_var);
				// activeAnchor.SavedName = string.Empty;
				String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				NullCheck(L_2);
				L_2->___SavedName_1 = L_3;
				Il2CppCodeGenWriteBarrier((void**)(&L_2->___SavedName_1), (void*)L_3);
			}

IL_001f_1:
			{
				// foreach (var activeAnchor in _activeSpatialAnchors) {
				bool L_4;
				L_4 = Enumerator_MoveNext_m4AF4E3462FC0BBEADFF375FE85AFA952B562C931((&V_0), Enumerator_MoveNext_m4AF4E3462FC0BBEADFF375FE85AFA952B562C931_RuntimeMethod_var);
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
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorsProvider__ctor_mFD5C14D017F935CBF28DC2A6C5BE4B259DD4DBB5 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, const RuntimeMethod* method) 
{
	{
		Provider__ctor_mEC1254B41F2C452FD31DE2DF6F9D8AA5A4E4FB94(__this, NULL);
		return;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider::<GetChanges>b__8_0(Qualcomm.Snapdragon.Spaces.SpatialAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorsProvider_U3CGetChangesU3Eb__8_0_mA68F31AF0754A8BCA256BA851FDE39EB13DA0808 (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* ___0_spatialAnchor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mE904A9877FADE8FE2EF74E23ABA4012A6EA48C11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// foreach (var spatialAnchor in _activeSpatialAnchors.Where(spatialAnchor => !_xrAnchorsToAdd.Contains(spatialAnchor.SubsystemAnchor))) {
		List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* L_0 = __this->____xrAnchorsToAdd_3;
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_1 = ___0_spatialAnchor;
		NullCheck(L_1);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_2 = L_1->___SubsystemAnchor_0;
		NullCheck(L_0);
		bool L_3;
		L_3 = List_1_Contains_mE904A9877FADE8FE2EF74E23ABA4012A6EA48C11(L_0, L_2, List_1_Contains_mE904A9877FADE8FE2EF74E23ABA4012A6EA48C11_RuntimeMethod_var);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
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
// System.Void Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mA3AC481E5A4A2ECA5CA0EE0EF14402D2B7805973 (U3CU3Ec__DisplayClass12_0_t4A75B306CBEEB639FDB932B596C5E96BB6AF4F9F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialAnchorsSubsystem/SpatialAnchorsProvider/<>c__DisplayClass12_0::<TryRemoveAnchor>b__0(Qualcomm.Snapdragon.Spaces.SpatialAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CTryRemoveAnchorU3Eb__0_mEA2D710CE16513F1A4F68F5B851BDDDE80152642 (U3CU3Ec__DisplayClass12_0_t4A75B306CBEEB639FDB932B596C5E96BB6AF4F9F* __this, SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* ___0_anchor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var anchorToRemove = _activeSpatialAnchors.SingleOrDefault(anchor => anchor.SubsystemAnchor.trackableId == anchorId);
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_0 = ___0_anchor;
		NullCheck(L_0);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_1 = (&L_0->___SubsystemAnchor_0);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2;
		L_2 = XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE_inline(L_1, NULL);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3 = __this->___anchorId_0;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = TrackableId_op_Equality_m9E51E31C58CA710A1BD2E3AE1D2286E2FE5B3529(L_2, L_3, NULL);
		return L_4;
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
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::get_IsRequiringBaseRuntimeFeature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMeshingFeature_get_IsRequiringBaseRuntimeFeature_m35C9AF7CDCA8AA6E15B5EBE5156F577B4312AF24 (SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA* __this, const RuntimeMethod* method) 
{
	{
		// protected override bool IsRequiringBaseRuntimeFeature => true;
		return (bool)1;
	}
}
// System.String Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::GetXrLayersToLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpatialMeshingFeature_GetXrLayersToLoad_mEA2654D185DB5DEDFF0AFDAA7C6AC5022415692C (SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82EECFA7F650718796894A00082A09F13D2D5AA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "XR_APILAYER_QTI_scene_understanding";
		return _stringLiteral82EECFA7F650718796894A00082A09F13D2D5AA0;
	}
}
// System.IntPtr Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpatialMeshingFeature_HookGetInstanceProcAddr_mBEDA89FB8AE0C4F8436DB229A3A624597C0FEDAE (SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA* __this, intptr_t ___0_func, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RequestLayers(GetXrLayersToLoad());
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(29 /* System.String Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::GetXrLayersToLoad() */, __this);
		uint32_t L_1;
		L_1 = SpacesOpenXRFeature_RequestLayers_m14C99CB5811B2F000D19FD2AE2BCDD2866FF5E88(L_0, NULL);
		// return Internal_GetInterceptedInstanceProcAddr(func);
		intptr_t L_2 = ___0_func;
		il2cpp_codegen_runtime_class_init_inline(SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = SpatialMeshingFeature_Internal_GetInterceptedInstanceProcAddr_m9688A072EEBA614133E53F5A7FD25E1AD397029F(L_2, NULL);
		return L_3;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMeshingFeature_OnInstanceCreate_mBF2FEC09E00D968EB15B97A36C08EA913E3D19F5 (SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA* __this, uint64_t ___0_instanceHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_GetFeature_TisBaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4_mFBAD671AC603BC219554DB1975A41D3E64C81C6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral938F7DEE9DC17D094545C894D547E74457E49727);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB5A3B7158BD9A0F7AFF2E23F38CDD31388F48A4);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// base.OnInstanceCreate(instanceHandle);
		uint64_t L_0 = ___0_instanceHandle;
		bool L_1;
		L_1 = SpacesOpenXRFeature_OnInstanceCreate_m0324D4194E2B85DE1F841E6F07FD59E585DAB336(__this, L_0, NULL);
		// Internal_RegisterMeshingLifecycleProvider();
		il2cpp_codegen_runtime_class_init_inline(SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var);
		SpatialMeshingFeature_Internal_RegisterMeshingLifecycleProvider_m5BD0977192D0C5323EA3A2BAD41BBE8DE4F18744(NULL);
		// Internal_SetInstanceHandle(instanceHandle);
		uint64_t L_2 = ___0_instanceHandle;
		SpatialMeshingFeature_Internal_SetInstanceHandle_mAFCFE24FB40E7F7D108619005E2349A9EA80EFC1(L_2, NULL);
		// _baseRuntimeFeature = OpenXRSettings.Instance.GetFeature<BaseRuntimeFeature>();
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_3;
		L_3 = OpenXRSettings_get_Instance_m0F645DB8A0ECC1325AD730F18479BCDCB92D1920(NULL);
		NullCheck(L_3);
		BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4* L_4;
		L_4 = OpenXRSettings_GetFeature_TisBaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4_mFBAD671AC603BC219554DB1975A41D3E64C81C6F(L_3, OpenXRSettings_GetFeature_TisBaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4_mFBAD671AC603BC219554DB1975A41D3E64C81C6F_RuntimeMethod_var);
		__this->____baseRuntimeFeature_27 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____baseRuntimeFeature_27), (void*)L_4);
		// var missingExtensions = GetMissingExtensions(FeatureExtensions);
		RuntimeObject* L_5;
		L_5 = SpacesOpenXRFeature_GetMissingExtensions_mC574B76CDC275762A5368CF9214ACA2DF6722361(__this, _stringLiteralCB5A3B7158BD9A0F7AFF2E23F38CDD31388F48A4, NULL);
		V_0 = L_5;
		// if (missingExtensions.Any()) {
		RuntimeObject* L_6 = V_0;
		bool L_7;
		L_7 = Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D(L_6, Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// Debug.Log(FeatureName + " is missing following extension in the runtime: " + String.Join(",", missingExtensions));
		RuntimeObject* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral938F7DEE9DC17D094545C894D547E74457E49727, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// return false;
		return (bool)0;
	}

IL_0053:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::OnSubsystemCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_OnSubsystemCreate_m27E5A22456F1153140FEF8D6539185088F341153 (SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F9E614749173B51C22950E079DB273A4810A88);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override void OnSubsystemCreate() => CreateSubsystem<XRMeshSubsystemDescriptor, XRMeshSubsystem>(_meshSubsystemDescriptors, "Spaces-MeshSubsystem");
		il2cpp_codegen_runtime_class_init_inline(SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var);
		List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* L_0 = ((SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var))->____meshSubsystemDescriptors_28;
		OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607(__this, L_0, _stringLiteralA2F9E614749173B51C22950E079DB273A4810A88, OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607_RuntimeMethod_var);
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::OnSubsystemStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_OnSubsystemStop_m10CB3845E2D47AC7A55B84BEB0DE02D559684865 (SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override void OnSubsystemStop() => StopSubsystem<XRMeshSubsystem>();
		OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86(__this, OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86_RuntimeMethod_var);
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::OnSubsystemDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_OnSubsystemDestroy_m32E3C54AD2C8CC3B0D842E8446FCEECF3E75B26D (SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override void OnSubsystemDestroy() => DestroySubsystem<XRMeshSubsystem>();
		OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB(__this, OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB_RuntimeMethod_var);
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::OnSessionCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_OnSessionCreate_m7A38F25F3413ABAA6472EAAFE7D2BD092C4FC1BD (SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA* __this, uint64_t ___0_sessionHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnSessionCreate(sessionHandle);
		uint64_t L_0 = ___0_sessionHandle;
		SpacesOpenXRFeature_OnSessionCreate_m36B81205F47352B84F2039C94CE58DBBB66A1804(__this, L_0, NULL);
		// Internal_SetSessionHandle(sessionHandle);
		uint64_t L_1 = ___0_sessionHandle;
		il2cpp_codegen_runtime_class_init_inline(SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var);
		SpatialMeshingFeature_Internal_SetSessionHandle_mA55D51A96361262F56449C9E27111C60F38F5022(L_1, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::OnAppSpaceChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_OnAppSpaceChange_m52A405DF272B76C5258C297A0B474FD48CAE94BB (SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA* __this, uint64_t ___0_spaceHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnAppSpaceChange(spaceHandle);
		uint64_t L_0 = ___0_spaceHandle;
		SpacesOpenXRFeature_OnAppSpaceChange_mB3B954691F79C6A6CCD5C2E900EB445696E7AC87(__this, L_0, NULL);
		// Internal_SetSpaceHandle(spaceHandle);
		uint64_t L_1 = ___0_spaceHandle;
		il2cpp_codegen_runtime_class_init_inline(SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var);
		SpatialMeshingFeature_Internal_SetSpaceHandle_mAB5E5F895CE3BBE833A2FBA2F256510DDDC197C0(L_1, NULL);
		// }
		return;
	}
}
// System.IntPtr Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::Internal_GetInterceptedInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpatialMeshingFeature_Internal_GetInterceptedInstanceProcAddr_m9688A072EEBA614133E53F5A7FD25E1AD397029F (intptr_t ___0_xrGetInstanceProcAddr, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMeshingProvider_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMeshingProvider"), "GetInterceptedInstanceProcAddr", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMeshingProvider_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetInterceptedInstanceProcAddr)(___0_xrGetInstanceProcAddr);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_xrGetInstanceProcAddr);
	#endif

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::Internal_RegisterMeshingLifecycleProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_Internal_RegisterMeshingLifecycleProvider_m5BD0977192D0C5323EA3A2BAD41BBE8DE4F18744 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMeshingProvider_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMeshingProvider"), "RegisterMeshingLifecycleProvider", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMeshingProvider_INTERNAL
	reinterpret_cast<PInvokeFunc>(RegisterMeshingLifecycleProvider)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::Internal_SetInstanceHandle(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_Internal_SetInstanceHandle_mAFCFE24FB40E7F7D108619005E2349A9EA80EFC1 (uint64_t ___0_instance, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMeshingProvider_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMeshingProvider"), "SetInstanceHandle", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMeshingProvider_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetInstanceHandle)(___0_instance);
	#else
	il2cppPInvokeFunc(___0_instance);
	#endif

}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::Internal_SetSessionHandle(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_Internal_SetSessionHandle_mA55D51A96361262F56449C9E27111C60F38F5022 (uint64_t ___0_session, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMeshingProvider_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMeshingProvider"), "SetSessionHandle", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMeshingProvider_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetSessionHandle)(___0_session);
	#else
	il2cppPInvokeFunc(___0_session);
	#endif

}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::Internal_SetSpaceHandle(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_Internal_SetSpaceHandle_mAB5E5F895CE3BBE833A2FBA2F256510DDDC197C0 (uint64_t ___0_space, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMeshingProvider_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMeshingProvider"), "SetSpaceHandle", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMeshingProvider_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetSpaceHandle)(___0_space);
	#else
	il2cppPInvokeFunc(___0_space);
	#endif

}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::Internal_RegisterProviderWithSceneObserver(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_Internal_RegisterProviderWithSceneObserver_m07FB89EE9FBB7844DA7A960A4C4E5FED8910AF36 (String_t* ___0_subsystemId, int32_t ___1_requestedFeatures, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMeshingProvider_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMeshingProvider"), "RegisterProviderWithSceneObserver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_subsystemId' to native representation
	char* ____0_subsystemId_marshaled = NULL;
	____0_subsystemId_marshaled = il2cpp_codegen_marshal_string(___0_subsystemId);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMeshingProvider_INTERNAL
	reinterpret_cast<PInvokeFunc>(RegisterProviderWithSceneObserver)(____0_subsystemId_marshaled, ___1_requestedFeatures);
	#else
	il2cppPInvokeFunc(____0_subsystemId_marshaled, ___1_requestedFeatures);
	#endif

	// Marshaling cleanup of parameter '___0_subsystemId' native representation
	il2cpp_codegen_marshal_free(____0_subsystemId_marshaled);
	____0_subsystemId_marshaled = NULL;

}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::Internal_UnregisterProviderWithSceneObserver(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature_Internal_UnregisterProviderWithSceneObserver_m8C2AE43EBC56404C2F205B999FB64C071A105096 (String_t* ___0_subsystemId, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libMeshingProvider_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libMeshingProvider"), "UnregisterProviderWithSceneObserver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_subsystemId' to native representation
	char* ____0_subsystemId_marshaled = NULL;
	____0_subsystemId_marshaled = il2cpp_codegen_marshal_string(___0_subsystemId);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libMeshingProvider_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnregisterProviderWithSceneObserver)(____0_subsystemId_marshaled);
	#else
	il2cppPInvokeFunc(____0_subsystemId_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_subsystemId' native representation
	il2cpp_codegen_marshal_free(____0_subsystemId_marshaled);
	____0_subsystemId_marshaled = NULL;

}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature__ctor_m6715D10B5FDAC89A1B7D8A86107AE43D5436BAE1 (SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA* __this, const RuntimeMethod* method) 
{
	{
		SpacesOpenXRFeature__ctor_mFC1AC4D00ABFBCF3DC87141BF5ECEB49DCF5EE16(__this, NULL);
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshingFeature__cctor_mAE8142B52B445BF623DB4DFEDC63D7DC2D4BA5F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRMeshSubsystemDescriptor> _meshSubsystemDescriptors = new List<XRMeshSubsystemDescriptor>();
		List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* L_0 = (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22*)il2cpp_codegen_object_new(List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756(L_0, List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756_RuntimeMethod_var);
		((SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var))->____meshSubsystemDescriptors_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMeshingFeature_t7F065A6E86E91EE1B60F53DA07EEE53AA4F5A4AA_il2cpp_TypeInfo_var))->____meshSubsystemDescriptors_28), (void*)L_0);
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
int32_t CreateSceneObserverMSFTDelegate_Invoke_m05CF0D8891D3F59D1372986C78BEFD46E321F390_Multicast(CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D* __this, uint64_t ___0_session, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB** ___1_createInfo, uint64_t* ___2_sceneObserver, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D* currentDelegate = reinterpret_cast<CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB**, uint64_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_session, ___1_createInfo, ___2_sceneObserver, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t CreateSceneObserverMSFTDelegate_Invoke_m05CF0D8891D3F59D1372986C78BEFD46E321F390_OpenInst(CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D* __this, uint64_t ___0_session, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB** ___1_createInfo, uint64_t* ___2_sceneObserver, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB**, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_session, ___1_createInfo, ___2_sceneObserver, method);
}
int32_t CreateSceneObserverMSFTDelegate_Invoke_m05CF0D8891D3F59D1372986C78BEFD46E321F390_OpenStatic(CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D* __this, uint64_t ___0_session, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB** ___1_createInfo, uint64_t* ___2_sceneObserver, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB**, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_session, ___1_createInfo, ___2_sceneObserver, method);
}
int32_t CreateSceneObserverMSFTDelegate_Invoke_m05CF0D8891D3F59D1372986C78BEFD46E321F390_OpenStaticInvoker(CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D* __this, uint64_t ___0_session, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB** ___1_createInfo, uint64_t* ___2_sceneObserver, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB**, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_session, ___1_createInfo, ___2_sceneObserver);
}
int32_t CreateSceneObserverMSFTDelegate_Invoke_m05CF0D8891D3F59D1372986C78BEFD46E321F390_ClosedStaticInvoker(CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D* __this, uint64_t ___0_session, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB** ___1_createInfo, uint64_t* ___2_sceneObserver, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB**, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_session, ___1_createInfo, ___2_sceneObserver);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D (CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D* __this, uint64_t ___0_session, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB** ___1_createInfo, uint64_t* ___2_sceneObserver, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}


	typedef int32_t (CDECL *PInvokeFunc)(uint64_t, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshaled_pinvoke**, uint64_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_createInfo' to native representation
	XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshaled_pinvoke* ____1_createInfo_marshaled = NULL;
	XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshaled_pinvoke ____1_createInfo_marshaled_dereferenced = {};
	if (*___1_createInfo != NULL)
	{
		XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshal_pinvoke(**___1_createInfo, ____1_createInfo_marshaled_dereferenced);
	}
	____1_createInfo_marshaled = &____1_createInfo_marshaled_dereferenced;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_session, (&____1_createInfo_marshaled), ___2_sceneObserver);

	// Marshaling of parameter '___1_createInfo' back from native representation
	XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB* _____1_createInfo_marshaled_unmarshaled_dereferenced = (____1_createInfo_marshaled != NULL)
	    ? (XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB*)il2cpp_codegen_object_new(XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_il2cpp_TypeInfo_var)
	    : NULL;
	if (_____1_createInfo_marshaled_unmarshaled_dereferenced != NULL)
	{
		XrSceneObserverCreateInfoMSFT__ctor_m0AFC5A1189B4C5E151A642B0AACBD5E235E5815F(_____1_createInfo_marshaled_unmarshaled_dereferenced, NULL);
		XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshal_pinvoke_back(*____1_createInfo_marshaled, *_____1_createInfo_marshaled_unmarshaled_dereferenced);
	}
	if (____1_createInfo_marshaled != NULL)
	{
		XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB_marshal_pinvoke_cleanup(*____1_createInfo_marshaled);
	}
	*___1_createInfo = _____1_createInfo_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___1_createInfo, (void*)____1_createInfo_marshaled);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneObserverMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSceneObserverMSFTDelegate__ctor_m69AB72D4903A3BB6A6349AA1F65403C60D0ADE28 (CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateSceneObserverMSFTDelegate_Invoke_m05CF0D8891D3F59D1372986C78BEFD46E321F390_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CreateSceneObserverMSFTDelegate_Invoke_m05CF0D8891D3F59D1372986C78BEFD46E321F390_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateSceneObserverMSFTDelegate_Invoke_m05CF0D8891D3F59D1372986C78BEFD46E321F390_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&CreateSceneObserverMSFTDelegate_Invoke_m05CF0D8891D3F59D1372986C78BEFD46E321F390_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneObserverMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSceneObserverCreateInfoMSFT&,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreateSceneObserverMSFTDelegate_Invoke_m05CF0D8891D3F59D1372986C78BEFD46E321F390 (CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D* __this, uint64_t ___0_session, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB** ___1_createInfo, uint64_t* ___2_sceneObserver, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB**, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_session, ___1_createInfo, ___2_sceneObserver, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneObserverMSFTDelegate::BeginInvoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSceneObserverCreateInfoMSFT&,System.UInt64&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateSceneObserverMSFTDelegate_BeginInvoke_mF7DBF17FFCE45B8E067A67DBD5983193C2EC4159 (CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D* __this, uint64_t ___0_session, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB** ___1_createInfo, uint64_t* ___2_sceneObserver, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_session);
	__d_args[1] = *___1_createInfo;
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___2_sceneObserver);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneObserverMSFTDelegate::EndInvoke(Qualcomm.Snapdragon.Spaces.XrSceneObserverCreateInfoMSFT&,System.UInt64&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreateSceneObserverMSFTDelegate_EndInvoke_m998EEC02E13DCBF505F51073A7B24698ABFF1A07 (CreateSceneObserverMSFTDelegate_t89CC466D366FAD036198CD146474A4BB1ED8E34D* __this, XrSceneObserverCreateInfoMSFT_tB81C9A13D7C298A32DBAA8681E4BDC54954D1ABB** ___0_createInfo, uint64_t* ___1_sceneObserver, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_createInfo,
	___1_sceneObserver,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t ComputeNewSceneMSFTDelegate_Invoke_mF73F994CF781E9AE5E3CBE2D62D386B2FA74E016_Multicast(ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572* __this, uint64_t ___0_sceneObserver, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38* ___1_computeInfo, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572* currentDelegate = reinterpret_cast<ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sceneObserver, ___1_computeInfo, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t ComputeNewSceneMSFTDelegate_Invoke_mF73F994CF781E9AE5E3CBE2D62D386B2FA74E016_OpenInst(ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572* __this, uint64_t ___0_sceneObserver, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38* ___1_computeInfo, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_sceneObserver, ___1_computeInfo, method);
}
int32_t ComputeNewSceneMSFTDelegate_Invoke_mF73F994CF781E9AE5E3CBE2D62D386B2FA74E016_OpenStatic(ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572* __this, uint64_t ___0_sceneObserver, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38* ___1_computeInfo, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_sceneObserver, ___1_computeInfo, method);
}
int32_t ComputeNewSceneMSFTDelegate_Invoke_mF73F994CF781E9AE5E3CBE2D62D386B2FA74E016_OpenStaticInvoker(ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572* __this, uint64_t ___0_sceneObserver, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38* ___1_computeInfo, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, uint64_t, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sceneObserver, ___1_computeInfo);
}
int32_t ComputeNewSceneMSFTDelegate_Invoke_mF73F994CF781E9AE5E3CBE2D62D386B2FA74E016_ClosedStaticInvoker(ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572* __this, uint64_t ___0_sceneObserver, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38* ___1_computeInfo, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, uint64_t, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sceneObserver, ___1_computeInfo);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572 (ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572* __this, uint64_t ___0_sceneObserver, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38* ___1_computeInfo, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(uint64_t, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_sceneObserver, ___1_computeInfo);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/ComputeNewSceneMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeNewSceneMSFTDelegate__ctor_m436EED3867F77DD71F0BCC9CD4254411DB432FA6 (ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ComputeNewSceneMSFTDelegate_Invoke_mF73F994CF781E9AE5E3CBE2D62D386B2FA74E016_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ComputeNewSceneMSFTDelegate_Invoke_mF73F994CF781E9AE5E3CBE2D62D386B2FA74E016_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ComputeNewSceneMSFTDelegate_Invoke_mF73F994CF781E9AE5E3CBE2D62D386B2FA74E016_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&ComputeNewSceneMSFTDelegate_Invoke_mF73F994CF781E9AE5E3CBE2D62D386B2FA74E016_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/ComputeNewSceneMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrNewSceneComputeInfoMSFT&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputeNewSceneMSFTDelegate_Invoke_mF73F994CF781E9AE5E3CBE2D62D386B2FA74E016 (ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572* __this, uint64_t ___0_sceneObserver, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38* ___1_computeInfo, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sceneObserver, ___1_computeInfo, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/ComputeNewSceneMSFTDelegate::BeginInvoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrNewSceneComputeInfoMSFT&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComputeNewSceneMSFTDelegate_BeginInvoke_m4A727DB4AB2F84128CF970C7A6AF847F72EB1F4C (ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572* __this, uint64_t ___0_sceneObserver, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38* ___1_computeInfo, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_sceneObserver);
	__d_args[1] = Box(XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38_il2cpp_TypeInfo_var, &*___1_computeInfo);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/ComputeNewSceneMSFTDelegate::EndInvoke(Qualcomm.Snapdragon.Spaces.XrNewSceneComputeInfoMSFT&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputeNewSceneMSFTDelegate_EndInvoke_mE1822F7F48CB128A98BC47D83BA4C6CBE846DF85 (ComputeNewSceneMSFTDelegate_tBA9FBD9A864A9C3B84C0E92948BE6BD44B485572* __this, XrNewSceneComputeInfoMSFT_t274F718E733662A104E446338484FAD218190B38* ___0_computeInfo, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_computeInfo,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t GetSceneComputeStateMSFTDelegate_Invoke_m54FAFDE8470FC944C05ED1774F967C7579BC36BE_Multicast(GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6* __this, uint64_t ___0_sceneObserver, int32_t* ___1_state, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6* currentDelegate = reinterpret_cast<GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, int32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sceneObserver, ___1_state, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t GetSceneComputeStateMSFTDelegate_Invoke_m54FAFDE8470FC944C05ED1774F967C7579BC36BE_OpenInst(GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6* __this, uint64_t ___0_sceneObserver, int32_t* ___1_state, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_sceneObserver, ___1_state, method);
}
int32_t GetSceneComputeStateMSFTDelegate_Invoke_m54FAFDE8470FC944C05ED1774F967C7579BC36BE_OpenStatic(GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6* __this, uint64_t ___0_sceneObserver, int32_t* ___1_state, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_sceneObserver, ___1_state, method);
}
int32_t GetSceneComputeStateMSFTDelegate_Invoke_m54FAFDE8470FC944C05ED1774F967C7579BC36BE_OpenStaticInvoker(GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6* __this, uint64_t ___0_sceneObserver, int32_t* ___1_state, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, uint64_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sceneObserver, ___1_state);
}
int32_t GetSceneComputeStateMSFTDelegate_Invoke_m54FAFDE8470FC944C05ED1774F967C7579BC36BE_ClosedStaticInvoker(GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6* __this, uint64_t ___0_sceneObserver, int32_t* ___1_state, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, uint64_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sceneObserver, ___1_state);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6 (GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6* __this, uint64_t ___0_sceneObserver, int32_t* ___1_state, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(uint64_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_sceneObserver, ___1_state);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComputeStateMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetSceneComputeStateMSFTDelegate__ctor_m224B9A87DCDF1B4780E88BA923EFC6F2073799AD (GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetSceneComputeStateMSFTDelegate_Invoke_m54FAFDE8470FC944C05ED1774F967C7579BC36BE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetSceneComputeStateMSFTDelegate_Invoke_m54FAFDE8470FC944C05ED1774F967C7579BC36BE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetSceneComputeStateMSFTDelegate_Invoke_m54FAFDE8470FC944C05ED1774F967C7579BC36BE_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&GetSceneComputeStateMSFTDelegate_Invoke_m54FAFDE8470FC944C05ED1774F967C7579BC36BE_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComputeStateMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSceneComputeStateMSFT&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetSceneComputeStateMSFTDelegate_Invoke_m54FAFDE8470FC944C05ED1774F967C7579BC36BE (GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6* __this, uint64_t ___0_sceneObserver, int32_t* ___1_state, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sceneObserver, ___1_state, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComputeStateMSFTDelegate::BeginInvoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSceneComputeStateMSFT&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetSceneComputeStateMSFTDelegate_BeginInvoke_m6BCCA0E52260EEA8DCA74AB3F2ADD602A0F7FD71 (GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6* __this, uint64_t ___0_sceneObserver, int32_t* ___1_state, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSceneComputeStateMSFT_t78B065899ED6908CAEDD63C51C044BC9A2A2E907_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_sceneObserver);
	__d_args[1] = Box(XrSceneComputeStateMSFT_t78B065899ED6908CAEDD63C51C044BC9A2A2E907_il2cpp_TypeInfo_var, &*___1_state);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComputeStateMSFTDelegate::EndInvoke(Qualcomm.Snapdragon.Spaces.XrSceneComputeStateMSFT&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetSceneComputeStateMSFTDelegate_EndInvoke_m78E9DDDDE1AC7CAABCD0C259DDEF35E324C5157A (GetSceneComputeStateMSFTDelegate_tE6BC48209775174B504ED0F59E2DC7E56D7CD4E6* __this, int32_t* ___0_state, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_state,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t CreateSceneMSFTDelegate_Invoke_m04B0655BEAB01AACC0AF3630D54704D37EA696EF_Multicast(CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237* __this, uint64_t ___0_sceneObserver, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99** ___1_state, uint64_t ___2_scene, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237* currentDelegate = reinterpret_cast<CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99**, uint64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sceneObserver, ___1_state, ___2_scene, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t CreateSceneMSFTDelegate_Invoke_m04B0655BEAB01AACC0AF3630D54704D37EA696EF_OpenInst(CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237* __this, uint64_t ___0_sceneObserver, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99** ___1_state, uint64_t ___2_scene, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99**, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_sceneObserver, ___1_state, ___2_scene, method);
}
int32_t CreateSceneMSFTDelegate_Invoke_m04B0655BEAB01AACC0AF3630D54704D37EA696EF_OpenStatic(CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237* __this, uint64_t ___0_sceneObserver, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99** ___1_state, uint64_t ___2_scene, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99**, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_sceneObserver, ___1_state, ___2_scene, method);
}
int32_t CreateSceneMSFTDelegate_Invoke_m04B0655BEAB01AACC0AF3630D54704D37EA696EF_OpenStaticInvoker(CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237* __this, uint64_t ___0_sceneObserver, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99** ___1_state, uint64_t ___2_scene, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99**, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sceneObserver, ___1_state, ___2_scene);
}
int32_t CreateSceneMSFTDelegate_Invoke_m04B0655BEAB01AACC0AF3630D54704D37EA696EF_ClosedStaticInvoker(CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237* __this, uint64_t ___0_sceneObserver, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99** ___1_state, uint64_t ___2_scene, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99**, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sceneObserver, ___1_state, ___2_scene);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237 (CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237* __this, uint64_t ___0_sceneObserver, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99** ___1_state, uint64_t ___2_scene, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}


	typedef int32_t (CDECL *PInvokeFunc)(uint64_t, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshaled_pinvoke**, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_state' to native representation
	XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshaled_pinvoke* ____1_state_marshaled = NULL;
	XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshaled_pinvoke ____1_state_marshaled_dereferenced = {};
	if (*___1_state != NULL)
	{
		XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshal_pinvoke(**___1_state, ____1_state_marshaled_dereferenced);
	}
	____1_state_marshaled = &____1_state_marshaled_dereferenced;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_sceneObserver, (&____1_state_marshaled), ___2_scene);

	// Marshaling of parameter '___1_state' back from native representation
	XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99* _____1_state_marshaled_unmarshaled_dereferenced = (____1_state_marshaled != NULL)
	    ? (XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99*)il2cpp_codegen_object_new(XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_il2cpp_TypeInfo_var)
	    : NULL;
	if (_____1_state_marshaled_unmarshaled_dereferenced != NULL)
	{
		XrSceneCreateInfoMSFT__ctor_mC36C9038DD64C3A1DA6F45FAC007F5EBA27D0582(_____1_state_marshaled_unmarshaled_dereferenced, NULL);
		XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshal_pinvoke_back(*____1_state_marshaled, *_____1_state_marshaled_unmarshaled_dereferenced);
	}
	if (____1_state_marshaled != NULL)
	{
		XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99_marshal_pinvoke_cleanup(*____1_state_marshaled);
	}
	*___1_state = _____1_state_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___1_state, (void*)____1_state_marshaled);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSceneMSFTDelegate__ctor_mA4CB239F551DE61980347EC47E18194043B91E6F (CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateSceneMSFTDelegate_Invoke_m04B0655BEAB01AACC0AF3630D54704D37EA696EF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CreateSceneMSFTDelegate_Invoke_m04B0655BEAB01AACC0AF3630D54704D37EA696EF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateSceneMSFTDelegate_Invoke_m04B0655BEAB01AACC0AF3630D54704D37EA696EF_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&CreateSceneMSFTDelegate_Invoke_m04B0655BEAB01AACC0AF3630D54704D37EA696EF_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSceneCreateInfoMSFT&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreateSceneMSFTDelegate_Invoke_m04B0655BEAB01AACC0AF3630D54704D37EA696EF (CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237* __this, uint64_t ___0_sceneObserver, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99** ___1_state, uint64_t ___2_scene, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99**, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sceneObserver, ___1_state, ___2_scene, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneMSFTDelegate::BeginInvoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSceneCreateInfoMSFT&,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateSceneMSFTDelegate_BeginInvoke_m2D50A745EC2354B2D590C4ED359F546204FE504E (CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237* __this, uint64_t ___0_sceneObserver, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99** ___1_state, uint64_t ___2_scene, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_sceneObserver);
	__d_args[1] = *___1_state;
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___2_scene);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/CreateSceneMSFTDelegate::EndInvoke(Qualcomm.Snapdragon.Spaces.XrSceneCreateInfoMSFT&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreateSceneMSFTDelegate_EndInvoke_mE6F23C4F5A0F05AD085351F852FC2CE1D5FE5DFA (CreateSceneMSFTDelegate_tDE37F774F676788310B48190C5311D0234A27237* __this, XrSceneCreateInfoMSFT_t2CDC0E93E3997B22D730E2D99A76909906E25B99** ___0_state, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_state,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t GetSceneComponentsMSFTDelegate_Invoke_m585D6D6F72141455768BA4BA7CBAF310A3817F13_Multicast(GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C* __this, uint64_t ___0_scene, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8* ___1_getInfo, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509* ___2_components, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C* currentDelegate = reinterpret_cast<GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8*, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_scene, ___1_getInfo, ___2_components, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t GetSceneComponentsMSFTDelegate_Invoke_m585D6D6F72141455768BA4BA7CBAF310A3817F13_OpenInst(GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C* __this, uint64_t ___0_scene, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8* ___1_getInfo, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509* ___2_components, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8*, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_scene, ___1_getInfo, ___2_components, method);
}
int32_t GetSceneComponentsMSFTDelegate_Invoke_m585D6D6F72141455768BA4BA7CBAF310A3817F13_OpenStatic(GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C* __this, uint64_t ___0_scene, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8* ___1_getInfo, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509* ___2_components, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8*, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_scene, ___1_getInfo, ___2_components, method);
}
int32_t GetSceneComponentsMSFTDelegate_Invoke_m585D6D6F72141455768BA4BA7CBAF310A3817F13_OpenStaticInvoker(GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C* __this, uint64_t ___0_scene, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8* ___1_getInfo, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509* ___2_components, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8*, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_scene, ___1_getInfo, ___2_components);
}
int32_t GetSceneComponentsMSFTDelegate_Invoke_m585D6D6F72141455768BA4BA7CBAF310A3817F13_ClosedStaticInvoker(GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C* __this, uint64_t ___0_scene, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8* ___1_getInfo, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509* ___2_components, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8*, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_scene, ___1_getInfo, ___2_components);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C (GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C* __this, uint64_t ___0_scene, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8* ___1_getInfo, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509* ___2_components, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(uint64_t, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8*, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_scene, ___1_getInfo, ___2_components);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComponentsMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetSceneComponentsMSFTDelegate__ctor_mF87106F1821844CEDA522EC90E404F22EC9AC4A1 (GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetSceneComponentsMSFTDelegate_Invoke_m585D6D6F72141455768BA4BA7CBAF310A3817F13_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetSceneComponentsMSFTDelegate_Invoke_m585D6D6F72141455768BA4BA7CBAF310A3817F13_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetSceneComponentsMSFTDelegate_Invoke_m585D6D6F72141455768BA4BA7CBAF310A3817F13_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&GetSceneComponentsMSFTDelegate_Invoke_m585D6D6F72141455768BA4BA7CBAF310A3817F13_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComponentsMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSceneComponentsGetInfoMSFT&,Qualcomm.Snapdragon.Spaces.XrSceneComponentsMSFT&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetSceneComponentsMSFTDelegate_Invoke_m585D6D6F72141455768BA4BA7CBAF310A3817F13 (GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C* __this, uint64_t ___0_scene, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8* ___1_getInfo, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509* ___2_components, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8*, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_scene, ___1_getInfo, ___2_components, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComponentsMSFTDelegate::BeginInvoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSceneComponentsGetInfoMSFT&,Qualcomm.Snapdragon.Spaces.XrSceneComponentsMSFT&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetSceneComponentsMSFTDelegate_BeginInvoke_m9FC916EF9608A9B175E2B834298F8A6A1604F72C (GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C* __this, uint64_t ___0_scene, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8* ___1_getInfo, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509* ___2_components, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_scene);
	__d_args[1] = Box(XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8_il2cpp_TypeInfo_var, &*___1_getInfo);
	__d_args[2] = Box(XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509_il2cpp_TypeInfo_var, &*___2_components);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/GetSceneComponentsMSFTDelegate::EndInvoke(Qualcomm.Snapdragon.Spaces.XrSceneComponentsGetInfoMSFT&,Qualcomm.Snapdragon.Spaces.XrSceneComponentsMSFT&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetSceneComponentsMSFTDelegate_EndInvoke_m52E57976567C5E40FF3B1AF2085A6894E0EE28EB (GetSceneComponentsMSFTDelegate_t3D9B873F37A869D95BF7E07FAF65172D4D57C72C* __this, XrSceneComponentsGetInfoMSFT_tADF96EAEA8C11C7905BD6AF5675F64E8CB1F6DC8* ___0_getInfo, XrSceneComponentsMSFT_t30D846F545085DA8C440DE93AD0DC5B78405C509* ___1_components, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_getInfo,
	___1_components,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t LocateSceneComponentsMSFTDelegate_Invoke_mC0FE3A6E7BDE9E6A4B55556AEDC2F5643DB63A1F_Multicast(LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1* __this, uint64_t ___0_scene, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332* ___1_locateInfo, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA* ___2_locations, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1* currentDelegate = reinterpret_cast<LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332*, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_scene, ___1_locateInfo, ___2_locations, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t LocateSceneComponentsMSFTDelegate_Invoke_mC0FE3A6E7BDE9E6A4B55556AEDC2F5643DB63A1F_OpenInst(LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1* __this, uint64_t ___0_scene, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332* ___1_locateInfo, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA* ___2_locations, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332*, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_scene, ___1_locateInfo, ___2_locations, method);
}
int32_t LocateSceneComponentsMSFTDelegate_Invoke_mC0FE3A6E7BDE9E6A4B55556AEDC2F5643DB63A1F_OpenStatic(LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1* __this, uint64_t ___0_scene, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332* ___1_locateInfo, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA* ___2_locations, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332*, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_scene, ___1_locateInfo, ___2_locations, method);
}
int32_t LocateSceneComponentsMSFTDelegate_Invoke_mC0FE3A6E7BDE9E6A4B55556AEDC2F5643DB63A1F_OpenStaticInvoker(LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1* __this, uint64_t ___0_scene, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332* ___1_locateInfo, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA* ___2_locations, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332*, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_scene, ___1_locateInfo, ___2_locations);
}
int32_t LocateSceneComponentsMSFTDelegate_Invoke_mC0FE3A6E7BDE9E6A4B55556AEDC2F5643DB63A1F_ClosedStaticInvoker(LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1* __this, uint64_t ___0_scene, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332* ___1_locateInfo, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA* ___2_locations, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332*, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_scene, ___1_locateInfo, ___2_locations);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1 (LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1* __this, uint64_t ___0_scene, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332* ___1_locateInfo, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA* ___2_locations, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(uint64_t, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332*, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_scene, ___1_locateInfo, ___2_locations);

	return returnValue;
}
// System.Void Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/LocateSceneComponentsMSFTDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateSceneComponentsMSFTDelegate__ctor_m274DA0037673F612D02BA6920400D92261E8405A (LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LocateSceneComponentsMSFTDelegate_Invoke_mC0FE3A6E7BDE9E6A4B55556AEDC2F5643DB63A1F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LocateSceneComponentsMSFTDelegate_Invoke_mC0FE3A6E7BDE9E6A4B55556AEDC2F5643DB63A1F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LocateSceneComponentsMSFTDelegate_Invoke_mC0FE3A6E7BDE9E6A4B55556AEDC2F5643DB63A1F_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&LocateSceneComponentsMSFTDelegate_Invoke_mC0FE3A6E7BDE9E6A4B55556AEDC2F5643DB63A1F_Multicast;
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/LocateSceneComponentsMSFTDelegate::Invoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSceneComponentsLocateInfoMSFT&,Qualcomm.Snapdragon.Spaces.XrSceneComponentLocationsMSFT&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocateSceneComponentsMSFTDelegate_Invoke_mC0FE3A6E7BDE9E6A4B55556AEDC2F5643DB63A1F (LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1* __this, uint64_t ___0_scene, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332* ___1_locateInfo, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA* ___2_locations, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332*, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_scene, ___1_locateInfo, ___2_locations, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/LocateSceneComponentsMSFTDelegate::BeginInvoke(System.UInt64,Qualcomm.Snapdragon.Spaces.XrSceneComponentsLocateInfoMSFT&,Qualcomm.Snapdragon.Spaces.XrSceneComponentLocationsMSFT&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocateSceneComponentsMSFTDelegate_BeginInvoke_m563F08D3B1AC9160163E93DBA6284BE4E702D68E (LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1* __this, uint64_t ___0_scene, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332* ___1_locateInfo, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA* ___2_locations, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___0_scene);
	__d_args[1] = Box(XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332_il2cpp_TypeInfo_var, &*___1_locateInfo);
	__d_args[2] = Box(XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA_il2cpp_TypeInfo_var, &*___2_locations);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Qualcomm.Snapdragon.Spaces.XrResult Qualcomm.Snapdragon.Spaces.SpatialMeshingFeature/LocateSceneComponentsMSFTDelegate::EndInvoke(Qualcomm.Snapdragon.Spaces.XrSceneComponentsLocateInfoMSFT&,Qualcomm.Snapdragon.Spaces.XrSceneComponentLocationsMSFT&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocateSceneComponentsMSFTDelegate_EndInvoke_m627E2124926722ED99898D35E6641DC2797048F5 (LocateSceneComponentsMSFTDelegate_tA8D62834C3DF6CA013BA86800AFD485C5779A8B1* __this, XrSceneComponentsLocateInfoMSFT_t60AD5417190A85EFE6AEBCF60AA201603A7D6332* ___0_locateInfo, XrSceneComponentLocationsMSFT_tB5A1BE34E2186017555E7CE7B2450C09732F71BA* ___1_locations, RuntimeObject* ___2_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_locateInfo,
	___1_locations,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___2_result, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpatialAnchorsProvider_SetPersistentAnchorCandidate_m39F58BBE288998D8DCF8668964036C32CD729E2A_inline (SpatialAnchorsProvider_t50DD13CCD812C8B3ED0944DFA7F7CDDE5D01CBD1* __this, SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* ___0_persistentAnchorCandidate, const RuntimeMethod* method) 
{
	{
		// _persistentAnchorCanditate = persistentAnchorCandidate;
		SpatialAnchor_t0E1B5270E7F68A22D5A95CE2EDEDCC96E6F0C13F* L_0 = ___0_persistentAnchorCandidate;
		__this->____persistentAnchorCanditate_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____persistentAnchorCanditate_5), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SubId1;
		uint64_t L_0 = __this->___m_SubId1_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId trackableId => m_Id;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_Id_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SubId2;
		uint64_t L_0 = __this->___m_SubId2_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRAnchor_get_pose_m2347783C1262EEFBC0B817EF0357FA4BB4BF053F_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRAnchor_get_trackingState_m6124A26C36CA93C25C57548576CB00C1F496ED83_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRAnchor_get_nativePtr_mC0551FA7E8DB8A0DA1EAE02D9B0BFD9D47389C26_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t SpacesOpenXRFeature_get_SpaceHandle_m3A8C3EA515461E2D805C79E15857736C89CF87D0_inline (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, const RuntimeMethod* method) 
{
	{
		// public ulong SpaceHandle { get; private set; }
		uint64_t L_0 = __this->___U3CSpaceHandleU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BaseRuntimeFeature_get_PredictedDisplayTime_m432B805A627B7F73C14298F21CE791AA90999DAC_inline (BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public long PredictedDisplayTime => _predictedDisplayTime;
		il2cpp_codegen_runtime_class_init_inline(BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4_il2cpp_TypeInfo_var);
		int64_t L_0 = ((BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4_StaticFields*)il2cpp_codegen_static_fields_for(BaseRuntimeFeature_t55638E45624FBAB6DC1B12E2B5E4195009D660E4_il2cpp_TypeInfo_var))->____predictedDisplayTime_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t SpacesOpenXRFeature_get_SessionHandle_mC1D5AE58DB4A5326847DA40475D9459B6AF58F16_inline (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, const RuntimeMethod* method) 
{
	{
		// public ulong SessionHandle { get; private set; }
		uint64_t L_0 = __this->___U3CSessionHandleU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorMSFTDelegate_Invoke_m360D2AD6BC6A9FCD2DBE1323F109BB0A392647B0_inline (CreateSpatialAnchorMSFTDelegate_tF9F02DD5DAC3FD7C209B13E09965DF53AD0F27A6* __this, uint64_t ___0_session, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87 ___1_createInfoMSFT, uint64_t* ___2_anchor, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorCreateInfoMSFT_t123E2833833D05FCB5BF1688390492B56C903B87, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_session, ___1_createInfoMSFT, ___2_anchor, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorSpaceMSFTDelegate_Invoke_m83C7DD3FD8A7B5167C7C927E20E644E323CCAF0B_inline (CreateSpatialAnchorSpaceMSFTDelegate_tA84B90DB216B1DF44EDB2BAC98AA36B79CBC3697* __this, uint64_t ___0_session, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE ___1_createInfo, uint64_t* ___2_space, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorSpaceCreateInfoMSFT_t83007806894A3D61ED9409974258B0265F9266DE, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_session, ___1_createInfo, ___2_space, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DestroySpatialAnchorMSFTDelegate_Invoke_mD43C523B6B300A640A89403B0740723BF92F7579_inline (DestroySpatialAnchorMSFTDelegate_t55892F583984A8A452181B15DFEA33C7116EE058* __this, uint64_t ___0_anchor, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_anchor, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LocateSpaceDelegate_Invoke_m09F2C746A247677A863DA20FE8FDDE4E5245F8C5_inline (LocateSpaceDelegate_tAD7B0DF17DA80216A72355DBACA741960496C043* __this, uint64_t ___0_space, uint64_t ___1_baseSpace, int64_t ___2_time, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F* ___3_location, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t, int64_t, XrSpaceLocation_t98EC3378EEE26AFBAA1783D3F63DFABD9CC9412F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_space, ___1_baseSpace, ___2_time, ___3_location, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorStoreConnectionMSFTDelegate_Invoke_m968E41F34BB96E29AFDA75A7F60C001C8768FB7A_inline (CreateSpatialAnchorStoreConnectionMSFTDelegate_tC4394405EE7B30B4AC285546E5E3F037D065D032* __this, uint64_t ___0_session, uint64_t* ___1_spatialAnchorStore, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_session, ___1_spatialAnchorStore, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DestroySpatialAnchorStoreConnectionMSFTDelegate_Invoke_mEFB181C09A6237E3F36CB3887981360C060A54C0_inline (DestroySpatialAnchorStoreConnectionMSFTDelegate_t880D1C872BE0AE347C64C1E76A07F6BDE20DBCFF* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_spatialAnchorStore, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ClearSpatialAnchorStoreMSFTDelegate_Invoke_m1A2CD0184B4A8D1F231BE3F57EF07CBA20C62AA1_inline (ClearSpatialAnchorStoreMSFTDelegate_t326F77BB71B05C57F0514D40BD0C72189889AE29* __this, uint64_t ___0_spatialAnchorStore, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_spatialAnchorStore, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PersistSpatialAnchorMSFTDelegate_Invoke_m629801285D0E38414C2A1E7537960F98D5CB887B_inline (PersistSpatialAnchorMSFTDelegate_tE4BAC0C7830FBB95B6027F6A6E3C1DD04CD2BB54* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824* ___1_spatialAnchorPersistenceInfo, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorPersistenceInfoMSFT_tD825947C3EE22A4FB2CD4EC243C3F38C15ED3824*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_spatialAnchorStore, ___1_spatialAnchorPersistenceInfo, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XrSpatialAnchorPersistenceNameMSFT__ctor_m79DF56CBF47872031AD00EFF1B94980060D679C8_inline (XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// Name = name;
		String_t* L_0 = ___0_name;
		__this->___Name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnpersistSpatialAnchorMSFTDelegate_Invoke_m574686A42D506A5CFF44232D1040363433728E28_inline (UnpersistSpatialAnchorMSFTDelegate_t131F365DD868C7B9947E1D441847D17DAC6FA9EC* __this, uint64_t ___0_spatialAnchorStore, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80* ___1_spatialAnchorPersistenceName, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorPersistenceNameMSFT_t4AF89C885403641949AE17E1586D2E4931B9FC80*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_spatialAnchorStore, ___1_spatialAnchorPersistenceName, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CreateSpatialAnchorFromPersistedNameMSFTDelegate_Invoke_m8EE7A705BDFF61921963C9A9AD603B9A4DCD0F3C_inline (CreateSpatialAnchorFromPersistedNameMSFTDelegate_t7F25477B21E811CAFA1E4FC5FB2A6D973CD53C8A* __this, uint64_t ___0_session, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D* ___1_spatialAnchorCreateInfo, uint64_t* ___2_spatialAnchor, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_t7E0E9054891EF64224944DF891C91E72CA1E853D*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_session, ___1_spatialAnchorCreateInfo, ___2_spatialAnchor, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnumeratePersistedSpatialAnchorNamesMSFTDelegate_Invoke_m8D01B6BEA1F353BEF629E24877FF8020028F47CE_inline (EnumeratePersistedSpatialAnchorNamesMSFTDelegate_tD1A44AF20654BB1422DFB4649D27B95A6E02B1A6* __this, uint64_t ___0_spatialAnchorStore, uint32_t ___1_spatialAnchorNamesCapacityInput, uint32_t* ___2_spatialAnchorNamesCountOutput, intptr_t ___3_spatialAnchorPersistenceNames, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, uint32_t, uint32_t*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_spatialAnchorStore, ___1_spatialAnchorNamesCapacityInput, ___2_spatialAnchorNamesCountOutput, ___3_spatialAnchorPersistenceNames, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6344F3700C1D743D82AB9E74925F7687925734A6_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m0E291C22B0B2CF634024F32ECA2E424F18157ACF_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5C5CAAC167444FE1BD48C1A16AA904E8DFF7052_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m58F12783B1EF42ED420CC99E0585FA6ED046C4AD_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 XRAnchor_get_defaultValue_mF68ABF2D0EC8B54DD8D5333FCD56EEF14A985A9A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRAnchor defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_0 = ((XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields*)il2cpp_codegen_static_fields_for(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Tuple_2_get_Item1_m7ED4F8FD11A2EFEE86D317A88A36D575F10384C2_gshared_inline (Tuple_2_t64E8A40E5B0C8963DDD7A1A22CF280BB9AFAE3C9* __this, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)__this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item2_mC345D48D1EA913C4808B587B2CC1FAEA314F304A_gshared_inline (Tuple_2_t64E8A40E5B0C8963DDD7A1A22CF280BB9AFAE3C9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Item2_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mC24DE096851AEDE481519F382ACBED033F68D73F_gshared_inline (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* __this, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_item, const RuntimeMethod* method) 
{
	XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8* L_1 = (XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8* L_6 = V_0;
		int32_t L_7 = V_1;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82)L_8);
		return;
	}

IL_0034:
	{
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_9 = ___0_item;
		((  void (*) (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14*, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6B4673E5C499167247CD6B09815C7BA11197A5F7_gshared_inline (List_1_t2E456C0E887E58C7BA25D1ADE32792E0EE57BF14* __this, const RuntimeMethod* method) 
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
		XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8* L_3 = (XRAnchorU5BU5D_t0AE263CDEFBD56AA58C2227E6EFA4A1A5D3956B8*)__this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m3D23AEC65C341831CFDFE2656D73BC43EAFBAB7A_gshared_inline (List_1_t160F335B05E7692BA4234AFD249D62316B990635* __this, const RuntimeMethod* method) 
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
		TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_3 = (TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0*)__this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m64A9DC3111539F78DAC0B7DE3FCA2E697DC52DB0_gshared_inline (List_1_t160F335B05E7692BA4234AFD249D62316B990635* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_item, const RuntimeMethod* method) 
{
	TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_1 = (TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_6 = V_0;
		int32_t L_7 = V_1;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7)L_8);
		return;
	}

IL_0034:
	{
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_9 = ___0_item;
		((  void (*) (List_1_t160F335B05E7692BA4234AFD249D62316B990635*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
