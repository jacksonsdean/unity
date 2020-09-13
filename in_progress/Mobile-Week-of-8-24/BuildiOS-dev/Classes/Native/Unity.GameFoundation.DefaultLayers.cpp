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
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Int64>>
struct Action_1_t89246F556F01EA068B8CC8237694622FE3E7DAF7;
// System.Action`1<System.Collections.Generic.List`1<System.Exception>>
struct Action_1_tCB4CF566D79F662E724459D5BD25742D2375B190;
// System.Action`1<System.Collections.Generic.List`1<System.String>>
struct Action_1_t9C3E2FDBB284E0602F2CD1FCE3CBB76F3C83FB3E;
// System.Action`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>>
struct Action_1_tF8D742FF2C7432253A3F24F44BFB5042ACC70F7E;
// System.Action`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>>
struct Action_1_tB03796BBEE46B5AFBEA805E7D422268E5648AB46;
// System.Action`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>>
struct Action_1_t4C9357D898236E35BEEA05F76DE8C34B8FF5EF6C;
// System.Action`1<System.Exception>
struct Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<UnityEngine.GameFoundation.Data.GameFoundationData>
struct Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9;
// System.AggregateException
struct AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int64>[]
struct EntryU5BU5D_t47117AEA97E1870357F41170C99B2E43641887F1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>[]
struct EntryU5BU5D_tED6DF1FF6490AA4E017979034CC3EFE3C6A878D9;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.GameFoundation.Property>[]
struct EntryU5BU5D_t5BE9E92F0D63A1C60E3D0D43E1B072B9816D226B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
struct KeyCollection_t0FAA0606A889F72799C970AF86C471E0CEF26BE1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>
struct KeyCollection_t658E4346330B9140B3CBFAC9730642A259F0420D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GameFoundation.Property>
struct KeyCollection_t6368AD84645EFB30DD982CBEE1766C6BEB007B44;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>
struct ValueCollection_t9724DB240E105DDA19B393C4835E14B2F1464FDC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>
struct ValueCollection_t440FB7FA038D8A82809B7CAD0C9764BEBFBC0731;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>
struct ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameFoundation.Property>
struct ValueCollection_t4C5BD27632C77E55781D9B0B6F87F798C273A92A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_tA4C40E906DE6517EEA62C7FEB1A70D09BD7EC92B;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>
struct Dictionary_2_t3C862AAE7817B51BCEE5BBD5418AACFCC1D6F673;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.GameFoundation.Property>
struct Dictionary_2_t96ADADCEB72B116C1720C2427A80150D01668720;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Configs.CatalogItemConfig>
struct Dictionary_2_t14FB9BAB8AB3094820F2F40E38A91F68BB4315EC;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Configs.TagConfig>
struct Dictionary_2_tC29651AB48D62C9F294CAA28133BFAF9F1CEB6CE;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Currency>
struct Dictionary_2_tA04BDAAD8A4ED19627B860A255C01221CA0E19DE;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>
struct Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Property>
struct Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.GameFoundation.BaseDetail>
struct Dictionary_2_t04FE67DDB14619A4214D8357E2A1B080F3A77361;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.GameFoundation.DefaultCatalog.BaseDetailAsset>
struct Dictionary_2_t5204974E19867A8DD5370D2B23AD3F6C962DC0D8;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Promise.Pool`1<UnityEngine.Promise.Promise>>
struct Dictionary_2_t352EBF15ED5E71DAFE3909C2AF833C5F61A4C054;
// System.Collections.Generic.ICollection`1<System.Exception>
struct ICollection_1_t369F219933FB866C23070CD9749538883440F044;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t2E51991ADA605DB75870908AF6D7C3093DC3FCBA;
// System.Collections.Generic.ICollection`1<UnityEngine.GameFoundation.Data.InventoryItemData>
struct ICollection_1_t6DD9942B302FD3D91EA4BA566BFB1549B38FE37A;
// System.Collections.Generic.ICollection`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>
struct ICollection_1_t3FFA95F09FD46ACFC02F4C81F60731B326FACDE9;
// System.Collections.Generic.ICollection`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>
struct ICollection_1_t35056F6345502CE5439880AE17BF5A1023ECE158;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t6B3D33CE5B4DC884E5267C7B8CBC12380D09B3F1;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.Currency>
struct List_1_t296F96338FBEA5F528AAD4FA1B1645FE24600C13;
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>
struct List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1;
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.PropertyData>
struct List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193;
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.BaseDetailAsset>
struct List_1_tC7471B270FDE8E2AE3D71B28D785DB49A6A7A0FD;
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.BaseTransactionAsset>
struct List_1_tF01E06E4DA70B56B7316997C69B5836A70356796;
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset>
struct List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4;
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>
struct List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058;
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset>
struct List_1_t594069B7C892D14F847C4C42E04989E0D399786B;
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>
struct List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD;
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.TagAsset>
struct List_1_t003AC5570FC849DDCCE4123662FDAEB0C47C1187;
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.Property>
struct List_1_t8FE4A0B6C6FA45793B523C024E3D25222F123936;
// System.Collections.Generic.Queue`1<System.Collections.Generic.Dictionary`2<System.String,System.Int64>>
struct Queue_1_t2BDC32D642D11DE7F55593AD309AB9E8F9F2203E;
// System.Collections.Generic.Queue`1<System.Collections.Generic.List`1<System.Exception>>
struct Queue_1_tA7AB9D73C602B51E2690B3565B63463F26616630;
// System.Collections.Generic.Queue`1<System.Collections.Generic.List`1<System.String>>
struct Queue_1_tDAAE1B812460B13C7157A98572216EE1151659CD;
// System.Collections.Generic.Queue`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>>
struct Queue_1_t6A1F1651EBD59BD9194E949B554288F865921956;
// System.Collections.Generic.Queue`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>>
struct Queue_1_tDE45EECA7BB3CF45B6664B7FD5C954536AFBB379;
// System.Collections.Generic.Queue`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>>
struct Queue_1_tAB37846AAD4EBD65C7AC3C56F9D320DC1C69516B;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Exception[]
struct ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209;
// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.Int64>>
struct Func_1_t014E375EF334B5545E3B56A95E6E1F46487014E6;
// System.Func`1<System.Collections.Generic.List`1<System.Exception>>
struct Func_1_t424489991AE168C0DFF23714862850ABAAB683F6;
// System.Func`1<System.Collections.Generic.List`1<System.String>>
struct Func_1_t40C51F5B2AE4E23C5A2C632CAB7292B16444953F;
// System.Func`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>>
struct Func_1_t55FC41E651B445E42D4EA8EB2618F7F57FE8E776;
// System.Func`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>>
struct Func_1_t60E22F842BA86FDE2A99F8DD874CCE1F49EAB448;
// System.Func`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>>
struct Func_1_tE88EEE0B96B8324B3D1B14116159089F76B6497E;
// System.Func`1<System.Object>
struct Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6;
// System.Func`2<System.Object,System.String>
struct Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.FileInfo
struct FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C;
// System.IO.FileNotFoundException
struct FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.StreamReader
struct StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E;
// System.IO.StreamWriter
struct StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E;
// System.IO.TextReader
struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.OverflowException
struct OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Decoder
struct Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.Encoder
struct Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.GameFoundation.CatalogBuilder
struct CatalogBuilder_tA6347EA7163CDE77C6987709721BC3827D2D2694;
// UnityEngine.GameFoundation.CatalogManager
struct CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E;
// UnityEngine.GameFoundation.Currency
struct Currency_tD2C5A9B9D9C96D7A0258F29FF5EBD8AA1F1BA0B4;
// UnityEngine.GameFoundation.CurrencyCatalog
struct CurrencyCatalog_tAB18AF857693F4241A0D55E29C1C3DD7211048EE;
// UnityEngine.GameFoundation.Data.BalanceData[]
struct BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34;
// UnityEngine.GameFoundation.Data.CurrencyExchangeData[]
struct CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB;
// UnityEngine.GameFoundation.Data.InventoryItemData[]
struct InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24;
// UnityEngine.GameFoundation.Data.PropertyData[]
struct PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7;
// UnityEngine.GameFoundation.DefaultCatalog.BaseCatalogAsset
struct BaseCatalogAsset_t86BCEF74D38AE9A279378D23C35E866B961B3F50;
// UnityEngine.GameFoundation.DefaultCatalog.BaseTransactionAsset
struct BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961;
// UnityEngine.GameFoundation.DefaultCatalog.CatalogItemAsset
struct CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5;
// UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset
struct CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632;
// UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset[]
struct CurrencyAssetU5BU5D_t99A75441F84E9AEC41039490A8DC26F5667FAB69;
// UnityEngine.GameFoundation.DefaultCatalog.CurrencyCatalogAsset
struct CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52;
// UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject
struct CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511;
// UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject[]
struct CurrencyExchangeObjectU5BU5D_tDE608933CBF41BE82565EFB105FAFF6254E7E331;
// UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase
struct GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1;
// UnityEngine.GameFoundation.DefaultCatalog.GameParameterCatalogAsset
struct GameParameterCatalogAsset_tF5FEAF7C980972FDAE73871C26F25846175761C7;
// UnityEngine.GameFoundation.DefaultCatalog.InventoryCatalogAsset
struct InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269;
// UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset
struct InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146;
// UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject
struct ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A;
// UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject[]
struct ItemExchangeDefinitionObjectU5BU5D_tABE4E738162BCCEA5A4A2409E3F86481B7913478;
// UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1<System.Object>
struct SingleCollectionCatalogAsset_1_t2EF745F92C35338D998D797C9C5AE397FEFD71D2;
// UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1<UnityEngine.GameFoundation.DefaultCatalog.BaseTransactionAsset>
struct SingleCollectionCatalogAsset_1_t0AEB8D3A8A1C252101C9591594F382A9DAD1339D;
// UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1<UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset>
struct SingleCollectionCatalogAsset_1_t1217B891F9CC0987698D178A74A22302E6CC02E3;
// UnityEngine.GameFoundation.DefaultCatalog.StoreCatalogAsset
struct StoreCatalogAsset_t431C925AFDDC075D1561936A8B26E4409C62712A;
// UnityEngine.GameFoundation.DefaultCatalog.TagCatalogAsset
struct TagCatalogAsset_t976CF4C2FE2CF4850DC7737E0B6AC85F50068C65;
// UnityEngine.GameFoundation.DefaultCatalog.TransactionCatalogAsset
struct TransactionCatalogAsset_t2B59953008F38A51B99AD36CC58D041F7ED6F543;
// UnityEngine.GameFoundation.DefaultCatalog.TransactionExchangeDefinitionObject
struct TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2;
// UnityEngine.GameFoundation.DefaultCatalog.VirtualTransactionAsset
struct VirtualTransactionAsset_t9D9A79A9D9D70B07143D90FFCD81F5316F14CE54;
// UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer
struct BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878;
// UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer/<>c
struct U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71;
// UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer
struct InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76;
// UnityEngine.GameFoundation.DefaultLayers.Persistence.BaseDataPersistence
struct BaseDataPersistence_t6314CED3A904BB34596A984FFFB67ABBC205AB92;
// UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataPersistence
struct IDataPersistence_t9AD5A56789F56D8702CE83917B9BA759F2963F79;
// UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataSerializer
struct IDataSerializer_t5FDB9ECD010A66ED01507BD66149B32D9427AE4A;
// UnityEngine.GameFoundation.DefaultLayers.Persistence.JsonDataSerializer
struct JsonDataSerializer_tC698450A00DF2674FFCED7DEAA30182A5A213015;
// UnityEngine.GameFoundation.DefaultLayers.Persistence.LocalPersistence
struct LocalPersistence_t8240944F90C8B135BE0A433BD3E3D13047469133;
// UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer
struct PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489;
// UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F;
// UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer
struct WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF;
// UnityEngine.GameFoundation.Exceptions.CatalogItemNotFoundException
struct CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05;
// UnityEngine.GameFoundation.Exceptions.InventoryItemNotFoundException
struct InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C;
// UnityEngine.GameFoundation.Exceptions.NotEnoughBalanceException
struct NotEnoughBalanceException_t8725064370F4B7239E3923981D1699020E95D968;
// UnityEngine.GameFoundation.Exceptions.NotEnoughItemOfDefinitionException
struct NotEnoughItemOfDefinitionException_t58B3EB9CF7CE086694A394BCBE0F69B73FBBD567;
// UnityEngine.GameFoundation.Exceptions.PropertyInvalidCastException
struct PropertyInvalidCastException_tBFCD1DB7F89F6CA3AE59C2C52995F26E2C66EAA2;
// UnityEngine.GameFoundation.Exceptions.PropertyNotFoundException
struct PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7;
// UnityEngine.GameFoundation.GameFoundationUpdater
struct GameFoundationUpdater_t1ECF74D9C7EC55BC52F1E66475113F05E2D4D380;
// UnityEngine.GameFoundation.GameParameterCatalog
struct GameParameterCatalog_tB644C090A158E98B624D488E7D1E3EC75DFBB6A7;
// UnityEngine.GameFoundation.IDataAccessLayer
struct IDataAccessLayer_t529316E3FC481EE2C30E081A04182513D4EE72D8;
// UnityEngine.GameFoundation.InventoryCatalog
struct InventoryCatalog_tC10A80E725729F02C3F7E3236A76DCB29ADAB6B4;
// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.Dictionary`2<System.String,System.Int64>>
struct Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB;
// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<System.Exception>>
struct Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A;
// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<System.String>>
struct Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18;
// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>>
struct Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D;
// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>>
struct Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE;
// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>>
struct Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6;
// UnityEngine.GameFoundation.Pool`1<System.Object>
struct Pool_1_t155FE6A7FDC3F1DC7D9854F41414EA84948A9F32;
// UnityEngine.GameFoundation.SingleCollectionCatalog`1<System.Object>
struct SingleCollectionCatalog_1_t1FC400CE7CB7D92ADED83F314702AAB590C8B7C2;
// UnityEngine.GameFoundation.SingleCollectionCatalog`1<UnityEngine.GameFoundation.Currency>
struct SingleCollectionCatalog_1_t5EF675C483BE5A8B2DF0F412C2824DD1737D4B14;
// UnityEngine.GameFoundation.StoreCatalog
struct StoreCatalog_t3CA77A2E25FB7816414BD17E09F8D0C64C452390;
// UnityEngine.GameFoundation.TagCatalog
struct TagCatalog_tBE2E136934F06171D9756D1072E961D5158BAA5B;
// UnityEngine.GameFoundation.Tag[]
struct TagU5BU5D_t90F56A13873581869E06961D3293E80197006500;
// UnityEngine.GameFoundation.TransactionCatalog
struct TransactionCatalog_tE0F4E4435A856766B52925A3020BD12F0F4C2DCE;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Promise.Pool`1<System.Collections.Generic.List`1<System.Exception>>
struct Pool_1_tF8E103945AC4CF68BFA965D5361CC8785BE84696;
// UnityEngine.Promise.Pool`1<System.Collections.Generic.List`1<UnityEngine.Promise.Deferred>>
struct Pool_1_tA98E175D3E9560FFB6B38FBA39B3F2A49C3A33C9;
// UnityEngine.Promise.Promise
struct Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E;
// UnityEngine.Promise.PromiseGenerator
struct PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C;
// UnityEngine.Promise.PromiseGenerator/PromiseUpdater
struct PromiseUpdater_t4EE7F78C3970403AE49339ECC02BD9E6FB64EDA9;
// UnityEngine.Promise.Promise`1<System.Int64>
struct Promise_1_tD4AB94B514C00393BCAD5EB70BD185F717954A21;
// UnityEngine.Promise.Promise`1<UnityEngine.GameFoundation.Data.TransactionExchangeData>
struct Promise_1_t5FB12D0610E5A5B581D46FF7E671EEE06E139CDA;
// UnityEngine.Promise.Promise`1<UnityEngine.GameFoundation.Data.VirtualTransactionExchangeData>
struct Promise_1_t3037CDDCD1F35276159ADA3F0F6741D31CFB8CA9;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t4C9357D898236E35BEEA05F76DE8C34B8FF5EF6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t89246F556F01EA068B8CC8237694622FE3E7DAF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t9C3E2FDBB284E0602F2CD1FCE3CBB76F3C83FB3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB03796BBEE46B5AFBEA805E7D422268E5648AB46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCB4CF566D79F662E724459D5BD25742D2375B190_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF8D742FF2C7432253A3F24F44BFB5042ACC70F7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t014E375EF334B5545E3B56A95E6E1F46487014E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t40C51F5B2AE4E23C5A2C632CAB7292B16444953F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t424489991AE168C0DFF23714862850ABAAB683F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t55FC41E651B445E42D4EA8EB2618F7F57FE8E776_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t60E22F842BA86FDE2A99F8DD874CCE1F49EAB448_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tE88EEE0B96B8324B3D1B14116159089F76B6497E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAPTransactionAsset_tB3E62FE57509F88507D89E3477CB863D278AE96D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICatalogConfigurator_tA8716118F9CB70D314DBD958F58EB45BA73E44E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t2E51991ADA605DB75870908AF6D7C3093DC3FCBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t369F219933FB866C23070CD9749538883440F044_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t6DD9942B302FD3D91EA4BA566BFB1549B38FE37A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataPersistence_t9AD5A56789F56D8702CE83917B9BA759F2963F79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataSerializer_t5FDB9ECD010A66ED01507BD66149B32D9427AE4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE14471B9BA58E22CC2B0F85AA521BEBB7F04E004_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInventoryDataLayer_t9144DFB1D6C3299DA8A5E0C658B7FD5756E58756_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWalletDataLayer_t01EDF84C9C7F6CA8EB187A3252545451F91A7433_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotEnoughBalanceException_t8725064370F4B7239E3923981D1699020E95D968_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotEnoughItemOfDefinitionException_t58B3EB9CF7CE086694A394BCBE0F69B73FBBD567_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInvalidCastException_tBFCD1DB7F89F6CA3AE59C2C52995F26E2C66EAA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualTransactionAsset_t9D9A79A9D9D70B07143D90FFCD81F5316F14CE54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral004E2057A125C06430754D451410E967133F8E42;
IL2CPP_EXTERN_C String_t* _stringLiteral08A9107516C2D83E4C6AFE0E223AE07A62073F1E;
IL2CPP_EXTERN_C String_t* _stringLiteral0AAD6CBBD31E5018A84C00721B0877164C732C4D;
IL2CPP_EXTERN_C String_t* _stringLiteral2177DC8A52B9B9DC76543C41C0C99997176FD300;
IL2CPP_EXTERN_C String_t* _stringLiteral25A01F2240ED525728F4BE87FD95D2647FEFB989;
IL2CPP_EXTERN_C String_t* _stringLiteral28DC5C7303C12D28EB83E2E64606FC2C6DAAF7A3;
IL2CPP_EXTERN_C String_t* _stringLiteral2B1E312B53A5D84502EA74011B9572A602948040;
IL2CPP_EXTERN_C String_t* _stringLiteral30DE0AE3EC67BC664C64337AE1E93E8D9D846E13;
IL2CPP_EXTERN_C String_t* _stringLiteral3DC9F89D6C03A25EE3C4125B725A7592005E5F11;
IL2CPP_EXTERN_C String_t* _stringLiteral41DABAE7B9269B285D97D343465FADF2FC075403;
IL2CPP_EXTERN_C String_t* _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral52942F416FAF8D67D1AD2B23B495D45973E32F53;
IL2CPP_EXTERN_C String_t* _stringLiteral57582034B7ACE451889683A65600221EBF7DC374;
IL2CPP_EXTERN_C String_t* _stringLiteral58CAF10A3AB5334B19293B6CDACA7C76E6838FAB;
IL2CPP_EXTERN_C String_t* _stringLiteral5FFD286B34FD606B231828781F168FCA656AF210;
IL2CPP_EXTERN_C String_t* _stringLiteral6895938FD7B0931A411D13A74C0F243A1B942CE0;
IL2CPP_EXTERN_C String_t* _stringLiteral6D545434E0E83DD3106593E86B9EFAE8E4458F19;
IL2CPP_EXTERN_C String_t* _stringLiteral6DD053EB1A43A025CA392173AB2837159D428F61;
IL2CPP_EXTERN_C String_t* _stringLiteral72FD887950EB165D5D6A97DF96B4CC652558EA52;
IL2CPP_EXTERN_C String_t* _stringLiteral78AA5F9AB7E5DF6BAA6E8C25BE06989EE0D721D7;
IL2CPP_EXTERN_C String_t* _stringLiteral7C3A89AB0E47C559AF9904EC143E1478AB90D4AA;
IL2CPP_EXTERN_C String_t* _stringLiteral889B5F775AA656D7545D5296BF46A00D10E462E4;
IL2CPP_EXTERN_C String_t* _stringLiteral8CF170CED3FC0E56C029056591A6714E886F2A07;
IL2CPP_EXTERN_C String_t* _stringLiteral8DFA30E0245064DF3F46F5CD1BFDA21A129CDDF1;
IL2CPP_EXTERN_C String_t* _stringLiteralA55922AD734E3EB55F581798E455DFF8BD160591;
IL2CPP_EXTERN_C String_t* _stringLiteralA62F2225BF70BFACCBC7F1EF2A397836717377DE;
IL2CPP_EXTERN_C String_t* _stringLiteralAB08F4197BF1646492C73377E04084D115992D3E;
IL2CPP_EXTERN_C String_t* _stringLiteralD595A68DD1CF52B5FF50B971777A5A7A1E15448B;
IL2CPP_EXTERN_C String_t* _stringLiteralDB30212988D94ACDA3FBA81327CACCA32E9158A0;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D1786CF7A23D7C5E90DC84390F00EC8874EE73;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m8D8F32903083AC7B78962DA7FF3EFCE6580A1B41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m9B0F57DB4870BEFB17155B9714C417484F261509_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m07E2A7736F7B91BE227B9E3E49ABE88C19CCE58A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m1C358B6C23A18E0B273C0661086FF4CC3BA97A19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m29E2A4E85B1A67E1903BD6CB8C5DF4E52AB4A374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4D76A4607B5FA7911ADB40D45263645DF4B9476D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m79EDF3F25EF119356554542C28AF856FEB2DFC7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mDDADC3A7E2388BD7EC445DAB0B9A910CBC45C7FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mE8E44E4F2A93E5B1E8C68373E66EC348B631616A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mFA4CE4D8ECBA3BF12EA3E9D1F5A8D49694CA1981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseMemoryDataLayer_RedeemIap_m53E81AC1589284E90C1028B1F274C09F727CD882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseMemoryDataLayer_UnityEngine_GameFoundation_DataAccessLayers_ITransactionDataLayer_MakeVirtualTransaction_mFB7745BEE1D08DFDF6EE0762B3C3996750C66E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Completer_1_Reject_m54125D7C264AEB5AC200C1D1A45F5C10C8658EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Completer_1_Reject_m777002F7DA44769394BBE625A2DF4870FBD9B1B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Completer_1_Reject_mDBEEB6BED718F4542F596C27F3127EE1DE5A772C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Completer_1_Resolve_m0D04A8F71359B3DB2441772F6DC587A7384CCDD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Completer_1_Resolve_m80FD1826B75CBBE1F2347FE41D8BB53A06111D5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Completer_1_Resolve_mBA247FFA9426F22B8EDAD713F188330D46CA7018_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Completer_1_op_Implicit_m2270066DB6F3FA36F9792DD9EE94675A0058E685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Completer_Reject_mC041DF09A1CD4AA308F22BF97721699633416880_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Completer_Resolve_mC374BAED823673FC0A04AD6D7929D5A6A7BFB2EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m39317B14AE57B950700B72A09464C9BBEDC1ED84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m9BECA78DFA98D15B4EB7E342D45A27A362FCD28F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m9FA6AF4B8A330D12BDA062B1ABD701B2414F7061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m11725FFCE98867A4BADB62D2747E71CA7E0C807B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mC1A5F815C548A3037CBF3E1B28DFB3229669AA4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mEF13A19FC6CAB881F4CF54646BDA2590A20022EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mDE9F5EECE65340FCBE65B7E0A93F9B9F61694D0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mE767F3B4BE934228D3BAFB3CBCDC64D06D0693FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m308EB25FBED07C9DBD8762182727C3AAC2D189D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC7583ABC280CFC4A1BA68817E5CD15A1E5105490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mCF01EC967CE9CE7F149DAB04AD8EB257E2A440FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA57B94D4742CD878E8265E600C4D7548D0DDF90C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF5E99A779CC438267A3A001FDD447BCDEB834CD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m51F855E8CD8525A5BB0B17B6108DAA36C6F14E3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m6C657CC81D30C953E50BBAA777237905FCD43C8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m9DF02C2E30236E01494D77576674A472980F7448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m867D501667B240E4D5D83BCB1875565D2DC85E33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m4C759A21D1BA2CF9A18839E633893B820FC740D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m10A9075140115FE57059AA1509076C79C12C5BE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7F887A070EAA3D92B548106FB64E77CCD91BE3F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m014B02D27BC94C1B69BF39A307251357F2DEF53B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m25C59272D93AA021CE6A41D6F97FFAAFEDA37D97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2BC3322527E84E907571F92C1F45DBFBD17B177C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2DEB8F0492890C1A4F49B99312409D7FEB7600B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6B4543F61030F72B3B87E9C17550986E0299D597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m802C9606434944FAD9694BB1A656C6F56680E67F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9B57D9A2658B59A61E773DF37557E2098F7BD515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBFE61DBAEB92C4FB64F6B1ACF2E895D0467CE1E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFD0668F5A7D6780EB7D7C50A402931900EFF64BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2902C433DA1C3A67123A211B4BAC3BF8C806991B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m46A41074D7B10356393C5C3402A3763883F66CB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m46FED2735DD1276C929694AEC6C74FB20CED1BF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m65E12AD9CF3991BD0770C55374465EDAA7F6E0EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB55179B6FAFF356F8635980C5BE36716D5A3CF7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCA3E427659BA0100C56CC0ED0305444051B6FCDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD347A2D3614B42E67980978F6FC1830F4A0D0FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD3A7ED19E4B473FD6776F8347EFA7B86B15B9481_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEF97D497D7D4524AD8360A5CA210E74EA5512A9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m356BA8F142DE34D3AEAC6E1B7E5727334AFE4A82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m42A600F939D181CE139B9C26F825FD4BC28F6F1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7D3D5EEF5CDBD2A9038C0C7623BEA0CF2424B948_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m89363CF89DC816FAF8DC920261607529997CFA11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9660566D40EAE1F4FE6C7204E6E2BC119FE6383F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m986900096F65631FC2F03BB6BD836662555CF9C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB9AD6BA38683883152F81CAE6A61F858A084D4ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBA19190EA7134D32EA733222201695355B272ECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF68A23696A474C4CA73F9146E127D23E25EC68BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m3DEEC8E97F306291257C5D51DEA99B62C3020702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m48D6BF77D2362183F11CCB5A919D517850AE981A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m70E6DDB3FA636E66688FBA44805DF14ACF1510E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m751F6F38BA84A659ADE65E0D35F6735EAA7C6822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mE41A8B0025EA83EA1D32B2110940BDE604AD5039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mE7417780873C167E51692850DE06ABECE885E5FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InventoryDataLayer_CreateItem_m545AC5C4C63BDC11E3D2BFC6642EBBFF6F259C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetPropertyValue_m7B2FF6874BC596A57A49938EE0FD75C51D025CF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisGameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6_m15406CDCA3935580C05949EA06D83B073A108ACC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m90EC5C1FAFCD87594A0381F44DB565E2AE890850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2DCC560EC657356BEE09C1B635A6F4B0B2090D97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m227CF67D0E03C8F0327AC5C42706CA77F8EF4179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mED5FE4B3F58CB7DC42ECF61798C1B7310DF341BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4911195FE9B406E20BF6E4A91A9516EFCF9C6888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mA9E26157403FF3A3A8F0924400B385A3EEBE490C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mAFF5FCC778112D567ACD94E7C9BF12B2D4D3F245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF04E8638626A1F44AAC6A72BCF3621E6DAE148F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFF2FBF0587AD0204632D836F27CDD8D47F091975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m528C0D47C249BF65C793C952FE9AC1F32BDCF374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m655F49E22992FCDB0E9FF859F4BAFCB5D4C5D5D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m976F107CF99D138133B74EBC09A1F6BC45BDD302_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD39522672E1E11B7F5AD2D0EDE747F7F79498549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE24C416317D3F4E40A03014ED01FDE0F4FFDC8BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFFAA67A6EE2BD1AB710D4CBA0349C5E921BEED7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB405B72C20F5422B845AF098E7809D10F58A25DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mE20291164A306DD09DB55E3E3070ED179E82622F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1828C7E57AB499530F12A8010F7D4A8E8469C359_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3CA9F30DC986E649F8E82AD69F5085D355D91AC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8F4520370F3B03E1E4C822C3300DE506E2286A9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9DF265560E0235B28378496E47309E6063B206F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAD533765AF4067C57E08DC1AE505AE55A4C384E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCC584C29B683826A8745442F6C4AAF499B129345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6189DDF6BE78B680B0C3CD0D8F6D224241883B68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA230906021D807D05569C2A2CA765BEFC4A0EF37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC7FD6CF59297FB2322612B6D443EF51046619AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistenceDataLayer__ctor_m3B85C786F517F6446CDEA56BFDADF13CE4CE8721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Get_m03084416E082F0015B60A01C000812B808DF0249_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Get_m0FC0D0EE032FF5D1FA01FDCCDA3D744DC32548C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Get_m105A85E166ECC96409BB262DC6017F188148B292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Get_m6A7BAE1A3FB386BB0D9D6EFA101DB19FBF0FBE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Get_m8ABE7C375AD92E938713B1ACFD205A4B67B3A1FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Get_mB53ED92EAFF03B7CBBE50C0A394F852A796F4835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Release_m518A1F3F1806EEFD042D2C6F2EE5408649A1C10D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Release_m793291285401D639B357B7909A3E719D793B0297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Release_m815FA069BF4413394CD9C8FF516196A6CBA11594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Release_m9485F723B5C79082DE25C6D239348300E9D7DC03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Release_mD790AB072ADB365B08C7D64C049826EC6A9596B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Release_mE426A36D9DFBD7748B0E45FFB939A2ABFDF0EB14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1__ctor_m2A4058A3DC1C190139E1F221FC5E8459029D5920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1__ctor_m37371B9C20BE830718CA1D13BC59A76FF5A765AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1__ctor_m64C861558265755BDDDDA83E9D590FEEBE1E65CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1__ctor_m9BA047F1F4AD80CF4C65A9573E7E9798C1A8E88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1__ctor_mC0718AD299A29530658EE197FC04E0F161B74D3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1__ctor_mEF639DF25BB9E3FC10DFB75536E3DD740BA0C159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingleCollectionCatalogAsset_1_FindItem_m8DE1ECC1E15C584B9D6D5AA8CE460F490FE2E9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingleCollectionCatalogAsset_1_FindItem_mE819FEAB7F9BE1073C5E4D3544DFB337EF4370F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingleCollectionCatalog_1_FindItem_mEC08ED5EF5A3ABD914A6E34D930075426B0BED1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tools_ThrowIfArgNullOrEmpty_m937FE947DD8528E8BEF39BF007FC83C60CF991AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_0_m8173358889628248FD7F465EC20D0B3993801988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_10_mA98FF042ECB3F1105F364A7CF53919A65FCF863A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_11_mD3DB78A929671305751B0C79D096B5B33D5F57E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_1_m4B6DF049DFEF6C49F4E4C07CCA2D61A69B8B00B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_2_mD93E278B3675E2EC164036F7FDA50896D6C59CF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_3_mC334A051CA08156BB71BF4C2592DB8775C987EB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_4_m0D1E35222B114E8669924BA750CDEC53CBE172A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_5_m420E697A60AB8200A8593CB8FCDA744FBFF088E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_6_m32F6F536452F872C6EBE05A83BC9CBEF5DDCB03E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_7_m7E42DFBE823A831CD61C1EF3F6FB54AF1BA400F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_8_m4EA9D8D8DA2AABEE9820A090ECDFCA018572DD92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_9_mC8A9F3F50FB45FA62D9378AA52852262B4E5B1DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CInitializeU3Eb__1_m2B62158577A8F973AB20617472C869218DDE6DD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CInitializeU3Eg__InitializeWithU7C0_m4D885D79D294F21E46A28C9F632C4D64C64640C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_mE8BA34846D4732113FCC7AF2852E6D0C8890CA7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m50ADDDB3B4C44E696B74592A088EDE8CD0FD8257_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WalletDataLayer_CheckBalance_m0F484862B3A174B01D53A1CA2BBBF787928FEC9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WalletDataLayer_GetBalance_m0B6AE94C1AC57E11DA221E0FFA8D945174296E8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WalletDataLayer__ctor_m94646596B1378BDE36EDDAD59EABE0EC1039C44B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_ApplyRewards_m683D4C8EC3BD1051F1227D9AAC1D77D938021CA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_ConsolidateTransactionExchange_m573871562AA1E7E5F9FBD670EBA2AAAB4C862692_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_GetData_m699CFD2A193C244F4617FEAA3B3453BD71553B34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_InitializeInventoryDataLayer_m5A26E4866F3E5FAF4B4BEA9EA367F3C0E84CD05F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_InitializeWalletDataLayer_m883C5686065BEB87C8C69F9E9D39220A57DDED7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_RedeemIap_m53E81AC1589284E90C1028B1F274C09F727CD882_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_UnityEngine_GameFoundation_DataAccessLayers_ITransactionDataLayer_MakeVirtualTransaction_mFB7745BEE1D08DFDF6EE0762B3C3996750C66E59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_UnityEngine_GameFoundation_ICatalogConfigurator_Configure_m70B67CDE9390F6736B067047B78EADC0D3AC24E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_CreateItem_mBC21ED8B72616DA42EA0B97D450118EBF788C7CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_DeleteItem_mE0CC9C8CF9D432B26BCE7CD4CE10A6D07CAF0131_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetData_m475357DD4F33989214CCEC78A8361CB9D6284B6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetPropertyValue_m638D198B6EC53B6BBD7ABBE311E77A8E1E893AAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_SetPropertyValue_m1D3EA8DDAAA984B78B09BF0C1365025DB7A9FB92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_TryGetPropertyValue_mC6AE1790D872FE33056DD6C7E747F563B88A9DAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_AddBalance_mC434AB9E5D68AFDBF6FDBB2D680AE2B554BD0C7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_GetData_m99AFE3B74275826C28C337F25F2D292F27856EF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_RemoveBalance_m2FB92F7A1CBBA158426D263522EC08100DFC1AAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_SetBalance_m902BA9E62B0D8F333D2A076F9B1EE1AE4A92EB98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_VerifyCost_m2388164042B46B3EE53A6E0EEF3021CD58235810_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer_VerifyItemPayload_m664336F2D55B374DB993E6E481CB29525386CCD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseMemoryDataLayer__cctor_m0A7FBCE64144E5C53040DA1C9338F0D885F82656_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameFoundation_get_catalogs_m771AF654DCA16FC27262307B48BFFF210749363BUnity_GameFoundation_DefaultLayers_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InventoryDataLayer_CreateItemNoCheck_m84F2405724B0B4DC42EF05CE82070E4210996EA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InventoryDataLayer_CreateItem_m545AC5C4C63BDC11E3D2BFC6642EBBFF6F259C65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InventoryDataLayer_CreateItem_m7CA6500F145602BB6CD82EE2DDB9F68EEEBD7CA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InventoryDataLayer_DeleteItem_m23AA189A113E989E713B6402140EDD9F60E954BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InventoryDataLayer_GetItemsByDefinition_m07703C98D1A25AEF9576C7B43C9B34F270B3138F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InventoryDataLayer_GetValidItems_mCE59294129027267C6E350E5E63062C769AF8D5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InventoryDataLayer_TryGetItem_mFB1E28B8164007193265AE3EC2EC0D3111734E92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_CreateItem_mBAA8573E75086FD4838A9081E5959EC113B487AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetData_mF137231B8D944F3FAD6206C2CE97366199782BD9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetPropertyValue_m7B2FF6874BC596A57A49938EE0FD75C51D025CF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_SetPropertyValue_m8519504ED9180D3F258D3941FE5673872D8CF4E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_TryGetPropertyValue_mFAE06A7718E04F6F98A38C08E3A4C0D4F2E6FB89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InventoryDataLayer__ctor_mDEA42D12DC25222460E5EF1A08B69C035360ADE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonDataSerializer_Deserialize_m0B9E21DB22811405289C0C4FC27498AA2720A6B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonDataSerializer_Serialize_m023C245B7BBAA3B3F308CF29B41F42637FC24169_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LocalPersistence_Load_mFDCAC4B0BCAD14C3548F39F011A8E6A5C1F0AF55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LocalPersistence_Save_m3826B2D0FAB28C83A4712FF30A3816571DE58E03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LocalPersistence__ctor_mF94027E38207050D3C035EA5CA8E6AB7EF2BCDB9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PersistenceDataLayer_Initialize_m36745CEEFA870FC6FE0BB4BAFC578F4AD75A5018_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PersistenceDataLayer_Save_m65F717C357B10BB723104D12E6CFE03774635C62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PersistenceDataLayer__ctor_m3B85C786F517F6446CDEA56BFDADF13CE4CE8721_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tools_RejectIfArgNegative_m4C9595BEBE2B9F3B41E6A16647A35BD37AB3F7ACUnity_GameFoundation_DefaultLayers_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tools_RejectIfArgNullOrEmpty_mCB4E81DDE885337E6EE85E75F55D74CF81B224E7Unity_GameFoundation_DefaultLayers_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tools_ThrowIfArgNullOrEmpty_m937FE947DD8528E8BEF39BF007FC83C60CF991AAUnity_GameFoundation_DefaultLayers_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__34_0_m8173358889628248FD7F465EC20D0B3993801988_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__34_10_mA98FF042ECB3F1105F364A7CF53919A65FCF863A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__34_11_mD3DB78A929671305751B0C79D096B5B33D5F57E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__34_1_m4B6DF049DFEF6C49F4E4C07CCA2D61A69B8B00B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__34_2_mD93E278B3675E2EC164036F7FDA50896D6C59CF9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__34_3_mC334A051CA08156BB71BF4C2592DB8775C987EB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__34_4_m0D1E35222B114E8669924BA750CDEC53CBE172A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__34_5_m420E697A60AB8200A8593CB8FCDA744FBFF088E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__34_6_m32F6F536452F872C6EBE05A83BC9CBEF5DDCB03E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__34_7_m7E42DFBE823A831CD61C1EF3F6FB54AF1BA400F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__34_8_m4EA9D8D8DA2AABEE9820A090ECDFCA018572DD92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__34_9_mC8A9F3F50FB45FA62D9378AA52852262B4E5B1DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass5_0_U3CInitializeU3Eb__1_m2B62158577A8F973AB20617472C869218DDE6DD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mB8D9203E8882B49840E19F1A91B92281E7E8F4CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WalletDataLayer_AdjustBalance_m3B27A52270BB6DD218741F0E357C8E873A16075D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WalletDataLayer_CheckBalance_m0F484862B3A174B01D53A1CA2BBBF787928FEC9F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WalletDataLayer_GetBalance_m0B6AE94C1AC57E11DA221E0FFA8D945174296E8A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WalletDataLayer_SetBalance_mC12E0F2B4DC7AC335572F5DCFA479E5EA3056641_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WalletDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_AddBalance_m2F63DAE60678A3EC1F26CE1F87008F155A9B3782_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WalletDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_GetData_mFB22E47E824B8E587DEBDA57DED840E72886D754_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WalletDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_RemoveBalance_m365D9A5EC228A7630ADC9E6025AFCBBE700BE79C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WalletDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_SetBalance_m4465FC967A563482E2108BF993372EEF602601EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WalletDataLayer__ctor_m94646596B1378BDE36EDDAD59EABE0EC1039C44B_MetadataUsageId;
struct BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89_marshaled_com;
struct BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89_marshaled_pinvoke;
struct CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756_marshaled_com;
struct CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889_marshaled_com;
struct InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889_marshaled_pinvoke;
struct PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5_marshaled_com;
struct PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5_marshaled_pinvoke;

struct BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34;
struct CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB;
struct InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24;
struct PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tCE484D96E807D565179D224C9BF714E47E07357F 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2_ValueCollection<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>
struct  ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56, ___dictionary_0)); }
	inline Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct  Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t47117AEA97E1870357F41170C99B2E43641887F1* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0FAA0606A889F72799C970AF86C471E0CEF26BE1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t440FB7FA038D8A82809B7CAD0C9764BEBFBC0731 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5, ___entries_1)); }
	inline EntryU5BU5D_t47117AEA97E1870357F41170C99B2E43641887F1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t47117AEA97E1870357F41170C99B2E43641887F1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t47117AEA97E1870357F41170C99B2E43641887F1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5, ___keys_7)); }
	inline KeyCollection_t0FAA0606A889F72799C970AF86C471E0CEF26BE1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0FAA0606A889F72799C970AF86C471E0CEF26BE1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0FAA0606A889F72799C970AF86C471E0CEF26BE1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5, ___values_8)); }
	inline ValueCollection_t440FB7FA038D8A82809B7CAD0C9764BEBFBC0731 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t440FB7FA038D8A82809B7CAD0C9764BEBFBC0731 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t440FB7FA038D8A82809B7CAD0C9764BEBFBC0731 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>
struct  Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6DF1FF6490AA4E017979034CC3EFE3C6A878D9* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t658E4346330B9140B3CBFAC9730642A259F0420D * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3, ___entries_1)); }
	inline EntryU5BU5D_tED6DF1FF6490AA4E017979034CC3EFE3C6A878D9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6DF1FF6490AA4E017979034CC3EFE3C6A878D9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6DF1FF6490AA4E017979034CC3EFE3C6A878D9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3, ___keys_7)); }
	inline KeyCollection_t658E4346330B9140B3CBFAC9730642A259F0420D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t658E4346330B9140B3CBFAC9730642A259F0420D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t658E4346330B9140B3CBFAC9730642A259F0420D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3, ___values_8)); }
	inline ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Property>
struct  Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5BE9E92F0D63A1C60E3D0D43E1B072B9816D226B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6368AD84645EFB30DD982CBEE1766C6BEB007B44 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4C5BD27632C77E55781D9B0B6F87F798C273A92A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83, ___entries_1)); }
	inline EntryU5BU5D_t5BE9E92F0D63A1C60E3D0D43E1B072B9816D226B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5BE9E92F0D63A1C60E3D0D43E1B072B9816D226B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5BE9E92F0D63A1C60E3D0D43E1B072B9816D226B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83, ___keys_7)); }
	inline KeyCollection_t6368AD84645EFB30DD982CBEE1766C6BEB007B44 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6368AD84645EFB30DD982CBEE1766C6BEB007B44 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6368AD84645EFB30DD982CBEE1766C6BEB007B44 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83, ___values_8)); }
	inline ValueCollection_t4C5BD27632C77E55781D9B0B6F87F798C273A92A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4C5BD27632C77E55781D9B0B6F87F798C273A92A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4C5BD27632C77E55781D9B0B6F87F798C273A92A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Exception>
struct  List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A, ____items_1)); }
	inline ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209* get__items_1() const { return ____items_1; }
	inline ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A_StaticFields, ____emptyArray_5)); }
	inline ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>
struct  List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1, ____items_1)); }
	inline InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* get__items_1() const { return ____items_1; }
	inline InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1_StaticFields, ____emptyArray_5)); }
	inline InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.PropertyData>
struct  List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193, ____items_1)); }
	inline PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* get__items_1() const { return ____items_1; }
	inline PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193_StaticFields, ____emptyArray_5)); }
	inline PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset>
struct  List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CurrencyAssetU5BU5D_t99A75441F84E9AEC41039490A8DC26F5667FAB69* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4, ____items_1)); }
	inline CurrencyAssetU5BU5D_t99A75441F84E9AEC41039490A8DC26F5667FAB69* get__items_1() const { return ____items_1; }
	inline CurrencyAssetU5BU5D_t99A75441F84E9AEC41039490A8DC26F5667FAB69** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CurrencyAssetU5BU5D_t99A75441F84E9AEC41039490A8DC26F5667FAB69* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CurrencyAssetU5BU5D_t99A75441F84E9AEC41039490A8DC26F5667FAB69* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4_StaticFields, ____emptyArray_5)); }
	inline CurrencyAssetU5BU5D_t99A75441F84E9AEC41039490A8DC26F5667FAB69* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CurrencyAssetU5BU5D_t99A75441F84E9AEC41039490A8DC26F5667FAB69** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CurrencyAssetU5BU5D_t99A75441F84E9AEC41039490A8DC26F5667FAB69* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>
struct  List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CurrencyExchangeObjectU5BU5D_tDE608933CBF41BE82565EFB105FAFF6254E7E331* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058, ____items_1)); }
	inline CurrencyExchangeObjectU5BU5D_tDE608933CBF41BE82565EFB105FAFF6254E7E331* get__items_1() const { return ____items_1; }
	inline CurrencyExchangeObjectU5BU5D_tDE608933CBF41BE82565EFB105FAFF6254E7E331** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CurrencyExchangeObjectU5BU5D_tDE608933CBF41BE82565EFB105FAFF6254E7E331* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CurrencyExchangeObjectU5BU5D_tDE608933CBF41BE82565EFB105FAFF6254E7E331* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058_StaticFields, ____emptyArray_5)); }
	inline CurrencyExchangeObjectU5BU5D_tDE608933CBF41BE82565EFB105FAFF6254E7E331* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CurrencyExchangeObjectU5BU5D_tDE608933CBF41BE82565EFB105FAFF6254E7E331** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CurrencyExchangeObjectU5BU5D_tDE608933CBF41BE82565EFB105FAFF6254E7E331* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>
struct  List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ItemExchangeDefinitionObjectU5BU5D_tABE4E738162BCCEA5A4A2409E3F86481B7913478* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD, ____items_1)); }
	inline ItemExchangeDefinitionObjectU5BU5D_tABE4E738162BCCEA5A4A2409E3F86481B7913478* get__items_1() const { return ____items_1; }
	inline ItemExchangeDefinitionObjectU5BU5D_tABE4E738162BCCEA5A4A2409E3F86481B7913478** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ItemExchangeDefinitionObjectU5BU5D_tABE4E738162BCCEA5A4A2409E3F86481B7913478* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ItemExchangeDefinitionObjectU5BU5D_tABE4E738162BCCEA5A4A2409E3F86481B7913478* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD_StaticFields, ____emptyArray_5)); }
	inline ItemExchangeDefinitionObjectU5BU5D_tABE4E738162BCCEA5A4A2409E3F86481B7913478* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ItemExchangeDefinitionObjectU5BU5D_tABE4E738162BCCEA5A4A2409E3F86481B7913478** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ItemExchangeDefinitionObjectU5BU5D_tABE4E738162BCCEA5A4A2409E3F86481B7913478* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.GameFoundation.CatalogBuilder
struct  CatalogBuilder_tA6347EA7163CDE77C6987709721BC3827D2D2694  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Configs.TagConfig> UnityEngine.GameFoundation.CatalogBuilder::m_Tags
	Dictionary_2_tC29651AB48D62C9F294CAA28133BFAF9F1CEB6CE * ___m_Tags_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Configs.CatalogItemConfig> UnityEngine.GameFoundation.CatalogBuilder::m_Items
	Dictionary_2_t14FB9BAB8AB3094820F2F40E38A91F68BB4315EC * ___m_Items_1;

public:
	inline static int32_t get_offset_of_m_Tags_0() { return static_cast<int32_t>(offsetof(CatalogBuilder_tA6347EA7163CDE77C6987709721BC3827D2D2694, ___m_Tags_0)); }
	inline Dictionary_2_tC29651AB48D62C9F294CAA28133BFAF9F1CEB6CE * get_m_Tags_0() const { return ___m_Tags_0; }
	inline Dictionary_2_tC29651AB48D62C9F294CAA28133BFAF9F1CEB6CE ** get_address_of_m_Tags_0() { return &___m_Tags_0; }
	inline void set_m_Tags_0(Dictionary_2_tC29651AB48D62C9F294CAA28133BFAF9F1CEB6CE * value)
	{
		___m_Tags_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tags_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_1() { return static_cast<int32_t>(offsetof(CatalogBuilder_tA6347EA7163CDE77C6987709721BC3827D2D2694, ___m_Items_1)); }
	inline Dictionary_2_t14FB9BAB8AB3094820F2F40E38A91F68BB4315EC * get_m_Items_1() const { return ___m_Items_1; }
	inline Dictionary_2_t14FB9BAB8AB3094820F2F40E38A91F68BB4315EC ** get_address_of_m_Items_1() { return &___m_Items_1; }
	inline void set_m_Items_1(Dictionary_2_t14FB9BAB8AB3094820F2F40E38A91F68BB4315EC * value)
	{
		___m_Items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_1), (void*)value);
	}
};


// UnityEngine.GameFoundation.CatalogItem
struct  CatalogItem_tB6576EE27719FF9338376387A887CEA5F09F9652  : public RuntimeObject
{
public:
	// UnityEngine.GameFoundation.Tag[] UnityEngine.GameFoundation.CatalogItem::tags
	TagU5BU5D_t90F56A13873581869E06961D3293E80197006500* ___tags_0;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.GameFoundation.BaseDetail> UnityEngine.GameFoundation.CatalogItem::details
	Dictionary_2_t04FE67DDB14619A4214D8357E2A1B080F3A77361 * ___details_1;
	// System.String UnityEngine.GameFoundation.CatalogItem::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_2;
	// System.String UnityEngine.GameFoundation.CatalogItem::<key>k__BackingField
	String_t* ___U3CkeyU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Property> UnityEngine.GameFoundation.CatalogItem::<staticProperties>k__BackingField
	Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * ___U3CstaticPropertiesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_tags_0() { return static_cast<int32_t>(offsetof(CatalogItem_tB6576EE27719FF9338376387A887CEA5F09F9652, ___tags_0)); }
	inline TagU5BU5D_t90F56A13873581869E06961D3293E80197006500* get_tags_0() const { return ___tags_0; }
	inline TagU5BU5D_t90F56A13873581869E06961D3293E80197006500** get_address_of_tags_0() { return &___tags_0; }
	inline void set_tags_0(TagU5BU5D_t90F56A13873581869E06961D3293E80197006500* value)
	{
		___tags_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tags_0), (void*)value);
	}

	inline static int32_t get_offset_of_details_1() { return static_cast<int32_t>(offsetof(CatalogItem_tB6576EE27719FF9338376387A887CEA5F09F9652, ___details_1)); }
	inline Dictionary_2_t04FE67DDB14619A4214D8357E2A1B080F3A77361 * get_details_1() const { return ___details_1; }
	inline Dictionary_2_t04FE67DDB14619A4214D8357E2A1B080F3A77361 ** get_address_of_details_1() { return &___details_1; }
	inline void set_details_1(Dictionary_2_t04FE67DDB14619A4214D8357E2A1B080F3A77361 * value)
	{
		___details_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___details_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CatalogItem_tB6576EE27719FF9338376387A887CEA5F09F9652, ___U3CdisplayNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_2() const { return ___U3CdisplayNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_2() { return &___U3CdisplayNameU3Ek__BackingField_2; }
	inline void set_U3CdisplayNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CkeyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CatalogItem_tB6576EE27719FF9338376387A887CEA5F09F9652, ___U3CkeyU3Ek__BackingField_3)); }
	inline String_t* get_U3CkeyU3Ek__BackingField_3() const { return ___U3CkeyU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CkeyU3Ek__BackingField_3() { return &___U3CkeyU3Ek__BackingField_3; }
	inline void set_U3CkeyU3Ek__BackingField_3(String_t* value)
	{
		___U3CkeyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CkeyU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstaticPropertiesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CatalogItem_tB6576EE27719FF9338376387A887CEA5F09F9652, ___U3CstaticPropertiesU3Ek__BackingField_4)); }
	inline Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * get_U3CstaticPropertiesU3Ek__BackingField_4() const { return ___U3CstaticPropertiesU3Ek__BackingField_4; }
	inline Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 ** get_address_of_U3CstaticPropertiesU3Ek__BackingField_4() { return &___U3CstaticPropertiesU3Ek__BackingField_4; }
	inline void set_U3CstaticPropertiesU3Ek__BackingField_4(Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * value)
	{
		___U3CstaticPropertiesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstaticPropertiesU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.GameFoundation.CatalogManager
struct  CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E  : public RuntimeObject
{
public:
	// UnityEngine.GameFoundation.TagCatalog UnityEngine.GameFoundation.CatalogManager::<tagCatalog>k__BackingField
	TagCatalog_tBE2E136934F06171D9756D1072E961D5158BAA5B * ___U3CtagCatalogU3Ek__BackingField_0;
	// UnityEngine.GameFoundation.InventoryCatalog UnityEngine.GameFoundation.CatalogManager::<inventoryCatalog>k__BackingField
	InventoryCatalog_tC10A80E725729F02C3F7E3236A76DCB29ADAB6B4 * ___U3CinventoryCatalogU3Ek__BackingField_1;
	// UnityEngine.GameFoundation.StoreCatalog UnityEngine.GameFoundation.CatalogManager::<storeCatalog>k__BackingField
	StoreCatalog_t3CA77A2E25FB7816414BD17E09F8D0C64C452390 * ___U3CstoreCatalogU3Ek__BackingField_2;
	// UnityEngine.GameFoundation.CurrencyCatalog UnityEngine.GameFoundation.CatalogManager::<currencyCatalog>k__BackingField
	CurrencyCatalog_tAB18AF857693F4241A0D55E29C1C3DD7211048EE * ___U3CcurrencyCatalogU3Ek__BackingField_3;
	// UnityEngine.GameFoundation.TransactionCatalog UnityEngine.GameFoundation.CatalogManager::<transactionCatalog>k__BackingField
	TransactionCatalog_tE0F4E4435A856766B52925A3020BD12F0F4C2DCE * ___U3CtransactionCatalogU3Ek__BackingField_4;
	// UnityEngine.GameFoundation.GameParameterCatalog UnityEngine.GameFoundation.CatalogManager::<gameParameterCatalog>k__BackingField
	GameParameterCatalog_tB644C090A158E98B624D488E7D1E3EC75DFBB6A7 * ___U3CgameParameterCatalogU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CtagCatalogU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E, ___U3CtagCatalogU3Ek__BackingField_0)); }
	inline TagCatalog_tBE2E136934F06171D9756D1072E961D5158BAA5B * get_U3CtagCatalogU3Ek__BackingField_0() const { return ___U3CtagCatalogU3Ek__BackingField_0; }
	inline TagCatalog_tBE2E136934F06171D9756D1072E961D5158BAA5B ** get_address_of_U3CtagCatalogU3Ek__BackingField_0() { return &___U3CtagCatalogU3Ek__BackingField_0; }
	inline void set_U3CtagCatalogU3Ek__BackingField_0(TagCatalog_tBE2E136934F06171D9756D1072E961D5158BAA5B * value)
	{
		___U3CtagCatalogU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtagCatalogU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinventoryCatalogU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E, ___U3CinventoryCatalogU3Ek__BackingField_1)); }
	inline InventoryCatalog_tC10A80E725729F02C3F7E3236A76DCB29ADAB6B4 * get_U3CinventoryCatalogU3Ek__BackingField_1() const { return ___U3CinventoryCatalogU3Ek__BackingField_1; }
	inline InventoryCatalog_tC10A80E725729F02C3F7E3236A76DCB29ADAB6B4 ** get_address_of_U3CinventoryCatalogU3Ek__BackingField_1() { return &___U3CinventoryCatalogU3Ek__BackingField_1; }
	inline void set_U3CinventoryCatalogU3Ek__BackingField_1(InventoryCatalog_tC10A80E725729F02C3F7E3236A76DCB29ADAB6B4 * value)
	{
		___U3CinventoryCatalogU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinventoryCatalogU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreCatalogU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E, ___U3CstoreCatalogU3Ek__BackingField_2)); }
	inline StoreCatalog_t3CA77A2E25FB7816414BD17E09F8D0C64C452390 * get_U3CstoreCatalogU3Ek__BackingField_2() const { return ___U3CstoreCatalogU3Ek__BackingField_2; }
	inline StoreCatalog_t3CA77A2E25FB7816414BD17E09F8D0C64C452390 ** get_address_of_U3CstoreCatalogU3Ek__BackingField_2() { return &___U3CstoreCatalogU3Ek__BackingField_2; }
	inline void set_U3CstoreCatalogU3Ek__BackingField_2(StoreCatalog_t3CA77A2E25FB7816414BD17E09F8D0C64C452390 * value)
	{
		___U3CstoreCatalogU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreCatalogU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrencyCatalogU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E, ___U3CcurrencyCatalogU3Ek__BackingField_3)); }
	inline CurrencyCatalog_tAB18AF857693F4241A0D55E29C1C3DD7211048EE * get_U3CcurrencyCatalogU3Ek__BackingField_3() const { return ___U3CcurrencyCatalogU3Ek__BackingField_3; }
	inline CurrencyCatalog_tAB18AF857693F4241A0D55E29C1C3DD7211048EE ** get_address_of_U3CcurrencyCatalogU3Ek__BackingField_3() { return &___U3CcurrencyCatalogU3Ek__BackingField_3; }
	inline void set_U3CcurrencyCatalogU3Ek__BackingField_3(CurrencyCatalog_tAB18AF857693F4241A0D55E29C1C3DD7211048EE * value)
	{
		___U3CcurrencyCatalogU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrencyCatalogU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionCatalogU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E, ___U3CtransactionCatalogU3Ek__BackingField_4)); }
	inline TransactionCatalog_tE0F4E4435A856766B52925A3020BD12F0F4C2DCE * get_U3CtransactionCatalogU3Ek__BackingField_4() const { return ___U3CtransactionCatalogU3Ek__BackingField_4; }
	inline TransactionCatalog_tE0F4E4435A856766B52925A3020BD12F0F4C2DCE ** get_address_of_U3CtransactionCatalogU3Ek__BackingField_4() { return &___U3CtransactionCatalogU3Ek__BackingField_4; }
	inline void set_U3CtransactionCatalogU3Ek__BackingField_4(TransactionCatalog_tE0F4E4435A856766B52925A3020BD12F0F4C2DCE * value)
	{
		___U3CtransactionCatalogU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionCatalogU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgameParameterCatalogU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E, ___U3CgameParameterCatalogU3Ek__BackingField_5)); }
	inline GameParameterCatalog_tB644C090A158E98B624D488E7D1E3EC75DFBB6A7 * get_U3CgameParameterCatalogU3Ek__BackingField_5() const { return ___U3CgameParameterCatalogU3Ek__BackingField_5; }
	inline GameParameterCatalog_tB644C090A158E98B624D488E7D1E3EC75DFBB6A7 ** get_address_of_U3CgameParameterCatalogU3Ek__BackingField_5() { return &___U3CgameParameterCatalogU3Ek__BackingField_5; }
	inline void set_U3CgameParameterCatalogU3Ek__BackingField_5(GameParameterCatalog_tB644C090A158E98B624D488E7D1E3EC75DFBB6A7 * value)
	{
		___U3CgameParameterCatalogU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgameParameterCatalogU3Ek__BackingField_5), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject
struct  CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511  : public RuntimeObject
{
public:
	// UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject::m_Currency
	CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * ___m_Currency_0;
	// System.Int64 UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject::m_Amount
	int64_t ___m_Amount_1;

public:
	inline static int32_t get_offset_of_m_Currency_0() { return static_cast<int32_t>(offsetof(CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511, ___m_Currency_0)); }
	inline CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * get_m_Currency_0() const { return ___m_Currency_0; }
	inline CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 ** get_address_of_m_Currency_0() { return &___m_Currency_0; }
	inline void set_m_Currency_0(CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * value)
	{
		___m_Currency_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Currency_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Amount_1() { return static_cast<int32_t>(offsetof(CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511, ___m_Amount_1)); }
	inline int64_t get_m_Amount_1() const { return ___m_Amount_1; }
	inline int64_t* get_address_of_m_Amount_1() { return &___m_Amount_1; }
	inline void set_m_Amount_1(int64_t value)
	{
		___m_Amount_1 = value;
	}
};


// UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject
struct  ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A  : public RuntimeObject
{
public:
	// UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject::m_Item
	InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * ___m_Item_0;
	// System.Int64 UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject::m_Amount
	int64_t ___m_Amount_1;

public:
	inline static int32_t get_offset_of_m_Item_0() { return static_cast<int32_t>(offsetof(ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A, ___m_Item_0)); }
	inline InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * get_m_Item_0() const { return ___m_Item_0; }
	inline InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 ** get_address_of_m_Item_0() { return &___m_Item_0; }
	inline void set_m_Item_0(InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * value)
	{
		___m_Item_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Amount_1() { return static_cast<int32_t>(offsetof(ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A, ___m_Amount_1)); }
	inline int64_t get_m_Amount_1() const { return ___m_Amount_1; }
	inline int64_t* get_address_of_m_Amount_1() { return &___m_Amount_1; }
	inline void set_m_Amount_1(int64_t value)
	{
		___m_Amount_1 = value;
	}
};


// UnityEngine.GameFoundation.DefaultCatalog.TransactionExchangeDefinitionObject
struct  TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject> UnityEngine.GameFoundation.DefaultCatalog.TransactionExchangeDefinitionObject::m_Items
	List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * ___m_Items_0;
	// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject> UnityEngine.GameFoundation.DefaultCatalog.TransactionExchangeDefinitionObject::m_Currencies
	List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * ___m_Currencies_1;

public:
	inline static int32_t get_offset_of_m_Items_0() { return static_cast<int32_t>(offsetof(TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2, ___m_Items_0)); }
	inline List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * get_m_Items_0() const { return ___m_Items_0; }
	inline List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD ** get_address_of_m_Items_0() { return &___m_Items_0; }
	inline void set_m_Items_0(List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * value)
	{
		___m_Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Currencies_1() { return static_cast<int32_t>(offsetof(TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2, ___m_Currencies_1)); }
	inline List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * get_m_Currencies_1() const { return ___m_Currencies_1; }
	inline List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 ** get_address_of_m_Currencies_1() { return &___m_Currencies_1; }
	inline void set_m_Currencies_1(List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * value)
	{
		___m_Currencies_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Currencies_1), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer
struct  BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::m_Version
	int32_t ___m_Version_0;
	// UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::database
	GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * ___database_1;
	// UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::m_InventoryDataLayer
	InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * ___m_InventoryDataLayer_2;
	// UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::m_WalletDataLayer
	WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * ___m_WalletDataLayer_9;

public:
	inline static int32_t get_offset_of_m_Version_0() { return static_cast<int32_t>(offsetof(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878, ___m_Version_0)); }
	inline int32_t get_m_Version_0() const { return ___m_Version_0; }
	inline int32_t* get_address_of_m_Version_0() { return &___m_Version_0; }
	inline void set_m_Version_0(int32_t value)
	{
		___m_Version_0 = value;
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878, ___database_1)); }
	inline GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * get_database_1() const { return ___database_1; }
	inline GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_InventoryDataLayer_2() { return static_cast<int32_t>(offsetof(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878, ___m_InventoryDataLayer_2)); }
	inline InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * get_m_InventoryDataLayer_2() const { return ___m_InventoryDataLayer_2; }
	inline InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 ** get_address_of_m_InventoryDataLayer_2() { return &___m_InventoryDataLayer_2; }
	inline void set_m_InventoryDataLayer_2(InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * value)
	{
		___m_InventoryDataLayer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InventoryDataLayer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_WalletDataLayer_9() { return static_cast<int32_t>(offsetof(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878, ___m_WalletDataLayer_9)); }
	inline WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * get_m_WalletDataLayer_9() const { return ___m_WalletDataLayer_9; }
	inline WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF ** get_address_of_m_WalletDataLayer_9() { return &___m_WalletDataLayer_9; }
	inline void set_m_WalletDataLayer_9(WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * value)
	{
		___m_WalletDataLayer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WalletDataLayer_9), (void*)value);
	}
};

struct BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields
{
public:
	// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>> UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::s_CurrencyExchangesListPool
	Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE * ___s_CurrencyExchangesListPool_3;
	// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>> UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::s_ItemExchangesListPool
	Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 * ___s_ItemExchangesListPool_4;
	// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<System.Exception>> UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::s_ExceptionListPool
	Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A * ___s_ExceptionListPool_5;
	// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<System.String>> UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::s_StringListPool
	Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18 * ___s_StringListPool_6;
	// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>> UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::s_ItemDataListPool
	Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D * ___s_ItemDataListPool_7;
	// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.Dictionary`2<System.String,System.Int64>> UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::s_DictionaryStringLongPool
	Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB * ___s_DictionaryStringLongPool_8;

public:
	inline static int32_t get_offset_of_s_CurrencyExchangesListPool_3() { return static_cast<int32_t>(offsetof(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields, ___s_CurrencyExchangesListPool_3)); }
	inline Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE * get_s_CurrencyExchangesListPool_3() const { return ___s_CurrencyExchangesListPool_3; }
	inline Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE ** get_address_of_s_CurrencyExchangesListPool_3() { return &___s_CurrencyExchangesListPool_3; }
	inline void set_s_CurrencyExchangesListPool_3(Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE * value)
	{
		___s_CurrencyExchangesListPool_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CurrencyExchangesListPool_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_ItemExchangesListPool_4() { return static_cast<int32_t>(offsetof(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields, ___s_ItemExchangesListPool_4)); }
	inline Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 * get_s_ItemExchangesListPool_4() const { return ___s_ItemExchangesListPool_4; }
	inline Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 ** get_address_of_s_ItemExchangesListPool_4() { return &___s_ItemExchangesListPool_4; }
	inline void set_s_ItemExchangesListPool_4(Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 * value)
	{
		___s_ItemExchangesListPool_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ItemExchangesListPool_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_ExceptionListPool_5() { return static_cast<int32_t>(offsetof(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields, ___s_ExceptionListPool_5)); }
	inline Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A * get_s_ExceptionListPool_5() const { return ___s_ExceptionListPool_5; }
	inline Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A ** get_address_of_s_ExceptionListPool_5() { return &___s_ExceptionListPool_5; }
	inline void set_s_ExceptionListPool_5(Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A * value)
	{
		___s_ExceptionListPool_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ExceptionListPool_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_StringListPool_6() { return static_cast<int32_t>(offsetof(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields, ___s_StringListPool_6)); }
	inline Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18 * get_s_StringListPool_6() const { return ___s_StringListPool_6; }
	inline Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18 ** get_address_of_s_StringListPool_6() { return &___s_StringListPool_6; }
	inline void set_s_StringListPool_6(Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18 * value)
	{
		___s_StringListPool_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StringListPool_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_ItemDataListPool_7() { return static_cast<int32_t>(offsetof(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields, ___s_ItemDataListPool_7)); }
	inline Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D * get_s_ItemDataListPool_7() const { return ___s_ItemDataListPool_7; }
	inline Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D ** get_address_of_s_ItemDataListPool_7() { return &___s_ItemDataListPool_7; }
	inline void set_s_ItemDataListPool_7(Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D * value)
	{
		___s_ItemDataListPool_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ItemDataListPool_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_DictionaryStringLongPool_8() { return static_cast<int32_t>(offsetof(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields, ___s_DictionaryStringLongPool_8)); }
	inline Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB * get_s_DictionaryStringLongPool_8() const { return ___s_DictionaryStringLongPool_8; }
	inline Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB ** get_address_of_s_DictionaryStringLongPool_8() { return &___s_DictionaryStringLongPool_8; }
	inline void set_s_DictionaryStringLongPool_8(Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB * value)
	{
		___s_DictionaryStringLongPool_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DictionaryStringLongPool_8), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c
struct  U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields
{
public:
	// UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::<>9
	U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer
struct  InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Data.InventoryItemData> UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::m_Items
	Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * ___m_Items_0;
	// UnityEngine.GameFoundation.DefaultCatalog.InventoryCatalogAsset UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::m_Catalog
	InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * ___m_Catalog_1;

public:
	inline static int32_t get_offset_of_m_Items_0() { return static_cast<int32_t>(offsetof(InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76, ___m_Items_0)); }
	inline Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * get_m_Items_0() const { return ___m_Items_0; }
	inline Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 ** get_address_of_m_Items_0() { return &___m_Items_0; }
	inline void set_m_Items_0(Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * value)
	{
		___m_Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Catalog_1() { return static_cast<int32_t>(offsetof(InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76, ___m_Catalog_1)); }
	inline InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * get_m_Catalog_1() const { return ___m_Catalog_1; }
	inline InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 ** get_address_of_m_Catalog_1() { return &___m_Catalog_1; }
	inline void set_m_Catalog_1(InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * value)
	{
		___m_Catalog_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Catalog_1), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultLayers.Persistence.BaseDataPersistence
struct  BaseDataPersistence_t6314CED3A904BB34596A984FFFB67ABBC205AB92  : public RuntimeObject
{
public:
	// UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataSerializer UnityEngine.GameFoundation.DefaultLayers.Persistence.BaseDataPersistence::<serializer>k__BackingField
	RuntimeObject* ___U3CserializerU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CserializerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseDataPersistence_t6314CED3A904BB34596A984FFFB67ABBC205AB92, ___U3CserializerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CserializerU3Ek__BackingField_0() const { return ___U3CserializerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CserializerU3Ek__BackingField_0() { return &___U3CserializerU3Ek__BackingField_0; }
	inline void set_U3CserializerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CserializerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CserializerU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultLayers.Persistence.JsonDataSerializer
struct  JsonDataSerializer_tC698450A00DF2674FFCED7DEAA30182A5A213015  : public RuntimeObject
{
public:

public:
};


// UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer
struct  WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::m_Balances
	Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * ___m_Balances_0;

public:
	inline static int32_t get_offset_of_m_Balances_0() { return static_cast<int32_t>(offsetof(WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF, ___m_Balances_0)); }
	inline Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * get_m_Balances_0() const { return ___m_Balances_0; }
	inline Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 ** get_address_of_m_Balances_0() { return &___m_Balances_0; }
	inline void set_m_Balances_0(Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * value)
	{
		___m_Balances_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Balances_0), (void*)value);
	}
};


// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.Dictionary`2<System.String,System.Int64>>
struct  Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Pool
	Queue_1_t2BDC32D642D11DE7F55593AD309AB9E8F9F2203E * ___m_Pool_0;
	// System.Func`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Create
	Func_1_t014E375EF334B5545E3B56A95E6E1F46487014E6 * ___m_Create_1;
	// System.Action`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Release
	Action_1_t89246F556F01EA068B8CC8237694622FE3E7DAF7 * ___m_Release_2;

public:
	inline static int32_t get_offset_of_m_Pool_0() { return static_cast<int32_t>(offsetof(Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB, ___m_Pool_0)); }
	inline Queue_1_t2BDC32D642D11DE7F55593AD309AB9E8F9F2203E * get_m_Pool_0() const { return ___m_Pool_0; }
	inline Queue_1_t2BDC32D642D11DE7F55593AD309AB9E8F9F2203E ** get_address_of_m_Pool_0() { return &___m_Pool_0; }
	inline void set_m_Pool_0(Queue_1_t2BDC32D642D11DE7F55593AD309AB9E8F9F2203E * value)
	{
		___m_Pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Pool_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Create_1() { return static_cast<int32_t>(offsetof(Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB, ___m_Create_1)); }
	inline Func_1_t014E375EF334B5545E3B56A95E6E1F46487014E6 * get_m_Create_1() const { return ___m_Create_1; }
	inline Func_1_t014E375EF334B5545E3B56A95E6E1F46487014E6 ** get_address_of_m_Create_1() { return &___m_Create_1; }
	inline void set_m_Create_1(Func_1_t014E375EF334B5545E3B56A95E6E1F46487014E6 * value)
	{
		___m_Create_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Create_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Release_2() { return static_cast<int32_t>(offsetof(Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB, ___m_Release_2)); }
	inline Action_1_t89246F556F01EA068B8CC8237694622FE3E7DAF7 * get_m_Release_2() const { return ___m_Release_2; }
	inline Action_1_t89246F556F01EA068B8CC8237694622FE3E7DAF7 ** get_address_of_m_Release_2() { return &___m_Release_2; }
	inline void set_m_Release_2(Action_1_t89246F556F01EA068B8CC8237694622FE3E7DAF7 * value)
	{
		___m_Release_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Release_2), (void*)value);
	}
};


// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<System.Exception>>
struct  Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Pool
	Queue_1_tA7AB9D73C602B51E2690B3565B63463F26616630 * ___m_Pool_0;
	// System.Func`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Create
	Func_1_t424489991AE168C0DFF23714862850ABAAB683F6 * ___m_Create_1;
	// System.Action`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Release
	Action_1_tCB4CF566D79F662E724459D5BD25742D2375B190 * ___m_Release_2;

public:
	inline static int32_t get_offset_of_m_Pool_0() { return static_cast<int32_t>(offsetof(Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A, ___m_Pool_0)); }
	inline Queue_1_tA7AB9D73C602B51E2690B3565B63463F26616630 * get_m_Pool_0() const { return ___m_Pool_0; }
	inline Queue_1_tA7AB9D73C602B51E2690B3565B63463F26616630 ** get_address_of_m_Pool_0() { return &___m_Pool_0; }
	inline void set_m_Pool_0(Queue_1_tA7AB9D73C602B51E2690B3565B63463F26616630 * value)
	{
		___m_Pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Pool_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Create_1() { return static_cast<int32_t>(offsetof(Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A, ___m_Create_1)); }
	inline Func_1_t424489991AE168C0DFF23714862850ABAAB683F6 * get_m_Create_1() const { return ___m_Create_1; }
	inline Func_1_t424489991AE168C0DFF23714862850ABAAB683F6 ** get_address_of_m_Create_1() { return &___m_Create_1; }
	inline void set_m_Create_1(Func_1_t424489991AE168C0DFF23714862850ABAAB683F6 * value)
	{
		___m_Create_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Create_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Release_2() { return static_cast<int32_t>(offsetof(Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A, ___m_Release_2)); }
	inline Action_1_tCB4CF566D79F662E724459D5BD25742D2375B190 * get_m_Release_2() const { return ___m_Release_2; }
	inline Action_1_tCB4CF566D79F662E724459D5BD25742D2375B190 ** get_address_of_m_Release_2() { return &___m_Release_2; }
	inline void set_m_Release_2(Action_1_tCB4CF566D79F662E724459D5BD25742D2375B190 * value)
	{
		___m_Release_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Release_2), (void*)value);
	}
};


// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<System.String>>
struct  Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Pool
	Queue_1_tDAAE1B812460B13C7157A98572216EE1151659CD * ___m_Pool_0;
	// System.Func`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Create
	Func_1_t40C51F5B2AE4E23C5A2C632CAB7292B16444953F * ___m_Create_1;
	// System.Action`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Release
	Action_1_t9C3E2FDBB284E0602F2CD1FCE3CBB76F3C83FB3E * ___m_Release_2;

public:
	inline static int32_t get_offset_of_m_Pool_0() { return static_cast<int32_t>(offsetof(Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18, ___m_Pool_0)); }
	inline Queue_1_tDAAE1B812460B13C7157A98572216EE1151659CD * get_m_Pool_0() const { return ___m_Pool_0; }
	inline Queue_1_tDAAE1B812460B13C7157A98572216EE1151659CD ** get_address_of_m_Pool_0() { return &___m_Pool_0; }
	inline void set_m_Pool_0(Queue_1_tDAAE1B812460B13C7157A98572216EE1151659CD * value)
	{
		___m_Pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Pool_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Create_1() { return static_cast<int32_t>(offsetof(Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18, ___m_Create_1)); }
	inline Func_1_t40C51F5B2AE4E23C5A2C632CAB7292B16444953F * get_m_Create_1() const { return ___m_Create_1; }
	inline Func_1_t40C51F5B2AE4E23C5A2C632CAB7292B16444953F ** get_address_of_m_Create_1() { return &___m_Create_1; }
	inline void set_m_Create_1(Func_1_t40C51F5B2AE4E23C5A2C632CAB7292B16444953F * value)
	{
		___m_Create_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Create_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Release_2() { return static_cast<int32_t>(offsetof(Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18, ___m_Release_2)); }
	inline Action_1_t9C3E2FDBB284E0602F2CD1FCE3CBB76F3C83FB3E * get_m_Release_2() const { return ___m_Release_2; }
	inline Action_1_t9C3E2FDBB284E0602F2CD1FCE3CBB76F3C83FB3E ** get_address_of_m_Release_2() { return &___m_Release_2; }
	inline void set_m_Release_2(Action_1_t9C3E2FDBB284E0602F2CD1FCE3CBB76F3C83FB3E * value)
	{
		___m_Release_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Release_2), (void*)value);
	}
};


// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>>
struct  Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Pool
	Queue_1_t6A1F1651EBD59BD9194E949B554288F865921956 * ___m_Pool_0;
	// System.Func`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Create
	Func_1_t55FC41E651B445E42D4EA8EB2618F7F57FE8E776 * ___m_Create_1;
	// System.Action`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Release
	Action_1_tF8D742FF2C7432253A3F24F44BFB5042ACC70F7E * ___m_Release_2;

public:
	inline static int32_t get_offset_of_m_Pool_0() { return static_cast<int32_t>(offsetof(Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D, ___m_Pool_0)); }
	inline Queue_1_t6A1F1651EBD59BD9194E949B554288F865921956 * get_m_Pool_0() const { return ___m_Pool_0; }
	inline Queue_1_t6A1F1651EBD59BD9194E949B554288F865921956 ** get_address_of_m_Pool_0() { return &___m_Pool_0; }
	inline void set_m_Pool_0(Queue_1_t6A1F1651EBD59BD9194E949B554288F865921956 * value)
	{
		___m_Pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Pool_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Create_1() { return static_cast<int32_t>(offsetof(Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D, ___m_Create_1)); }
	inline Func_1_t55FC41E651B445E42D4EA8EB2618F7F57FE8E776 * get_m_Create_1() const { return ___m_Create_1; }
	inline Func_1_t55FC41E651B445E42D4EA8EB2618F7F57FE8E776 ** get_address_of_m_Create_1() { return &___m_Create_1; }
	inline void set_m_Create_1(Func_1_t55FC41E651B445E42D4EA8EB2618F7F57FE8E776 * value)
	{
		___m_Create_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Create_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Release_2() { return static_cast<int32_t>(offsetof(Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D, ___m_Release_2)); }
	inline Action_1_tF8D742FF2C7432253A3F24F44BFB5042ACC70F7E * get_m_Release_2() const { return ___m_Release_2; }
	inline Action_1_tF8D742FF2C7432253A3F24F44BFB5042ACC70F7E ** get_address_of_m_Release_2() { return &___m_Release_2; }
	inline void set_m_Release_2(Action_1_tF8D742FF2C7432253A3F24F44BFB5042ACC70F7E * value)
	{
		___m_Release_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Release_2), (void*)value);
	}
};


// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>>
struct  Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Pool
	Queue_1_tDE45EECA7BB3CF45B6664B7FD5C954536AFBB379 * ___m_Pool_0;
	// System.Func`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Create
	Func_1_t60E22F842BA86FDE2A99F8DD874CCE1F49EAB448 * ___m_Create_1;
	// System.Action`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Release
	Action_1_tB03796BBEE46B5AFBEA805E7D422268E5648AB46 * ___m_Release_2;

public:
	inline static int32_t get_offset_of_m_Pool_0() { return static_cast<int32_t>(offsetof(Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE, ___m_Pool_0)); }
	inline Queue_1_tDE45EECA7BB3CF45B6664B7FD5C954536AFBB379 * get_m_Pool_0() const { return ___m_Pool_0; }
	inline Queue_1_tDE45EECA7BB3CF45B6664B7FD5C954536AFBB379 ** get_address_of_m_Pool_0() { return &___m_Pool_0; }
	inline void set_m_Pool_0(Queue_1_tDE45EECA7BB3CF45B6664B7FD5C954536AFBB379 * value)
	{
		___m_Pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Pool_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Create_1() { return static_cast<int32_t>(offsetof(Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE, ___m_Create_1)); }
	inline Func_1_t60E22F842BA86FDE2A99F8DD874CCE1F49EAB448 * get_m_Create_1() const { return ___m_Create_1; }
	inline Func_1_t60E22F842BA86FDE2A99F8DD874CCE1F49EAB448 ** get_address_of_m_Create_1() { return &___m_Create_1; }
	inline void set_m_Create_1(Func_1_t60E22F842BA86FDE2A99F8DD874CCE1F49EAB448 * value)
	{
		___m_Create_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Create_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Release_2() { return static_cast<int32_t>(offsetof(Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE, ___m_Release_2)); }
	inline Action_1_tB03796BBEE46B5AFBEA805E7D422268E5648AB46 * get_m_Release_2() const { return ___m_Release_2; }
	inline Action_1_tB03796BBEE46B5AFBEA805E7D422268E5648AB46 ** get_address_of_m_Release_2() { return &___m_Release_2; }
	inline void set_m_Release_2(Action_1_tB03796BBEE46B5AFBEA805E7D422268E5648AB46 * value)
	{
		___m_Release_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Release_2), (void*)value);
	}
};


// UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>>
struct  Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Pool
	Queue_1_tAB37846AAD4EBD65C7AC3C56F9D320DC1C69516B * ___m_Pool_0;
	// System.Func`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Create
	Func_1_tE88EEE0B96B8324B3D1B14116159089F76B6497E * ___m_Create_1;
	// System.Action`1<TPooled> UnityEngine.GameFoundation.Pool`1::m_Release
	Action_1_t4C9357D898236E35BEEA05F76DE8C34B8FF5EF6C * ___m_Release_2;

public:
	inline static int32_t get_offset_of_m_Pool_0() { return static_cast<int32_t>(offsetof(Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6, ___m_Pool_0)); }
	inline Queue_1_tAB37846AAD4EBD65C7AC3C56F9D320DC1C69516B * get_m_Pool_0() const { return ___m_Pool_0; }
	inline Queue_1_tAB37846AAD4EBD65C7AC3C56F9D320DC1C69516B ** get_address_of_m_Pool_0() { return &___m_Pool_0; }
	inline void set_m_Pool_0(Queue_1_tAB37846AAD4EBD65C7AC3C56F9D320DC1C69516B * value)
	{
		___m_Pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Pool_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Create_1() { return static_cast<int32_t>(offsetof(Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6, ___m_Create_1)); }
	inline Func_1_tE88EEE0B96B8324B3D1B14116159089F76B6497E * get_m_Create_1() const { return ___m_Create_1; }
	inline Func_1_tE88EEE0B96B8324B3D1B14116159089F76B6497E ** get_address_of_m_Create_1() { return &___m_Create_1; }
	inline void set_m_Create_1(Func_1_tE88EEE0B96B8324B3D1B14116159089F76B6497E * value)
	{
		___m_Create_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Create_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Release_2() { return static_cast<int32_t>(offsetof(Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6, ___m_Release_2)); }
	inline Action_1_t4C9357D898236E35BEEA05F76DE8C34B8FF5EF6C * get_m_Release_2() const { return ___m_Release_2; }
	inline Action_1_t4C9357D898236E35BEEA05F76DE8C34B8FF5EF6C ** get_address_of_m_Release_2() { return &___m_Release_2; }
	inline void set_m_Release_2(Action_1_t4C9357D898236E35BEEA05F76DE8C34B8FF5EF6C * value)
	{
		___m_Release_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Release_2), (void*)value);
	}
};


// UnityEngine.GameFoundation.SingleCollectionCatalog`1<UnityEngine.GameFoundation.Currency>
struct  SingleCollectionCatalog_1_t5EF675C483BE5A8B2DF0F412C2824DD1737D4B14  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,TItem> UnityEngine.GameFoundation.SingleCollectionCatalog`1::m_Items
	Dictionary_2_tA04BDAAD8A4ED19627B860A255C01221CA0E19DE * ___m_Items_1;

public:
	inline static int32_t get_offset_of_m_Items_1() { return static_cast<int32_t>(offsetof(SingleCollectionCatalog_1_t5EF675C483BE5A8B2DF0F412C2824DD1737D4B14, ___m_Items_1)); }
	inline Dictionary_2_tA04BDAAD8A4ED19627B860A255C01221CA0E19DE * get_m_Items_1() const { return ___m_Items_1; }
	inline Dictionary_2_tA04BDAAD8A4ED19627B860A255C01221CA0E19DE ** get_address_of_m_Items_1() { return &___m_Items_1; }
	inline void set_m_Items_1(Dictionary_2_tA04BDAAD8A4ED19627B860A255C01221CA0E19DE * value)
	{
		___m_Items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_1), (void*)value);
	}
};

struct SingleCollectionCatalog_1_t5EF675C483BE5A8B2DF0F412C2824DD1737D4B14_ThreadStaticFields
{
public:
	// System.Collections.Generic.List`1<TItem> UnityEngine.GameFoundation.SingleCollectionCatalog`1::ts_ItemList
	List_1_t296F96338FBEA5F528AAD4FA1B1645FE24600C13 * ___ts_ItemList_0;

public:
	inline static int32_t get_offset_of_ts_ItemList_0() { return static_cast<int32_t>(offsetof(SingleCollectionCatalog_1_t5EF675C483BE5A8B2DF0F412C2824DD1737D4B14_ThreadStaticFields, ___ts_ItemList_0)); }
	inline List_1_t296F96338FBEA5F528AAD4FA1B1645FE24600C13 * get_ts_ItemList_0() const { return ___ts_ItemList_0; }
	inline List_1_t296F96338FBEA5F528AAD4FA1B1645FE24600C13 ** get_address_of_ts_ItemList_0() { return &___ts_ItemList_0; }
	inline void set_ts_ItemList_0(List_1_t296F96338FBEA5F528AAD4FA1B1645FE24600C13 * value)
	{
		___ts_ItemList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ts_ItemList_0), (void*)value);
	}
};


// UnityEngine.Promise.PromiseGenerator
struct  PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Promise.Pool`1<UnityEngine.Promise.Promise>> UnityEngine.Promise.PromiseGenerator::m_PromisePools
	Dictionary_2_t352EBF15ED5E71DAFE3909C2AF833C5F61A4C054 * ___m_PromisePools_1;
	// UnityEngine.Promise.Pool`1<System.Collections.Generic.List`1<UnityEngine.Promise.Deferred>> UnityEngine.Promise.PromiseGenerator::m_DeferredListPool
	Pool_1_tA98E175D3E9560FFB6B38FBA39B3F2A49C3A33C9 * ___m_DeferredListPool_2;
	// UnityEngine.Promise.Pool`1<System.Collections.Generic.List`1<System.Exception>> UnityEngine.Promise.PromiseGenerator::m_ErrorListPool
	Pool_1_tF8E103945AC4CF68BFA965D5361CC8785BE84696 * ___m_ErrorListPool_3;
	// System.Int64 UnityEngine.Promise.PromiseGenerator::m_TokenGenerator
	int64_t ___m_TokenGenerator_4;

public:
	inline static int32_t get_offset_of_m_PromisePools_1() { return static_cast<int32_t>(offsetof(PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C, ___m_PromisePools_1)); }
	inline Dictionary_2_t352EBF15ED5E71DAFE3909C2AF833C5F61A4C054 * get_m_PromisePools_1() const { return ___m_PromisePools_1; }
	inline Dictionary_2_t352EBF15ED5E71DAFE3909C2AF833C5F61A4C054 ** get_address_of_m_PromisePools_1() { return &___m_PromisePools_1; }
	inline void set_m_PromisePools_1(Dictionary_2_t352EBF15ED5E71DAFE3909C2AF833C5F61A4C054 * value)
	{
		___m_PromisePools_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PromisePools_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeferredListPool_2() { return static_cast<int32_t>(offsetof(PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C, ___m_DeferredListPool_2)); }
	inline Pool_1_tA98E175D3E9560FFB6B38FBA39B3F2A49C3A33C9 * get_m_DeferredListPool_2() const { return ___m_DeferredListPool_2; }
	inline Pool_1_tA98E175D3E9560FFB6B38FBA39B3F2A49C3A33C9 ** get_address_of_m_DeferredListPool_2() { return &___m_DeferredListPool_2; }
	inline void set_m_DeferredListPool_2(Pool_1_tA98E175D3E9560FFB6B38FBA39B3F2A49C3A33C9 * value)
	{
		___m_DeferredListPool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeferredListPool_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ErrorListPool_3() { return static_cast<int32_t>(offsetof(PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C, ___m_ErrorListPool_3)); }
	inline Pool_1_tF8E103945AC4CF68BFA965D5361CC8785BE84696 * get_m_ErrorListPool_3() const { return ___m_ErrorListPool_3; }
	inline Pool_1_tF8E103945AC4CF68BFA965D5361CC8785BE84696 ** get_address_of_m_ErrorListPool_3() { return &___m_ErrorListPool_3; }
	inline void set_m_ErrorListPool_3(Pool_1_tF8E103945AC4CF68BFA965D5361CC8785BE84696 * value)
	{
		___m_ErrorListPool_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ErrorListPool_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_TokenGenerator_4() { return static_cast<int32_t>(offsetof(PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C, ___m_TokenGenerator_4)); }
	inline int64_t get_m_TokenGenerator_4() const { return ___m_TokenGenerator_4; }
	inline int64_t* get_address_of_m_TokenGenerator_4() { return &___m_TokenGenerator_4; }
	inline void set_m_TokenGenerator_4(int64_t value)
	{
		___m_TokenGenerator_4 = value;
	}
};

struct PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C_StaticFields
{
public:
	// UnityEngine.Promise.PromiseGenerator_PromiseUpdater UnityEngine.Promise.PromiseGenerator::m_Updater
	PromiseUpdater_t4EE7F78C3970403AE49339ECC02BD9E6FB64EDA9 * ___m_Updater_0;

public:
	inline static int32_t get_offset_of_m_Updater_0() { return static_cast<int32_t>(offsetof(PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C_StaticFields, ___m_Updater_0)); }
	inline PromiseUpdater_t4EE7F78C3970403AE49339ECC02BD9E6FB64EDA9 * get_m_Updater_0() const { return ___m_Updater_0; }
	inline PromiseUpdater_t4EE7F78C3970403AE49339ECC02BD9E6FB64EDA9 ** get_address_of_m_Updater_0() { return &___m_Updater_0; }
	inline void set_m_Updater_0(PromiseUpdater_t4EE7F78C3970403AE49339ECC02BD9E6FB64EDA9 * value)
	{
		___m_Updater_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Updater_0), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
struct  KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
struct  KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.String>
struct  Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D, ___list_0)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_list_0() const { return ___list_0; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset>
struct  Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96, ___list_0)); }
	inline List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 * get_list_0() const { return ___list_0; }
	inline List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96, ___current_3)); }
	inline CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * get_current_3() const { return ___current_3; }
	inline CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>
struct  Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07, ___list_0)); }
	inline List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * get_list_0() const { return ___list_0; }
	inline List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07, ___current_3)); }
	inline CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511 * get_current_3() const { return ___current_3; }
	inline CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>
struct  Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128, ___list_0)); }
	inline List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * get_list_0() const { return ___list_0; }
	inline List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128, ___current_3)); }
	inline ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * get_current_3() const { return ___current_3; }
	inline ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
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

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextReader
struct  TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ___Null_3)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_Null_3() const { return ___Null_3; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___CoreNewLine_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ___Null_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.GameFoundation.CoalescedValueType
struct  CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.GameFoundation.CoalescedValueType::longValue
			int64_t ___longValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___longValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UnityEngine.GameFoundation.CoalescedValueType::ulongValue
			uint64_t ___ulongValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ulongValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.GameFoundation.CoalescedValueType::byteValue
			uint8_t ___byteValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byteValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte UnityEngine.GameFoundation.CoalescedValueType::sbyteValue
			int8_t ___sbyteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.GameFoundation.CoalescedValueType::shortValue
			int16_t ___shortValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___shortValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 UnityEngine.GameFoundation.CoalescedValueType::ushortValue
			uint16_t ___ushortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___ushortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.GameFoundation.CoalescedValueType::intValue
			int32_t ___intValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___intValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 UnityEngine.GameFoundation.CoalescedValueType::uintValue
			uint32_t ___uintValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uintValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.GameFoundation.CoalescedValueType::floatValue
			float ___floatValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.GameFoundation.CoalescedValueType::doubleValue
			double ___doubleValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.GameFoundation.CoalescedValueType::boolValue
			bool ___boolValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___boolValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.GameFoundation.CoalescedValueType::charValue
			Il2CppChar ___charValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___charValue_11_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_longValue_0() { return static_cast<int32_t>(offsetof(CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC, ___longValue_0)); }
	inline int64_t get_longValue_0() const { return ___longValue_0; }
	inline int64_t* get_address_of_longValue_0() { return &___longValue_0; }
	inline void set_longValue_0(int64_t value)
	{
		___longValue_0 = value;
	}

	inline static int32_t get_offset_of_ulongValue_1() { return static_cast<int32_t>(offsetof(CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC, ___ulongValue_1)); }
	inline uint64_t get_ulongValue_1() const { return ___ulongValue_1; }
	inline uint64_t* get_address_of_ulongValue_1() { return &___ulongValue_1; }
	inline void set_ulongValue_1(uint64_t value)
	{
		___ulongValue_1 = value;
	}

	inline static int32_t get_offset_of_byteValue_2() { return static_cast<int32_t>(offsetof(CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC, ___byteValue_2)); }
	inline uint8_t get_byteValue_2() const { return ___byteValue_2; }
	inline uint8_t* get_address_of_byteValue_2() { return &___byteValue_2; }
	inline void set_byteValue_2(uint8_t value)
	{
		___byteValue_2 = value;
	}

	inline static int32_t get_offset_of_sbyteValue_3() { return static_cast<int32_t>(offsetof(CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC, ___sbyteValue_3)); }
	inline int8_t get_sbyteValue_3() const { return ___sbyteValue_3; }
	inline int8_t* get_address_of_sbyteValue_3() { return &___sbyteValue_3; }
	inline void set_sbyteValue_3(int8_t value)
	{
		___sbyteValue_3 = value;
	}

	inline static int32_t get_offset_of_shortValue_4() { return static_cast<int32_t>(offsetof(CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC, ___shortValue_4)); }
	inline int16_t get_shortValue_4() const { return ___shortValue_4; }
	inline int16_t* get_address_of_shortValue_4() { return &___shortValue_4; }
	inline void set_shortValue_4(int16_t value)
	{
		___shortValue_4 = value;
	}

	inline static int32_t get_offset_of_ushortValue_5() { return static_cast<int32_t>(offsetof(CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC, ___ushortValue_5)); }
	inline uint16_t get_ushortValue_5() const { return ___ushortValue_5; }
	inline uint16_t* get_address_of_ushortValue_5() { return &___ushortValue_5; }
	inline void set_ushortValue_5(uint16_t value)
	{
		___ushortValue_5 = value;
	}

	inline static int32_t get_offset_of_intValue_6() { return static_cast<int32_t>(offsetof(CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC, ___intValue_6)); }
	inline int32_t get_intValue_6() const { return ___intValue_6; }
	inline int32_t* get_address_of_intValue_6() { return &___intValue_6; }
	inline void set_intValue_6(int32_t value)
	{
		___intValue_6 = value;
	}

	inline static int32_t get_offset_of_uintValue_7() { return static_cast<int32_t>(offsetof(CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC, ___uintValue_7)); }
	inline uint32_t get_uintValue_7() const { return ___uintValue_7; }
	inline uint32_t* get_address_of_uintValue_7() { return &___uintValue_7; }
	inline void set_uintValue_7(uint32_t value)
	{
		___uintValue_7 = value;
	}

	inline static int32_t get_offset_of_floatValue_8() { return static_cast<int32_t>(offsetof(CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC, ___floatValue_8)); }
	inline float get_floatValue_8() const { return ___floatValue_8; }
	inline float* get_address_of_floatValue_8() { return &___floatValue_8; }
	inline void set_floatValue_8(float value)
	{
		___floatValue_8 = value;
	}

	inline static int32_t get_offset_of_doubleValue_9() { return static_cast<int32_t>(offsetof(CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC, ___doubleValue_9)); }
	inline double get_doubleValue_9() const { return ___doubleValue_9; }
	inline double* get_address_of_doubleValue_9() { return &___doubleValue_9; }
	inline void set_doubleValue_9(double value)
	{
		___doubleValue_9 = value;
	}

	inline static int32_t get_offset_of_boolValue_10() { return static_cast<int32_t>(offsetof(CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC, ___boolValue_10)); }
	inline bool get_boolValue_10() const { return ___boolValue_10; }
	inline bool* get_address_of_boolValue_10() { return &___boolValue_10; }
	inline void set_boolValue_10(bool value)
	{
		___boolValue_10 = value;
	}

	inline static int32_t get_offset_of_charValue_11() { return static_cast<int32_t>(offsetof(CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC, ___charValue_11)); }
	inline Il2CppChar get_charValue_11() const { return ___charValue_11; }
	inline Il2CppChar* get_address_of_charValue_11() { return &___charValue_11; }
	inline void set_charValue_11(Il2CppChar value)
	{
		___charValue_11 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GameFoundation.CoalescedValueType
struct CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___longValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___longValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ulongValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ulongValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byteValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byteValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___shortValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___shortValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___ushortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___ushortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___intValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___intValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uintValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uintValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___floatValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___doubleValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___boolValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___boolValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___charValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___charValue_11_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.GameFoundation.CoalescedValueType
struct CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___longValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___longValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ulongValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ulongValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byteValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byteValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___shortValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___shortValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___ushortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___ushortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___intValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___intValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uintValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uintValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___floatValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___doubleValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___boolValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___boolValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___charValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___charValue_11_forAlignmentOnly;
		};
	};
};

// UnityEngine.GameFoundation.CurrencyCatalog
struct  CurrencyCatalog_tAB18AF857693F4241A0D55E29C1C3DD7211048EE  : public SingleCollectionCatalog_1_t5EF675C483BE5A8B2DF0F412C2824DD1737D4B14
{
public:

public:
};


// UnityEngine.GameFoundation.Data.BalanceData
struct  BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89 
{
public:
	// System.String UnityEngine.GameFoundation.Data.BalanceData::currencyKey
	String_t* ___currencyKey_0;
	// System.Int64 UnityEngine.GameFoundation.Data.BalanceData::balance
	int64_t ___balance_1;

public:
	inline static int32_t get_offset_of_currencyKey_0() { return static_cast<int32_t>(offsetof(BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89, ___currencyKey_0)); }
	inline String_t* get_currencyKey_0() const { return ___currencyKey_0; }
	inline String_t** get_address_of_currencyKey_0() { return &___currencyKey_0; }
	inline void set_currencyKey_0(String_t* value)
	{
		___currencyKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_balance_1() { return static_cast<int32_t>(offsetof(BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89, ___balance_1)); }
	inline int64_t get_balance_1() const { return ___balance_1; }
	inline int64_t* get_address_of_balance_1() { return &___balance_1; }
	inline void set_balance_1(int64_t value)
	{
		___balance_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GameFoundation.Data.BalanceData
struct BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89_marshaled_pinvoke
{
	char* ___currencyKey_0;
	int64_t ___balance_1;
};
// Native definition for COM marshalling of UnityEngine.GameFoundation.Data.BalanceData
struct BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89_marshaled_com
{
	Il2CppChar* ___currencyKey_0;
	int64_t ___balance_1;
};

// UnityEngine.GameFoundation.Data.CurrencyExchangeData
struct  CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756 
{
public:
	// System.String UnityEngine.GameFoundation.Data.CurrencyExchangeData::currencyKey
	String_t* ___currencyKey_0;
	// System.Int64 UnityEngine.GameFoundation.Data.CurrencyExchangeData::amount
	int64_t ___amount_1;

public:
	inline static int32_t get_offset_of_currencyKey_0() { return static_cast<int32_t>(offsetof(CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756, ___currencyKey_0)); }
	inline String_t* get_currencyKey_0() const { return ___currencyKey_0; }
	inline String_t** get_address_of_currencyKey_0() { return &___currencyKey_0; }
	inline void set_currencyKey_0(String_t* value)
	{
		___currencyKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_amount_1() { return static_cast<int32_t>(offsetof(CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756, ___amount_1)); }
	inline int64_t get_amount_1() const { return ___amount_1; }
	inline int64_t* get_address_of_amount_1() { return &___amount_1; }
	inline void set_amount_1(int64_t value)
	{
		___amount_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GameFoundation.Data.CurrencyExchangeData
struct CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756_marshaled_pinvoke
{
	char* ___currencyKey_0;
	int64_t ___amount_1;
};
// Native definition for COM marshalling of UnityEngine.GameFoundation.Data.CurrencyExchangeData
struct CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756_marshaled_com
{
	Il2CppChar* ___currencyKey_0;
	int64_t ___amount_1;
};

// UnityEngine.GameFoundation.Data.InventoryItemData
struct  InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 
{
public:
	// System.String UnityEngine.GameFoundation.Data.InventoryItemData::definitionKey
	String_t* ___definitionKey_0;
	// System.String UnityEngine.GameFoundation.Data.InventoryItemData::id
	String_t* ___id_1;
	// UnityEngine.GameFoundation.Data.PropertyData[] UnityEngine.GameFoundation.Data.InventoryItemData::properties
	PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* ___properties_2;

public:
	inline static int32_t get_offset_of_definitionKey_0() { return static_cast<int32_t>(offsetof(InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889, ___definitionKey_0)); }
	inline String_t* get_definitionKey_0() const { return ___definitionKey_0; }
	inline String_t** get_address_of_definitionKey_0() { return &___definitionKey_0; }
	inline void set_definitionKey_0(String_t* value)
	{
		___definitionKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___definitionKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889, ___properties_2)); }
	inline PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* get_properties_2() const { return ___properties_2; }
	inline PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GameFoundation.Data.InventoryItemData
struct InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889_marshaled_pinvoke
{
	char* ___definitionKey_0;
	char* ___id_1;
	PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5_marshaled_pinvoke* ___properties_2;
};
// Native definition for COM marshalling of UnityEngine.GameFoundation.Data.InventoryItemData
struct InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889_marshaled_com
{
	Il2CppChar* ___definitionKey_0;
	Il2CppChar* ___id_1;
	PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5_marshaled_com* ___properties_2;
};

// UnityEngine.GameFoundation.Data.InventoryManagerData
struct  InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5 
{
public:
	// UnityEngine.GameFoundation.Data.InventoryItemData[] UnityEngine.GameFoundation.Data.InventoryManagerData::items
	InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* ___items_0;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5, ___items_0)); }
	inline InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* get_items_0() const { return ___items_0; }
	inline InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GameFoundation.Data.InventoryManagerData
struct InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5_marshaled_pinvoke
{
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889_marshaled_pinvoke* ___items_0;
};
// Native definition for COM marshalling of UnityEngine.GameFoundation.Data.InventoryManagerData
struct InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5_marshaled_com
{
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889_marshaled_com* ___items_0;
};

// UnityEngine.GameFoundation.Data.TransactionExchangeData
struct  TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89 
{
public:
	// UnityEngine.GameFoundation.Data.CurrencyExchangeData[] UnityEngine.GameFoundation.Data.TransactionExchangeData::currencies
	CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB* ___currencies_0;
	// UnityEngine.GameFoundation.Data.InventoryItemData[] UnityEngine.GameFoundation.Data.TransactionExchangeData::items
	InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* ___items_1;

public:
	inline static int32_t get_offset_of_currencies_0() { return static_cast<int32_t>(offsetof(TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89, ___currencies_0)); }
	inline CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB* get_currencies_0() const { return ___currencies_0; }
	inline CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB** get_address_of_currencies_0() { return &___currencies_0; }
	inline void set_currencies_0(CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB* value)
	{
		___currencies_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencies_0), (void*)value);
	}

	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89, ___items_1)); }
	inline InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* get_items_1() const { return ___items_1; }
	inline InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GameFoundation.Data.TransactionExchangeData
struct TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89_marshaled_pinvoke
{
	CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756_marshaled_pinvoke* ___currencies_0;
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889_marshaled_pinvoke* ___items_1;
};
// Native definition for COM marshalling of UnityEngine.GameFoundation.Data.TransactionExchangeData
struct TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89_marshaled_com
{
	CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756_marshaled_com* ___currencies_0;
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889_marshaled_com* ___items_1;
};

// UnityEngine.GameFoundation.Data.WalletData
struct  WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19 
{
public:
	// UnityEngine.GameFoundation.Data.BalanceData[] UnityEngine.GameFoundation.Data.WalletData::balances
	BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34* ___balances_0;

public:
	inline static int32_t get_offset_of_balances_0() { return static_cast<int32_t>(offsetof(WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19, ___balances_0)); }
	inline BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34* get_balances_0() const { return ___balances_0; }
	inline BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34** get_address_of_balances_0() { return &___balances_0; }
	inline void set_balances_0(BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34* value)
	{
		___balances_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___balances_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GameFoundation.Data.WalletData
struct WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19_marshaled_pinvoke
{
	BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89_marshaled_pinvoke* ___balances_0;
};
// Native definition for COM marshalling of UnityEngine.GameFoundation.Data.WalletData
struct WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19_marshaled_com
{
	BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89_marshaled_com* ___balances_0;
};

// UnityEngine.GameFoundation.DefaultLayers.Persistence.LocalPersistence
struct  LocalPersistence_t8240944F90C8B135BE0A433BD3E3D13047469133  : public BaseDataPersistence_t6314CED3A904BB34596A984FFFB67ABBC205AB92
{
public:
	// System.String UnityEngine.GameFoundation.DefaultLayers.Persistence.LocalPersistence::<filename>k__BackingField
	String_t* ___U3CfilenameU3Ek__BackingField_1;
	// System.String UnityEngine.GameFoundation.DefaultLayers.Persistence.LocalPersistence::<fullpath>k__BackingField
	String_t* ___U3CfullpathU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CfilenameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LocalPersistence_t8240944F90C8B135BE0A433BD3E3D13047469133, ___U3CfilenameU3Ek__BackingField_1)); }
	inline String_t* get_U3CfilenameU3Ek__BackingField_1() const { return ___U3CfilenameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CfilenameU3Ek__BackingField_1() { return &___U3CfilenameU3Ek__BackingField_1; }
	inline void set_U3CfilenameU3Ek__BackingField_1(String_t* value)
	{
		___U3CfilenameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfilenameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfullpathU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LocalPersistence_t8240944F90C8B135BE0A433BD3E3D13047469133, ___U3CfullpathU3Ek__BackingField_2)); }
	inline String_t* get_U3CfullpathU3Ek__BackingField_2() const { return ___U3CfullpathU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CfullpathU3Ek__BackingField_2() { return &___U3CfullpathU3Ek__BackingField_2; }
	inline void set_U3CfullpathU3Ek__BackingField_2(String_t* value)
	{
		___U3CfullpathU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfullpathU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer
struct  PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489  : public BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878
{
public:
	// UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataPersistence UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer::<persistence>k__BackingField
	RuntimeObject* ___U3CpersistenceU3Ek__BackingField_10;
	// UnityEngine.Promise.PromiseGenerator UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer::m_PromiseGenerator
	PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C * ___m_PromiseGenerator_11;

public:
	inline static int32_t get_offset_of_U3CpersistenceU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489, ___U3CpersistenceU3Ek__BackingField_10)); }
	inline RuntimeObject* get_U3CpersistenceU3Ek__BackingField_10() const { return ___U3CpersistenceU3Ek__BackingField_10; }
	inline RuntimeObject** get_address_of_U3CpersistenceU3Ek__BackingField_10() { return &___U3CpersistenceU3Ek__BackingField_10; }
	inline void set_U3CpersistenceU3Ek__BackingField_10(RuntimeObject* value)
	{
		___U3CpersistenceU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpersistenceU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_PromiseGenerator_11() { return static_cast<int32_t>(offsetof(PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489, ___m_PromiseGenerator_11)); }
	inline PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C * get_m_PromiseGenerator_11() const { return ___m_PromiseGenerator_11; }
	inline PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C ** get_address_of_m_PromiseGenerator_11() { return &___m_PromiseGenerator_11; }
	inline void set_m_PromiseGenerator_11(PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C * value)
	{
		___m_PromiseGenerator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PromiseGenerator_11), (void*)value);
	}
};


// UnityEngine.Promise.Completer
struct  Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 
{
public:
	// System.Int64 UnityEngine.Promise.Completer::m_Token
	int64_t ___m_Token_0;
	// UnityEngine.Promise.Promise UnityEngine.Promise.Completer::m_Promise
	Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * ___m_Promise_1;

public:
	inline static int32_t get_offset_of_m_Token_0() { return static_cast<int32_t>(offsetof(Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632, ___m_Token_0)); }
	inline int64_t get_m_Token_0() const { return ___m_Token_0; }
	inline int64_t* get_address_of_m_Token_0() { return &___m_Token_0; }
	inline void set_m_Token_0(int64_t value)
	{
		___m_Token_0 = value;
	}

	inline static int32_t get_offset_of_m_Promise_1() { return static_cast<int32_t>(offsetof(Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632, ___m_Promise_1)); }
	inline Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * get_m_Promise_1() const { return ___m_Promise_1; }
	inline Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E ** get_address_of_m_Promise_1() { return &___m_Promise_1; }
	inline void set_m_Promise_1(Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * value)
	{
		___m_Promise_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Promise_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Promise.Completer
struct Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632_marshaled_pinvoke
{
	int64_t ___m_Token_0;
	Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * ___m_Promise_1;
};
// Native definition for COM marshalling of UnityEngine.Promise.Completer
struct Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632_marshaled_com
{
	int64_t ___m_Token_0;
	Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * ___m_Promise_1;
};

// UnityEngine.Promise.Completer`1<System.Int64>
struct  Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF 
{
public:
	// System.Int64 UnityEngine.Promise.Completer`1::m_Token
	int64_t ___m_Token_0;
	// UnityEngine.Promise.Promise`1<TResult> UnityEngine.Promise.Completer`1::m_Promise
	Promise_1_tD4AB94B514C00393BCAD5EB70BD185F717954A21 * ___m_Promise_1;

public:
	inline static int32_t get_offset_of_m_Token_0() { return static_cast<int32_t>(offsetof(Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF, ___m_Token_0)); }
	inline int64_t get_m_Token_0() const { return ___m_Token_0; }
	inline int64_t* get_address_of_m_Token_0() { return &___m_Token_0; }
	inline void set_m_Token_0(int64_t value)
	{
		___m_Token_0 = value;
	}

	inline static int32_t get_offset_of_m_Promise_1() { return static_cast<int32_t>(offsetof(Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF, ___m_Promise_1)); }
	inline Promise_1_tD4AB94B514C00393BCAD5EB70BD185F717954A21 * get_m_Promise_1() const { return ___m_Promise_1; }
	inline Promise_1_tD4AB94B514C00393BCAD5EB70BD185F717954A21 ** get_address_of_m_Promise_1() { return &___m_Promise_1; }
	inline void set_m_Promise_1(Promise_1_tD4AB94B514C00393BCAD5EB70BD185F717954A21 * value)
	{
		___m_Promise_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Promise_1), (void*)value);
	}
};


// UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.TransactionExchangeData>
struct  Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423 
{
public:
	// System.Int64 UnityEngine.Promise.Completer`1::m_Token
	int64_t ___m_Token_0;
	// UnityEngine.Promise.Promise`1<TResult> UnityEngine.Promise.Completer`1::m_Promise
	Promise_1_t5FB12D0610E5A5B581D46FF7E671EEE06E139CDA * ___m_Promise_1;

public:
	inline static int32_t get_offset_of_m_Token_0() { return static_cast<int32_t>(offsetof(Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423, ___m_Token_0)); }
	inline int64_t get_m_Token_0() const { return ___m_Token_0; }
	inline int64_t* get_address_of_m_Token_0() { return &___m_Token_0; }
	inline void set_m_Token_0(int64_t value)
	{
		___m_Token_0 = value;
	}

	inline static int32_t get_offset_of_m_Promise_1() { return static_cast<int32_t>(offsetof(Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423, ___m_Promise_1)); }
	inline Promise_1_t5FB12D0610E5A5B581D46FF7E671EEE06E139CDA * get_m_Promise_1() const { return ___m_Promise_1; }
	inline Promise_1_t5FB12D0610E5A5B581D46FF7E671EEE06E139CDA ** get_address_of_m_Promise_1() { return &___m_Promise_1; }
	inline void set_m_Promise_1(Promise_1_t5FB12D0610E5A5B581D46FF7E671EEE06E139CDA * value)
	{
		___m_Promise_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Promise_1), (void*)value);
	}
};


// UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.VirtualTransactionExchangeData>
struct  Completer_1_t5A0C8B591E66EA24FBD4B87E915D7E37AFC1CA58 
{
public:
	// System.Int64 UnityEngine.Promise.Completer`1::m_Token
	int64_t ___m_Token_0;
	// UnityEngine.Promise.Promise`1<TResult> UnityEngine.Promise.Completer`1::m_Promise
	Promise_1_t3037CDDCD1F35276159ADA3F0F6741D31CFB8CA9 * ___m_Promise_1;

public:
	inline static int32_t get_offset_of_m_Token_0() { return static_cast<int32_t>(offsetof(Completer_1_t5A0C8B591E66EA24FBD4B87E915D7E37AFC1CA58, ___m_Token_0)); }
	inline int64_t get_m_Token_0() const { return ___m_Token_0; }
	inline int64_t* get_address_of_m_Token_0() { return &___m_Token_0; }
	inline void set_m_Token_0(int64_t value)
	{
		___m_Token_0 = value;
	}

	inline static int32_t get_offset_of_m_Promise_1() { return static_cast<int32_t>(offsetof(Completer_1_t5A0C8B591E66EA24FBD4B87E915D7E37AFC1CA58, ___m_Promise_1)); }
	inline Promise_1_t3037CDDCD1F35276159ADA3F0F6741D31CFB8CA9 * get_m_Promise_1() const { return ___m_Promise_1; }
	inline Promise_1_t3037CDDCD1F35276159ADA3F0F6741D31CFB8CA9 ** get_address_of_m_Promise_1() { return &___m_Promise_1; }
	inline void set_m_Promise_1(Promise_1_t3037CDDCD1F35276159ADA3F0F6741D31CFB8CA9 * value)
	{
		___m_Promise_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Promise_1), (void*)value);
	}
};


// UnityEngine.Promise.Deferred
struct  Deferred_t9E66F9D4FE2384EE0876310669A738E26D88EA94 
{
public:
	// System.Int64 UnityEngine.Promise.Deferred::m_Token
	int64_t ___m_Token_0;
	// UnityEngine.Promise.Promise UnityEngine.Promise.Deferred::m_Promise
	Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * ___m_Promise_1;

public:
	inline static int32_t get_offset_of_m_Token_0() { return static_cast<int32_t>(offsetof(Deferred_t9E66F9D4FE2384EE0876310669A738E26D88EA94, ___m_Token_0)); }
	inline int64_t get_m_Token_0() const { return ___m_Token_0; }
	inline int64_t* get_address_of_m_Token_0() { return &___m_Token_0; }
	inline void set_m_Token_0(int64_t value)
	{
		___m_Token_0 = value;
	}

	inline static int32_t get_offset_of_m_Promise_1() { return static_cast<int32_t>(offsetof(Deferred_t9E66F9D4FE2384EE0876310669A738E26D88EA94, ___m_Promise_1)); }
	inline Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * get_m_Promise_1() const { return ___m_Promise_1; }
	inline Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E ** get_address_of_m_Promise_1() { return &___m_Promise_1; }
	inline void set_m_Promise_1(Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * value)
	{
		___m_Promise_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Promise_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Promise.Deferred
struct Deferred_t9E66F9D4FE2384EE0876310669A738E26D88EA94_marshaled_pinvoke
{
	int64_t ___m_Token_0;
	Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * ___m_Promise_1;
};
// Native definition for COM marshalling of UnityEngine.Promise.Deferred
struct Deferred_t9E66F9D4FE2384EE0876310669A738E26D88EA94_marshaled_com
{
	int64_t ___m_Token_0;
	Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * ___m_Promise_1;
};

// UnityEngine.Promise.Rejectable
struct  Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9 
{
public:
	// System.Int64 UnityEngine.Promise.Rejectable::m_Token
	int64_t ___m_Token_0;
	// UnityEngine.Promise.Promise UnityEngine.Promise.Rejectable::m_Promise
	Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * ___m_Promise_1;

public:
	inline static int32_t get_offset_of_m_Token_0() { return static_cast<int32_t>(offsetof(Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9, ___m_Token_0)); }
	inline int64_t get_m_Token_0() const { return ___m_Token_0; }
	inline int64_t* get_address_of_m_Token_0() { return &___m_Token_0; }
	inline void set_m_Token_0(int64_t value)
	{
		___m_Token_0 = value;
	}

	inline static int32_t get_offset_of_m_Promise_1() { return static_cast<int32_t>(offsetof(Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9, ___m_Promise_1)); }
	inline Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * get_m_Promise_1() const { return ___m_Promise_1; }
	inline Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E ** get_address_of_m_Promise_1() { return &___m_Promise_1; }
	inline void set_m_Promise_1(Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * value)
	{
		___m_Promise_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Promise_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Promise.Rejectable
struct Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9_marshaled_pinvoke
{
	int64_t ___m_Token_0;
	Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * ___m_Promise_1;
};
// Native definition for COM marshalling of UnityEngine.Promise.Rejectable
struct Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9_marshaled_com
{
	int64_t ___m_Token_0;
	Promise_tCE19A76F4CB5381E34309209D73A4E2F64AC097E * ___m_Promise_1;
};

// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.Int64>
struct  Enumerator_t8BE931B9A2DEECD2A7AB98E695A9EF38672D8442 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_tA4C40E906DE6517EEA62C7FEB1A70D09BD7EC92B * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t8BE931B9A2DEECD2A7AB98E695A9EF38672D8442, ___dictionary_0)); }
	inline Dictionary_2_tA4C40E906DE6517EEA62C7FEB1A70D09BD7EC92B * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tA4C40E906DE6517EEA62C7FEB1A70D09BD7EC92B ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tA4C40E906DE6517EEA62C7FEB1A70D09BD7EC92B * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t8BE931B9A2DEECD2A7AB98E695A9EF38672D8442, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t8BE931B9A2DEECD2A7AB98E695A9EF38672D8442, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8BE931B9A2DEECD2A7AB98E695A9EF38672D8442, ___current_3)); }
	inline KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t8BE931B9A2DEECD2A7AB98E695A9EF38672D8442, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.String,System.Int64>
struct  Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274, ___dictionary_0)); }
	inline Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274, ___current_3)); }
	inline KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>
struct  Enumerator_t3AC3965C6BFCD0E63A7EE4F079227CE2C3A7DFAB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::dictionary
	Dictionary_2_t3C862AAE7817B51BCEE5BBD5418AACFCC1D6F673 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::currentValue
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3AC3965C6BFCD0E63A7EE4F079227CE2C3A7DFAB, ___dictionary_0)); }
	inline Dictionary_2_t3C862AAE7817B51BCEE5BBD5418AACFCC1D6F673 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3C862AAE7817B51BCEE5BBD5418AACFCC1D6F673 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3C862AAE7817B51BCEE5BBD5418AACFCC1D6F673 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3AC3965C6BFCD0E63A7EE4F079227CE2C3A7DFAB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3AC3965C6BFCD0E63A7EE4F079227CE2C3A7DFAB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t3AC3965C6BFCD0E63A7EE4F079227CE2C3A7DFAB, ___currentValue_3)); }
	inline InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  get_currentValue_3() const { return ___currentValue_3; }
	inline InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 * get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->___definitionKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->___id_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->___properties_2), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>
struct  Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::dictionary
	Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::currentValue
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F, ___dictionary_0)); }
	inline Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F, ___currentValue_3)); }
	inline InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  get_currentValue_3() const { return ___currentValue_3; }
	inline InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 * get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->___definitionKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->___id_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->___properties_2), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.GameFoundation.Data.InventoryItemData>
struct  Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649, ___list_0)); }
	inline List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * get_list_0() const { return ___list_0; }
	inline List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649, ___current_3)); }
	inline InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  get_current_3() const { return ___current_3; }
	inline InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___definitionKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___id_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___properties_2), (void*)NULL);
		#endif
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct  FileAttributes_t224B42F6F82954C94B51791913857C005C559876 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t224B42F6F82954C94B51791913857C005C559876, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamReader
struct  StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E  : public TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___stream_5)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_5() const { return ___stream_5; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___encoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___decoder_7)); }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___byteBuffer_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charBuffer_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____preamble_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_10), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____asyncReadTask_20)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_20), (void*)value);
	}
};

struct StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_StaticFields, ___Null_4)); }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * get_Null_4() const { return ___Null_4; }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// System.IO.StreamWriter
struct  StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E  : public TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_12;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding_13;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * ___encoder_14;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___byteBuffer_15;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___charBuffer_16;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_17;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_18;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_19;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_20;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ____asyncWriteTask_22;

public:
	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___stream_12)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_12() const { return ___stream_12; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_12), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___encoding_13)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_encoding_13() const { return ___encoding_13; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_13), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_14() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___encoder_14)); }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * get_encoder_14() const { return ___encoder_14; }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 ** get_address_of_encoder_14() { return &___encoder_14; }
	inline void set_encoder_14(Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * value)
	{
		___encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_15() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___byteBuffer_15)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_byteBuffer_15() const { return ___byteBuffer_15; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_byteBuffer_15() { return &___byteBuffer_15; }
	inline void set_byteBuffer_15(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___byteBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_16() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___charBuffer_16)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_charBuffer_16() const { return ___charBuffer_16; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_charBuffer_16() { return &___charBuffer_16; }
	inline void set_charBuffer_16(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___charBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_17() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___charPos_17)); }
	inline int32_t get_charPos_17() const { return ___charPos_17; }
	inline int32_t* get_address_of_charPos_17() { return &___charPos_17; }
	inline void set_charPos_17(int32_t value)
	{
		___charPos_17 = value;
	}

	inline static int32_t get_offset_of_charLen_18() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___charLen_18)); }
	inline int32_t get_charLen_18() const { return ___charLen_18; }
	inline int32_t* get_address_of_charLen_18() { return &___charLen_18; }
	inline void set_charLen_18(int32_t value)
	{
		___charLen_18 = value;
	}

	inline static int32_t get_offset_of_autoFlush_19() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___autoFlush_19)); }
	inline bool get_autoFlush_19() const { return ___autoFlush_19; }
	inline bool* get_address_of_autoFlush_19() { return &___autoFlush_19; }
	inline void set_autoFlush_19(bool value)
	{
		___autoFlush_19 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_20() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___haveWrittenPreamble_20)); }
	inline bool get_haveWrittenPreamble_20() const { return ___haveWrittenPreamble_20; }
	inline bool* get_address_of_haveWrittenPreamble_20() { return &___haveWrittenPreamble_20; }
	inline void set_haveWrittenPreamble_20(bool value)
	{
		___haveWrittenPreamble_20 = value;
	}

	inline static int32_t get_offset_of_closable_21() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___closable_21)); }
	inline bool get_closable_21() const { return ___closable_21; }
	inline bool* get_address_of_closable_21() { return &___closable_21; }
	inline void set_closable_21(bool value)
	{
		___closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_22() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ____asyncWriteTask_22)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get__asyncWriteTask_22() const { return ____asyncWriteTask_22; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of__asyncWriteTask_22() { return &____asyncWriteTask_22; }
	inline void set__asyncWriteTask_22(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		____asyncWriteTask_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_22), (void*)value);
	}
};

struct StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * ___Null_11;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____UTF8NoBOM_23;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_StaticFields, ___Null_11)); }
	inline StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_11), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_23() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_StaticFields, ____UTF8NoBOM_23)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__UTF8NoBOM_23() const { return ____UTF8NoBOM_23; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__UTF8NoBOM_23() { return &____UTF8NoBOM_23; }
	inline void set__UTF8NoBOM_23(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____UTF8NoBOM_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_23), (void*)value);
	}
};


// UnityEngine.GameFoundation.CurrencyType
struct  CurrencyType_t25E0FC16176C102928163C2A12D45366F14E19C4 
{
public:
	// System.Int32 UnityEngine.GameFoundation.CurrencyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CurrencyType_t25E0FC16176C102928163C2A12D45366F14E19C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GameFoundation.Data.GameFoundationData
struct  GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6 
{
public:
	// UnityEngine.GameFoundation.Data.InventoryManagerData UnityEngine.GameFoundation.Data.GameFoundationData::inventoryManagerData
	InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  ___inventoryManagerData_0;
	// UnityEngine.GameFoundation.Data.WalletData UnityEngine.GameFoundation.Data.GameFoundationData::walletData
	WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  ___walletData_1;
	// System.Int32 UnityEngine.GameFoundation.Data.GameFoundationData::version
	int32_t ___version_2;

public:
	inline static int32_t get_offset_of_inventoryManagerData_0() { return static_cast<int32_t>(offsetof(GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6, ___inventoryManagerData_0)); }
	inline InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  get_inventoryManagerData_0() const { return ___inventoryManagerData_0; }
	inline InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5 * get_address_of_inventoryManagerData_0() { return &___inventoryManagerData_0; }
	inline void set_inventoryManagerData_0(InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  value)
	{
		___inventoryManagerData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inventoryManagerData_0))->___items_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_walletData_1() { return static_cast<int32_t>(offsetof(GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6, ___walletData_1)); }
	inline WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  get_walletData_1() const { return ___walletData_1; }
	inline WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19 * get_address_of_walletData_1() { return &___walletData_1; }
	inline void set_walletData_1(WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  value)
	{
		___walletData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___walletData_1))->___balances_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GameFoundation.Data.GameFoundationData
struct GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6_marshaled_pinvoke
{
	InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5_marshaled_pinvoke ___inventoryManagerData_0;
	WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19_marshaled_pinvoke ___walletData_1;
	int32_t ___version_2;
};
// Native definition for COM marshalling of UnityEngine.GameFoundation.Data.GameFoundationData
struct GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6_marshaled_com
{
	InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5_marshaled_com ___inventoryManagerData_0;
	WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19_marshaled_com ___walletData_1;
	int32_t ___version_2;
};

// UnityEngine.GameFoundation.Data.VirtualTransactionExchangeData
struct  VirtualTransactionExchangeData_tB70E38408B081AA5E1F5A80AF37C128CD8C23060 
{
public:
	// UnityEngine.GameFoundation.Data.TransactionExchangeData UnityEngine.GameFoundation.Data.VirtualTransactionExchangeData::cost
	TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  ___cost_0;
	// UnityEngine.GameFoundation.Data.TransactionExchangeData UnityEngine.GameFoundation.Data.VirtualTransactionExchangeData::rewards
	TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  ___rewards_1;

public:
	inline static int32_t get_offset_of_cost_0() { return static_cast<int32_t>(offsetof(VirtualTransactionExchangeData_tB70E38408B081AA5E1F5A80AF37C128CD8C23060, ___cost_0)); }
	inline TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  get_cost_0() const { return ___cost_0; }
	inline TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89 * get_address_of_cost_0() { return &___cost_0; }
	inline void set_cost_0(TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  value)
	{
		___cost_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cost_0))->___currencies_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___cost_0))->___items_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_rewards_1() { return static_cast<int32_t>(offsetof(VirtualTransactionExchangeData_tB70E38408B081AA5E1F5A80AF37C128CD8C23060, ___rewards_1)); }
	inline TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  get_rewards_1() const { return ___rewards_1; }
	inline TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89 * get_address_of_rewards_1() { return &___rewards_1; }
	inline void set_rewards_1(TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  value)
	{
		___rewards_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rewards_1))->___currencies_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___rewards_1))->___items_1), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GameFoundation.Data.VirtualTransactionExchangeData
struct VirtualTransactionExchangeData_tB70E38408B081AA5E1F5A80AF37C128CD8C23060_marshaled_pinvoke
{
	TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89_marshaled_pinvoke ___cost_0;
	TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89_marshaled_pinvoke ___rewards_1;
};
// Native definition for COM marshalling of UnityEngine.GameFoundation.Data.VirtualTransactionExchangeData
struct VirtualTransactionExchangeData_tB70E38408B081AA5E1F5A80AF37C128CD8C23060_marshaled_com
{
	TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89_marshaled_com ___cost_0;
	TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89_marshaled_com ___rewards_1;
};

// UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer_<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F  : public RuntimeObject
{
public:
	// UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer_<>c__DisplayClass5_0::<>4__this
	PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * ___U3CU3E4__this_0;
	// UnityEngine.Promise.Completer UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer_<>c__DisplayClass5_0::completer
	Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  ___completer_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F, ___U3CU3E4__this_0)); }
	inline PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_completer_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F, ___completer_1)); }
	inline Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  get_completer_1() const { return ___completer_1; }
	inline Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 * get_address_of_completer_1() { return &___completer_1; }
	inline void set_completer_1(Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  value)
	{
		___completer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___completer_1))->___m_Promise_1), (void*)NULL);
	}
};


// UnityEngine.GameFoundation.GameFoundation_InitializationStatus
struct  InitializationStatus_t89A932BEF085488BAE3C5D53431E5474FBC3620B 
{
public:
	// System.Int32 UnityEngine.GameFoundation.GameFoundation_InitializationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializationStatus_t89A932BEF085488BAE3C5D53431E5474FBC3620B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GameFoundation.PropertyType
struct  PropertyType_tF44BFB73A256E7B4D52708BBC15907C44689158D 
{
public:
	// System.Int32 UnityEngine.GameFoundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tF44BFB73A256E7B4D52708BBC15907C44689158D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.AggregateException
struct  AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * ___m_innerExceptions_17;

public:
	inline static int32_t get_offset_of_m_innerExceptions_17() { return static_cast<int32_t>(offsetof(AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E, ___m_innerExceptions_17)); }
	inline ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * get_m_innerExceptions_17() const { return ___m_innerExceptions_17; }
	inline ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 ** get_address_of_m_innerExceptions_17() { return &___m_innerExceptions_17; }
	inline void set_m_innerExceptions_17(ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * value)
	{
		___m_innerExceptions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_innerExceptions_17), (void*)value);
	}
};


// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_8)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// System.IO.MonoIOStat
struct  MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.GameFoundation.Currency
struct  Currency_tD2C5A9B9D9C96D7A0258F29FF5EBD8AA1F1BA0B4  : public CatalogItem_tB6576EE27719FF9338376387A887CEA5F09F9652
{
public:
	// UnityEngine.GameFoundation.CurrencyType UnityEngine.GameFoundation.Currency::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_5;
	// System.Int64 UnityEngine.GameFoundation.Currency::<maximumBalance>k__BackingField
	int64_t ___U3CmaximumBalanceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Currency_tD2C5A9B9D9C96D7A0258F29FF5EBD8AA1F1BA0B4, ___U3CtypeU3Ek__BackingField_5)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_5() const { return ___U3CtypeU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_5() { return &___U3CtypeU3Ek__BackingField_5; }
	inline void set_U3CtypeU3Ek__BackingField_5(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CmaximumBalanceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Currency_tD2C5A9B9D9C96D7A0258F29FF5EBD8AA1F1BA0B4, ___U3CmaximumBalanceU3Ek__BackingField_6)); }
	inline int64_t get_U3CmaximumBalanceU3Ek__BackingField_6() const { return ___U3CmaximumBalanceU3Ek__BackingField_6; }
	inline int64_t* get_address_of_U3CmaximumBalanceU3Ek__BackingField_6() { return &___U3CmaximumBalanceU3Ek__BackingField_6; }
	inline void set_U3CmaximumBalanceU3Ek__BackingField_6(int64_t value)
	{
		___U3CmaximumBalanceU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.GameFoundation.Exceptions.CatalogItemNotFoundException
struct  CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05  : public Exception_t
{
public:
	// System.String UnityEngine.GameFoundation.Exceptions.CatalogItemNotFoundException::itemKey
	String_t* ___itemKey_17;

public:
	inline static int32_t get_offset_of_itemKey_17() { return static_cast<int32_t>(offsetof(CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05, ___itemKey_17)); }
	inline String_t* get_itemKey_17() const { return ___itemKey_17; }
	inline String_t** get_address_of_itemKey_17() { return &___itemKey_17; }
	inline void set_itemKey_17(String_t* value)
	{
		___itemKey_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemKey_17), (void*)value);
	}
};


// UnityEngine.GameFoundation.Exceptions.InventoryItemNotFoundException
struct  InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C  : public Exception_t
{
public:
	// System.String UnityEngine.GameFoundation.Exceptions.InventoryItemNotFoundException::itemId
	String_t* ___itemId_17;

public:
	inline static int32_t get_offset_of_itemId_17() { return static_cast<int32_t>(offsetof(InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C, ___itemId_17)); }
	inline String_t* get_itemId_17() const { return ___itemId_17; }
	inline String_t** get_address_of_itemId_17() { return &___itemId_17; }
	inline void set_itemId_17(String_t* value)
	{
		___itemId_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemId_17), (void*)value);
	}
};


// UnityEngine.GameFoundation.Exceptions.NotEnoughBalanceException
struct  NotEnoughBalanceException_t8725064370F4B7239E3923981D1699020E95D968  : public Exception_t
{
public:
	// System.String UnityEngine.GameFoundation.Exceptions.NotEnoughBalanceException::currencyKey
	String_t* ___currencyKey_17;
	// System.Int64 UnityEngine.GameFoundation.Exceptions.NotEnoughBalanceException::expectedBalance
	int64_t ___expectedBalance_18;
	// System.Int64 UnityEngine.GameFoundation.Exceptions.NotEnoughBalanceException::actualBalance
	int64_t ___actualBalance_19;

public:
	inline static int32_t get_offset_of_currencyKey_17() { return static_cast<int32_t>(offsetof(NotEnoughBalanceException_t8725064370F4B7239E3923981D1699020E95D968, ___currencyKey_17)); }
	inline String_t* get_currencyKey_17() const { return ___currencyKey_17; }
	inline String_t** get_address_of_currencyKey_17() { return &___currencyKey_17; }
	inline void set_currencyKey_17(String_t* value)
	{
		___currencyKey_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyKey_17), (void*)value);
	}

	inline static int32_t get_offset_of_expectedBalance_18() { return static_cast<int32_t>(offsetof(NotEnoughBalanceException_t8725064370F4B7239E3923981D1699020E95D968, ___expectedBalance_18)); }
	inline int64_t get_expectedBalance_18() const { return ___expectedBalance_18; }
	inline int64_t* get_address_of_expectedBalance_18() { return &___expectedBalance_18; }
	inline void set_expectedBalance_18(int64_t value)
	{
		___expectedBalance_18 = value;
	}

	inline static int32_t get_offset_of_actualBalance_19() { return static_cast<int32_t>(offsetof(NotEnoughBalanceException_t8725064370F4B7239E3923981D1699020E95D968, ___actualBalance_19)); }
	inline int64_t get_actualBalance_19() const { return ___actualBalance_19; }
	inline int64_t* get_address_of_actualBalance_19() { return &___actualBalance_19; }
	inline void set_actualBalance_19(int64_t value)
	{
		___actualBalance_19 = value;
	}
};


// UnityEngine.GameFoundation.Exceptions.NotEnoughItemOfDefinitionException
struct  NotEnoughItemOfDefinitionException_t58B3EB9CF7CE086694A394BCBE0F69B73FBBD567  : public Exception_t
{
public:
	// System.String UnityEngine.GameFoundation.Exceptions.NotEnoughItemOfDefinitionException::definitionKey
	String_t* ___definitionKey_17;
	// System.Int64 UnityEngine.GameFoundation.Exceptions.NotEnoughItemOfDefinitionException::expectedCount
	int64_t ___expectedCount_18;
	// System.Int64 UnityEngine.GameFoundation.Exceptions.NotEnoughItemOfDefinitionException::actualCount
	int64_t ___actualCount_19;

public:
	inline static int32_t get_offset_of_definitionKey_17() { return static_cast<int32_t>(offsetof(NotEnoughItemOfDefinitionException_t58B3EB9CF7CE086694A394BCBE0F69B73FBBD567, ___definitionKey_17)); }
	inline String_t* get_definitionKey_17() const { return ___definitionKey_17; }
	inline String_t** get_address_of_definitionKey_17() { return &___definitionKey_17; }
	inline void set_definitionKey_17(String_t* value)
	{
		___definitionKey_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___definitionKey_17), (void*)value);
	}

	inline static int32_t get_offset_of_expectedCount_18() { return static_cast<int32_t>(offsetof(NotEnoughItemOfDefinitionException_t58B3EB9CF7CE086694A394BCBE0F69B73FBBD567, ___expectedCount_18)); }
	inline int64_t get_expectedCount_18() const { return ___expectedCount_18; }
	inline int64_t* get_address_of_expectedCount_18() { return &___expectedCount_18; }
	inline void set_expectedCount_18(int64_t value)
	{
		___expectedCount_18 = value;
	}

	inline static int32_t get_offset_of_actualCount_19() { return static_cast<int32_t>(offsetof(NotEnoughItemOfDefinitionException_t58B3EB9CF7CE086694A394BCBE0F69B73FBBD567, ___actualCount_19)); }
	inline int64_t get_actualCount_19() const { return ___actualCount_19; }
	inline int64_t* get_address_of_actualCount_19() { return &___actualCount_19; }
	inline void set_actualCount_19(int64_t value)
	{
		___actualCount_19 = value;
	}
};


// UnityEngine.GameFoundation.Exceptions.PropertyInvalidCastException
struct  PropertyInvalidCastException_tBFCD1DB7F89F6CA3AE59C2C52995F26E2C66EAA2  : public Exception_t
{
public:
	// System.String UnityEngine.GameFoundation.Exceptions.PropertyInvalidCastException::<propertyKey>k__BackingField
	String_t* ___U3CpropertyKeyU3Ek__BackingField_17;
	// UnityEngine.GameFoundation.PropertyType UnityEngine.GameFoundation.Exceptions.PropertyInvalidCastException::<expectedPropertyType>k__BackingField
	int32_t ___U3CexpectedPropertyTypeU3Ek__BackingField_18;
	// UnityEngine.GameFoundation.PropertyType UnityEngine.GameFoundation.Exceptions.PropertyInvalidCastException::<givenPropertyType>k__BackingField
	int32_t ___U3CgivenPropertyTypeU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CpropertyKeyU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PropertyInvalidCastException_tBFCD1DB7F89F6CA3AE59C2C52995F26E2C66EAA2, ___U3CpropertyKeyU3Ek__BackingField_17)); }
	inline String_t* get_U3CpropertyKeyU3Ek__BackingField_17() const { return ___U3CpropertyKeyU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CpropertyKeyU3Ek__BackingField_17() { return &___U3CpropertyKeyU3Ek__BackingField_17; }
	inline void set_U3CpropertyKeyU3Ek__BackingField_17(String_t* value)
	{
		___U3CpropertyKeyU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpropertyKeyU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexpectedPropertyTypeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PropertyInvalidCastException_tBFCD1DB7F89F6CA3AE59C2C52995F26E2C66EAA2, ___U3CexpectedPropertyTypeU3Ek__BackingField_18)); }
	inline int32_t get_U3CexpectedPropertyTypeU3Ek__BackingField_18() const { return ___U3CexpectedPropertyTypeU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CexpectedPropertyTypeU3Ek__BackingField_18() { return &___U3CexpectedPropertyTypeU3Ek__BackingField_18; }
	inline void set_U3CexpectedPropertyTypeU3Ek__BackingField_18(int32_t value)
	{
		___U3CexpectedPropertyTypeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CgivenPropertyTypeU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PropertyInvalidCastException_tBFCD1DB7F89F6CA3AE59C2C52995F26E2C66EAA2, ___U3CgivenPropertyTypeU3Ek__BackingField_19)); }
	inline int32_t get_U3CgivenPropertyTypeU3Ek__BackingField_19() const { return ___U3CgivenPropertyTypeU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CgivenPropertyTypeU3Ek__BackingField_19() { return &___U3CgivenPropertyTypeU3Ek__BackingField_19; }
	inline void set_U3CgivenPropertyTypeU3Ek__BackingField_19(int32_t value)
	{
		___U3CgivenPropertyTypeU3Ek__BackingField_19 = value;
	}
};


// UnityEngine.GameFoundation.Exceptions.PropertyNotFoundException
struct  PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7  : public Exception_t
{
public:
	// System.String UnityEngine.GameFoundation.Exceptions.PropertyNotFoundException::itemId
	String_t* ___itemId_17;
	// System.String UnityEngine.GameFoundation.Exceptions.PropertyNotFoundException::propertyKey
	String_t* ___propertyKey_18;

public:
	inline static int32_t get_offset_of_itemId_17() { return static_cast<int32_t>(offsetof(PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7, ___itemId_17)); }
	inline String_t* get_itemId_17() const { return ___itemId_17; }
	inline String_t** get_address_of_itemId_17() { return &___itemId_17; }
	inline void set_itemId_17(String_t* value)
	{
		___itemId_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemId_17), (void*)value);
	}

	inline static int32_t get_offset_of_propertyKey_18() { return static_cast<int32_t>(offsetof(PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7, ___propertyKey_18)); }
	inline String_t* get_propertyKey_18() const { return ___propertyKey_18; }
	inline String_t** get_address_of_propertyKey_18() { return &___propertyKey_18; }
	inline void set_propertyKey_18(String_t* value)
	{
		___propertyKey_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyKey_18), (void*)value);
	}
};


// UnityEngine.GameFoundation.GameFoundation
struct  GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13  : public RuntimeObject
{
public:

public:
};

struct GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_StaticFields
{
public:
	// System.Action UnityEngine.GameFoundation.GameFoundation::initialized
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___initialized_0;
	// System.Action`1<System.Exception> UnityEngine.GameFoundation.GameFoundation::initializationFailed
	Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * ___initializationFailed_1;
	// System.Action UnityEngine.GameFoundation.GameFoundation::uninitialized
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___uninitialized_2;
	// System.String UnityEngine.GameFoundation.GameFoundation::<currentVersion>k__BackingField
	String_t* ___U3CcurrentVersionU3Ek__BackingField_3;
	// UnityEngine.GameFoundation.GameFoundation_InitializationStatus UnityEngine.GameFoundation.GameFoundation::s_InitializationStatus
	int32_t ___s_InitializationStatus_4;
	// UnityEngine.GameFoundation.CatalogManager UnityEngine.GameFoundation.GameFoundation::<catalogs>k__BackingField
	CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E * ___U3CcatalogsU3Ek__BackingField_5;
	// UnityEngine.Promise.PromiseGenerator UnityEngine.GameFoundation.GameFoundation::s_PromiseGenerator
	PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C * ___s_PromiseGenerator_6;
	// UnityEngine.GameFoundation.IDataAccessLayer UnityEngine.GameFoundation.GameFoundation::<dataLayer>k__BackingField
	RuntimeObject* ___U3CdataLayerU3Ek__BackingField_7;
	// UnityEngine.GameFoundation.GameFoundationUpdater UnityEngine.GameFoundation.GameFoundation::updater
	GameFoundationUpdater_t1ECF74D9C7EC55BC52F1E66475113F05E2D4D380 * ___updater_8;

public:
	inline static int32_t get_offset_of_initialized_0() { return static_cast<int32_t>(offsetof(GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_StaticFields, ___initialized_0)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_initialized_0() const { return ___initialized_0; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_initialized_0() { return &___initialized_0; }
	inline void set_initialized_0(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___initialized_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initialized_0), (void*)value);
	}

	inline static int32_t get_offset_of_initializationFailed_1() { return static_cast<int32_t>(offsetof(GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_StaticFields, ___initializationFailed_1)); }
	inline Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * get_initializationFailed_1() const { return ___initializationFailed_1; }
	inline Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 ** get_address_of_initializationFailed_1() { return &___initializationFailed_1; }
	inline void set_initializationFailed_1(Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * value)
	{
		___initializationFailed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initializationFailed_1), (void*)value);
	}

	inline static int32_t get_offset_of_uninitialized_2() { return static_cast<int32_t>(offsetof(GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_StaticFields, ___uninitialized_2)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_uninitialized_2() const { return ___uninitialized_2; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_uninitialized_2() { return &___uninitialized_2; }
	inline void set_uninitialized_2(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___uninitialized_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uninitialized_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentVersionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_StaticFields, ___U3CcurrentVersionU3Ek__BackingField_3)); }
	inline String_t* get_U3CcurrentVersionU3Ek__BackingField_3() const { return ___U3CcurrentVersionU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CcurrentVersionU3Ek__BackingField_3() { return &___U3CcurrentVersionU3Ek__BackingField_3; }
	inline void set_U3CcurrentVersionU3Ek__BackingField_3(String_t* value)
	{
		___U3CcurrentVersionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentVersionU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitializationStatus_4() { return static_cast<int32_t>(offsetof(GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_StaticFields, ___s_InitializationStatus_4)); }
	inline int32_t get_s_InitializationStatus_4() const { return ___s_InitializationStatus_4; }
	inline int32_t* get_address_of_s_InitializationStatus_4() { return &___s_InitializationStatus_4; }
	inline void set_s_InitializationStatus_4(int32_t value)
	{
		___s_InitializationStatus_4 = value;
	}

	inline static int32_t get_offset_of_U3CcatalogsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_StaticFields, ___U3CcatalogsU3Ek__BackingField_5)); }
	inline CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E * get_U3CcatalogsU3Ek__BackingField_5() const { return ___U3CcatalogsU3Ek__BackingField_5; }
	inline CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E ** get_address_of_U3CcatalogsU3Ek__BackingField_5() { return &___U3CcatalogsU3Ek__BackingField_5; }
	inline void set_U3CcatalogsU3Ek__BackingField_5(CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E * value)
	{
		___U3CcatalogsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcatalogsU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_PromiseGenerator_6() { return static_cast<int32_t>(offsetof(GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_StaticFields, ___s_PromiseGenerator_6)); }
	inline PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C * get_s_PromiseGenerator_6() const { return ___s_PromiseGenerator_6; }
	inline PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C ** get_address_of_s_PromiseGenerator_6() { return &___s_PromiseGenerator_6; }
	inline void set_s_PromiseGenerator_6(PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C * value)
	{
		___s_PromiseGenerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PromiseGenerator_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataLayerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_StaticFields, ___U3CdataLayerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CdataLayerU3Ek__BackingField_7() const { return ___U3CdataLayerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CdataLayerU3Ek__BackingField_7() { return &___U3CdataLayerU3Ek__BackingField_7; }
	inline void set_U3CdataLayerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CdataLayerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataLayerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_updater_8() { return static_cast<int32_t>(offsetof(GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_StaticFields, ___updater_8)); }
	inline GameFoundationUpdater_t1ECF74D9C7EC55BC52F1E66475113F05E2D4D380 * get_updater_8() const { return ___updater_8; }
	inline GameFoundationUpdater_t1ECF74D9C7EC55BC52F1E66475113F05E2D4D380 ** get_address_of_updater_8() { return &___updater_8; }
	inline void set_updater_8(GameFoundationUpdater_t1ECF74D9C7EC55BC52F1E66475113F05E2D4D380 * value)
	{
		___updater_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updater_8), (void*)value);
	}
};


// UnityEngine.GameFoundation.Property
struct  Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 
{
public:
	// UnityEngine.GameFoundation.PropertyType UnityEngine.GameFoundation.Property::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_0;
	// UnityEngine.GameFoundation.CoalescedValueType UnityEngine.GameFoundation.Property::valueType
	CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC  ___valueType_1;
	// System.String UnityEngine.GameFoundation.Property::stringValue
	String_t* ___stringValue_2;

public:
	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953, ___U3CtypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_0() const { return ___U3CtypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_0() { return &___U3CtypeU3Ek__BackingField_0; }
	inline void set_U3CtypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_valueType_1() { return static_cast<int32_t>(offsetof(Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953, ___valueType_1)); }
	inline CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC  get_valueType_1() const { return ___valueType_1; }
	inline CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC * get_address_of_valueType_1() { return &___valueType_1; }
	inline void set_valueType_1(CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC  value)
	{
		___valueType_1 = value;
	}

	inline static int32_t get_offset_of_stringValue_2() { return static_cast<int32_t>(offsetof(Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953, ___stringValue_2)); }
	inline String_t* get_stringValue_2() const { return ___stringValue_2; }
	inline String_t** get_address_of_stringValue_2() { return &___stringValue_2; }
	inline void set_stringValue_2(String_t* value)
	{
		___stringValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringValue_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GameFoundation.Property
struct Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953_marshaled_pinvoke
{
	int32_t ___U3CtypeU3Ek__BackingField_0;
	CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC_marshaled_pinvoke ___valueType_1;
	char* ___stringValue_2;
};
// Native definition for COM marshalling of UnityEngine.GameFoundation.Property
struct Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953_marshaled_com
{
	int32_t ___U3CtypeU3Ek__BackingField_0;
	CoalescedValueType_tE498B7328DB503DF4207E820F492B9BC8C4EE3DC_marshaled_com ___valueType_1;
	Il2CppChar* ___stringValue_2;
};

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Int64>>
struct  Action_1_t89246F556F01EA068B8CC8237694622FE3E7DAF7  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Collections.Generic.List`1<System.Exception>>
struct  Action_1_tCB4CF566D79F662E724459D5BD25742D2375B190  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Collections.Generic.List`1<System.String>>
struct  Action_1_t9C3E2FDBB284E0602F2CD1FCE3CBB76F3C83FB3E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>>
struct  Action_1_tF8D742FF2C7432253A3F24F44BFB5042ACC70F7E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>>
struct  Action_1_tB03796BBEE46B5AFBEA805E7D422268E5648AB46  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>>
struct  Action_1_t4C9357D898236E35BEEA05F76DE8C34B8FF5EF6C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Exception>
struct  Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.GameFoundation.Data.GameFoundationData>
struct  Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArithmeticException
struct  ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.GameFoundation.Property>
struct  KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E, ___value_1)); }
	inline Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  get_value_1() const { return ___value_1; }
	inline Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___stringValue_2), (void*)NULL);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameFoundation.Property>
struct  KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857, ___value_1)); }
	inline Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  get_value_1() const { return ___value_1; }
	inline Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___stringValue_2), (void*)NULL);
	}
};


// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.Int64>>
struct  Func_1_t014E375EF334B5545E3B56A95E6E1F46487014E6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Collections.Generic.List`1<System.Exception>>
struct  Func_1_t424489991AE168C0DFF23714862850ABAAB683F6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Collections.Generic.List`1<System.String>>
struct  Func_1_t40C51F5B2AE4E23C5A2C632CAB7292B16444953F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>>
struct  Func_1_t55FC41E651B445E42D4EA8EB2618F7F57FE8E776  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>>
struct  Func_1_t60E22F842BA86FDE2A99F8DD874CCE1F49EAB448  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>>
struct  Func_1_tE88EEE0B96B8324B3D1B14116159089F76B6497E  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____data_1)); }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.GameFoundation.Data.PropertyData
struct  PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5 
{
public:
	// System.String UnityEngine.GameFoundation.Data.PropertyData::key
	String_t* ___key_0;
	// UnityEngine.GameFoundation.Property UnityEngine.GameFoundation.Data.PropertyData::value
	Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5, ___value_1)); }
	inline Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  get_value_1() const { return ___value_1; }
	inline Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___stringValue_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GameFoundation.Data.PropertyData
struct PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5_marshaled_pinvoke
{
	char* ___key_0;
	Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953_marshaled_pinvoke ___value_1;
};
// Native definition for COM marshalling of UnityEngine.GameFoundation.Data.PropertyData
struct PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5_marshaled_com
{
	Il2CppChar* ___key_0;
	Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953_marshaled_com ___value_1;
};

// UnityEngine.GameFoundation.DefaultCatalog.BaseCatalogAsset
struct  BaseCatalogAsset_t86BCEF74D38AE9A279378D23C35E866B961B3F50  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase UnityEngine.GameFoundation.DefaultCatalog.BaseCatalogAsset::m_Database
	GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * ___m_Database_4;

public:
	inline static int32_t get_offset_of_m_Database_4() { return static_cast<int32_t>(offsetof(BaseCatalogAsset_t86BCEF74D38AE9A279378D23C35E866B961B3F50, ___m_Database_4)); }
	inline GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * get_m_Database_4() const { return ___m_Database_4; }
	inline GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 ** get_address_of_m_Database_4() { return &___m_Database_4; }
	inline void set_m_Database_4(GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * value)
	{
		___m_Database_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Database_4), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultCatalog.CatalogItemAsset
struct  CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.String UnityEngine.GameFoundation.DefaultCatalog.CatalogItemAsset::m_DisplayName
	String_t* ___m_DisplayName_4;
	// System.String UnityEngine.GameFoundation.DefaultCatalog.CatalogItemAsset::m_Key
	String_t* ___m_Key_5;
	// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.TagAsset> UnityEngine.GameFoundation.DefaultCatalog.CatalogItemAsset::m_Tags
	List_1_t003AC5570FC849DDCCE4123662FDAEB0C47C1187 * ___m_Tags_6;
	// UnityEngine.GameFoundation.DefaultCatalog.BaseCatalogAsset UnityEngine.GameFoundation.DefaultCatalog.CatalogItemAsset::m_Catalog
	BaseCatalogAsset_t86BCEF74D38AE9A279378D23C35E866B961B3F50 * ___m_Catalog_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.GameFoundation.DefaultCatalog.CatalogItemAsset::m_StaticPropertyKeys
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___m_StaticPropertyKeys_8;
	// System.Collections.Generic.List`1<UnityEngine.GameFoundation.Property> UnityEngine.GameFoundation.DefaultCatalog.CatalogItemAsset::m_StaticPropertyValues
	List_1_t8FE4A0B6C6FA45793B523C024E3D25222F123936 * ___m_StaticPropertyValues_9;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Property> UnityEngine.GameFoundation.DefaultCatalog.CatalogItemAsset::<staticProperties>k__BackingField
	Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * ___U3CstaticPropertiesU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.BaseDetailAsset> UnityEngine.GameFoundation.DefaultCatalog.CatalogItemAsset::m_DetailValues
	List_1_tC7471B270FDE8E2AE3D71B28D785DB49A6A7A0FD * ___m_DetailValues_11;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.GameFoundation.DefaultCatalog.BaseDetailAsset> UnityEngine.GameFoundation.DefaultCatalog.CatalogItemAsset::m_Details
	Dictionary_2_t5204974E19867A8DD5370D2B23AD3F6C962DC0D8 * ___m_Details_12;

public:
	inline static int32_t get_offset_of_m_DisplayName_4() { return static_cast<int32_t>(offsetof(CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5, ___m_DisplayName_4)); }
	inline String_t* get_m_DisplayName_4() const { return ___m_DisplayName_4; }
	inline String_t** get_address_of_m_DisplayName_4() { return &___m_DisplayName_4; }
	inline void set_m_DisplayName_4(String_t* value)
	{
		___m_DisplayName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Key_5() { return static_cast<int32_t>(offsetof(CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5, ___m_Key_5)); }
	inline String_t* get_m_Key_5() const { return ___m_Key_5; }
	inline String_t** get_address_of_m_Key_5() { return &___m_Key_5; }
	inline void set_m_Key_5(String_t* value)
	{
		___m_Key_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Key_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tags_6() { return static_cast<int32_t>(offsetof(CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5, ___m_Tags_6)); }
	inline List_1_t003AC5570FC849DDCCE4123662FDAEB0C47C1187 * get_m_Tags_6() const { return ___m_Tags_6; }
	inline List_1_t003AC5570FC849DDCCE4123662FDAEB0C47C1187 ** get_address_of_m_Tags_6() { return &___m_Tags_6; }
	inline void set_m_Tags_6(List_1_t003AC5570FC849DDCCE4123662FDAEB0C47C1187 * value)
	{
		___m_Tags_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tags_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Catalog_7() { return static_cast<int32_t>(offsetof(CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5, ___m_Catalog_7)); }
	inline BaseCatalogAsset_t86BCEF74D38AE9A279378D23C35E866B961B3F50 * get_m_Catalog_7() const { return ___m_Catalog_7; }
	inline BaseCatalogAsset_t86BCEF74D38AE9A279378D23C35E866B961B3F50 ** get_address_of_m_Catalog_7() { return &___m_Catalog_7; }
	inline void set_m_Catalog_7(BaseCatalogAsset_t86BCEF74D38AE9A279378D23C35E866B961B3F50 * value)
	{
		___m_Catalog_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Catalog_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_StaticPropertyKeys_8() { return static_cast<int32_t>(offsetof(CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5, ___m_StaticPropertyKeys_8)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_m_StaticPropertyKeys_8() const { return ___m_StaticPropertyKeys_8; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_m_StaticPropertyKeys_8() { return &___m_StaticPropertyKeys_8; }
	inline void set_m_StaticPropertyKeys_8(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___m_StaticPropertyKeys_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StaticPropertyKeys_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_StaticPropertyValues_9() { return static_cast<int32_t>(offsetof(CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5, ___m_StaticPropertyValues_9)); }
	inline List_1_t8FE4A0B6C6FA45793B523C024E3D25222F123936 * get_m_StaticPropertyValues_9() const { return ___m_StaticPropertyValues_9; }
	inline List_1_t8FE4A0B6C6FA45793B523C024E3D25222F123936 ** get_address_of_m_StaticPropertyValues_9() { return &___m_StaticPropertyValues_9; }
	inline void set_m_StaticPropertyValues_9(List_1_t8FE4A0B6C6FA45793B523C024E3D25222F123936 * value)
	{
		___m_StaticPropertyValues_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StaticPropertyValues_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstaticPropertiesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5, ___U3CstaticPropertiesU3Ek__BackingField_10)); }
	inline Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * get_U3CstaticPropertiesU3Ek__BackingField_10() const { return ___U3CstaticPropertiesU3Ek__BackingField_10; }
	inline Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 ** get_address_of_U3CstaticPropertiesU3Ek__BackingField_10() { return &___U3CstaticPropertiesU3Ek__BackingField_10; }
	inline void set_U3CstaticPropertiesU3Ek__BackingField_10(Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * value)
	{
		___U3CstaticPropertiesU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstaticPropertiesU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_DetailValues_11() { return static_cast<int32_t>(offsetof(CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5, ___m_DetailValues_11)); }
	inline List_1_tC7471B270FDE8E2AE3D71B28D785DB49A6A7A0FD * get_m_DetailValues_11() const { return ___m_DetailValues_11; }
	inline List_1_tC7471B270FDE8E2AE3D71B28D785DB49A6A7A0FD ** get_address_of_m_DetailValues_11() { return &___m_DetailValues_11; }
	inline void set_m_DetailValues_11(List_1_tC7471B270FDE8E2AE3D71B28D785DB49A6A7A0FD * value)
	{
		___m_DetailValues_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DetailValues_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Details_12() { return static_cast<int32_t>(offsetof(CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5, ___m_Details_12)); }
	inline Dictionary_2_t5204974E19867A8DD5370D2B23AD3F6C962DC0D8 * get_m_Details_12() const { return ___m_Details_12; }
	inline Dictionary_2_t5204974E19867A8DD5370D2B23AD3F6C962DC0D8 ** get_address_of_m_Details_12() { return &___m_Details_12; }
	inline void set_m_Details_12(Dictionary_2_t5204974E19867A8DD5370D2B23AD3F6C962DC0D8 * value)
	{
		___m_Details_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Details_12), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase
struct  GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.GameFoundation.DefaultCatalog.TagCatalogAsset UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase::m_TagCatalog
	TagCatalogAsset_t976CF4C2FE2CF4850DC7737E0B6AC85F50068C65 * ___m_TagCatalog_4;
	// UnityEngine.GameFoundation.DefaultCatalog.InventoryCatalogAsset UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase::m_InventoryCatalog
	InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * ___m_InventoryCatalog_5;
	// UnityEngine.GameFoundation.DefaultCatalog.StoreCatalogAsset UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase::m_StoreCatalog
	StoreCatalogAsset_t431C925AFDDC075D1561936A8B26E4409C62712A * ___m_StoreCatalog_6;
	// UnityEngine.GameFoundation.DefaultCatalog.CurrencyCatalogAsset UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase::m_CurrencyCatalog
	CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 * ___m_CurrencyCatalog_7;
	// UnityEngine.GameFoundation.DefaultCatalog.TransactionCatalogAsset UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase::m_TransactionCatalog
	TransactionCatalogAsset_t2B59953008F38A51B99AD36CC58D041F7ED6F543 * ___m_TransactionCatalog_8;
	// UnityEngine.GameFoundation.DefaultCatalog.GameParameterCatalogAsset UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase::m_GameParameterCatalog
	GameParameterCatalogAsset_tF5FEAF7C980972FDAE73871C26F25846175761C7 * ___m_GameParameterCatalog_9;

public:
	inline static int32_t get_offset_of_m_TagCatalog_4() { return static_cast<int32_t>(offsetof(GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1, ___m_TagCatalog_4)); }
	inline TagCatalogAsset_t976CF4C2FE2CF4850DC7737E0B6AC85F50068C65 * get_m_TagCatalog_4() const { return ___m_TagCatalog_4; }
	inline TagCatalogAsset_t976CF4C2FE2CF4850DC7737E0B6AC85F50068C65 ** get_address_of_m_TagCatalog_4() { return &___m_TagCatalog_4; }
	inline void set_m_TagCatalog_4(TagCatalogAsset_t976CF4C2FE2CF4850DC7737E0B6AC85F50068C65 * value)
	{
		___m_TagCatalog_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TagCatalog_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_InventoryCatalog_5() { return static_cast<int32_t>(offsetof(GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1, ___m_InventoryCatalog_5)); }
	inline InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * get_m_InventoryCatalog_5() const { return ___m_InventoryCatalog_5; }
	inline InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 ** get_address_of_m_InventoryCatalog_5() { return &___m_InventoryCatalog_5; }
	inline void set_m_InventoryCatalog_5(InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * value)
	{
		___m_InventoryCatalog_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InventoryCatalog_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoreCatalog_6() { return static_cast<int32_t>(offsetof(GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1, ___m_StoreCatalog_6)); }
	inline StoreCatalogAsset_t431C925AFDDC075D1561936A8B26E4409C62712A * get_m_StoreCatalog_6() const { return ___m_StoreCatalog_6; }
	inline StoreCatalogAsset_t431C925AFDDC075D1561936A8B26E4409C62712A ** get_address_of_m_StoreCatalog_6() { return &___m_StoreCatalog_6; }
	inline void set_m_StoreCatalog_6(StoreCatalogAsset_t431C925AFDDC075D1561936A8B26E4409C62712A * value)
	{
		___m_StoreCatalog_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StoreCatalog_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrencyCatalog_7() { return static_cast<int32_t>(offsetof(GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1, ___m_CurrencyCatalog_7)); }
	inline CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 * get_m_CurrencyCatalog_7() const { return ___m_CurrencyCatalog_7; }
	inline CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 ** get_address_of_m_CurrencyCatalog_7() { return &___m_CurrencyCatalog_7; }
	inline void set_m_CurrencyCatalog_7(CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 * value)
	{
		___m_CurrencyCatalog_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrencyCatalog_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_TransactionCatalog_8() { return static_cast<int32_t>(offsetof(GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1, ___m_TransactionCatalog_8)); }
	inline TransactionCatalogAsset_t2B59953008F38A51B99AD36CC58D041F7ED6F543 * get_m_TransactionCatalog_8() const { return ___m_TransactionCatalog_8; }
	inline TransactionCatalogAsset_t2B59953008F38A51B99AD36CC58D041F7ED6F543 ** get_address_of_m_TransactionCatalog_8() { return &___m_TransactionCatalog_8; }
	inline void set_m_TransactionCatalog_8(TransactionCatalogAsset_t2B59953008F38A51B99AD36CC58D041F7ED6F543 * value)
	{
		___m_TransactionCatalog_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TransactionCatalog_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_GameParameterCatalog_9() { return static_cast<int32_t>(offsetof(GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1, ___m_GameParameterCatalog_9)); }
	inline GameParameterCatalogAsset_tF5FEAF7C980972FDAE73871C26F25846175761C7 * get_m_GameParameterCatalog_9() const { return ___m_GameParameterCatalog_9; }
	inline GameParameterCatalogAsset_tF5FEAF7C980972FDAE73871C26F25846175761C7 ** get_address_of_m_GameParameterCatalog_9() { return &___m_GameParameterCatalog_9; }
	inline void set_m_GameParameterCatalog_9(GameParameterCatalogAsset_tF5FEAF7C980972FDAE73871C26F25846175761C7 * value)
	{
		___m_GameParameterCatalog_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameParameterCatalog_9), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,UnityEngine.GameFoundation.Property>
struct  Enumerator_tCB3F8BE3B2F729B8717C7CF3095568887CF42D70 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t96ADADCEB72B116C1720C2427A80150D01668720 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tCB3F8BE3B2F729B8717C7CF3095568887CF42D70, ___dictionary_0)); }
	inline Dictionary_2_t96ADADCEB72B116C1720C2427A80150D01668720 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t96ADADCEB72B116C1720C2427A80150D01668720 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t96ADADCEB72B116C1720C2427A80150D01668720 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tCB3F8BE3B2F729B8717C7CF3095568887CF42D70, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tCB3F8BE3B2F729B8717C7CF3095568887CF42D70, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCB3F8BE3B2F729B8717C7CF3095568887CF42D70, ___current_3)); }
	inline KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___value_1))->___stringValue_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tCB3F8BE3B2F729B8717C7CF3095568887CF42D70, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.String,UnityEngine.GameFoundation.Property>
struct  Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F, ___dictionary_0)); }
	inline Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F, ___current_3)); }
	inline KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___value_1))->___stringValue_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.GameFoundation.Data.PropertyData>
struct  Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2, ___list_0)); }
	inline List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * get_list_0() const { return ___list_0; }
	inline List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2, ___current_3)); }
	inline PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  get_current_3() const { return ___current_3; }
	inline PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___value_1))->___stringValue_2), (void*)NULL);
		#endif
	}
};


// System.IO.FileInfo
struct  FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C  : public FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D
{
public:
	// System.String System.IO.FileInfo::_name
	String_t* ____name_6;

public:
	inline static int32_t get_offset_of__name_6() { return static_cast<int32_t>(offsetof(FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C, ____name_6)); }
	inline String_t* get__name_6() const { return ____name_6; }
	inline String_t** get_address_of__name_6() { return &____name_6; }
	inline void set__name_6(String_t* value)
	{
		____name_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_6), (void*)value);
	}
};


// System.IO.FileNotFoundException
struct  FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431  : public IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA
{
public:
	// System.String System.IO.FileNotFoundException::_fileName
	String_t* ____fileName_18;
	// System.String System.IO.FileNotFoundException::_fusionLog
	String_t* ____fusionLog_19;

public:
	inline static int32_t get_offset_of__fileName_18() { return static_cast<int32_t>(offsetof(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431, ____fileName_18)); }
	inline String_t* get__fileName_18() const { return ____fileName_18; }
	inline String_t** get_address_of__fileName_18() { return &____fileName_18; }
	inline void set__fileName_18(String_t* value)
	{
		____fileName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileName_18), (void*)value);
	}

	inline static int32_t get_offset_of__fusionLog_19() { return static_cast<int32_t>(offsetof(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431, ____fusionLog_19)); }
	inline String_t* get__fusionLog_19() const { return ____fusionLog_19; }
	inline String_t** get_address_of__fusionLog_19() { return &____fusionLog_19; }
	inline void set__fusionLog_19(String_t* value)
	{
		____fusionLog_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fusionLog_19), (void*)value);
	}
};


// System.OverflowException
struct  OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
{
public:

public:
};


// UnityEngine.GameFoundation.DefaultCatalog.BaseTransactionAsset
struct  BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961  : public CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5
{
public:
	// UnityEngine.GameFoundation.DefaultCatalog.TransactionExchangeDefinitionObject UnityEngine.GameFoundation.DefaultCatalog.BaseTransactionAsset::m_Rewards
	TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * ___m_Rewards_13;

public:
	inline static int32_t get_offset_of_m_Rewards_13() { return static_cast<int32_t>(offsetof(BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961, ___m_Rewards_13)); }
	inline TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * get_m_Rewards_13() const { return ___m_Rewards_13; }
	inline TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 ** get_address_of_m_Rewards_13() { return &___m_Rewards_13; }
	inline void set_m_Rewards_13(TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * value)
	{
		___m_Rewards_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rewards_13), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset
struct  CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632  : public CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5
{
public:
	// System.Int64 UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset::m_InitialBalance
	int64_t ___m_InitialBalance_13;
	// System.Int64 UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset::m_MaximumBalance
	int64_t ___m_MaximumBalance_14;
	// UnityEngine.GameFoundation.CurrencyType UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset::m_Type
	int32_t ___m_Type_15;

public:
	inline static int32_t get_offset_of_m_InitialBalance_13() { return static_cast<int32_t>(offsetof(CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632, ___m_InitialBalance_13)); }
	inline int64_t get_m_InitialBalance_13() const { return ___m_InitialBalance_13; }
	inline int64_t* get_address_of_m_InitialBalance_13() { return &___m_InitialBalance_13; }
	inline void set_m_InitialBalance_13(int64_t value)
	{
		___m_InitialBalance_13 = value;
	}

	inline static int32_t get_offset_of_m_MaximumBalance_14() { return static_cast<int32_t>(offsetof(CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632, ___m_MaximumBalance_14)); }
	inline int64_t get_m_MaximumBalance_14() const { return ___m_MaximumBalance_14; }
	inline int64_t* get_address_of_m_MaximumBalance_14() { return &___m_MaximumBalance_14; }
	inline void set_m_MaximumBalance_14(int64_t value)
	{
		___m_MaximumBalance_14 = value;
	}

	inline static int32_t get_offset_of_m_Type_15() { return static_cast<int32_t>(offsetof(CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632, ___m_Type_15)); }
	inline int32_t get_m_Type_15() const { return ___m_Type_15; }
	inline int32_t* get_address_of_m_Type_15() { return &___m_Type_15; }
	inline void set_m_Type_15(int32_t value)
	{
		___m_Type_15 = value;
	}
};


// UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset
struct  InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146  : public CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5
{
public:
	// System.Int32 UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset::m_InitialAllocation
	int32_t ___m_InitialAllocation_13;
	// System.Collections.Generic.List`1<System.String> UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset::m_PropertyKeys
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___m_PropertyKeys_14;
	// System.Collections.Generic.List`1<UnityEngine.GameFoundation.Property> UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset::m_PropertyDefaultValues
	List_1_t8FE4A0B6C6FA45793B523C024E3D25222F123936 * ___m_PropertyDefaultValues_15;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Property> UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset::<properties>k__BackingField
	Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * ___U3CpropertiesU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_m_InitialAllocation_13() { return static_cast<int32_t>(offsetof(InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146, ___m_InitialAllocation_13)); }
	inline int32_t get_m_InitialAllocation_13() const { return ___m_InitialAllocation_13; }
	inline int32_t* get_address_of_m_InitialAllocation_13() { return &___m_InitialAllocation_13; }
	inline void set_m_InitialAllocation_13(int32_t value)
	{
		___m_InitialAllocation_13 = value;
	}

	inline static int32_t get_offset_of_m_PropertyKeys_14() { return static_cast<int32_t>(offsetof(InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146, ___m_PropertyKeys_14)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_m_PropertyKeys_14() const { return ___m_PropertyKeys_14; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_m_PropertyKeys_14() { return &___m_PropertyKeys_14; }
	inline void set_m_PropertyKeys_14(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___m_PropertyKeys_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyKeys_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertyDefaultValues_15() { return static_cast<int32_t>(offsetof(InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146, ___m_PropertyDefaultValues_15)); }
	inline List_1_t8FE4A0B6C6FA45793B523C024E3D25222F123936 * get_m_PropertyDefaultValues_15() const { return ___m_PropertyDefaultValues_15; }
	inline List_1_t8FE4A0B6C6FA45793B523C024E3D25222F123936 ** get_address_of_m_PropertyDefaultValues_15() { return &___m_PropertyDefaultValues_15; }
	inline void set_m_PropertyDefaultValues_15(List_1_t8FE4A0B6C6FA45793B523C024E3D25222F123936 * value)
	{
		___m_PropertyDefaultValues_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyDefaultValues_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropertiesU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146, ___U3CpropertiesU3Ek__BackingField_16)); }
	inline Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * get_U3CpropertiesU3Ek__BackingField_16() const { return ___U3CpropertiesU3Ek__BackingField_16; }
	inline Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 ** get_address_of_U3CpropertiesU3Ek__BackingField_16() { return &___U3CpropertiesU3Ek__BackingField_16; }
	inline void set_U3CpropertiesU3Ek__BackingField_16(Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * value)
	{
		___U3CpropertiesU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpropertiesU3Ek__BackingField_16), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1<UnityEngine.GameFoundation.DefaultCatalog.BaseTransactionAsset>
struct  SingleCollectionCatalogAsset_1_t0AEB8D3A8A1C252101C9591594F382A9DAD1339D  : public BaseCatalogAsset_t86BCEF74D38AE9A279378D23C35E866B961B3F50
{
public:
	// System.Collections.Generic.List`1<TItemAsset> UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1::m_Items
	List_1_tF01E06E4DA70B56B7316997C69B5836A70356796 * ___m_Items_6;

public:
	inline static int32_t get_offset_of_m_Items_6() { return static_cast<int32_t>(offsetof(SingleCollectionCatalogAsset_1_t0AEB8D3A8A1C252101C9591594F382A9DAD1339D, ___m_Items_6)); }
	inline List_1_tF01E06E4DA70B56B7316997C69B5836A70356796 * get_m_Items_6() const { return ___m_Items_6; }
	inline List_1_tF01E06E4DA70B56B7316997C69B5836A70356796 ** get_address_of_m_Items_6() { return &___m_Items_6; }
	inline void set_m_Items_6(List_1_tF01E06E4DA70B56B7316997C69B5836A70356796 * value)
	{
		___m_Items_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_6), (void*)value);
	}
};

struct SingleCollectionCatalogAsset_1_t0AEB8D3A8A1C252101C9591594F382A9DAD1339D_StaticFields
{
public:
	// System.Collections.Generic.List`1<TItemAsset> UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1::s_TempList
	List_1_tF01E06E4DA70B56B7316997C69B5836A70356796 * ___s_TempList_5;

public:
	inline static int32_t get_offset_of_s_TempList_5() { return static_cast<int32_t>(offsetof(SingleCollectionCatalogAsset_1_t0AEB8D3A8A1C252101C9591594F382A9DAD1339D_StaticFields, ___s_TempList_5)); }
	inline List_1_tF01E06E4DA70B56B7316997C69B5836A70356796 * get_s_TempList_5() const { return ___s_TempList_5; }
	inline List_1_tF01E06E4DA70B56B7316997C69B5836A70356796 ** get_address_of_s_TempList_5() { return &___s_TempList_5; }
	inline void set_s_TempList_5(List_1_tF01E06E4DA70B56B7316997C69B5836A70356796 * value)
	{
		___s_TempList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TempList_5), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset>
struct  SingleCollectionCatalogAsset_1_t4FAA70BA78DFF7743ABA367E27CFF413CF32684B  : public BaseCatalogAsset_t86BCEF74D38AE9A279378D23C35E866B961B3F50
{
public:
	// System.Collections.Generic.List`1<TItemAsset> UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1::m_Items
	List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 * ___m_Items_6;

public:
	inline static int32_t get_offset_of_m_Items_6() { return static_cast<int32_t>(offsetof(SingleCollectionCatalogAsset_1_t4FAA70BA78DFF7743ABA367E27CFF413CF32684B, ___m_Items_6)); }
	inline List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 * get_m_Items_6() const { return ___m_Items_6; }
	inline List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 ** get_address_of_m_Items_6() { return &___m_Items_6; }
	inline void set_m_Items_6(List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 * value)
	{
		___m_Items_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_6), (void*)value);
	}
};

struct SingleCollectionCatalogAsset_1_t4FAA70BA78DFF7743ABA367E27CFF413CF32684B_StaticFields
{
public:
	// System.Collections.Generic.List`1<TItemAsset> UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1::s_TempList
	List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 * ___s_TempList_5;

public:
	inline static int32_t get_offset_of_s_TempList_5() { return static_cast<int32_t>(offsetof(SingleCollectionCatalogAsset_1_t4FAA70BA78DFF7743ABA367E27CFF413CF32684B_StaticFields, ___s_TempList_5)); }
	inline List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 * get_s_TempList_5() const { return ___s_TempList_5; }
	inline List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 ** get_address_of_s_TempList_5() { return &___s_TempList_5; }
	inline void set_s_TempList_5(List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 * value)
	{
		___s_TempList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TempList_5), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1<UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset>
struct  SingleCollectionCatalogAsset_1_t1217B891F9CC0987698D178A74A22302E6CC02E3  : public BaseCatalogAsset_t86BCEF74D38AE9A279378D23C35E866B961B3F50
{
public:
	// System.Collections.Generic.List`1<TItemAsset> UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1::m_Items
	List_1_t594069B7C892D14F847C4C42E04989E0D399786B * ___m_Items_6;

public:
	inline static int32_t get_offset_of_m_Items_6() { return static_cast<int32_t>(offsetof(SingleCollectionCatalogAsset_1_t1217B891F9CC0987698D178A74A22302E6CC02E3, ___m_Items_6)); }
	inline List_1_t594069B7C892D14F847C4C42E04989E0D399786B * get_m_Items_6() const { return ___m_Items_6; }
	inline List_1_t594069B7C892D14F847C4C42E04989E0D399786B ** get_address_of_m_Items_6() { return &___m_Items_6; }
	inline void set_m_Items_6(List_1_t594069B7C892D14F847C4C42E04989E0D399786B * value)
	{
		___m_Items_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_6), (void*)value);
	}
};

struct SingleCollectionCatalogAsset_1_t1217B891F9CC0987698D178A74A22302E6CC02E3_StaticFields
{
public:
	// System.Collections.Generic.List`1<TItemAsset> UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1::s_TempList
	List_1_t594069B7C892D14F847C4C42E04989E0D399786B * ___s_TempList_5;

public:
	inline static int32_t get_offset_of_s_TempList_5() { return static_cast<int32_t>(offsetof(SingleCollectionCatalogAsset_1_t1217B891F9CC0987698D178A74A22302E6CC02E3_StaticFields, ___s_TempList_5)); }
	inline List_1_t594069B7C892D14F847C4C42E04989E0D399786B * get_s_TempList_5() const { return ___s_TempList_5; }
	inline List_1_t594069B7C892D14F847C4C42E04989E0D399786B ** get_address_of_s_TempList_5() { return &___s_TempList_5; }
	inline void set_s_TempList_5(List_1_t594069B7C892D14F847C4C42E04989E0D399786B * value)
	{
		___s_TempList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TempList_5), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultCatalog.CurrencyCatalogAsset
struct  CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52  : public SingleCollectionCatalogAsset_1_t4FAA70BA78DFF7743ABA367E27CFF413CF32684B
{
public:

public:
};


// UnityEngine.GameFoundation.DefaultCatalog.IAPTransactionAsset
struct  IAPTransactionAsset_tB3E62FE57509F88507D89E3477CB863D278AE96D  : public BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961
{
public:
	// System.String UnityEngine.GameFoundation.DefaultCatalog.IAPTransactionAsset::m_AppleId
	String_t* ___m_AppleId_14;
	// System.String UnityEngine.GameFoundation.DefaultCatalog.IAPTransactionAsset::m_GoogleId
	String_t* ___m_GoogleId_15;

public:
	inline static int32_t get_offset_of_m_AppleId_14() { return static_cast<int32_t>(offsetof(IAPTransactionAsset_tB3E62FE57509F88507D89E3477CB863D278AE96D, ___m_AppleId_14)); }
	inline String_t* get_m_AppleId_14() const { return ___m_AppleId_14; }
	inline String_t** get_address_of_m_AppleId_14() { return &___m_AppleId_14; }
	inline void set_m_AppleId_14(String_t* value)
	{
		___m_AppleId_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AppleId_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_GoogleId_15() { return static_cast<int32_t>(offsetof(IAPTransactionAsset_tB3E62FE57509F88507D89E3477CB863D278AE96D, ___m_GoogleId_15)); }
	inline String_t* get_m_GoogleId_15() const { return ___m_GoogleId_15; }
	inline String_t** get_address_of_m_GoogleId_15() { return &___m_GoogleId_15; }
	inline void set_m_GoogleId_15(String_t* value)
	{
		___m_GoogleId_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GoogleId_15), (void*)value);
	}
};


// UnityEngine.GameFoundation.DefaultCatalog.InventoryCatalogAsset
struct  InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269  : public SingleCollectionCatalogAsset_1_t1217B891F9CC0987698D178A74A22302E6CC02E3
{
public:

public:
};


// UnityEngine.GameFoundation.DefaultCatalog.TransactionCatalogAsset
struct  TransactionCatalogAsset_t2B59953008F38A51B99AD36CC58D041F7ED6F543  : public SingleCollectionCatalogAsset_1_t0AEB8D3A8A1C252101C9591594F382A9DAD1339D
{
public:

public:
};


// UnityEngine.GameFoundation.DefaultCatalog.VirtualTransactionAsset
struct  VirtualTransactionAsset_t9D9A79A9D9D70B07143D90FFCD81F5316F14CE54  : public BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961
{
public:
	// UnityEngine.GameFoundation.DefaultCatalog.TransactionExchangeDefinitionObject UnityEngine.GameFoundation.DefaultCatalog.VirtualTransactionAsset::m_Costs
	TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * ___m_Costs_14;

public:
	inline static int32_t get_offset_of_m_Costs_14() { return static_cast<int32_t>(offsetof(VirtualTransactionAsset_t9D9A79A9D9D70B07143D90FFCD81F5316F14CE54, ___m_Costs_14)); }
	inline TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * get_m_Costs_14() const { return ___m_Costs_14; }
	inline TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 ** get_address_of_m_Costs_14() { return &___m_Costs_14; }
	inline void set_m_Costs_14(TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * value)
	{
		___m_Costs_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Costs_14), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameFoundation.Data.CurrencyExchangeData[]
struct CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756  m_Items[1];

public:
	inline CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___currencyKey_0), (void*)NULL);
	}
	inline CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___currencyKey_0), (void*)NULL);
	}
};
// UnityEngine.GameFoundation.Data.InventoryItemData[]
struct InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  m_Items[1];

public:
	inline InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___definitionKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___id_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___properties_2), (void*)NULL);
		#endif
	}
	inline InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___definitionKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___id_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___properties_2), (void*)NULL);
		#endif
	}
};
// UnityEngine.GameFoundation.Data.PropertyData[]
struct PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  m_Items[1];

public:
	inline PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___stringValue_2), (void*)NULL);
		#endif
	}
	inline PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___stringValue_2), (void*)NULL);
		#endif
	}
};
// UnityEngine.GameFoundation.Data.BalanceData[]
struct BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89  m_Items[1];

public:
	inline BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___currencyKey_0), (void*)NULL);
	}
	inline BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___currencyKey_0), (void*)NULL);
	}
};


// !0 UnityEngine.GameFoundation.Pool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Pool_1_Get_mEE9656FE969FA0F5330DFA5739931F172E9E9680_gshared (Pool_1_t155FE6A7FDC3F1DC7D9854F41414EA84948A9F32 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB6383BC87DEAB111ED7A3F693345ADA5C57C44E0_gshared (Dictionary_2_tA4C40E906DE6517EEA62C7FEB1A70D09BD7EC92B * __this, RuntimeObject * ___key0, int64_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m0DFEA11F9293B04DF1FDCD64B24E62CAD9A2F526_gshared (Dictionary_2_tA4C40E906DE6517EEA62C7FEB1A70D09BD7EC92B * __this, RuntimeObject * ___key0, int64_t ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.Pool`1<System.Object>::Release(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_1_Release_mA633196A0D4CF4A8CF221CFF6131DD983B15D3FA_gshared (Pool_1_t155FE6A7FDC3F1DC7D9854F41414EA84948A9F32 * __this, RuntimeObject * ___pooled0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8BE931B9A2DEECD2A7AB98E695A9EF38672D8442  Dictionary_2_GetEnumerator_m5D2A3366C86E5C3EDCFAD125D880A77F7A165309_gshared (Dictionary_2_tA4C40E906DE6517EEA62C7FEB1A70D09BD7EC92B * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69  Enumerator_get_Current_mE913D8E85D6164ABCCF4C40DFC47BF9F73113FC1_gshared_inline (Enumerator_t8BE931B9A2DEECD2A7AB98E695A9EF38672D8442 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9F83FF061862906EC22FBF347D3A4679404AD7B5_gshared_inline (KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int64_t KeyValuePair_2_get_Value_mC744B4139952F6175332F5637910AE8CD932E17E_gshared_inline (KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3D0ABAE9E5E79CB850E79C51F9650B815542B728_gshared (Enumerator_t8BE931B9A2DEECD2A7AB98E695A9EF38672D8442 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m964C042D84BDB69694D8DB9AFEE7CD6385696BBA_gshared (Enumerator_t8BE931B9A2DEECD2A7AB98E695A9EF38672D8442 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m49DF9C740695D8CEFB5DC06C47C403A1150EBB41_gshared (Dictionary_2_tA4C40E906DE6517EEA62C7FEB1A70D09BD7EC92B * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mED5FE4B3F58CB7DC42ECF61798C1B7310DF341BC_gshared (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* List_1_ToArray_mB405B72C20F5422B845AF098E7809D10F58A25DE_gshared (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, const RuntimeMethod* method);
// !0 UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1<System.Object>::FindItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SingleCollectionCatalogAsset_1_FindItem_m5D796FDA48B338E789F6225ABF9E9496BFE2D9E3_gshared (SingleCollectionCatalogAsset_1_t2EF745F92C35338D998D797C9C5AE397FEFD71D2 * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.TransactionExchangeData>::Resolve(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Completer_1_Resolve_mBA247FFA9426F22B8EDAD713F188330D46CA7018_gshared (Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423 * __this, TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.TransactionExchangeData>::Reject(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Completer_1_Reject_m54125D7C264AEB5AC200C1D1A45F5C10C8658EC5_gshared (Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423 * __this, Exception_t * ___reason0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m5F75B759981549BBED512E3BA623715591C849AD_gshared (Dictionary_2_tA4C40E906DE6517EEA62C7FEB1A70D09BD7EC92B * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649  List_1_GetEnumerator_mFFAA67A6EE2BD1AB710D4CBA0349C5E921BEED7D_gshared (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.Data.InventoryItemData>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  Enumerator_get_Current_m356BA8F142DE34D3AEAC6E1B7E5727334AFE4A82_gshared_inline (Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.Data.InventoryItemData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD347A2D3614B42E67980978F6FC1830F4A0D0FA2_gshared (Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.Data.InventoryItemData>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m014B02D27BC94C1B69BF39A307251357F2DEF53B_gshared (Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.VirtualTransactionExchangeData>::Resolve(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Completer_1_Resolve_m80FD1826B75CBBE1F2347FE41D8BB53A06111D5B_gshared (Completer_1_t5A0C8B591E66EA24FBD4B87E915D7E37AFC1CA58 * __this, VirtualTransactionExchangeData_tB70E38408B081AA5E1F5A80AF37C128CD8C23060  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.VirtualTransactionExchangeData>::Reject(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Completer_1_Reject_m777002F7DA44769394BBE625A2DF4870FBD9B1B6_gshared (Completer_1_t5A0C8B591E66EA24FBD4B87E915D7E37AFC1CA58 * __this, Exception_t * ___reason0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.Pool`1<System.Object>::.ctor(System.Func`1<!0>,System.Action`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_1__ctor_m86226BDFE305698F4E041E2CB8E87654CE4C6471_gshared (Pool_1_t155FE6A7FDC3F1DC7D9854F41414EA84948A9F32 * __this, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * ___create0, Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___release1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9DF265560E0235B28378496E47309E6063B206F4_gshared (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mF04E8638626A1F44AAC6A72BCF3621E6DAE148F2_gshared (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m66ADF7E1A5EC3DF31D722559E97AF62D7DE51FA6_gshared (Dictionary_2_tA4C40E906DE6517EEA62C7FEB1A70D09BD7EC92B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mD347CBFA1E9409F725B502EE58857D0555A3B1AA_gshared (Dictionary_2_tA4C40E906DE6517EEA62C7FEB1A70D09BD7EC92B * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC7FD6CF59297FB2322612B6D443EF51046619AD0_gshared_inline (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE546EABF6216974CFED1F14A5A9C63B1C5F10AD6_gshared (Dictionary_2_t3C862AAE7817B51BCEE5BBD5418AACFCC1D6F673 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF4841F0BE6F62D5B5B5BFCDC57A0D16AD0AB8C1_gshared (Dictionary_2_t3C862AAE7817B51BCEE5BBD5418AACFCC1D6F673 * __this, RuntimeObject * ___key0, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mCE8FD6F21718F53E044CE1168893389E6E9974CC_gshared (Dictionary_2_t3C862AAE7817B51BCEE5BBD5418AACFCC1D6F673 * __this, RuntimeObject * ___key0, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t9724DB240E105DDA19B393C4835E14B2F1464FDC * Dictionary_2_get_Values_mE3DA8965110E3E10E7B8F94DA92B66F4215C8F4B_gshared (Dictionary_2_t3C862AAE7817B51BCEE5BBD5418AACFCC1D6F673 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3AC3965C6BFCD0E63A7EE4F079227CE2C3A7DFAB  ValueCollection_GetEnumerator_m0B5B05F3510CD7827E1D9B7F314300008EE764B5_gshared (ValueCollection_t9724DB240E105DDA19B393C4835E14B2F1464FDC * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  Enumerator_get_Current_m1D948FA839E563AE149DBA8AA49945608465FD8C_gshared_inline (Enumerator_t3AC3965C6BFCD0E63A7EE4F079227CE2C3A7DFAB * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m407A1AF153BBDFA7528F9C13A97F02E5BB726DF8_gshared (Enumerator_t3AC3965C6BFCD0E63A7EE4F079227CE2C3A7DFAB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m6BC2A1CF3DB33E75072605D5DBBD73C09FF485B9_gshared (Enumerator_t3AC3965C6BFCD0E63A7EE4F079227CE2C3A7DFAB * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFC36C4FFDB091826A9DFD4E34D9D4E5D473340CB_gshared (Dictionary_2_t3C862AAE7817B51BCEE5BBD5418AACFCC1D6F673 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.GameFoundation.Property>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m029984A5492B31079B0C81C67621D825720056D8_gshared (Dictionary_2_t96ADADCEB72B116C1720C2427A80150D01668720 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.GameFoundation.Property>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCB3F8BE3B2F729B8717C7CF3095568887CF42D70  Dictionary_2_GetEnumerator_mC16092F2D86C2FF3F8B9F7C718CAC5D0631B15AE_gshared (Dictionary_2_t96ADADCEB72B116C1720C2427A80150D01668720 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.GameFoundation.Property>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E  Enumerator_get_Current_m7361FF1D80659C4783B41EFCFE4C2E984F3B2746_gshared_inline (Enumerator_tCB3F8BE3B2F729B8717C7CF3095568887CF42D70 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.GameFoundation.Property>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mC4743FEA40F9FCD0C9B4CB8EA2E62A40A3343A56_gshared_inline (KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.GameFoundation.Property>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  KeyValuePair_2_get_Value_mB9B4E54A14AE48282FBCDD34FB62FA20EB70C659_gshared_inline (KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.GameFoundation.Property>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m60E1EF5A9BB93202D5530861D4484648BE23DAEB_gshared (Enumerator_tCB3F8BE3B2F729B8717C7CF3095568887CF42D70 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.GameFoundation.Property>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB17818BEF6027D54ACF6C05D9690261D6D750347_gshared (Enumerator_tCB3F8BE3B2F729B8717C7CF3095568887CF42D70 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA4FCE6C1B272343D3B6DCC2FCC7F6CF91CC90E81_gshared (Dictionary_2_t3C862AAE7817B51BCEE5BBD5418AACFCC1D6F673 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1828C7E57AB499530F12A8010F7D4A8E8469C359_gshared (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.PropertyData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8F4520370F3B03E1E4C822C3300DE506E2286A9E_gshared (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.GameFoundation.Property>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1358AB29E1C684F29766E06AB6F76AA4B506C901_gshared (Dictionary_2_t96ADADCEB72B116C1720C2427A80150D01668720 * __this, RuntimeObject * ___key0, Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.GameFoundation.Property>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  Dictionary_2_get_Item_mA70EB81FCCA498C0FD821F7EB04E5DC067D78E25_gshared (Dictionary_2_t96ADADCEB72B116C1720C2427A80150D01668720 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.PropertyData>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m227CF67D0E03C8F0327AC5C42706CA77F8EF4179_gshared (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * __this, PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.PropertyData>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2  List_1_GetEnumerator_m528C0D47C249BF65C793C952FE9AC1F32BDCF374_gshared (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.Data.PropertyData>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  Enumerator_get_Current_m89363CF89DC816FAF8DC920261607529997CFA11_gshared_inline (Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.Data.PropertyData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m46FED2735DD1276C929694AEC6C74FB20CED1BF3_gshared (Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.Data.PropertyData>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2DEB8F0492890C1A4F49B99312409D7FEB7600B5_gshared (Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.PropertyData>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* List_1_ToArray_mE20291164A306DD09DB55E3E3070ED179E82622F_gshared (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.PropertyData>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mFF2FBF0587AD0204632D836F27CDD8D47F091975_gshared (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC28B80DE30D79FE7903FA0A57C88718BD4E68D75_gshared (Dictionary_2_t3C862AAE7817B51BCEE5BBD5418AACFCC1D6F673 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>::CopyTo(!1[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_mDBF04BDF0E94AB0E4AF7F60DCA819E7FC74767E2_gshared (ValueCollection_t9724DB240E105DDA19B393C4835E14B2F1464FDC * __this, InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.GameFoundation.Data.InventoryItemData>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3EA9B35EC45DB28D8D9CCB875F1188E6C2A589AF_gshared (Dictionary_2_t3C862AAE7817B51BCEE5BBD5418AACFCC1D6F673 * __this, RuntimeObject * ___key0, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<UnityEngine.GameFoundation.Data.GameFoundationData>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  JsonUtility_FromJson_TisGameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6_m15406CDCA3935580C05949EA06D83B073A108ACC_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.GameFoundation.Data.GameFoundationData>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m9B0F57DB4870BEFB17155B9714C417484F261509_gshared (Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9 * __this, GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.GameFoundation.Data.GameFoundationData>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m4D76A4607B5FA7911ADB40D45263645DF4B9476D_gshared (Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mD7C2A4D0C27F7FF472F9A4DFD1733F6B0811161D_gshared (Dictionary_2_tA4C40E906DE6517EEA62C7FEB1A70D09BD7EC92B * __this, RuntimeObject * ___key0, int64_t ___value1, const RuntimeMethod* method);
// !0 UnityEngine.GameFoundation.SingleCollectionCatalog`1<System.Object>::FindItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SingleCollectionCatalog_1_FindItem_m544B986A1E03D1E346C12C8056E4B9E3F28B7649_gshared (SingleCollectionCatalog_1_t1FC400CE7CB7D92ADED83F314702AAB590C8B7C2 * __this, String_t* ___key0, const RuntimeMethod* method);
// UnityEngine.Promise.Rejectable UnityEngine.Promise.Completer`1<System.Int64>::op_Implicit(UnityEngine.Promise.Completer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9  Completer_1_op_Implicit_m2270066DB6F3FA36F9792DD9EE94675A0058E685_gshared (Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF  ___completer0, const RuntimeMethod* method);
// System.Void UnityEngine.Promise.Completer`1<System.Int64>::Resolve(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Completer_1_Resolve_m0D04A8F71359B3DB2441772F6DC587A7384CCDD0_gshared (Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Promise.Completer`1<System.Int64>::Reject(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Completer_1_Reject_mDBEEB6BED718F4542F596C27F3127EE1DE5A772C_gshared (Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF * __this, Exception_t * ___reason0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabaseSettings::get_database()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * GameFoundationDatabaseSettings_get_database_mF23240EA31680209B29B6E7279B090DD12F0FF79 (const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::.ctor(UnityEngine.GameFoundation.Data.InventoryManagerData,UnityEngine.GameFoundation.DefaultCatalog.InventoryCatalogAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryDataLayer__ctor_mDEA42D12DC25222460E5EF1A08B69C035360ADE9 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  ___data0, InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * ___catalog1, const RuntimeMethod* method);
// !0 UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>>::Get()
inline List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * Pool_1_Get_m6A7BAE1A3FB386BB0D9D6EFA101DB19FBF0FBE83 (Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE * __this, const RuntimeMethod* method)
{
	return ((  List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * (*) (Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE *, const RuntimeMethod*))Pool_1_Get_mEE9656FE969FA0F5330DFA5739931F172E9E9680_gshared)(__this, method);
}
// !0 UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>>::Get()
inline List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * Pool_1_Get_m8ABE7C375AD92E938713B1ACFD205A4B67B3A1FD (Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 * __this, const RuntimeMethod* method)
{
	return ((  List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * (*) (Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 *, const RuntimeMethod*))Pool_1_Get_mEE9656FE969FA0F5330DFA5739931F172E9E9680_gshared)(__this, method);
}
// System.Int32 UnityEngine.GameFoundation.DefaultCatalog.TransactionExchangeDefinitionObject::GetCurrencies(System.Collections.Generic.ICollection`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransactionExchangeDefinitionObject_GetCurrencies_mCC3E02B59DD081242F1BE0C3AB2F9BD907F9EC0A (TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * __this, RuntimeObject* ___target0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>::GetEnumerator()
inline Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07  List_1_GetEnumerator_mD39522672E1E11B7F5AD2D0EDE747F7F79498549 (List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07  (*) (List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>::get_Current()
inline CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511 * Enumerator_get_Current_mF68A23696A474C4CA73F9146E127D23E25EC68BF_inline (Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07 * __this, const RuntimeMethod* method)
{
	return ((  CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511 * (*) (Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject::get_currency()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * CurrencyExchangeObject_get_currency_m092564FE78419E8628BC981E957AD336420335E6_inline (CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameFoundation.DefaultCatalog.CatalogItemAsset::get_key()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* CatalogItemAsset_get_key_mEDAC681266C93C18BF4F35175B862529395FE2AC_inline (CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mC7583ABC280CFC4A1BA68817E5CD15A1E5105490 (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * __this, String_t* ___key0, int64_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 *, String_t*, int64_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mB6383BC87DEAB111ED7A3F693345ADA5C57C44E0_gshared)(__this, ___key0, ___value1, method);
}
// System.Int64 UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject::get_amount()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t CurrencyExchangeObject_get_amount_mD84B11BDB6B8E8E049BEE368E515E4411B08B932_inline (CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m10A9075140115FE57059AA1509076C79C12C5BE0 (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * __this, String_t* ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 *, String_t*, int64_t, const RuntimeMethod*))Dictionary_2_set_Item_m0DFEA11F9293B04DF1FDCD64B24E62CAD9A2F526_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>::MoveNext()
inline bool Enumerator_MoveNext_mEF97D497D7D4524AD8360A5CA210E74EA5512A9C (Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>::Dispose()
inline void Enumerator_Dispose_m9B57D9A2658B59A61E773DF37557E2098F7BD515 (Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Int32 UnityEngine.GameFoundation.DefaultCatalog.TransactionExchangeDefinitionObject::GetItems(System.Collections.Generic.ICollection`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransactionExchangeDefinitionObject_GetItems_mAB934522983702725F2F1ECE562684731CEFCB41 (TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * __this, RuntimeObject* ___target0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>::GetEnumerator()
inline Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128  List_1_GetEnumerator_m655F49E22992FCDB0E9FF859F4BAFCB5D4C5D5D2 (List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128  (*) (List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>::get_Current()
inline ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * Enumerator_get_Current_m9660566D40EAE1F4FE6C7204E6E2BC119FE6383F_inline (Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128 * __this, const RuntimeMethod* method)
{
	return ((  ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * (*) (Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject::get_item()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * ItemExchangeDefinitionObject_get_item_m90A2A46981A2F4DF17F7D31C95F5064364E1A93C_inline (ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject::get_amount()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t ItemExchangeDefinitionObject_get_amount_m1D6BA642E44F09ADAAAF934E27CE4F20A7BDA5C0_inline (ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>::MoveNext()
inline bool Enumerator_MoveNext_m65E12AD9CF3991BD0770C55374465EDAA7F6E0EC (Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>::Dispose()
inline void Enumerator_Dispose_m25C59272D93AA021CE6A41D6F97FFAAFEDA37D97 (Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>>::Release(!0)
inline void Pool_1_Release_m9485F723B5C79082DE25C6D239348300E9D7DC03 (Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE * __this, List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * ___pooled0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE *, List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 *, const RuntimeMethod*))Pool_1_Release_mA633196A0D4CF4A8CF221CFF6131DD983B15D3FA_gshared)(__this, ___pooled0, method);
}
// System.Void UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>>::Release(!0)
inline void Pool_1_Release_m793291285401D639B357B7909A3E719D793B0297 (Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 * __this, List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * ___pooled0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 *, List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD *, const RuntimeMethod*))Pool_1_Release_mA633196A0D4CF4A8CF221CFF6131DD983B15D3FA_gshared)(__this, ___pooled0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::GetEnumerator()
inline Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274  Dictionary_2_GetEnumerator_mC1A5F815C548A3037CBF3E1B28DFB3229669AA4D (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274  (*) (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m5D2A3366C86E5C3EDCFAD125D880A77F7A165309_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::get_Current()
inline KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  Enumerator_get_Current_m7D3D5EEF5CDBD2A9038C0C7623BEA0CF2424B948_inline (Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  (*) (Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *, const RuntimeMethod*))Enumerator_get_Current_mE913D8E85D6164ABCCF4C40DFC47BF9F73113FC1_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_inline (KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9F83FF061862906EC22FBF347D3A4679404AD7B5_gshared_inline)(__this, method);
}
// System.Int64 UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::GetBalance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WalletDataLayer_GetBalance_m0B6AE94C1AC57E11DA221E0FFA8D945174296E8A (WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * __this, String_t* ___currencyKey0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::get_Value()
inline int64_t KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_inline (KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 * __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC744B4139952F6175332F5637910AE8CD932E17E_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GameFoundation.Exceptions.NotEnoughBalanceException::.ctor(System.String,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEnoughBalanceException__ctor_m3443EDA82EA563CD7AEAA59028F8D6B48E9609B8 (NotEnoughBalanceException_t8725064370F4B7239E3923981D1699020E95D968 * __this, String_t* ___currencyKey0, int64_t ___expectedBalance1, int64_t ___actualBalance2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::MoveNext()
inline bool Enumerator_MoveNext_mCA3E427659BA0100C56CC0ED0305444051B6FCDD (Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *, const RuntimeMethod*))Enumerator_MoveNext_m3D0ABAE9E5E79CB850E79C51F9650B815542B728_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::Dispose()
inline void Enumerator_Dispose_m2BC3322527E84E907571F92C1F45DBFBD17B177C (Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *, const RuntimeMethod*))Enumerator_Dispose_m964C042D84BDB69694D8DB9AFEE7CD6385696BBA_gshared)(__this, method);
}
// System.Int32 UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::GetItemsByDefinition(System.String,System.Collections.Generic.ICollection`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InventoryDataLayer_GetItemsByDefinition_m07703C98D1A25AEF9576C7B43C9B34F270B3138F (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___key0, RuntimeObject* ___target1, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.Exceptions.NotEnoughItemOfDefinitionException::.ctor(System.String,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEnoughItemOfDefinitionException__ctor_m957300B4A5225B5766198B91E428DF7DBC055859 (NotEnoughItemOfDefinitionException_t58B3EB9CF7CE086694A394BCBE0F69B73FBBD567 * __this, String_t* ___definitionKey0, int64_t ___expectedCount1, int64_t ___actualCount2, const RuntimeMethod* method);
// !0 UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<System.String>>::Get()
inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * Pool_1_Get_m03084416E082F0015B60A01C000812B808DF0249 (Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18 * __this, const RuntimeMethod* method)
{
	return ((  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * (*) (Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18 *, const RuntimeMethod*))Pool_1_Get_mEE9656FE969FA0F5330DFA5739931F172E9E9680_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D  List_1_GetEnumerator_mE24C416317D3F4E40A03014ED01FDE0F4FFDC8BE (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D  (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m42A600F939D181CE139B9C26F825FD4BC28F6F1B_inline (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::TryGetItem(System.String,UnityEngine.GameFoundation.Data.InventoryItemData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InventoryDataLayer_TryGetItem_mFB1E28B8164007193265AE3EC2EC0D3111734E92 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___id0, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 * ___item1, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.Exceptions.InventoryItemNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItemNotFoundException__ctor_mFE85B44B53517F567DE65E88F121B4A23B963FF5 (InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C * __this, String_t* ___id0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Remove(!0)
inline bool Dictionary_2_Remove_mE767F3B4BE934228D3BAFB3CBCDC64D06D0693FF (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m49DF9C740695D8CEFB5DC06C47C403A1150EBB41_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mB55179B6FAFF356F8635980C5BE36716D5A3CF7F (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_mBFE61DBAEB92C4FB64F6B1ACF2E895D0467CE1E4 (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<System.String>>::Release(!0)
inline void Pool_1_Release_m815FA069BF4413394CD9C8FF516196A6CBA11594 (Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18 * __this, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___pooled0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18 *, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))Pool_1_Release_mA633196A0D4CF4A8CF221CFF6131DD983B15D3FA_gshared)(__this, ___pooled0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// !0 UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>>::Get()
inline List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * Pool_1_Get_m105A85E166ECC96409BB262DC6017F188148B292 (Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D * __this, const RuntimeMethod* method)
{
	return ((  List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * (*) (Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D *, const RuntimeMethod*))Pool_1_Get_mEE9656FE969FA0F5330DFA5739931F172E9E9680_gshared)(__this, method);
}
// UnityEngine.GameFoundation.DefaultCatalog.TransactionExchangeDefinitionObject UnityEngine.GameFoundation.DefaultCatalog.BaseTransactionAsset::get_rewards()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * BaseTransactionAsset_get_rewards_m4E5649CD3D00C240C3D82EA6558C057E0009C7CA_inline (BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>::get_Count()
inline int32_t List_1_get_Count_mA230906021D807D05569C2A2CA765BEFC4A0EF37_inline (List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Int64 UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::AdjustBalance(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WalletDataLayer_AdjustBalance_m3B27A52270BB6DD218741F0E357C8E873A16075D (WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * __this, String_t* ___currencyKey0, int64_t ___amount1, const RuntimeMethod* method);
// UnityEngine.GameFoundation.Data.InventoryItemData UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::CreateItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  InventoryDataLayer_CreateItem_m7CA6500F145602BB6CD82EE2DDB9F68EEEBD7CA8 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>::Add(!0)
inline void List_1_Add_mED5FE4B3F58CB7DC42ECF61798C1B7310DF341BC (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 *, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 , const RuntimeMethod*))List_1_Add_mED5FE4B3F58CB7DC42ECF61798C1B7310DF341BC_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>::ToArray()
inline InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* List_1_ToArray_mB405B72C20F5422B845AF098E7809D10F58A25DE (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, const RuntimeMethod* method)
{
	return ((  InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* (*) (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 *, const RuntimeMethod*))List_1_ToArray_mB405B72C20F5422B845AF098E7809D10F58A25DE_gshared)(__this, method);
}
// System.Void UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>>::Release(!0)
inline void Pool_1_Release_m518A1F3F1806EEFD042D2C6F2EE5408649A1C10D (Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D * __this, List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * ___pooled0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D *, List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 *, const RuntimeMethod*))Pool_1_Release_mA633196A0D4CF4A8CF221CFF6131DD983B15D3FA_gshared)(__this, ___pooled0, method);
}
// UnityEngine.GameFoundation.DefaultCatalog.TransactionCatalogAsset UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase::get_transactionCatalog()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransactionCatalogAsset_t2B59953008F38A51B99AD36CC58D041F7ED6F543 * GameFoundationDatabase_get_transactionCatalog_m147EC786FBCAC867EB2ADB20778FBFAEB5B8E904_inline (GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * __this, const RuntimeMethod* method);
// !0 UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1<UnityEngine.GameFoundation.DefaultCatalog.BaseTransactionAsset>::FindItem(System.String)
inline BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961 * SingleCollectionCatalogAsset_1_FindItem_mE819FEAB7F9BE1073C5E4D3544DFB337EF4370F3 (SingleCollectionCatalogAsset_1_t0AEB8D3A8A1C252101C9591594F382A9DAD1339D * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961 * (*) (SingleCollectionCatalogAsset_1_t0AEB8D3A8A1C252101C9591594F382A9DAD1339D *, String_t*, const RuntimeMethod*))SingleCollectionCatalogAsset_1_FindItem_m5D796FDA48B338E789F6225ABF9E9496BFE2D9E3_gshared)(__this, ___key0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.GameFoundation.Data.TransactionExchangeData UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::ApplyRewards(UnityEngine.GameFoundation.DefaultCatalog.BaseTransactionAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  BaseMemoryDataLayer_ApplyRewards_m683D4C8EC3BD1051F1227D9AAC1D77D938021CA8 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961 * ___transaction0, const RuntimeMethod* method);
// System.Void UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.TransactionExchangeData>::Resolve(!0)
inline void Completer_1_Resolve_mBA247FFA9426F22B8EDAD713F188330D46CA7018 (Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423 * __this, TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423 *, TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89 , const RuntimeMethod*))Completer_1_Resolve_mBA247FFA9426F22B8EDAD713F188330D46CA7018_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.TransactionExchangeData>::Reject(System.Exception)
inline void Completer_1_Reject_m54125D7C264AEB5AC200C1D1A45F5C10C8658EC5 (Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423 * __this, Exception_t * ___reason0, const RuntimeMethod* method)
{
	((  void (*) (Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423 *, Exception_t *, const RuntimeMethod*))Completer_1_Reject_m54125D7C264AEB5AC200C1D1A45F5C10C8658EC5_gshared)(__this, ___reason0, method);
}
// !0 UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.Dictionary`2<System.String,System.Int64>>::Get()
inline Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * Pool_1_Get_m0FC0D0EE032FF5D1FA01FDCCDA3D744DC32548C3 (Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB * __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * (*) (Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB *, const RuntimeMethod*))Pool_1_Get_mEE9656FE969FA0F5330DFA5739931F172E9E9680_gshared)(__this, method);
}
// UnityEngine.GameFoundation.DefaultCatalog.TransactionExchangeDefinitionObject UnityEngine.GameFoundation.DefaultCatalog.VirtualTransactionAsset::get_costs()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * VirtualTransactionAsset_get_costs_mC404FD615A7BC65DFF5F1D664BE10F6A32001723_inline (VirtualTransactionAsset_t9D9A79A9D9D70B07143D90FFCD81F5316F14CE54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::ConsolidateTransactionExchange(UnityEngine.GameFoundation.DefaultCatalog.TransactionExchangeDefinitionObject,System.Collections.Generic.Dictionary`2<System.String,System.Int64>,System.Collections.Generic.Dictionary`2<System.String,System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_ConsolidateTransactionExchange_m573871562AA1E7E5F9FBD670EBA2AAAB4C862692 (TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * ___transactionExchange0, Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * ___currencies1, Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * ___items2, const RuntimeMethod* method);
// !0 UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<System.Exception>>::Get()
inline List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * Pool_1_Get_mB53ED92EAFF03B7CBBE50C0A394F852A796F4835 (Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A * __this, const RuntimeMethod* method)
{
	return ((  List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * (*) (Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A *, const RuntimeMethod*))Pool_1_Get_mEE9656FE969FA0F5330DFA5739931F172E9E9680_gshared)(__this, method);
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::VerifyCost(System.Collections.Generic.Dictionary`2<System.String,System.Int64>,System.Collections.Generic.Dictionary`2<System.String,System.Int64>,System.Collections.Generic.ICollection`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_VerifyCost_m2388164042B46B3EE53A6E0EEF3021CD58235810 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * ___currencies0, Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * ___items1, RuntimeObject* ___exceptions2, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::VerifyItemPayload(System.Collections.Generic.ICollection`1<System.String>,System.Collections.Generic.Dictionary`2<System.String,System.Int64>,System.Collections.Generic.ICollection`1<UnityEngine.GameFoundation.Data.InventoryItemData>,System.Collections.Generic.ICollection`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_VerifyItemPayload_m664336F2D55B374DB993E6E481CB29525386CCD7 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, RuntimeObject* ___counterparts0, Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * ___requirements1, RuntimeObject* ___consumed2, RuntimeObject* ___exceptions3, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
inline int32_t List_1_get_Count_m6189DDF6BE78B680B0C3CD0D8F6D224241883B68_inline (List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateException__ctor_m1740971CC345A49D8FCB7DDE6C905FB0F3353C28 (AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * __this, RuntimeObject* ___innerExceptions0, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<System.Exception>>::Release(!0)
inline void Pool_1_Release_mE426A36D9DFBD7748B0E45FFB939A2ABFDF0EB14 (Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A * __this, List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * ___pooled0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A *, List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A *, const RuntimeMethod*))Pool_1_Release_mA633196A0D4CF4A8CF221CFF6131DD983B15D3FA_gshared)(__this, ___pooled0, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count()
inline int32_t Dictionary_2_get_Count_m51F855E8CD8525A5BB0B17B6108DAA36C6F14E3C (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 *, const RuntimeMethod*))Dictionary_2_get_Count_m5F75B759981549BBED512E3BA623715591C849AD_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>::GetEnumerator()
inline Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649  List_1_GetEnumerator_mFFAA67A6EE2BD1AB710D4CBA0349C5E921BEED7D (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649  (*) (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 *, const RuntimeMethod*))List_1_GetEnumerator_mFFAA67A6EE2BD1AB710D4CBA0349C5E921BEED7D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.Data.InventoryItemData>::get_Current()
inline InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  Enumerator_get_Current_m356BA8F142DE34D3AEAC6E1B7E5727334AFE4A82_inline (Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 * __this, const RuntimeMethod* method)
{
	return ((  InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  (*) (Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 *, const RuntimeMethod*))Enumerator_get_Current_m356BA8F142DE34D3AEAC6E1B7E5727334AFE4A82_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::DeleteItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InventoryDataLayer_DeleteItem_m23AA189A113E989E713B6402140EDD9F60E954BC (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___id0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.Data.InventoryItemData>::MoveNext()
inline bool Enumerator_MoveNext_mD347A2D3614B42E67980978F6FC1830F4A0D0FA2 (Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 *, const RuntimeMethod*))Enumerator_MoveNext_mD347A2D3614B42E67980978F6FC1830F4A0D0FA2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.Data.InventoryItemData>::Dispose()
inline void Enumerator_Dispose_m014B02D27BC94C1B69BF39A307251357F2DEF53B (Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 *, const RuntimeMethod*))Enumerator_Dispose_m014B02D27BC94C1B69BF39A307251357F2DEF53B_gshared)(__this, method);
}
// System.Void UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.VirtualTransactionExchangeData>::Resolve(!0)
inline void Completer_1_Resolve_m80FD1826B75CBBE1F2347FE41D8BB53A06111D5B (Completer_1_t5A0C8B591E66EA24FBD4B87E915D7E37AFC1CA58 * __this, VirtualTransactionExchangeData_tB70E38408B081AA5E1F5A80AF37C128CD8C23060  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Completer_1_t5A0C8B591E66EA24FBD4B87E915D7E37AFC1CA58 *, VirtualTransactionExchangeData_tB70E38408B081AA5E1F5A80AF37C128CD8C23060 , const RuntimeMethod*))Completer_1_Resolve_m80FD1826B75CBBE1F2347FE41D8BB53A06111D5B_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.Dictionary`2<System.String,System.Int64>>::Release(!0)
inline void Pool_1_Release_mD790AB072ADB365B08C7D64C049826EC6A9596B0 (Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB * __this, Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * ___pooled0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB *, Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 *, const RuntimeMethod*))Pool_1_Release_mA633196A0D4CF4A8CF221CFF6131DD983B15D3FA_gshared)(__this, ___pooled0, method);
}
// System.Void UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.VirtualTransactionExchangeData>::Reject(System.Exception)
inline void Completer_1_Reject_m777002F7DA44769394BBE625A2DF4870FBD9B1B6 (Completer_1_t5A0C8B591E66EA24FBD4B87E915D7E37AFC1CA58 * __this, Exception_t * ___reason0, const RuntimeMethod* method)
{
	((  void (*) (Completer_1_t5A0C8B591E66EA24FBD4B87E915D7E37AFC1CA58 *, Exception_t *, const RuntimeMethod*))Completer_1_Reject_m777002F7DA44769394BBE625A2DF4870FBD9B1B6_gshared)(__this, ___reason0, method);
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::RedeemIap(System.String,UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.TransactionExchangeData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_RedeemIap_m53E81AC1589284E90C1028B1F274C09F727CD882 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, String_t* ___key0, Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423  ___completer1, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::.ctor(UnityEngine.GameFoundation.Data.WalletData,UnityEngine.GameFoundation.DefaultCatalog.CurrencyCatalogAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WalletDataLayer__ctor_m94646596B1378BDE36EDDAD59EABE0EC1039C44B (WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * __this, WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  ___data0, CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 * ___catalog1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m3DEEC8E97F306291257C5D51DEA99B62C3020702 (Func_1_t60E22F842BA86FDE2A99F8DD874CCE1F49EAB448 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t60E22F842BA86FDE2A99F8DD874CCE1F49EAB448 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1C358B6C23A18E0B273C0661086FF4CC3BA97A19 (Action_1_tB03796BBEE46B5AFBEA805E7D422268E5648AB46 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB03796BBEE46B5AFBEA805E7D422268E5648AB46 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>>::.ctor(System.Func`1<!0>,System.Action`1<!0>)
inline void Pool_1__ctor_mC0718AD299A29530658EE197FC04E0F161B74D3A (Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE * __this, Func_1_t60E22F842BA86FDE2A99F8DD874CCE1F49EAB448 * ___create0, Action_1_tB03796BBEE46B5AFBEA805E7D422268E5648AB46 * ___release1, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE *, Func_1_t60E22F842BA86FDE2A99F8DD874CCE1F49EAB448 *, Action_1_tB03796BBEE46B5AFBEA805E7D422268E5648AB46 *, const RuntimeMethod*))Pool_1__ctor_m86226BDFE305698F4E041E2CB8E87654CE4C6471_gshared)(__this, ___create0, ___release1, method);
}
// System.Void System.Func`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mE7417780873C167E51692850DE06ABECE885E5FD (Func_1_tE88EEE0B96B8324B3D1B14116159089F76B6497E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tE88EEE0B96B8324B3D1B14116159089F76B6497E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m07E2A7736F7B91BE227B9E3E49ABE88C19CCE58A (Action_1_t4C9357D898236E35BEEA05F76DE8C34B8FF5EF6C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4C9357D898236E35BEEA05F76DE8C34B8FF5EF6C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>>::.ctor(System.Func`1<!0>,System.Action`1<!0>)
inline void Pool_1__ctor_m2A4058A3DC1C190139E1F221FC5E8459029D5920 (Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 * __this, Func_1_tE88EEE0B96B8324B3D1B14116159089F76B6497E * ___create0, Action_1_t4C9357D898236E35BEEA05F76DE8C34B8FF5EF6C * ___release1, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 *, Func_1_tE88EEE0B96B8324B3D1B14116159089F76B6497E *, Action_1_t4C9357D898236E35BEEA05F76DE8C34B8FF5EF6C *, const RuntimeMethod*))Pool_1__ctor_m86226BDFE305698F4E041E2CB8E87654CE4C6471_gshared)(__this, ___create0, ___release1, method);
}
// System.Void System.Func`1<System.Collections.Generic.List`1<System.Exception>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mE41A8B0025EA83EA1D32B2110940BDE604AD5039 (Func_1_t424489991AE168C0DFF23714862850ABAAB683F6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t424489991AE168C0DFF23714862850ABAAB683F6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Collections.Generic.List`1<System.Exception>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m79EDF3F25EF119356554542C28AF856FEB2DFC7C (Action_1_tCB4CF566D79F662E724459D5BD25742D2375B190 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCB4CF566D79F662E724459D5BD25742D2375B190 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<System.Exception>>::.ctor(System.Func`1<!0>,System.Action`1<!0>)
inline void Pool_1__ctor_m37371B9C20BE830718CA1D13BC59A76FF5A765AC (Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A * __this, Func_1_t424489991AE168C0DFF23714862850ABAAB683F6 * ___create0, Action_1_tCB4CF566D79F662E724459D5BD25742D2375B190 * ___release1, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A *, Func_1_t424489991AE168C0DFF23714862850ABAAB683F6 *, Action_1_tCB4CF566D79F662E724459D5BD25742D2375B190 *, const RuntimeMethod*))Pool_1__ctor_m86226BDFE305698F4E041E2CB8E87654CE4C6471_gshared)(__this, ___create0, ___release1, method);
}
// System.Void System.Func`1<System.Collections.Generic.List`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m751F6F38BA84A659ADE65E0D35F6735EAA7C6822 (Func_1_t40C51F5B2AE4E23C5A2C632CAB7292B16444953F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t40C51F5B2AE4E23C5A2C632CAB7292B16444953F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Collections.Generic.List`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFA4CE4D8ECBA3BF12EA3E9D1F5A8D49694CA1981 (Action_1_t9C3E2FDBB284E0602F2CD1FCE3CBB76F3C83FB3E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9C3E2FDBB284E0602F2CD1FCE3CBB76F3C83FB3E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<System.String>>::.ctor(System.Func`1<!0>,System.Action`1<!0>)
inline void Pool_1__ctor_m9BA047F1F4AD80CF4C65A9573E7E9798C1A8E88C (Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18 * __this, Func_1_t40C51F5B2AE4E23C5A2C632CAB7292B16444953F * ___create0, Action_1_t9C3E2FDBB284E0602F2CD1FCE3CBB76F3C83FB3E * ___release1, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18 *, Func_1_t40C51F5B2AE4E23C5A2C632CAB7292B16444953F *, Action_1_t9C3E2FDBB284E0602F2CD1FCE3CBB76F3C83FB3E *, const RuntimeMethod*))Pool_1__ctor_m86226BDFE305698F4E041E2CB8E87654CE4C6471_gshared)(__this, ___create0, ___release1, method);
}
// System.Void System.Func`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m48D6BF77D2362183F11CCB5A919D517850AE981A (Func_1_t55FC41E651B445E42D4EA8EB2618F7F57FE8E776 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t55FC41E651B445E42D4EA8EB2618F7F57FE8E776 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDDADC3A7E2388BD7EC445DAB0B9A910CBC45C7FB (Action_1_tF8D742FF2C7432253A3F24F44BFB5042ACC70F7E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF8D742FF2C7432253A3F24F44BFB5042ACC70F7E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>>::.ctor(System.Func`1<!0>,System.Action`1<!0>)
inline void Pool_1__ctor_m64C861558265755BDDDDA83E9D590FEEBE1E65CA (Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D * __this, Func_1_t55FC41E651B445E42D4EA8EB2618F7F57FE8E776 * ___create0, Action_1_tF8D742FF2C7432253A3F24F44BFB5042ACC70F7E * ___release1, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D *, Func_1_t55FC41E651B445E42D4EA8EB2618F7F57FE8E776 *, Action_1_tF8D742FF2C7432253A3F24F44BFB5042ACC70F7E *, const RuntimeMethod*))Pool_1__ctor_m86226BDFE305698F4E041E2CB8E87654CE4C6471_gshared)(__this, ___create0, ___release1, method);
}
// System.Void System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m70E6DDB3FA636E66688FBA44805DF14ACF1510E5 (Func_1_t014E375EF334B5545E3B56A95E6E1F46487014E6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t014E375EF334B5545E3B56A95E6E1F46487014E6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m29E2A4E85B1A67E1903BD6CB8C5DF4E52AB4A374 (Action_1_t89246F556F01EA068B8CC8237694622FE3E7DAF7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t89246F556F01EA068B8CC8237694622FE3E7DAF7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.GameFoundation.Pool`1<System.Collections.Generic.Dictionary`2<System.String,System.Int64>>::.ctor(System.Func`1<!0>,System.Action`1<!0>)
inline void Pool_1__ctor_mEF639DF25BB9E3FC10DFB75536E3DD740BA0C159 (Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB * __this, Func_1_t014E375EF334B5545E3B56A95E6E1F46487014E6 * ___create0, Action_1_t89246F556F01EA068B8CC8237694622FE3E7DAF7 * ___release1, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB *, Func_1_t014E375EF334B5545E3B56A95E6E1F46487014E6 *, Action_1_t89246F556F01EA068B8CC8237694622FE3E7DAF7 *, const RuntimeMethod*))Pool_1__ctor_m86226BDFE305698F4E041E2CB8E87654CE4C6471_gshared)(__this, ___create0, ___release1, method);
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m10B74FB0B290B7FCDC6AA1F735EBF166C476343F (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>::.ctor()
inline void List_1__ctor_mAD533765AF4067C57E08DC1AE505AE55A4C384E9 (List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>::Clear()
inline void List_1_Clear_m4911195FE9B406E20BF6E4A91A9516EFCF9C6888 (List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>::.ctor()
inline void List_1__ctor_mCC584C29B683826A8745442F6C4AAF499B129345 (List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>::Clear()
inline void List_1_Clear_mA9E26157403FF3A3A8F0924400B385A3EEBE490C (List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor()
inline void List_1__ctor_m3CA9F30DC986E649F8E82AD69F5085D355D91AC1 (List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Exception>::Clear()
inline void List_1_Clear_mAFF5FCC778112D567ACD94E7C9BF12B2D4D3F245 (List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>::.ctor()
inline void List_1__ctor_m9DF265560E0235B28378496E47309E6063B206F4 (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 *, const RuntimeMethod*))List_1__ctor_m9DF265560E0235B28378496E47309E6063B206F4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>::Clear()
inline void List_1_Clear_mF04E8638626A1F44AAC6A72BCF3621E6DAE148F2 (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 *, const RuntimeMethod*))List_1_Clear_mF04E8638626A1F44AAC6A72BCF3621E6DAE148F2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor()
inline void Dictionary_2__ctor_mF5E99A779CC438267A3A001FDD447BCDEB834CD8 (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 *, const RuntimeMethod*))Dictionary_2__ctor_m66ADF7E1A5EC3DF31D722559E97AF62D7DE51FA6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Clear()
inline void Dictionary_2_Clear_m9FA6AF4B8A330D12BDA062B1ABD701B2414F7061 (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 *, const RuntimeMethod*))Dictionary_2_Clear_mD347CBFA1E9409F725B502EE58857D0555A3B1AA_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData> UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::GetValidItems(UnityEngine.GameFoundation.Data.InventoryManagerData,UnityEngine.GameFoundation.DefaultCatalog.InventoryCatalogAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * InventoryDataLayer_GetValidItems_mCE59294129027267C6E350E5E63062C769AF8D5D (InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  ___data0, InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * ___catalog1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>::get_Count()
inline int32_t List_1_get_Count_mC7FD6CF59297FB2322612B6D443EF51046619AD0_inline (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 *, const RuntimeMethod*))List_1_get_Count_mC7FD6CF59297FB2322612B6D443EF51046619AD0_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mA57B94D4742CD878E8265E600C4D7548D0DDF90C (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mE546EABF6216974CFED1F14A5A9C63B1C5F10AD6_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>::Add(!0,!1)
inline void Dictionary_2_Add_m39317B14AE57B950700B72A09464C9BBEDC1ED84 (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * __this, String_t* ___key0, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 *, String_t*, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 , const RuntimeMethod*))Dictionary_2_Add_mAF4841F0BE6F62D5B5B5BFCDC57A0D16AD0AB8C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m308EB25FBED07C9DBD8762182727C3AAC2D189D4 (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * __this, String_t* ___key0, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 *, String_t*, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 *, const RuntimeMethod*))Dictionary_2_TryGetValue_mCE8FD6F21718F53E044CE1168893389E6E9974CC_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.GameFoundation.Tools::ThrowIfArgNullOrEmpty(System.String,System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Tools_ThrowIfArgNullOrEmpty_m937FE947DD8528E8BEF39BF007FC83C60CF991AA_inline (String_t* ___value0, String_t* ___name1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>::get_Values()
inline ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56 * Dictionary_2_get_Values_m4C759A21D1BA2CF9A18839E633893B820FC740D3 (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56 * (*) (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 *, const RuntimeMethod*))Dictionary_2_get_Values_mE3DA8965110E3E10E7B8F94DA92B66F4215C8F4B_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>::GetEnumerator()
inline Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F  ValueCollection_GetEnumerator_m50ADDDB3B4C44E696B74592A088EDE8CD0FD8257 (ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F  (*) (ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m0B5B05F3510CD7827E1D9B7F314300008EE764B5_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>::get_Current()
inline InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  Enumerator_get_Current_mBA19190EA7134D32EA733222201695355B272ECD_inline (Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F * __this, const RuntimeMethod* method)
{
	return ((  InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  (*) (Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F *, const RuntimeMethod*))Enumerator_get_Current_m1D948FA839E563AE149DBA8AA49945608465FD8C_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>::MoveNext()
inline bool Enumerator_MoveNext_m2902C433DA1C3A67123A211B4BAC3BF8C806991B (Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F *, const RuntimeMethod*))Enumerator_MoveNext_m407A1AF153BBDFA7528F9C13A97F02E5BB726DF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>::Dispose()
inline void Enumerator_Dispose_m802C9606434944FAD9694BB1A656C6F56680E67F (Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F *, const RuntimeMethod*))Enumerator_Dispose_m6BC2A1CF3DB33E75072605D5DBBD73C09FF485B9_gshared)(__this, method);
}
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29 (const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5 (Guid_t * __this, const RuntimeMethod* method);
// UnityEngine.GameFoundation.Data.InventoryItemData UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::CreateItem(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  InventoryDataLayer_CreateItem_m545AC5C4C63BDC11E3D2BFC6642EBBFF6F259C65 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___key0, String_t* ___itemId1, const RuntimeMethod* method);
// !0 UnityEngine.GameFoundation.DefaultCatalog.SingleCollectionCatalogAsset`1<UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset>::FindItem(System.String)
inline InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * SingleCollectionCatalogAsset_1_FindItem_m8DE1ECC1E15C584B9D6D5AA8CE460F490FE2E9EB (SingleCollectionCatalogAsset_1_t1217B891F9CC0987698D178A74A22302E6CC02E3 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * (*) (SingleCollectionCatalogAsset_1_t1217B891F9CC0987698D178A74A22302E6CC02E3 *, String_t*, const RuntimeMethod*))SingleCollectionCatalogAsset_1_FindItem_m5D796FDA48B338E789F6225ABF9E9496BFE2D9E3_gshared)(__this, ___key0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.Exceptions.CatalogItemNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CatalogItemNotFoundException__ctor_m994FCCFF959FBEFB3D75FB34DA1FE39D1136C326 (CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05 * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m11725FFCE98867A4BADB62D2747E71CA7E0C807B (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mFC36C4FFDB091826A9DFD4E34D9D4E5D473340CB_gshared)(__this, ___key0, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.GameFoundation.Data.InventoryItemData UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::CreateItemNoCheck(UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  InventoryDataLayer_CreateItemNoCheck_m84F2405724B0B4DC42EF05CE82070E4210996EA7 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * ___itemDefinition0, String_t* ___itemId1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Property> UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset::get_properties()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * InventoryItemDefinitionAsset_get_properties_m7F90C4A334706B4FF51CE4390FF00296E4EEBC5E_inline (InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Property>::get_Count()
inline int32_t Dictionary_2_get_Count_m6C657CC81D30C953E50BBAA777237905FCD43C8A (Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 *, const RuntimeMethod*))Dictionary_2_get_Count_m029984A5492B31079B0C81C67621D825720056D8_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Property>::GetEnumerator()
inline Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F  Dictionary_2_GetEnumerator_mEF13A19FC6CAB881F4CF54646BDA2590A20022EF (Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F  (*) (Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mC16092F2D86C2FF3F8B9F7C718CAC5D0631B15AE_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GameFoundation.Property>::get_Current()
inline KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857  Enumerator_get_Current_m986900096F65631FC2F03BB6BD836662555CF9C2_inline (Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857  (*) (Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F *, const RuntimeMethod*))Enumerator_get_Current_m7361FF1D80659C4783B41EFCFE4C2E984F3B2746_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameFoundation.Property>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m90EC5C1FAFCD87594A0381F44DB565E2AE890850_inline (KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mC4743FEA40F9FCD0C9B4CB8EA2E62A40A3343A56_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameFoundation.Property>::get_Value()
inline Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  KeyValuePair_2_get_Value_m2DCC560EC657356BEE09C1B635A6F4B0B2090D97_inline (KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857 * __this, const RuntimeMethod* method)
{
	return ((  Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  (*) (KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mB9B4E54A14AE48282FBCDD34FB62FA20EB70C659_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GameFoundation.Property>::MoveNext()
inline bool Enumerator_MoveNext_m46A41074D7B10356393C5C3402A3763883F66CB7 (Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F *, const RuntimeMethod*))Enumerator_MoveNext_m60E1EF5A9BB93202D5530861D4484648BE23DAEB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GameFoundation.Property>::Dispose()
inline void Enumerator_Dispose_m6B4543F61030F72B3B87E9C17550986E0299D597 (Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F *, const RuntimeMethod*))Enumerator_Dispose_mB17818BEF6027D54ACF6C05D9690261D6D750347_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>::Remove(!0)
inline bool Dictionary_2_Remove_mDE9F5EECE65340FCBE65B7E0A93F9B9F61694D0E (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_mA4FCE6C1B272343D3B6DCC2FCC7F6CF91CC90E81_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>::.ctor(System.Int32)
inline void List_1__ctor_m1828C7E57AB499530F12A8010F7D4A8E8469C359 (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 *, int32_t, const RuntimeMethod*))List_1__ctor_m1828C7E57AB499530F12A8010F7D4A8E8469C359_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.PropertyData>::.ctor()
inline void List_1__ctor_m8F4520370F3B03E1E4C822C3300DE506E2286A9E (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 *, const RuntimeMethod*))List_1__ctor_m8F4520370F3B03E1E4C822C3300DE506E2286A9E_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Property>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mCF01EC967CE9CE7F149DAB04AD8EB257E2A440FA (Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * __this, String_t* ___key0, Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 *, String_t*, Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m1358AB29E1C684F29766E06AB6F76AA4B506C901_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.GameFoundation.Exceptions.PropertyNotFoundException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyNotFoundException__ctor_m25D4599343AAE909888AFA8C754F2A25537EC3B5 (PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7 * __this, String_t* ___itemId0, String_t* ___propertyKey1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// UnityEngine.GameFoundation.PropertyType UnityEngine.GameFoundation.Property::get_type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Property_get_type_m4C40EFB19CE65EE72F01A8827FDB2500EAADF433_inline (Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.Exceptions.PropertyInvalidCastException::.ctor(System.String,UnityEngine.GameFoundation.PropertyType,UnityEngine.GameFoundation.PropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyInvalidCastException__ctor_m584CF4F6BB5ADF7787AB0C434AE1950DF79E012B (PropertyInvalidCastException_tBFCD1DB7F89F6CA3AE59C2C52995F26E2C66EAA2 * __this, String_t* ___key0, int32_t ___expectedType1, int32_t ___givenType2, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Property>::get_Item(!0)
inline Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  Dictionary_2_get_Item_m867D501667B240E4D5D83BCB1875565D2DC85E33 (Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  (*) (Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mA70EB81FCCA498C0FD821F7EB04E5DC067D78E25_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.PropertyData>::Add(!0)
inline void List_1_Add_m227CF67D0E03C8F0327AC5C42706CA77F8EF4179 (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * __this, PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 *, PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5 , const RuntimeMethod*))List_1_Add_m227CF67D0E03C8F0327AC5C42706CA77F8EF4179_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.PropertyData>::GetEnumerator()
inline Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2  List_1_GetEnumerator_m528C0D47C249BF65C793C952FE9AC1F32BDCF374 (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2  (*) (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 *, const RuntimeMethod*))List_1_GetEnumerator_m528C0D47C249BF65C793C952FE9AC1F32BDCF374_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.Data.PropertyData>::get_Current()
inline PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  Enumerator_get_Current_m89363CF89DC816FAF8DC920261607529997CFA11_inline (Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2 * __this, const RuntimeMethod* method)
{
	return ((  PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  (*) (Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2 *, const RuntimeMethod*))Enumerator_get_Current_m89363CF89DC816FAF8DC920261607529997CFA11_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.Data.PropertyData>::MoveNext()
inline bool Enumerator_MoveNext_m46FED2735DD1276C929694AEC6C74FB20CED1BF3 (Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2 *, const RuntimeMethod*))Enumerator_MoveNext_m46FED2735DD1276C929694AEC6C74FB20CED1BF3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.Data.PropertyData>::Dispose()
inline void Enumerator_Dispose_m2DEB8F0492890C1A4F49B99312409D7FEB7600B5 (Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2 *, const RuntimeMethod*))Enumerator_Dispose_m2DEB8F0492890C1A4F49B99312409D7FEB7600B5_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.PropertyData>::ToArray()
inline PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* List_1_ToArray_mE20291164A306DD09DB55E3E3070ED179E82622F (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * __this, const RuntimeMethod* method)
{
	return ((  PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* (*) (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 *, const RuntimeMethod*))List_1_ToArray_mE20291164A306DD09DB55E3E3070ED179E82622F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.PropertyData>::Clear()
inline void List_1_Clear_mFF2FBF0587AD0204632D836F27CDD8D47F091975 (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 *, const RuntimeMethod*))List_1_Clear_mFF2FBF0587AD0204632D836F27CDD8D47F091975_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>::get_Count()
inline int32_t Dictionary_2_get_Count_m9DF02C2E30236E01494D77576674A472980F7448 (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 *, const RuntimeMethod*))Dictionary_2_get_Count_mC28B80DE30D79FE7903FA0A57C88718BD4E68D75_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>::CopyTo(!1[],System.Int32)
inline void ValueCollection_CopyTo_mE8BA34846D4732113FCC7AF2852E6D0C8890CA7F (ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56 * __this, InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56 *, InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24*, int32_t, const RuntimeMethod*))ValueCollection_CopyTo_mDBF04BDF0E94AB0E4AF7F60DCA819E7FC74767E2_gshared)(__this, ___array0, ___index1, method);
}
// UnityEngine.Promise.Rejectable UnityEngine.Promise.Completer::op_Implicit(UnityEngine.Promise.Completer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9  Completer_op_Implicit_m776071298E5802343C492ECEE9ED1E12FE6D928B (Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  ___completer0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameFoundation.Tools::RejectIfArgNullOrEmpty(System.String,System.String,UnityEngine.Promise.Rejectable)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Tools_RejectIfArgNullOrEmpty_mCB4E81DDE885337E6EE85E75F55D74CF81B224E7_inline (String_t* ___value0, String_t* ___name1, Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9  ___rejectable2, const RuntimeMethod* method);
// System.Void UnityEngine.Promise.Completer::Reject(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Completer_Reject_mC041DF09A1CD4AA308F22BF97721699633416880 (Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 * __this, Exception_t * ___reason0, const RuntimeMethod* method);
// System.Void UnityEngine.Promise.Completer::Resolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Completer_Resolve_mC374BAED823673FC0A04AD6D7929D5A6A7BFB2EB (Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m62102CA65546AE151DC8254B72110F4AA48E2135 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameFoundation.Data.InventoryItemData>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m7F887A070EAA3D92B548106FB64E77CCD91BE3F9 (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * __this, String_t* ___key0, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 *, String_t*, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 , const RuntimeMethod*))Dictionary_2_set_Item_m3EA9B35EC45DB28D8D9CCB875F1188E6C2A589AF_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m588D3BCFA6FC7FA342FC221D4CB02729E901E573 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<UnityEngine.GameFoundation.Data.GameFoundationData>(System.String)
inline GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  JsonUtility_FromJson_TisGameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6_m15406CDCA3935580C05949EA06D83B073A108ACC (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisGameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6_m15406CDCA3935580C05949EA06D83B073A108ACC_gshared)(___json0, method);
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.Persistence.BaseDataPersistence::.ctor(UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataPersistence__ctor_m5E40F9FFCDC6F7D4B8D415D9FE49C742E5F54332 (BaseDataPersistence_t6314CED3A904BB34596A984FFFB67ABBC205AB92 * __this, RuntimeObject* ___serializer0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.String UnityEngine.GameFoundation.DefaultLayers.Persistence.LocalPersistence::get_fullpath()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LocalPersistence_get_fullpath_m0345914530DA82A33B4CFAEF2C8BF861320DFDC0_inline (LocalPersistence_t8240944F90C8B135BE0A433BD3E3D13047469133 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_Default_m625C78C2A9A8504B8BA4141994412513DC470CE2 (const RuntimeMethod* method);
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m1D1CC9AC344BA16DBFD6A99AAADF2E383B4E888C (StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * __this, String_t* ___path0, bool ___append1, Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding2, const RuntimeMethod* method);
// UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataSerializer UnityEngine.GameFoundation.DefaultLayers.Persistence.BaseDataPersistence::get_serializer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseDataPersistence_get_serializer_mDB389CD21F5A432EA23989C7BA6419CEF1B2F2FE_inline (BaseDataPersistence_t6314CED3A904BB34596A984FFFB67ABBC205AB92 * __this, const RuntimeMethod* method);
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m42EEC6C53F171AD23C837EAD48905F11D94C04BF (String_t* ___sourceFileName0, String_t* ___destFileName1, bool ___overwrite2, const RuntimeMethod* method);
// System.Void System.Action`1<System.Exception>::Invoke(!0)
inline void Action_1_Invoke_m8D8F32903083AC7B78962DA7FF3EFCE6580A1B41 (Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * __this, Exception_t * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 *, Exception_t *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mA72DAA77008E903BC162A8D32FDE7F874B27E858 (FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m77D19A494A542C924C36FDD8AE5CDBEA97CE68B8 (FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * __this, String_t* ___fileName0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.FileInfo::OpenRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * FileInfo_OpenRead_m50151E576A99801FCE1B130EFE8AC1E034A9706B (FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mF319C927A1274118E912D93F2EB2AAE4DA17E3DC (StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.GameFoundation.Data.GameFoundationData>::Invoke(!0)
inline void Action_1_Invoke_m9B0F57DB4870BEFB17155B9714C417484F261509 (Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9 * __this, GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9 *, GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6 , const RuntimeMethod*))Action_1_Invoke_m9B0F57DB4870BEFB17155B9714C417484F261509_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.Promise.PromiseGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseGenerator__ctor_m0902415830C324FF33148B3EF9B4FF159CA1591D (PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::.ctor(UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer__ctor_m3B6E749EFC6009D3D1781DE44D4BABEAC92C9CF0 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * ___database0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m5ACF304BB97A7077A8CFC9D8F7C8A9D269FF42D4 (U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F * __this, const RuntimeMethod* method);
// UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataPersistence UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer::get_persistence()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* PersistenceDataLayer_get_persistence_m75267B05E1C41B53AE77E0D462B3122943218DDB_inline (PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.GameFoundation.Data.GameFoundationData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4D76A4607B5FA7911ADB40D45263645DF4B9476D (Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m4D76A4607B5FA7911ADB40D45263645DF4B9476D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Exception>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE8E44E4F2A93E5B1E8C68373E66EC348B631616A (Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.GameFoundation.Data.GameFoundationData UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  BaseMemoryDataLayer_GetData_m699CFD2A193C244F4617FEAA3B3453BD71553B34 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Promise.PromiseGenerator::GetPromiseHandles(UnityEngine.Promise.Deferred&,UnityEngine.Promise.Completer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromiseGenerator_GetPromiseHandles_m4F86D67F789CA5D9193AB5767A2F11F4D23DAC91 (PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C * __this, Deferred_t9E66F9D4FE2384EE0876310669A738E26D88EA94 * ___deferred0, Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 * ___completer1, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.GameFoundation.DefaultCatalog.InventoryCatalogAsset UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase::get_inventoryCatalog()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * GameFoundationDatabase_get_inventoryCatalog_mCAE4C021AB9D6651B262AB17AD26F9C94433292C_inline (GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::InitializeInventoryDataLayer(UnityEngine.GameFoundation.Data.InventoryManagerData,UnityEngine.GameFoundation.DefaultCatalog.InventoryCatalogAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_InitializeInventoryDataLayer_m5A26E4866F3E5FAF4B4BEA9EA367F3C0E84CD05F (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  ___data0, InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * ___catalog1, const RuntimeMethod* method);
// UnityEngine.GameFoundation.DefaultCatalog.CurrencyCatalogAsset UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase::get_currencyCatalog()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 * GameFoundationDatabase_get_currencyCatalog_m110378A98F4C110C0CB8C985BD67983B5CB37BA7_inline (GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::InitializeWalletDataLayer(UnityEngine.GameFoundation.Data.WalletData,UnityEngine.GameFoundation.DefaultCatalog.CurrencyCatalogAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_InitializeWalletDataLayer_m883C5686065BEB87C8C69F9E9D39220A57DDED7C (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  ___data0, CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 * ___catalog1, const RuntimeMethod* method);
// UnityEngine.GameFoundation.Data.GameFoundationData UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase::CreateDefaultData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  GameFoundationDatabase_CreateDefaultData_m4E938A6BED7E8B32621B37E78D6F8A8EF01E269B (GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer/<>c__DisplayClass5_0::<Initialize>g__InitializeWith|0(UnityEngine.GameFoundation.Data.GameFoundationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CInitializeU3Eg__InitializeWithU7C0_m4D885D79D294F21E46A28C9F632C4D64C64640C8 (U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F * __this, GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  ___data0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset>::GetEnumerator()
inline Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96  List_1_GetEnumerator_m976F107CF99D138133B74EBC09A1F6BC45BDD302 (List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96  (*) (List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset>::get_Current()
inline CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * Enumerator_get_Current_mB9AD6BA38683883152F81CAE6A61F858A084D4ED_inline (Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96 * __this, const RuntimeMethod* method)
{
	return ((  CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * (*) (Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Add(!0,!1)
inline void Dictionary_2_Add_m9BECA78DFA98D15B4EB7E342D45A27A362FCD28F (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * __this, String_t* ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 *, String_t*, int64_t, const RuntimeMethod*))Dictionary_2_Add_mD7C2A4D0C27F7FF472F9A4DFD1733F6B0811161D_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset>::MoveNext()
inline bool Enumerator_MoveNext_mD3A7ED19E4B473FD6776F8347EFA7B86B15B9481 (Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameFoundation.DefaultCatalog.CurrencyAsset>::Dispose()
inline void Enumerator_Dispose_mFD0668F5A7D6780EB7D7C50A402931900EFF64BE (Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.OverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_mE1A042FFEBF00B79612E8595B8D49785B357D731 (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.GameFoundation.CatalogManager UnityEngine.GameFoundation.GameFoundation::get_catalogs()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E * GameFoundation_get_catalogs_m771AF654DCA16FC27262307B48BFFF210749363B_inline (const RuntimeMethod* method);
// UnityEngine.GameFoundation.CurrencyCatalog UnityEngine.GameFoundation.CatalogManager::get_currencyCatalog()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CurrencyCatalog_tAB18AF857693F4241A0D55E29C1C3DD7211048EE * CatalogManager_get_currencyCatalog_m53FD6BBBF8EAA3450F7B63A3D63D1E47C3A883CB_inline (CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E * __this, const RuntimeMethod* method);
// !0 UnityEngine.GameFoundation.SingleCollectionCatalog`1<UnityEngine.GameFoundation.Currency>::FindItem(System.String)
inline Currency_tD2C5A9B9D9C96D7A0258F29FF5EBD8AA1F1BA0B4 * SingleCollectionCatalog_1_FindItem_mEC08ED5EF5A3ABD914A6E34D930075426B0BED1E (SingleCollectionCatalog_1_t5EF675C483BE5A8B2DF0F412C2824DD1737D4B14 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Currency_tD2C5A9B9D9C96D7A0258F29FF5EBD8AA1F1BA0B4 * (*) (SingleCollectionCatalog_1_t5EF675C483BE5A8B2DF0F412C2824DD1737D4B14 *, String_t*, const RuntimeMethod*))SingleCollectionCatalog_1_FindItem_m544B986A1E03D1E346C12C8056E4B9E3F28B7649_gshared)(__this, ___key0, method);
}
// System.Int64 UnityEngine.GameFoundation.Currency::get_maximumBalance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t Currency_get_maximumBalance_mB729CA2927C07DE11F9EBFF8FDA0E412951E4C7B_inline (Currency_tD2C5A9B9D9C96D7A0258F29FF5EBD8AA1F1BA0B4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::CheckBalance(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WalletDataLayer_CheckBalance_m0F484862B3A174B01D53A1CA2BBBF787928FEC9F (String_t* ___currencyKey0, int64_t ___balance1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// UnityEngine.Promise.Rejectable UnityEngine.Promise.Completer`1<System.Int64>::op_Implicit(UnityEngine.Promise.Completer`1<!0>)
inline Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9  Completer_1_op_Implicit_m2270066DB6F3FA36F9792DD9EE94675A0058E685 (Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF  ___completer0, const RuntimeMethod* method)
{
	return ((  Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9  (*) (Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF , const RuntimeMethod*))Completer_1_op_Implicit_m2270066DB6F3FA36F9792DD9EE94675A0058E685_gshared)(___completer0, method);
}
// System.Boolean UnityEngine.GameFoundation.Tools::RejectIfArgNegative(System.Int64,System.String,UnityEngine.Promise.Rejectable)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Tools_RejectIfArgNegative_m4C9595BEBE2B9F3B41E6A16647A35BD37AB3F7AC_inline (int64_t ___value0, String_t* ___name1, Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9  ___rejectable2, const RuntimeMethod* method);
// System.Void UnityEngine.Promise.Completer`1<System.Int64>::Resolve(!0)
inline void Completer_1_Resolve_m0D04A8F71359B3DB2441772F6DC587A7384CCDD0 (Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF * __this, int64_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF *, int64_t, const RuntimeMethod*))Completer_1_Resolve_m0D04A8F71359B3DB2441772F6DC587A7384CCDD0_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Promise.Completer`1<System.Int64>::Reject(System.Exception)
inline void Completer_1_Reject_mDBEEB6BED718F4542F596C27F3127EE1DE5A772C (Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF * __this, Exception_t * ___reason0, const RuntimeMethod* method)
{
	((  void (*) (Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF *, Exception_t *, const RuntimeMethod*))Completer_1_Reject_mDBEEB6BED718F4542F596C27F3127EE1DE5A772C_gshared)(__this, ___reason0, method);
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::SetBalance(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WalletDataLayer_SetBalance_mC12E0F2B4DC7AC335572F5DCFA479E5EA3056641 (WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * __this, String_t* ___currencyKey0, int64_t ___balance1, const RuntimeMethod* method);
// System.Void UnityEngine.Promise.Rejectable::Reject(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rejectable_Reject_mFF89A77A9E4FA730FFDDA117CB76838E533DB9CA (Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9 * __this, Exception_t * ___reason0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
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
// UnityEngine.GameFoundation.Data.GameFoundationData UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  BaseMemoryDataLayer_GetData_m699CFD2A193C244F4617FEAA3B3453BD71553B34 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_GetData_m699CFD2A193C244F4617FEAA3B3453BD71553B34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var inventoryData = (this as IInventoryDataLayer).GetData();
		InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  L_0 = InterfaceFuncInvoker0< InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  >::Invoke(0 /* UnityEngine.GameFoundation.Data.InventoryManagerData UnityEngine.GameFoundation.IInventoryDataLayer::GetData() */, IInventoryDataLayer_t9144DFB1D6C3299DA8A5E0C658B7FD5756E58756_il2cpp_TypeInfo_var, __this);
		V_0 = L_0;
		// var walletData = (this as IWalletDataLayer).GetData();
		WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  L_1 = InterfaceFuncInvoker0< WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  >::Invoke(0 /* UnityEngine.GameFoundation.Data.WalletData UnityEngine.GameFoundation.IWalletDataLayer::GetData() */, IWalletDataLayer_t01EDF84C9C7F6CA8EB187A3252545451F91A7433_il2cpp_TypeInfo_var, __this);
		V_1 = L_1;
		// var data = new GameFoundationData
		// {
		//     version = m_Version,
		//     inventoryManagerData = inventoryData,
		//     walletData = walletData
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6 ));
		int32_t L_2 = __this->get_m_Version_0();
		(&V_2)->set_version_2(L_2);
		InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  L_3 = V_0;
		(&V_2)->set_inventoryManagerData_0(L_3);
		WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  L_4 = V_1;
		(&V_2)->set_walletData_1(L_4);
		GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  L_5 = V_2;
		// return data;
		return L_5;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::.ctor(UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer__ctor_m3B6E749EFC6009D3D1781DE44D4BABEAC92C9CF0 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * ___database0, const RuntimeMethod* method)
{
	{
		// protected BaseMemoryDataLayer(GameFoundationDatabase database = null)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// if (database is null)
		GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * L_0 = ___database0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// database = GameFoundationDatabaseSettings.database;
		GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * L_1 = GameFoundationDatabaseSettings_get_database_mF23240EA31680209B29B6E7279B090DD12F0FF79(/*hidden argument*/NULL);
		___database0 = L_1;
	}

IL_0010:
	{
		// this.database = database;
		GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * L_2 = ___database0;
		__this->set_database_1(L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::UnityEngine.GameFoundation.ICatalogConfigurator.Configure(UnityEngine.GameFoundation.CatalogBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_UnityEngine_GameFoundation_ICatalogConfigurator_Configure_m70B67CDE9390F6736B067047B78EADC0D3AC24E3 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, CatalogBuilder_tA6347EA7163CDE77C6987709721BC3827D2D2694 * ___builder0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_UnityEngine_GameFoundation_ICatalogConfigurator_Configure_m70B67CDE9390F6736B067047B78EADC0D3AC24E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => (database as ICatalogConfigurator).Configure(builder);
		GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * L_0 = __this->get_database_1();
		CatalogBuilder_tA6347EA7163CDE77C6987709721BC3827D2D2694 * L_1 = ___builder0;
		NullCheck(L_0);
		InterfaceActionInvoker1< CatalogBuilder_tA6347EA7163CDE77C6987709721BC3827D2D2694 * >::Invoke(0 /* System.Void UnityEngine.GameFoundation.ICatalogConfigurator::Configure(UnityEngine.GameFoundation.CatalogBuilder) */, ICatalogConfigurator_tA8716118F9CB70D314DBD958F58EB45BA73E44E3_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::InitializeInventoryDataLayer(UnityEngine.GameFoundation.Data.InventoryManagerData,UnityEngine.GameFoundation.DefaultCatalog.InventoryCatalogAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_InitializeInventoryDataLayer_m5A26E4866F3E5FAF4B4BEA9EA367F3C0E84CD05F (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  ___data0, InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * ___catalog1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_InitializeInventoryDataLayer_m5A26E4866F3E5FAF4B4BEA9EA367F3C0E84CD05F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_InventoryDataLayer = new InventoryDataLayer(data, catalog);
		InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  L_0 = ___data0;
		InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * L_1 = ___catalog1;
		InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * L_2 = (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 *)il2cpp_codegen_object_new(InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76_il2cpp_TypeInfo_var);
		InventoryDataLayer__ctor_mDEA42D12DC25222460E5EF1A08B69C035360ADE9(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_InventoryDataLayer_2(L_2);
		// }
		return;
	}
}
// UnityEngine.GameFoundation.Data.InventoryManagerData UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::UnityEngine.GameFoundation.IInventoryDataLayer.GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetData_m475357DD4F33989214CCEC78A8361CB9D6284B6D (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetData_m475357DD4F33989214CCEC78A8361CB9D6284B6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (m_InventoryDataLayer as IInventoryDataLayer).GetData();
		InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * L_0 = __this->get_m_InventoryDataLayer_2();
		NullCheck(L_0);
		InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  L_1 = InterfaceFuncInvoker0< InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  >::Invoke(0 /* UnityEngine.GameFoundation.Data.InventoryManagerData UnityEngine.GameFoundation.IInventoryDataLayer::GetData() */, IInventoryDataLayer_t9144DFB1D6C3299DA8A5E0C658B7FD5756E58756_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::UnityEngine.GameFoundation.IInventoryDataLayer.CreateItem(System.String,System.String,UnityEngine.Promise.Completer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_CreateItem_mBC21ED8B72616DA42EA0B97D450118EBF788C7CB (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, String_t* ___definitionKey0, String_t* ___itemId1, Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  ___completer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_CreateItem_mBC21ED8B72616DA42EA0B97D450118EBF788C7CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (m_InventoryDataLayer as IInventoryDataLayer).CreateItem(definitionKey, itemId, completer);
		InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * L_0 = __this->get_m_InventoryDataLayer_2();
		String_t* L_1 = ___definitionKey0;
		String_t* L_2 = ___itemId1;
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  L_3 = ___completer2;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, String_t*, Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  >::Invoke(1 /* System.Void UnityEngine.GameFoundation.IInventoryDataLayer::CreateItem(System.String,System.String,UnityEngine.Promise.Completer) */, IInventoryDataLayer_t9144DFB1D6C3299DA8A5E0C658B7FD5756E58756_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::UnityEngine.GameFoundation.IInventoryDataLayer.DeleteItem(System.String,UnityEngine.Promise.Completer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_DeleteItem_mE0CC9C8CF9D432B26BCE7CD4CE10A6D07CAF0131 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, String_t* ___itemId0, Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  ___completer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_DeleteItem_mE0CC9C8CF9D432B26BCE7CD4CE10A6D07CAF0131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (m_InventoryDataLayer as IInventoryDataLayer).DeleteItem(itemId, completer);
		InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * L_0 = __this->get_m_InventoryDataLayer_2();
		String_t* L_1 = ___itemId0;
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  L_2 = ___completer1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  >::Invoke(2 /* System.Void UnityEngine.GameFoundation.IInventoryDataLayer::DeleteItem(System.String,UnityEngine.Promise.Completer) */, IInventoryDataLayer_t9144DFB1D6C3299DA8A5E0C658B7FD5756E58756_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.GameFoundation.Property UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::UnityEngine.GameFoundation.IInventoryDataLayer.GetPropertyValue(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetPropertyValue_m638D198B6EC53B6BBD7ABBE311E77A8E1E893AAE (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, String_t* ___itemId0, String_t* ___propertyKey1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetPropertyValue_m638D198B6EC53B6BBD7ABBE311E77A8E1E893AAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (m_InventoryDataLayer as IInventoryDataLayer).GetPropertyValue(itemId, propertyKey);
		InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * L_0 = __this->get_m_InventoryDataLayer_2();
		String_t* L_1 = ___itemId0;
		String_t* L_2 = ___propertyKey1;
		NullCheck(L_0);
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  L_3 = InterfaceFuncInvoker2< Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 , String_t*, String_t* >::Invoke(3 /* UnityEngine.GameFoundation.Property UnityEngine.GameFoundation.IInventoryDataLayer::GetPropertyValue(System.String,System.String) */, IInventoryDataLayer_t9144DFB1D6C3299DA8A5E0C658B7FD5756E58756_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::UnityEngine.GameFoundation.IInventoryDataLayer.TryGetPropertyValue(System.String,System.String,UnityEngine.GameFoundation.Property&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_TryGetPropertyValue_mC6AE1790D872FE33056DD6C7E747F563B88A9DAF (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, String_t* ___itemId0, String_t* ___propertyKey1, Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * ___propertyValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_TryGetPropertyValue_mC6AE1790D872FE33056DD6C7E747F563B88A9DAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (m_InventoryDataLayer as IInventoryDataLayer).TryGetPropertyValue(itemId, propertyKey, out propertyValue);
		InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * L_0 = __this->get_m_InventoryDataLayer_2();
		String_t* L_1 = ___itemId0;
		String_t* L_2 = ___propertyKey1;
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * L_3 = ___propertyValue2;
		NullCheck(L_0);
		bool L_4 = InterfaceFuncInvoker3< bool, String_t*, String_t*, Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * >::Invoke(4 /* System.Boolean UnityEngine.GameFoundation.IInventoryDataLayer::TryGetPropertyValue(System.String,System.String,UnityEngine.GameFoundation.Property&) */, IInventoryDataLayer_t9144DFB1D6C3299DA8A5E0C658B7FD5756E58756_il2cpp_TypeInfo_var, L_0, L_1, L_2, (Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 *)L_3);
		return L_4;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::UnityEngine.GameFoundation.IInventoryDataLayer.SetPropertyValue(System.String,System.String,UnityEngine.GameFoundation.Property,UnityEngine.Promise.Completer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_SetPropertyValue_m1D3EA8DDAAA984B78B09BF0C1365025DB7A9FB92 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, String_t* ___itemId0, String_t* ___propertyKey1, Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  ___value2, Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  ___completer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_SetPropertyValue_m1D3EA8DDAAA984B78B09BF0C1365025DB7A9FB92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (m_InventoryDataLayer as IInventoryDataLayer).SetPropertyValue(itemId, propertyKey, value, completer);
		InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * L_0 = __this->get_m_InventoryDataLayer_2();
		String_t* L_1 = ___itemId0;
		String_t* L_2 = ___propertyKey1;
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  L_3 = ___value2;
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  L_4 = ___completer3;
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, String_t*, Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 , Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  >::Invoke(5 /* System.Void UnityEngine.GameFoundation.IInventoryDataLayer::SetPropertyValue(System.String,System.String,UnityEngine.GameFoundation.Property,UnityEngine.Promise.Completer) */, IInventoryDataLayer_t9144DFB1D6C3299DA8A5E0C658B7FD5756E58756_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::ConsolidateTransactionExchange(UnityEngine.GameFoundation.DefaultCatalog.TransactionExchangeDefinitionObject,System.Collections.Generic.Dictionary`2<System.String,System.Int64>,System.Collections.Generic.Dictionary`2<System.String,System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_ConsolidateTransactionExchange_m573871562AA1E7E5F9FBD670EBA2AAAB4C862692 (TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * ___transactionExchange0, Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * ___currencies1, Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * ___items2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_ConsolidateTransactionExchange_m573871562AA1E7E5F9FBD670EBA2AAAB4C862692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * V_0 = NULL;
	List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * V_1 = NULL;
	Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	bool V_4 = false;
	int64_t V_5 = 0;
	Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128  V_6;
	memset((&V_6), 0, sizeof(V_6));
	String_t* V_7 = NULL;
	bool V_8 = false;
	int64_t V_9 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int64_t G_B5_0 = 0;
	int64_t G_B4_0 = 0;
	int64_t G_B6_0 = 0;
	int64_t G_B6_1 = 0;
	int64_t G_B14_0 = 0;
	int64_t G_B13_0 = 0;
	int64_t G_B15_0 = 0;
	int64_t G_B15_1 = 0;
	{
		// var currencyExchanges = s_CurrencyExchangesListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
		Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE * L_0 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_CurrencyExchangesListPool_3();
		NullCheck(L_0);
		List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * L_1 = Pool_1_Get_m6A7BAE1A3FB386BB0D9D6EFA101DB19FBF0FBE83(L_0, /*hidden argument*/Pool_1_Get_m6A7BAE1A3FB386BB0D9D6EFA101DB19FBF0FBE83_RuntimeMethod_var);
		V_0 = L_1;
		// var itemExchanges = s_ItemExchangesListPool.Get();
		Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 * L_2 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_ItemExchangesListPool_4();
		NullCheck(L_2);
		List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * L_3 = Pool_1_Get_m8ABE7C375AD92E938713B1ACFD205A4B67B3A1FD(L_2, /*hidden argument*/Pool_1_Get_m8ABE7C375AD92E938713B1ACFD205A4B67B3A1FD_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			// transactionExchange.GetCurrencies(currencyExchanges);
			TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * L_4 = ___transactionExchange0;
			List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * L_5 = V_0;
			NullCheck(L_4);
			TransactionExchangeDefinitionObject_GetCurrencies_mCC3E02B59DD081242F1BE0C3AB2F9BD907F9EC0A(L_4, L_5, /*hidden argument*/NULL);
			// foreach (var currencyExchange in currencyExchanges)
			List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * L_6 = V_0;
			NullCheck(L_6);
			Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07  L_7 = List_1_GetEnumerator_mD39522672E1E11B7F5AD2D0EDE747F7F79498549(L_6, /*hidden argument*/List_1_GetEnumerator_mD39522672E1E11B7F5AD2D0EDE747F7F79498549_RuntimeMethod_var);
			V_2 = L_7;
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0060;
			}

IL_0027:
			{
				// foreach (var currencyExchange in currencyExchanges)
				CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511 * L_8 = Enumerator_get_Current_mF68A23696A474C4CA73F9146E127D23E25EC68BF_inline((Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mF68A23696A474C4CA73F9146E127D23E25EC68BF_RuntimeMethod_var);
				// var currencyKey = currencyExchange.currency.key;
				CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511 * L_9 = L_8;
				NullCheck(L_9);
				CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * L_10 = CurrencyExchangeObject_get_currency_m092564FE78419E8628BC981E957AD336420335E6_inline(L_9, /*hidden argument*/NULL);
				NullCheck(L_10);
				String_t* L_11 = CatalogItemAsset_get_key_mEDAC681266C93C18BF4F35175B862529395FE2AC_inline(L_10, /*hidden argument*/NULL);
				V_3 = L_11;
				// var found = currencies.TryGetValue
				//     (currencyKey, out var amount);
				Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_12 = ___currencies1;
				String_t* L_13 = V_3;
				NullCheck(L_12);
				bool L_14 = Dictionary_2_TryGetValue_mC7583ABC280CFC4A1BA68817E5CD15A1E5105490(L_12, L_13, (int64_t*)(&V_5), /*hidden argument*/Dictionary_2_TryGetValue_mC7583ABC280CFC4A1BA68817E5CD15A1E5105490_RuntimeMethod_var);
				V_4 = L_14;
				// amount = currencyExchange.amount + (found ? amount : 0);
				NullCheck(L_9);
				int64_t L_15 = CurrencyExchangeObject_get_amount_mD84B11BDB6B8E8E049BEE368E515E4411B08B932_inline(L_9, /*hidden argument*/NULL);
				bool L_16 = V_4;
				G_B4_0 = L_15;
				if (L_16)
				{
					G_B5_0 = L_15;
					goto IL_0052;
				}
			}

IL_004e:
			{
				G_B6_0 = (((int64_t)((int64_t)0)));
				G_B6_1 = G_B4_0;
				goto IL_0054;
			}

IL_0052:
			{
				int64_t L_17 = V_5;
				G_B6_0 = L_17;
				G_B6_1 = G_B5_0;
			}

IL_0054:
			{
				V_5 = ((int64_t)il2cpp_codegen_add((int64_t)G_B6_1, (int64_t)G_B6_0));
				// currencies[currencyKey] = amount;
				Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_18 = ___currencies1;
				String_t* L_19 = V_3;
				int64_t L_20 = V_5;
				NullCheck(L_18);
				Dictionary_2_set_Item_m10A9075140115FE57059AA1509076C79C12C5BE0(L_18, L_19, L_20, /*hidden argument*/Dictionary_2_set_Item_m10A9075140115FE57059AA1509076C79C12C5BE0_RuntimeMethod_var);
			}

IL_0060:
			{
				// foreach (var currencyExchange in currencyExchanges)
				bool L_21 = Enumerator_MoveNext_mEF97D497D7D4524AD8360A5CA210E74EA5512A9C((Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mEF97D497D7D4524AD8360A5CA210E74EA5512A9C_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0027;
				}
			}

IL_0069:
			{
				IL2CPP_LEAVE(0x79, FINALLY_006b);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006b;
		}

FINALLY_006b:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m9B57D9A2658B59A61E773DF37557E2098F7BD515((Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m9B57D9A2658B59A61E773DF37557E2098F7BD515_RuntimeMethod_var);
			IL2CPP_END_FINALLY(107)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(107)
		{
			IL2CPP_JUMP_TBL(0x79, IL_0079)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0079:
		{
			// transactionExchange.GetItems(itemExchanges);
			TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * L_22 = ___transactionExchange0;
			List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * L_23 = V_1;
			NullCheck(L_22);
			TransactionExchangeDefinitionObject_GetItems_mAB934522983702725F2F1ECE562684731CEFCB41(L_22, L_23, /*hidden argument*/NULL);
			// foreach (var itemExchange in itemExchanges)
			List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * L_24 = V_1;
			NullCheck(L_24);
			Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128  L_25 = List_1_GetEnumerator_m655F49E22992FCDB0E9FF859F4BAFCB5D4C5D5D2(L_24, /*hidden argument*/List_1_GetEnumerator_m655F49E22992FCDB0E9FF859F4BAFCB5D4C5D5D2_RuntimeMethod_var);
			V_6 = L_25;
		}

IL_0089:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00c7;
			}

IL_008b:
			{
				// foreach (var itemExchange in itemExchanges)
				ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * L_26 = Enumerator_get_Current_m9660566D40EAE1F4FE6C7204E6E2BC119FE6383F_inline((Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m9660566D40EAE1F4FE6C7204E6E2BC119FE6383F_RuntimeMethod_var);
				// var itemId = itemExchange.item.key;
				ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * L_27 = L_26;
				NullCheck(L_27);
				InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_28 = ItemExchangeDefinitionObject_get_item_m90A2A46981A2F4DF17F7D31C95F5064364E1A93C_inline(L_27, /*hidden argument*/NULL);
				NullCheck(L_28);
				String_t* L_29 = CatalogItemAsset_get_key_mEDAC681266C93C18BF4F35175B862529395FE2AC_inline(L_28, /*hidden argument*/NULL);
				V_7 = L_29;
				// var found = items.TryGetValue(itemId, out var amount);
				Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_30 = ___items2;
				String_t* L_31 = V_7;
				NullCheck(L_30);
				bool L_32 = Dictionary_2_TryGetValue_mC7583ABC280CFC4A1BA68817E5CD15A1E5105490(L_30, L_31, (int64_t*)(&V_9), /*hidden argument*/Dictionary_2_TryGetValue_mC7583ABC280CFC4A1BA68817E5CD15A1E5105490_RuntimeMethod_var);
				V_8 = L_32;
				// amount = itemExchange.amount + (found ? amount : 0);
				NullCheck(L_27);
				int64_t L_33 = ItemExchangeDefinitionObject_get_amount_m1D6BA642E44F09ADAAAF934E27CE4F20A7BDA5C0_inline(L_27, /*hidden argument*/NULL);
				bool L_34 = V_8;
				G_B13_0 = L_33;
				if (L_34)
				{
					G_B14_0 = L_33;
					goto IL_00b8;
				}
			}

IL_00b4:
			{
				G_B15_0 = (((int64_t)((int64_t)0)));
				G_B15_1 = G_B13_0;
				goto IL_00ba;
			}

IL_00b8:
			{
				int64_t L_35 = V_9;
				G_B15_0 = L_35;
				G_B15_1 = G_B14_0;
			}

IL_00ba:
			{
				V_9 = ((int64_t)il2cpp_codegen_add((int64_t)G_B15_1, (int64_t)G_B15_0));
				// items[itemId] = amount;
				Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_36 = ___items2;
				String_t* L_37 = V_7;
				int64_t L_38 = V_9;
				NullCheck(L_36);
				Dictionary_2_set_Item_m10A9075140115FE57059AA1509076C79C12C5BE0(L_36, L_37, L_38, /*hidden argument*/Dictionary_2_set_Item_m10A9075140115FE57059AA1509076C79C12C5BE0_RuntimeMethod_var);
			}

IL_00c7:
			{
				// foreach (var itemExchange in itemExchanges)
				bool L_39 = Enumerator_MoveNext_m65E12AD9CF3991BD0770C55374465EDAA7F6E0EC((Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m65E12AD9CF3991BD0770C55374465EDAA7F6E0EC_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_008b;
				}
			}

IL_00d0:
			{
				IL2CPP_LEAVE(0xF7, FINALLY_00d2);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00d2;
		}

FINALLY_00d2:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m25C59272D93AA021CE6A41D6F97FFAAFEDA37D97((Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m25C59272D93AA021CE6A41D6F97FFAAFEDA37D97_RuntimeMethod_var);
			IL2CPP_END_FINALLY(210)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(210)
		{
			IL2CPP_END_CLEANUP(0xF7, FINALLY_00e0);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e0;
	}

FINALLY_00e0:
	{ // begin finally (depth: 1)
		// s_CurrencyExchangesListPool.Release(currencyExchanges);
		IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
		Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE * L_40 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_CurrencyExchangesListPool_3();
		List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * L_41 = V_0;
		NullCheck(L_40);
		Pool_1_Release_m9485F723B5C79082DE25C6D239348300E9D7DC03(L_40, L_41, /*hidden argument*/Pool_1_Release_m9485F723B5C79082DE25C6D239348300E9D7DC03_RuntimeMethod_var);
		// s_ItemExchangesListPool.Release(itemExchanges);
		Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 * L_42 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_ItemExchangesListPool_4();
		List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * L_43 = V_1;
		NullCheck(L_42);
		Pool_1_Release_m793291285401D639B357B7909A3E719D793B0297(L_42, L_43, /*hidden argument*/Pool_1_Release_m793291285401D639B357B7909A3E719D793B0297_RuntimeMethod_var);
		// }
		IL2CPP_END_FINALLY(224)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(224)
	{
		IL2CPP_JUMP_TBL(0xF7, IL_00f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f7:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::VerifyCost(System.Collections.Generic.Dictionary`2<System.String,System.Int64>,System.Collections.Generic.Dictionary`2<System.String,System.Int64>,System.Collections.Generic.ICollection`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_VerifyCost_m2388164042B46B3EE53A6E0EEF3021CD58235810 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * ___currencies0, Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * ___items1, RuntimeObject* ___exceptions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_VerifyCost_m2388164042B46B3EE53A6E0EEF3021CD58235810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int64_t V_2 = 0;
	NotEnoughBalanceException_t8725064370F4B7239E3923981D1699020E95D968 * V_3 = NULL;
	KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	NotEnoughItemOfDefinitionException_t58B3EB9CF7CE086694A394BCBE0F69B73FBBD567 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var exchange in currencies)
		Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_0 = ___currencies0;
		NullCheck(L_0);
		Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274  L_1 = Dictionary_2_GetEnumerator_mC1A5F815C548A3037CBF3E1B28DFB3229669AA4D(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_mC1A5F815C548A3037CBF3E1B28DFB3229669AA4D_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0009:
		{
			// foreach (var exchange in currencies)
			KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  L_2 = Enumerator_get_Current_m7D3D5EEF5CDBD2A9038C0C7623BEA0CF2424B948_inline((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7D3D5EEF5CDBD2A9038C0C7623BEA0CF2424B948_RuntimeMethod_var);
			V_1 = L_2;
			// var balance = m_WalletDataLayer.GetBalance(exchange.Key);
			WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * L_3 = __this->get_m_WalletDataLayer_9();
			String_t* L_4 = KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_inline((KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_RuntimeMethod_var);
			NullCheck(L_3);
			int64_t L_5 = WalletDataLayer_GetBalance_m0B6AE94C1AC57E11DA221E0FFA8D945174296E8A(L_3, L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			// if (balance < exchange.Value)
			int64_t L_6 = V_2;
			int64_t L_7 = KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_inline((KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_RuntimeMethod_var);
			if ((((int64_t)L_6) >= ((int64_t)L_7)))
			{
				goto IL_004a;
			}
		}

IL_002e:
		{
			// var exception = new NotEnoughBalanceException
			//     (exchange.Key, exchange.Value, balance);
			String_t* L_8 = KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_inline((KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_RuntimeMethod_var);
			int64_t L_9 = KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_inline((KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_RuntimeMethod_var);
			int64_t L_10 = V_2;
			NotEnoughBalanceException_t8725064370F4B7239E3923981D1699020E95D968 * L_11 = (NotEnoughBalanceException_t8725064370F4B7239E3923981D1699020E95D968 *)il2cpp_codegen_object_new(NotEnoughBalanceException_t8725064370F4B7239E3923981D1699020E95D968_il2cpp_TypeInfo_var);
			NotEnoughBalanceException__ctor_m3443EDA82EA563CD7AEAA59028F8D6B48E9609B8(L_11, L_8, L_9, L_10, /*hidden argument*/NULL);
			V_3 = L_11;
			// exceptions.Add(exception);
			RuntimeObject* L_12 = ___exceptions2;
			NotEnoughBalanceException_t8725064370F4B7239E3923981D1699020E95D968 * L_13 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker1< Exception_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Exception>::Add(!0) */, ICollection_1_t369F219933FB866C23070CD9749538883440F044_il2cpp_TypeInfo_var, L_12, L_13);
		}

IL_004a:
		{
			// foreach (var exchange in currencies)
			bool L_14 = Enumerator_MoveNext_mCA3E427659BA0100C56CC0ED0305444051B6FCDD((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCA3E427659BA0100C56CC0ED0305444051B6FCDD_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0009;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2BC3322527E84E907571F92C1F45DBFBD17B177C((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m2BC3322527E84E907571F92C1F45DBFBD17B177C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0063:
	{
		// foreach (var exchange in items)
		Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_15 = ___items1;
		NullCheck(L_15);
		Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274  L_16 = Dictionary_2_GetEnumerator_mC1A5F815C548A3037CBF3E1B28DFB3229669AA4D(L_15, /*hidden argument*/Dictionary_2_GetEnumerator_mC1A5F815C548A3037CBF3E1B28DFB3229669AA4D_RuntimeMethod_var);
		V_0 = L_16;
	}

IL_006a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b6;
		}

IL_006c:
		{
			// foreach (var exchange in items)
			KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  L_17 = Enumerator_get_Current_m7D3D5EEF5CDBD2A9038C0C7623BEA0CF2424B948_inline((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7D3D5EEF5CDBD2A9038C0C7623BEA0CF2424B948_RuntimeMethod_var);
			V_4 = L_17;
			// var count =
			//     m_InventoryDataLayer.GetItemsByDefinition(exchange.Key);
			InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * L_18 = __this->get_m_InventoryDataLayer_2();
			String_t* L_19 = KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_inline((KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_RuntimeMethod_var);
			NullCheck(L_18);
			int32_t L_20 = InventoryDataLayer_GetItemsByDefinition_m07703C98D1A25AEF9576C7B43C9B34F270B3138F(L_18, L_19, (RuntimeObject*)NULL, /*hidden argument*/NULL);
			V_5 = L_20;
			// if (count < exchange.Value)
			int32_t L_21 = V_5;
			int64_t L_22 = KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_inline((KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_RuntimeMethod_var);
			if ((((int64_t)(((int64_t)((int64_t)L_21)))) >= ((int64_t)L_22)))
			{
				goto IL_00b6;
			}
		}

IL_0096:
		{
			// var exception = new NotEnoughItemOfDefinitionException
			//     (exchange.Key, exchange.Value, count);
			String_t* L_23 = KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_inline((KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_RuntimeMethod_var);
			int64_t L_24 = KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_inline((KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_RuntimeMethod_var);
			int32_t L_25 = V_5;
			NotEnoughItemOfDefinitionException_t58B3EB9CF7CE086694A394BCBE0F69B73FBBD567 * L_26 = (NotEnoughItemOfDefinitionException_t58B3EB9CF7CE086694A394BCBE0F69B73FBBD567 *)il2cpp_codegen_object_new(NotEnoughItemOfDefinitionException_t58B3EB9CF7CE086694A394BCBE0F69B73FBBD567_il2cpp_TypeInfo_var);
			NotEnoughItemOfDefinitionException__ctor_m957300B4A5225B5766198B91E428DF7DBC055859(L_26, L_23, L_24, (((int64_t)((int64_t)L_25))), /*hidden argument*/NULL);
			V_6 = L_26;
			// exceptions.Add(exception);
			RuntimeObject* L_27 = ___exceptions2;
			NotEnoughItemOfDefinitionException_t58B3EB9CF7CE086694A394BCBE0F69B73FBBD567 * L_28 = V_6;
			NullCheck(L_27);
			InterfaceActionInvoker1< Exception_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Exception>::Add(!0) */, ICollection_1_t369F219933FB866C23070CD9749538883440F044_il2cpp_TypeInfo_var, L_27, L_28);
		}

IL_00b6:
		{
			// foreach (var exchange in items)
			bool L_29 = Enumerator_MoveNext_mCA3E427659BA0100C56CC0ED0305444051B6FCDD((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCA3E427659BA0100C56CC0ED0305444051B6FCDD_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_006c;
			}
		}

IL_00bf:
		{
			IL2CPP_LEAVE(0xCF, FINALLY_00c1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c1;
	}

FINALLY_00c1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2BC3322527E84E907571F92C1F45DBFBD17B177C((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m2BC3322527E84E907571F92C1F45DBFBD17B177C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(193)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(193)
	{
		IL2CPP_JUMP_TBL(0xCF, IL_00cf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::VerifyItemPayload(System.Collections.Generic.ICollection`1<System.String>,System.Collections.Generic.Dictionary`2<System.String,System.Int64>,System.Collections.Generic.ICollection`1<UnityEngine.GameFoundation.Data.InventoryItemData>,System.Collections.Generic.ICollection`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_VerifyItemPayload_m664336F2D55B374DB993E6E481CB29525386CCD7 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, RuntimeObject* ___counterparts0, Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * ___requirements1, RuntimeObject* ___consumed2, RuntimeObject* ___exceptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_VerifyItemPayload_m664336F2D55B374DB993E6E481CB29525386CCD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * V_0 = NULL;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	String_t* V_3 = NULL;
	Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  V_6;
	memset((&V_6), 0, sizeof(V_6));
	String_t* V_7 = NULL;
	int64_t V_8 = 0;
	InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C * V_9 = NULL;
	Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274  V_10;
	memset((&V_10), 0, sizeof(V_10));
	KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t * V_12 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var inventory = m_InventoryDataLayer;
		InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * L_0 = __this->get_m_InventoryDataLayer_2();
		V_0 = L_0;
		// var uniqueCounterparts = s_StringListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
		Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18 * L_1 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_StringListPool_6();
		NullCheck(L_1);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = Pool_1_Get_m03084416E082F0015B60A01C000812B808DF0249(L_1, /*hidden argument*/Pool_1_Get_m03084416E082F0015B60A01C000812B808DF0249_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			// foreach (var itemId in counterparts)
			RuntimeObject* L_3 = ___counterparts0;
			NullCheck(L_3);
			RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E_il2cpp_TypeInfo_var, L_3);
			V_2 = L_4;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0032;
			}

IL_001b:
			{
				// foreach (var itemId in counterparts)
				RuntimeObject* L_5 = V_2;
				NullCheck(L_5);
				String_t* L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_tE14471B9BA58E22CC2B0F85AA521BEBB7F04E004_il2cpp_TypeInfo_var, L_5);
				V_3 = L_6;
				// if (!uniqueCounterparts.Contains(itemId))
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_7 = V_1;
				String_t* L_8 = V_3;
				NullCheck(L_7);
				bool L_9 = List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B(L_7, L_8, /*hidden argument*/List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0032;
				}
			}

IL_002b:
			{
				// uniqueCounterparts.Add(itemId);
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_10 = V_1;
				String_t* L_11 = V_3;
				NullCheck(L_10);
				List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_10, L_11, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
			}

IL_0032:
			{
				// foreach (var itemId in counterparts)
				RuntimeObject* L_12 = V_2;
				NullCheck(L_12);
				bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_001b;
				}
			}

IL_003a:
			{
				IL2CPP_LEAVE(0x46, FINALLY_003c);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_003c;
		}

FINALLY_003c:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_14 = V_2;
				if (!L_14)
				{
					goto IL_0045;
				}
			}

IL_003f:
			{
				RuntimeObject* L_15 = V_2;
				NullCheck(L_15);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_15);
			}

IL_0045:
			{
				IL2CPP_END_FINALLY(60)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(60)
		{
			IL2CPP_JUMP_TBL(0x46, IL_0046)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0046:
		{
			// foreach (var counterpartId in uniqueCounterparts)
			List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_16 = V_1;
			NullCheck(L_16);
			Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D  L_17 = List_1_GetEnumerator_mE24C416317D3F4E40A03014ED01FDE0F4FFDC8BE(L_16, /*hidden argument*/List_1_GetEnumerator_mE24C416317D3F4E40A03014ED01FDE0F4FFDC8BE_RuntimeMethod_var);
			V_4 = L_17;
		}

IL_004e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00bc;
			}

IL_0050:
			{
				// foreach (var counterpartId in uniqueCounterparts)
				String_t* L_18 = Enumerator_get_Current_m42A600F939D181CE139B9C26F825FD4BC28F6F1B_inline((Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *)(&V_4), /*hidden argument*/Enumerator_get_Current_m42A600F939D181CE139B9C26F825FD4BC28F6F1B_RuntimeMethod_var);
				V_5 = L_18;
				// var itemFound = inventory.TryGetItem(counterpartId, out var itemData);
				InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * L_19 = V_0;
				String_t* L_20 = V_5;
				NullCheck(L_19);
				bool L_21 = InventoryDataLayer_TryGetItem_mFB1E28B8164007193265AE3EC2EC0D3111734E92(L_19, L_20, (InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 *)(&V_6), /*hidden argument*/NULL);
				// if (!itemFound)
				if (L_21)
				{
					goto IL_0079;
				}
			}

IL_0065:
			{
				// var exception =
				//     new InventoryItemNotFoundException(counterpartId);
				String_t* L_22 = V_5;
				InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C * L_23 = (InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C *)il2cpp_codegen_object_new(InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C_il2cpp_TypeInfo_var);
				InventoryItemNotFoundException__ctor_mFE85B44B53517F567DE65E88F121B4A23B963FF5(L_23, L_22, /*hidden argument*/NULL);
				V_9 = L_23;
				// exceptions.Add(exception);
				RuntimeObject* L_24 = ___exceptions3;
				InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C * L_25 = V_9;
				NullCheck(L_24);
				InterfaceActionInvoker1< Exception_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Exception>::Add(!0) */, ICollection_1_t369F219933FB866C23070CD9749538883440F044_il2cpp_TypeInfo_var, L_24, L_25);
				// continue;
				goto IL_00bc;
			}

IL_0079:
			{
				// var definitionKey = itemData.definitionKey;
				InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_26 = V_6;
				String_t* L_27 = L_26.get_definitionKey_0();
				V_7 = L_27;
				// var requirementFound =
				//     requirements.TryGetValue(definitionKey, out var count);
				Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_28 = ___requirements1;
				String_t* L_29 = V_7;
				NullCheck(L_28);
				bool L_30 = Dictionary_2_TryGetValue_mC7583ABC280CFC4A1BA68817E5CD15A1E5105490(L_28, L_29, (int64_t*)(&V_8), /*hidden argument*/Dictionary_2_TryGetValue_mC7583ABC280CFC4A1BA68817E5CD15A1E5105490_RuntimeMethod_var);
				// if (requirementFound)
				if (!L_30)
				{
					goto IL_00bc;
				}
			}

IL_008e:
			{
				// count--;
				int64_t L_31 = V_8;
				V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_31, (int64_t)(((int64_t)((int64_t)1)))));
				// if (count > 0)
				int64_t L_32 = V_8;
				if ((((int64_t)L_32) <= ((int64_t)(((int64_t)((int64_t)0))))))
				{
					goto IL_00a7;
				}
			}

IL_009b:
			{
				// requirements[definitionKey] = count;
				Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_33 = ___requirements1;
				String_t* L_34 = V_7;
				int64_t L_35 = V_8;
				NullCheck(L_33);
				Dictionary_2_set_Item_m10A9075140115FE57059AA1509076C79C12C5BE0(L_33, L_34, L_35, /*hidden argument*/Dictionary_2_set_Item_m10A9075140115FE57059AA1509076C79C12C5BE0_RuntimeMethod_var);
				// }
				goto IL_00b4;
			}

IL_00a7:
			{
				// else if (count == 0)
				int64_t L_36 = V_8;
				if (L_36)
				{
					goto IL_00b4;
				}
			}

IL_00ab:
			{
				// requirements.Remove(definitionKey);
				Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_37 = ___requirements1;
				String_t* L_38 = V_7;
				NullCheck(L_37);
				Dictionary_2_Remove_mE767F3B4BE934228D3BAFB3CBCDC64D06D0693FF(L_37, L_38, /*hidden argument*/Dictionary_2_Remove_mE767F3B4BE934228D3BAFB3CBCDC64D06D0693FF_RuntimeMethod_var);
			}

IL_00b4:
			{
				// consumed.Add(itemData);
				RuntimeObject* L_39 = ___consumed2;
				InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_40 = V_6;
				NullCheck(L_39);
				InterfaceActionInvoker1< InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.GameFoundation.Data.InventoryItemData>::Add(!0) */, ICollection_1_t6DD9942B302FD3D91EA4BA566BFB1549B38FE37A_il2cpp_TypeInfo_var, L_39, L_40);
			}

IL_00bc:
			{
				// foreach (var counterpartId in uniqueCounterparts)
				bool L_41 = Enumerator_MoveNext_mB55179B6FAFF356F8635980C5BE36716D5A3CF7F((Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mB55179B6FAFF356F8635980C5BE36716D5A3CF7F_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_0050;
				}
			}

IL_00c5:
			{
				IL2CPP_LEAVE(0xE1, FINALLY_00c7);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00c7;
		}

FINALLY_00c7:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mBFE61DBAEB92C4FB64F6B1ACF2E895D0467CE1E4((Enumerator_t2EF2387642F9C5048CDE9DCC21C37470592FFC0D *)(&V_4), /*hidden argument*/Enumerator_Dispose_mBFE61DBAEB92C4FB64F6B1ACF2E895D0467CE1E4_RuntimeMethod_var);
			IL2CPP_END_FINALLY(199)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(199)
		{
			IL2CPP_END_CLEANUP(0xE1, FINALLY_00d5);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d5;
	}

FINALLY_00d5:
	{ // begin finally (depth: 1)
		// s_StringListPool.Release(uniqueCounterparts);
		IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
		Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18 * L_42 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_StringListPool_6();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_43 = V_1;
		NullCheck(L_42);
		Pool_1_Release_m815FA069BF4413394CD9C8FF516196A6CBA11594(L_42, L_43, /*hidden argument*/Pool_1_Release_m815FA069BF4413394CD9C8FF516196A6CBA11594_RuntimeMethod_var);
		// }
		IL2CPP_END_FINALLY(213)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(213)
	{
		IL2CPP_JUMP_TBL(0xE1, IL_00e1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e1:
	{
		// foreach (var requirement in requirements)
		Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_44 = ___requirements1;
		NullCheck(L_44);
		Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274  L_45 = Dictionary_2_GetEnumerator_mC1A5F815C548A3037CBF3E1B28DFB3229669AA4D(L_44, /*hidden argument*/Dictionary_2_GetEnumerator_mC1A5F815C548A3037CBF3E1B28DFB3229669AA4D_RuntimeMethod_var);
		V_10 = L_45;
	}

IL_00e9:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0121;
		}

IL_00eb:
		{
			// foreach (var requirement in requirements)
			KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  L_46 = Enumerator_get_Current_m7D3D5EEF5CDBD2A9038C0C7623BEA0CF2424B948_inline((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_10), /*hidden argument*/Enumerator_get_Current_m7D3D5EEF5CDBD2A9038C0C7623BEA0CF2424B948_RuntimeMethod_var);
			V_11 = L_46;
			// var exception = new Exception
			//     ($"Missing {requirement.Key} ({requirement.Value})");
			String_t* L_47 = KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_inline((KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *)(&V_11), /*hidden argument*/KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_RuntimeMethod_var);
			int64_t L_48 = KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_inline((KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *)(&V_11), /*hidden argument*/KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_RuntimeMethod_var);
			int64_t L_49 = L_48;
			RuntimeObject * L_50 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_49);
			String_t* L_51 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6895938FD7B0931A411D13A74C0F243A1B942CE0, L_47, L_50, /*hidden argument*/NULL);
			Exception_t * L_52 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_52, L_51, /*hidden argument*/NULL);
			V_12 = L_52;
			// exceptions.Add(exception);
			RuntimeObject* L_53 = ___exceptions3;
			Exception_t * L_54 = V_12;
			NullCheck(L_53);
			InterfaceActionInvoker1< Exception_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Exception>::Add(!0) */, ICollection_1_t369F219933FB866C23070CD9749538883440F044_il2cpp_TypeInfo_var, L_53, L_54);
		}

IL_0121:
		{
			// foreach (var requirement in requirements)
			bool L_55 = Enumerator_MoveNext_mCA3E427659BA0100C56CC0ED0305444051B6FCDD((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_10), /*hidden argument*/Enumerator_MoveNext_mCA3E427659BA0100C56CC0ED0305444051B6FCDD_RuntimeMethod_var);
			if (L_55)
			{
				goto IL_00eb;
			}
		}

IL_012a:
		{
			IL2CPP_LEAVE(0x13A, FINALLY_012c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012c;
	}

FINALLY_012c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2BC3322527E84E907571F92C1F45DBFBD17B177C((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_10), /*hidden argument*/Enumerator_Dispose_m2BC3322527E84E907571F92C1F45DBFBD17B177C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(300)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(300)
	{
		IL2CPP_JUMP_TBL(0x13A, IL_013a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_013a:
	{
		// }
		return;
	}
}
// UnityEngine.GameFoundation.Data.TransactionExchangeData UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::ApplyRewards(UnityEngine.GameFoundation.DefaultCatalog.BaseTransactionAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  BaseMemoryDataLayer_ApplyRewards_m683D4C8EC3BD1051F1227D9AAC1D77D938021CA8 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961 * ___transaction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_ApplyRewards_m683D4C8EC3BD1051F1227D9AAC1D77D938021CA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * V_1 = NULL;
	List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * V_2 = NULL;
	List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07  V_6;
	memset((&V_6), 0, sizeof(V_6));
	String_t* V_7 = NULL;
	int64_t V_8 = 0;
	CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128  V_10;
	memset((&V_10), 0, sizeof(V_10));
	ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * V_11 = NULL;
	String_t* V_12 = NULL;
	int32_t V_13 = 0;
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  V_14;
	memset((&V_14), 0, sizeof(V_14));
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  V_15;
	memset((&V_15), 0, sizeof(V_15));
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var result = new TransactionExchangeData();
		il2cpp_codegen_initobj((&V_0), sizeof(TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89 ));
		// var itemDataList = s_ItemDataListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
		Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D * L_0 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_ItemDataListPool_7();
		NullCheck(L_0);
		List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_1 = Pool_1_Get_m105A85E166ECC96409BB262DC6017F188148B292(L_0, /*hidden argument*/Pool_1_Get_m105A85E166ECC96409BB262DC6017F188148B292_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			// var currencyExchanges = s_CurrencyExchangesListPool.Get();
			IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
			Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE * L_2 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_CurrencyExchangesListPool_3();
			NullCheck(L_2);
			List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * L_3 = Pool_1_Get_m6A7BAE1A3FB386BB0D9D6EFA101DB19FBF0FBE83(L_2, /*hidden argument*/Pool_1_Get_m6A7BAE1A3FB386BB0D9D6EFA101DB19FBF0FBE83_RuntimeMethod_var);
			V_2 = L_3;
		}

IL_001e:
		try
		{ // begin try (depth: 2)
			{
				// transaction.rewards.GetCurrencies(currencyExchanges);
				BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961 * L_4 = ___transaction0;
				NullCheck(L_4);
				TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * L_5 = BaseTransactionAsset_get_rewards_m4E5649CD3D00C240C3D82EA6558C057E0009C7CA_inline(L_4, /*hidden argument*/NULL);
				List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * L_6 = V_2;
				NullCheck(L_5);
				TransactionExchangeDefinitionObject_GetCurrencies_mCC3E02B59DD081242F1BE0C3AB2F9BD907F9EC0A(L_5, L_6, /*hidden argument*/NULL);
				// var count = currencyExchanges.Count;
				List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * L_7 = V_2;
				NullCheck(L_7);
				int32_t L_8 = List_1_get_Count_mA230906021D807D05569C2A2CA765BEFC4A0EF37_inline(L_7, /*hidden argument*/List_1_get_Count_mA230906021D807D05569C2A2CA765BEFC4A0EF37_RuntimeMethod_var);
				V_4 = L_8;
				// result.currencies = new CurrencyExchangeData[count];
				int32_t L_9 = V_4;
				CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB* L_10 = (CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB*)(CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB*)SZArrayNew(CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB_il2cpp_TypeInfo_var, (uint32_t)L_9);
				(&V_0)->set_currencies_0(L_10);
				// var index = 0;
				V_5 = 0;
				// foreach (var exchange in currencyExchanges)
				List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * L_11 = V_2;
				NullCheck(L_11);
				Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07  L_12 = List_1_GetEnumerator_mD39522672E1E11B7F5AD2D0EDE747F7F79498549(L_11, /*hidden argument*/List_1_GetEnumerator_mD39522672E1E11B7F5AD2D0EDE747F7F79498549_RuntimeMethod_var);
				V_6 = L_12;
			}

IL_004c:
			try
			{ // begin try (depth: 3)
				{
					goto IL_00a7;
				}

IL_004e:
				{
					// foreach (var exchange in currencyExchanges)
					CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511 * L_13 = Enumerator_get_Current_mF68A23696A474C4CA73F9146E127D23E25EC68BF_inline((Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07 *)(&V_6), /*hidden argument*/Enumerator_get_Current_mF68A23696A474C4CA73F9146E127D23E25EC68BF_RuntimeMethod_var);
					// var currencyKey = exchange.currency.key;
					CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511 * L_14 = L_13;
					NullCheck(L_14);
					CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * L_15 = CurrencyExchangeObject_get_currency_m092564FE78419E8628BC981E957AD336420335E6_inline(L_14, /*hidden argument*/NULL);
					NullCheck(L_15);
					String_t* L_16 = CatalogItemAsset_get_key_mEDAC681266C93C18BF4F35175B862529395FE2AC_inline(L_15, /*hidden argument*/NULL);
					V_7 = L_16;
					// var balance = exchange.amount;
					NullCheck(L_14);
					int64_t L_17 = CurrencyExchangeObject_get_amount_mD84B11BDB6B8E8E049BEE368E515E4411B08B932_inline(L_14, /*hidden argument*/NULL);
					V_8 = L_17;
					// m_WalletDataLayer.AdjustBalance(currencyKey, balance);
					WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * L_18 = __this->get_m_WalletDataLayer_9();
					String_t* L_19 = V_7;
					int64_t L_20 = V_8;
					NullCheck(L_18);
					WalletDataLayer_AdjustBalance_m3B27A52270BB6DD218741F0E357C8E873A16075D(L_18, L_19, L_20, /*hidden argument*/NULL);
					// result.currencies[index++] = new CurrencyExchangeData
					// {
					//     currencyKey = currencyKey,
					//     amount = balance
					// };
					TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  L_21 = V_0;
					CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB* L_22 = L_21.get_currencies_0();
					int32_t L_23 = V_5;
					int32_t L_24 = L_23;
					V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
					il2cpp_codegen_initobj((&V_9), sizeof(CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756 ));
					String_t* L_25 = V_7;
					(&V_9)->set_currencyKey_0(L_25);
					int64_t L_26 = V_8;
					(&V_9)->set_amount_1(L_26);
					CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756  L_27 = V_9;
					NullCheck(L_22);
					(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756 )L_27);
				}

IL_00a7:
				{
					// foreach (var exchange in currencyExchanges)
					bool L_28 = Enumerator_MoveNext_mEF97D497D7D4524AD8360A5CA210E74EA5512A9C((Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_mEF97D497D7D4524AD8360A5CA210E74EA5512A9C_RuntimeMethod_var);
					if (L_28)
					{
						goto IL_004e;
					}
				}

IL_00b0:
				{
					IL2CPP_LEAVE(0xCC, FINALLY_00b2);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_00b2;
			}

FINALLY_00b2:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_m9B57D9A2658B59A61E773DF37557E2098F7BD515((Enumerator_t20ACE637434AB8B7A67A1702302041A2B631AE07 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m9B57D9A2658B59A61E773DF37557E2098F7BD515_RuntimeMethod_var);
				IL2CPP_END_FINALLY(178)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(178)
			{
				IL2CPP_END_CLEANUP(0xCC, FINALLY_00c0);
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00c0;
		}

FINALLY_00c0:
		{ // begin finally (depth: 2)
			// s_CurrencyExchangesListPool.Release(currencyExchanges);
			IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
			Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE * L_29 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_CurrencyExchangesListPool_3();
			List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * L_30 = V_2;
			NullCheck(L_29);
			Pool_1_Release_m9485F723B5C79082DE25C6D239348300E9D7DC03(L_29, L_30, /*hidden argument*/Pool_1_Release_m9485F723B5C79082DE25C6D239348300E9D7DC03_RuntimeMethod_var);
			// }
			IL2CPP_END_FINALLY(192)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(192)
		{
			IL2CPP_JUMP_TBL(0xCC, IL_00cc)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00cc:
		{
			// var itemExchanges = s_ItemExchangesListPool.Get();
			IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
			Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 * L_31 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_ItemExchangesListPool_4();
			NullCheck(L_31);
			List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * L_32 = Pool_1_Get_m8ABE7C375AD92E938713B1ACFD205A4B67B3A1FD(L_31, /*hidden argument*/Pool_1_Get_m8ABE7C375AD92E938713B1ACFD205A4B67B3A1FD_RuntimeMethod_var);
			V_3 = L_32;
		}

IL_00d7:
		try
		{ // begin try (depth: 2)
			{
				// transaction.rewards.GetItems(itemExchanges);
				BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961 * L_33 = ___transaction0;
				NullCheck(L_33);
				TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * L_34 = BaseTransactionAsset_get_rewards_m4E5649CD3D00C240C3D82EA6558C057E0009C7CA_inline(L_33, /*hidden argument*/NULL);
				List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * L_35 = V_3;
				NullCheck(L_34);
				TransactionExchangeDefinitionObject_GetItems_mAB934522983702725F2F1ECE562684731CEFCB41(L_34, L_35, /*hidden argument*/NULL);
				// foreach (var exchange in itemExchanges)
				List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * L_36 = V_3;
				NullCheck(L_36);
				Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128  L_37 = List_1_GetEnumerator_m655F49E22992FCDB0E9FF859F4BAFCB5D4C5D5D2(L_36, /*hidden argument*/List_1_GetEnumerator_m655F49E22992FCDB0E9FF859F4BAFCB5D4C5D5D2_RuntimeMethod_var);
				V_10 = L_37;
			}

IL_00ec:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0156;
				}

IL_00ee:
				{
					// foreach (var exchange in itemExchanges)
					ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * L_38 = Enumerator_get_Current_m9660566D40EAE1F4FE6C7204E6E2BC119FE6383F_inline((Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128 *)(&V_10), /*hidden argument*/Enumerator_get_Current_m9660566D40EAE1F4FE6C7204E6E2BC119FE6383F_RuntimeMethod_var);
					V_11 = L_38;
					// var key = exchange.item.key;
					ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * L_39 = V_11;
					NullCheck(L_39);
					InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_40 = ItemExchangeDefinitionObject_get_item_m90A2A46981A2F4DF17F7D31C95F5064364E1A93C_inline(L_39, /*hidden argument*/NULL);
					NullCheck(L_40);
					String_t* L_41 = CatalogItemAsset_get_key_mEDAC681266C93C18BF4F35175B862529395FE2AC_inline(L_40, /*hidden argument*/NULL);
					V_12 = L_41;
					// for (var i = 0; i < exchange.amount; i++)
					V_13 = 0;
					goto IL_014a;
				}

IL_010a:
				{
					// var item = m_InventoryDataLayer.CreateItem(key);
					InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * L_42 = __this->get_m_InventoryDataLayer_2();
					String_t* L_43 = V_12;
					NullCheck(L_42);
					InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_44 = InventoryDataLayer_CreateItem_m7CA6500F145602BB6CD82EE2DDB9F68EEEBD7CA8(L_42, L_43, /*hidden argument*/NULL);
					V_14 = L_44;
					// var itemData = new InventoryItemData
					// {
					//     id = item.id,
					//     definitionKey = key
					// };
					il2cpp_codegen_initobj((&V_16), sizeof(InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 ));
					InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_45 = V_14;
					String_t* L_46 = L_45.get_id_1();
					(&V_16)->set_id_1(L_46);
					String_t* L_47 = V_12;
					(&V_16)->set_definitionKey_0(L_47);
					InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_48 = V_16;
					V_15 = L_48;
					// itemDataList.Add(itemData);
					List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_49 = V_1;
					InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_50 = V_15;
					NullCheck(L_49);
					List_1_Add_mED5FE4B3F58CB7DC42ECF61798C1B7310DF341BC(L_49, L_50, /*hidden argument*/List_1_Add_mED5FE4B3F58CB7DC42ECF61798C1B7310DF341BC_RuntimeMethod_var);
					// for (var i = 0; i < exchange.amount; i++)
					int32_t L_51 = V_13;
					V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
				}

IL_014a:
				{
					// for (var i = 0; i < exchange.amount; i++)
					int32_t L_52 = V_13;
					ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * L_53 = V_11;
					NullCheck(L_53);
					int64_t L_54 = ItemExchangeDefinitionObject_get_amount_m1D6BA642E44F09ADAAAF934E27CE4F20A7BDA5C0_inline(L_53, /*hidden argument*/NULL);
					if ((((int64_t)(((int64_t)((int64_t)L_52)))) < ((int64_t)L_54)))
					{
						goto IL_010a;
					}
				}

IL_0156:
				{
					// foreach (var exchange in itemExchanges)
					bool L_55 = Enumerator_MoveNext_m65E12AD9CF3991BD0770C55374465EDAA7F6E0EC((Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128 *)(&V_10), /*hidden argument*/Enumerator_MoveNext_m65E12AD9CF3991BD0770C55374465EDAA7F6E0EC_RuntimeMethod_var);
					if (L_55)
					{
						goto IL_00ee;
					}
				}

IL_015f:
				{
					IL2CPP_LEAVE(0x17B, FINALLY_0161);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0161;
			}

FINALLY_0161:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_m25C59272D93AA021CE6A41D6F97FFAAFEDA37D97((Enumerator_t88550D4E6BBE080718955BACBEF618C15BDBA128 *)(&V_10), /*hidden argument*/Enumerator_Dispose_m25C59272D93AA021CE6A41D6F97FFAAFEDA37D97_RuntimeMethod_var);
				IL2CPP_END_FINALLY(353)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(353)
			{
				IL2CPP_END_CLEANUP(0x17B, FINALLY_016f);
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_016f;
		}

FINALLY_016f:
		{ // begin finally (depth: 2)
			// s_ItemExchangesListPool.Release(itemExchanges);
			IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
			Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 * L_56 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_ItemExchangesListPool_4();
			List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * L_57 = V_3;
			NullCheck(L_56);
			Pool_1_Release_m793291285401D639B357B7909A3E719D793B0297(L_56, L_57, /*hidden argument*/Pool_1_Release_m793291285401D639B357B7909A3E719D793B0297_RuntimeMethod_var);
			// }
			IL2CPP_END_FINALLY(367)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(367)
		{
			IL2CPP_JUMP_TBL(0x17B, IL_017b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_017b:
		{
			// result.items = itemDataList.ToArray();
			List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_58 = V_1;
			NullCheck(L_58);
			InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* L_59 = List_1_ToArray_mB405B72C20F5422B845AF098E7809D10F58A25DE(L_58, /*hidden argument*/List_1_ToArray_mB405B72C20F5422B845AF098E7809D10F58A25DE_RuntimeMethod_var);
			(&V_0)->set_items_1(L_59);
			// }
			IL2CPP_LEAVE(0x196, FINALLY_018a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_018a;
	}

FINALLY_018a:
	{ // begin finally (depth: 1)
		// s_ItemDataListPool.Release(itemDataList);
		IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
		Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D * L_60 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_ItemDataListPool_7();
		List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_61 = V_1;
		NullCheck(L_60);
		Pool_1_Release_m518A1F3F1806EEFD042D2C6F2EE5408649A1C10D(L_60, L_61, /*hidden argument*/Pool_1_Release_m518A1F3F1806EEFD042D2C6F2EE5408649A1C10D_RuntimeMethod_var);
		// }
		IL2CPP_END_FINALLY(394)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(394)
	{
		IL2CPP_JUMP_TBL(0x196, IL_0196)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0196:
	{
		// return result;
		TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  L_62 = V_0;
		return L_62;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::RedeemIap(System.String,UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.TransactionExchangeData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_RedeemIap_m53E81AC1589284E90C1028B1F274C09F727CD882 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, String_t* ___key0, Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423  ___completer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_RedeemIap_m53E81AC1589284E90C1028B1F274C09F727CD882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAPTransactionAsset_tB3E62FE57509F88507D89E3477CB863D278AE96D * V_0 = NULL;
	TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// var transactionCatalog = database.transactionCatalog;
			GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * L_0 = __this->get_database_1();
			NullCheck(L_0);
			TransactionCatalogAsset_t2B59953008F38A51B99AD36CC58D041F7ED6F543 * L_1 = GameFoundationDatabase_get_transactionCatalog_m147EC786FBCAC867EB2ADB20778FBFAEB5B8E904_inline(L_0, /*hidden argument*/NULL);
			// var transaction =
			//     transactionCatalog.FindItem(key) as IAPTransactionAsset;
			String_t* L_2 = ___key0;
			NullCheck(L_1);
			BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961 * L_3 = SingleCollectionCatalogAsset_1_FindItem_mE819FEAB7F9BE1073C5E4D3544DFB337EF4370F3(L_1, L_2, /*hidden argument*/SingleCollectionCatalogAsset_1_FindItem_mE819FEAB7F9BE1073C5E4D3544DFB337EF4370F3_RuntimeMethod_var);
			V_0 = ((IAPTransactionAsset_tB3E62FE57509F88507D89E3477CB863D278AE96D *)IsInstClass((RuntimeObject*)L_3, IAPTransactionAsset_tB3E62FE57509F88507D89E3477CB863D278AE96D_il2cpp_TypeInfo_var));
			// if (transaction is null)
			IAPTransactionAsset_tB3E62FE57509F88507D89E3477CB863D278AE96D * L_4 = V_0;
			if (L_4)
			{
				goto IL_0030;
			}
		}

IL_001a:
		{
			// throw new KeyNotFoundException
			//     ($"{nameof(IAPTransactionAsset)} {key} not found.");
			String_t* L_5 = ___key0;
			String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral25A01F2240ED525728F4BE87FD95D2647FEFB989, L_5, _stringLiteral08A9107516C2D83E4C6AFE0E223AE07A62073F1E, /*hidden argument*/NULL);
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * L_7 = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 *)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(L_7, L_6, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, BaseMemoryDataLayer_RedeemIap_m53E81AC1589284E90C1028B1F274C09F727CD882_RuntimeMethod_var);
		}

IL_0030:
		{
			// var result = ApplyRewards(transaction);
			IAPTransactionAsset_tB3E62FE57509F88507D89E3477CB863D278AE96D * L_8 = V_0;
			TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  L_9 = BaseMemoryDataLayer_ApplyRewards_m683D4C8EC3BD1051F1227D9AAC1D77D938021CA8(__this, L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			// completer.Resolve(result);
			TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  L_10 = V_1;
			Completer_1_Resolve_mBA247FFA9426F22B8EDAD713F188330D46CA7018((Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423 *)(&___completer1), L_10, /*hidden argument*/Completer_1_Resolve_mBA247FFA9426F22B8EDAD713F188330D46CA7018_RuntimeMethod_var);
			// }
			goto IL_004d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0042;
		throw e;
	}

CATCH_0042:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_2 = ((Exception_t *)__exception_local);
		// completer.Reject(e);
		Exception_t * L_11 = V_2;
		Completer_1_Reject_m54125D7C264AEB5AC200C1D1A45F5C10C8658EC5((Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423 *)(&___completer1), L_11, /*hidden argument*/Completer_1_Reject_m54125D7C264AEB5AC200C1D1A45F5C10C8658EC5_RuntimeMethod_var);
		// }
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::UnityEngine.GameFoundation.DataAccessLayers.ITransactionDataLayer.MakeVirtualTransaction(System.String,System.Collections.Generic.ICollection`1<System.String>,UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.VirtualTransactionExchangeData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_UnityEngine_GameFoundation_DataAccessLayers_ITransactionDataLayer_MakeVirtualTransaction_mFB7745BEE1D08DFDF6EE0762B3C3996750C66E59 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, String_t* ___key0, RuntimeObject* ___counterparts1, Completer_1_t5A0C8B591E66EA24FBD4B87E915D7E37AFC1CA58  ___completer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_UnityEngine_GameFoundation_DataAccessLayers_ITransactionDataLayer_MakeVirtualTransaction_mFB7745BEE1D08DFDF6EE0762B3C3996750C66E59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VirtualTransactionAsset_t9D9A79A9D9D70B07143D90FFCD81F5316F14CE54 * V_0 = NULL;
	Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * V_1 = NULL;
	Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * V_2 = NULL;
	List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * V_3 = NULL;
	List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * V_4 = NULL;
	VirtualTransactionExchangeData_tB70E38408B081AA5E1F5A80AF37C128CD8C23060  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274  V_8;
	memset((&V_8), 0, sizeof(V_8));
	KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  V_9;
	memset((&V_9), 0, sizeof(V_9));
	String_t* V_10 = NULL;
	int64_t V_11 = 0;
	CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649  V_13;
	memset((&V_13), 0, sizeof(V_13));
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t * V_15 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 6);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// var transactionCatalog = database.transactionCatalog;
			GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * L_0 = __this->get_database_1();
			NullCheck(L_0);
			TransactionCatalogAsset_t2B59953008F38A51B99AD36CC58D041F7ED6F543 * L_1 = GameFoundationDatabase_get_transactionCatalog_m147EC786FBCAC867EB2ADB20778FBFAEB5B8E904_inline(L_0, /*hidden argument*/NULL);
			// var transaction =
			//     transactionCatalog.FindItem(key) as VirtualTransactionAsset;
			String_t* L_2 = ___key0;
			NullCheck(L_1);
			BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961 * L_3 = SingleCollectionCatalogAsset_1_FindItem_mE819FEAB7F9BE1073C5E4D3544DFB337EF4370F3(L_1, L_2, /*hidden argument*/SingleCollectionCatalogAsset_1_FindItem_mE819FEAB7F9BE1073C5E4D3544DFB337EF4370F3_RuntimeMethod_var);
			V_0 = ((VirtualTransactionAsset_t9D9A79A9D9D70B07143D90FFCD81F5316F14CE54 *)IsInstSealed((RuntimeObject*)L_3, VirtualTransactionAsset_t9D9A79A9D9D70B07143D90FFCD81F5316F14CE54_il2cpp_TypeInfo_var));
			// if (transaction is null)
			VirtualTransactionAsset_t9D9A79A9D9D70B07143D90FFCD81F5316F14CE54 * L_4 = V_0;
			if (L_4)
			{
				goto IL_0030;
			}
		}

IL_001a:
		{
			// throw new KeyNotFoundException
			//     ($"{nameof(VirtualTransactionAsset)} {key} not found.");
			String_t* L_5 = ___key0;
			String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral6DD053EB1A43A025CA392173AB2837159D428F61, L_5, _stringLiteral08A9107516C2D83E4C6AFE0E223AE07A62073F1E, /*hidden argument*/NULL);
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * L_7 = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 *)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(L_7, L_6, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, BaseMemoryDataLayer_UnityEngine_GameFoundation_DataAccessLayers_ITransactionDataLayer_MakeVirtualTransaction_mFB7745BEE1D08DFDF6EE0762B3C3996750C66E59_RuntimeMethod_var);
		}

IL_0030:
		{
			// var currencyExchanges = s_DictionaryStringLongPool.Get();
			IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
			Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB * L_8 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_DictionaryStringLongPool_8();
			NullCheck(L_8);
			Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_9 = Pool_1_Get_m0FC0D0EE032FF5D1FA01FDCCDA3D744DC32548C3(L_8, /*hidden argument*/Pool_1_Get_m0FC0D0EE032FF5D1FA01FDCCDA3D744DC32548C3_RuntimeMethod_var);
			V_1 = L_9;
			// var itemExchanges = s_DictionaryStringLongPool.Get();
			Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB * L_10 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_DictionaryStringLongPool_8();
			NullCheck(L_10);
			Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_11 = Pool_1_Get_m0FC0D0EE032FF5D1FA01FDCCDA3D744DC32548C3(L_10, /*hidden argument*/Pool_1_Get_m0FC0D0EE032FF5D1FA01FDCCDA3D744DC32548C3_RuntimeMethod_var);
			V_2 = L_11;
			// var consumed = s_ItemDataListPool.Get();
			Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D * L_12 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_ItemDataListPool_7();
			NullCheck(L_12);
			List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_13 = Pool_1_Get_m105A85E166ECC96409BB262DC6017F188148B292(L_12, /*hidden argument*/Pool_1_Get_m105A85E166ECC96409BB262DC6017F188148B292_RuntimeMethod_var);
			V_3 = L_13;
		}

IL_0051:
		try
		{ // begin try (depth: 2)
			{
				// ConsolidateTransactionExchange
				//     (transaction.costs, currencyExchanges, itemExchanges);
				VirtualTransactionAsset_t9D9A79A9D9D70B07143D90FFCD81F5316F14CE54 * L_14 = V_0;
				NullCheck(L_14);
				TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * L_15 = VirtualTransactionAsset_get_costs_mC404FD615A7BC65DFF5F1D664BE10F6A32001723_inline(L_14, /*hidden argument*/NULL);
				Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_16 = V_1;
				Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_17 = V_2;
				IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
				BaseMemoryDataLayer_ConsolidateTransactionExchange_m573871562AA1E7E5F9FBD670EBA2AAAB4C862692(L_15, L_16, L_17, /*hidden argument*/NULL);
				// var exceptions = s_ExceptionListPool.Get();
				Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A * L_18 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_ExceptionListPool_5();
				NullCheck(L_18);
				List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * L_19 = Pool_1_Get_mB53ED92EAFF03B7CBBE50C0A394F852A796F4835(L_18, /*hidden argument*/Pool_1_Get_mB53ED92EAFF03B7CBBE50C0A394F852A796F4835_RuntimeMethod_var);
				V_4 = L_19;
			}

IL_006a:
			try
			{ // begin try (depth: 3)
				{
					// VerifyCost
					//     (currencyExchanges, itemExchanges, exceptions);
					Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_20 = V_1;
					Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_21 = V_2;
					List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * L_22 = V_4;
					BaseMemoryDataLayer_VerifyCost_m2388164042B46B3EE53A6E0EEF3021CD58235810(__this, L_20, L_21, L_22, /*hidden argument*/NULL);
					// VerifyItemPayload
					//     (counterparts, itemExchanges, consumed, exceptions);
					RuntimeObject* L_23 = ___counterparts1;
					Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_24 = V_2;
					List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_25 = V_3;
					List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * L_26 = V_4;
					BaseMemoryDataLayer_VerifyItemPayload_m664336F2D55B374DB993E6E481CB29525386CCD7(__this, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
					// if (exceptions.Count > 0)
					List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * L_27 = V_4;
					NullCheck(L_27);
					int32_t L_28 = List_1_get_Count_m6189DDF6BE78B680B0C3CD0D8F6D224241883B68_inline(L_27, /*hidden argument*/List_1_get_Count_m6189DDF6BE78B680B0C3CD0D8F6D224241883B68_RuntimeMethod_var);
					if ((((int32_t)L_28) <= ((int32_t)0)))
					{
						goto IL_0091;
					}
				}

IL_0089:
				{
					// throw new AggregateException(exceptions);
					List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * L_29 = V_4;
					AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * L_30 = (AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E *)il2cpp_codegen_object_new(AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E_il2cpp_TypeInfo_var);
					AggregateException__ctor_m1740971CC345A49D8FCB7DDE6C905FB0F3353C28(L_30, L_29, /*hidden argument*/NULL);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, BaseMemoryDataLayer_UnityEngine_GameFoundation_DataAccessLayers_ITransactionDataLayer_MakeVirtualTransaction_mFB7745BEE1D08DFDF6EE0762B3C3996750C66E59_RuntimeMethod_var);
				}

IL_0091:
				{
					// }
					IL2CPP_LEAVE(0xA0, FINALLY_0093);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0093;
			}

FINALLY_0093:
			{ // begin finally (depth: 3)
				// s_ExceptionListPool.Release(exceptions);
				IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
				Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A * L_31 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_ExceptionListPool_5();
				List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * L_32 = V_4;
				NullCheck(L_31);
				Pool_1_Release_mE426A36D9DFBD7748B0E45FFB939A2ABFDF0EB14(L_31, L_32, /*hidden argument*/Pool_1_Release_mE426A36D9DFBD7748B0E45FFB939A2ABFDF0EB14_RuntimeMethod_var);
				// }
				IL2CPP_END_FINALLY(147)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(147)
			{
				IL2CPP_JUMP_TBL(0xA0, IL_00a0)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_00a0:
			{
				// var result = new VirtualTransactionExchangeData();
				il2cpp_codegen_initobj((&V_5), sizeof(VirtualTransactionExchangeData_tB70E38408B081AA5E1F5A80AF37C128CD8C23060 ));
				// var count = currencyExchanges.Count;
				Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_33 = V_1;
				NullCheck(L_33);
				int32_t L_34 = Dictionary_2_get_Count_m51F855E8CD8525A5BB0B17B6108DAA36C6F14E3C(L_33, /*hidden argument*/Dictionary_2_get_Count_m51F855E8CD8525A5BB0B17B6108DAA36C6F14E3C_RuntimeMethod_var);
				V_6 = L_34;
				// result.cost.currencies = new CurrencyExchangeData[count];
				TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89 * L_35 = (&V_5)->get_address_of_cost_0();
				int32_t L_36 = V_6;
				CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB* L_37 = (CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB*)(CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB*)SZArrayNew(CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB_il2cpp_TypeInfo_var, (uint32_t)L_36);
				L_35->set_currencies_0(L_37);
				// var index = 0;
				V_7 = 0;
				// foreach (var exchange in currencyExchanges)
				Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_38 = V_1;
				NullCheck(L_38);
				Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274  L_39 = Dictionary_2_GetEnumerator_mC1A5F815C548A3037CBF3E1B28DFB3229669AA4D(L_38, /*hidden argument*/Dictionary_2_GetEnumerator_mC1A5F815C548A3037CBF3E1B28DFB3229669AA4D_RuntimeMethod_var);
				V_8 = L_39;
			}

IL_00ce:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0130;
				}

IL_00d0:
				{
					// foreach (var exchange in currencyExchanges)
					KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  L_40 = Enumerator_get_Current_m7D3D5EEF5CDBD2A9038C0C7623BEA0CF2424B948_inline((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_8), /*hidden argument*/Enumerator_get_Current_m7D3D5EEF5CDBD2A9038C0C7623BEA0CF2424B948_RuntimeMethod_var);
					V_9 = L_40;
					// var currencyKey = exchange.Key;
					String_t* L_41 = KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_inline((KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *)(&V_9), /*hidden argument*/KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_RuntimeMethod_var);
					V_10 = L_41;
					// var balance = -exchange.Value;
					int64_t L_42 = KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_inline((KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *)(&V_9), /*hidden argument*/KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_RuntimeMethod_var);
					V_11 = ((-L_42));
					// m_WalletDataLayer.AdjustBalance(currencyKey, balance);
					WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * L_43 = __this->get_m_WalletDataLayer_9();
					String_t* L_44 = V_10;
					int64_t L_45 = V_11;
					NullCheck(L_43);
					WalletDataLayer_AdjustBalance_m3B27A52270BB6DD218741F0E357C8E873A16075D(L_43, L_44, L_45, /*hidden argument*/NULL);
					// result.cost.currencies[index++] = new CurrencyExchangeData
					// {
					//     currencyKey = currencyKey,
					//     amount = balance
					// };
					VirtualTransactionExchangeData_tB70E38408B081AA5E1F5A80AF37C128CD8C23060  L_46 = V_5;
					TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  L_47 = L_46.get_cost_0();
					CurrencyExchangeDataU5BU5D_t73C7ED549E04EB7E2688DD54ED0D580773E60EAB* L_48 = L_47.get_currencies_0();
					int32_t L_49 = V_7;
					int32_t L_50 = L_49;
					V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
					il2cpp_codegen_initobj((&V_12), sizeof(CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756 ));
					String_t* L_51 = V_10;
					(&V_12)->set_currencyKey_0(L_51);
					int64_t L_52 = V_11;
					(&V_12)->set_amount_1(L_52);
					CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756  L_53 = V_12;
					NullCheck(L_48);
					(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (CurrencyExchangeData_tF11CA4AACD253B04236F05255658A183EED38756 )L_53);
				}

IL_0130:
				{
					// foreach (var exchange in currencyExchanges)
					bool L_54 = Enumerator_MoveNext_mCA3E427659BA0100C56CC0ED0305444051B6FCDD((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_8), /*hidden argument*/Enumerator_MoveNext_mCA3E427659BA0100C56CC0ED0305444051B6FCDD_RuntimeMethod_var);
					if (L_54)
					{
						goto IL_00d0;
					}
				}

IL_0139:
				{
					IL2CPP_LEAVE(0x149, FINALLY_013b);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_013b;
			}

FINALLY_013b:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_m2BC3322527E84E907571F92C1F45DBFBD17B177C((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_8), /*hidden argument*/Enumerator_Dispose_m2BC3322527E84E907571F92C1F45DBFBD17B177C_RuntimeMethod_var);
				IL2CPP_END_FINALLY(315)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(315)
			{
				IL2CPP_JUMP_TBL(0x149, IL_0149)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0149:
			{
				// foreach (var itemData in consumed)
				List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_55 = V_3;
				NullCheck(L_55);
				Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649  L_56 = List_1_GetEnumerator_mFFAA67A6EE2BD1AB710D4CBA0349C5E921BEED7D(L_55, /*hidden argument*/List_1_GetEnumerator_mFFAA67A6EE2BD1AB710D4CBA0349C5E921BEED7D_RuntimeMethod_var);
				V_13 = L_56;
			}

IL_0151:
			try
			{ // begin try (depth: 3)
				{
					goto IL_016f;
				}

IL_0153:
				{
					// foreach (var itemData in consumed)
					InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_57 = Enumerator_get_Current_m356BA8F142DE34D3AEAC6E1B7E5727334AFE4A82_inline((Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 *)(&V_13), /*hidden argument*/Enumerator_get_Current_m356BA8F142DE34D3AEAC6E1B7E5727334AFE4A82_RuntimeMethod_var);
					V_14 = L_57;
					// m_InventoryDataLayer.DeleteItem(itemData.id);
					InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * L_58 = __this->get_m_InventoryDataLayer_2();
					InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_59 = V_14;
					String_t* L_60 = L_59.get_id_1();
					NullCheck(L_58);
					InventoryDataLayer_DeleteItem_m23AA189A113E989E713B6402140EDD9F60E954BC(L_58, L_60, /*hidden argument*/NULL);
				}

IL_016f:
				{
					// foreach (var itemData in consumed)
					bool L_61 = Enumerator_MoveNext_mD347A2D3614B42E67980978F6FC1830F4A0D0FA2((Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 *)(&V_13), /*hidden argument*/Enumerator_MoveNext_mD347A2D3614B42E67980978F6FC1830F4A0D0FA2_RuntimeMethod_var);
					if (L_61)
					{
						goto IL_0153;
					}
				}

IL_0178:
				{
					IL2CPP_LEAVE(0x188, FINALLY_017a);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_017a;
			}

FINALLY_017a:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_m014B02D27BC94C1B69BF39A307251357F2DEF53B((Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 *)(&V_13), /*hidden argument*/Enumerator_Dispose_m014B02D27BC94C1B69BF39A307251357F2DEF53B_RuntimeMethod_var);
				IL2CPP_END_FINALLY(378)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(378)
			{
				IL2CPP_JUMP_TBL(0x188, IL_0188)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0188:
			{
				// result.cost.items = consumed.ToArray();
				TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89 * L_62 = (&V_5)->get_address_of_cost_0();
				List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_63 = V_3;
				NullCheck(L_63);
				InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* L_64 = List_1_ToArray_mB405B72C20F5422B845AF098E7809D10F58A25DE(L_63, /*hidden argument*/List_1_ToArray_mB405B72C20F5422B845AF098E7809D10F58A25DE_RuntimeMethod_var);
				L_62->set_items_1(L_64);
				// result.rewards = ApplyRewards(transaction);
				VirtualTransactionAsset_t9D9A79A9D9D70B07143D90FFCD81F5316F14CE54 * L_65 = V_0;
				TransactionExchangeData_tD317BD5299D4A445F84E65371230BBA658E41E89  L_66 = BaseMemoryDataLayer_ApplyRewards_m683D4C8EC3BD1051F1227D9AAC1D77D938021CA8(__this, L_65, /*hidden argument*/NULL);
				(&V_5)->set_rewards_1(L_66);
				// completer.Resolve(result);
				VirtualTransactionExchangeData_tB70E38408B081AA5E1F5A80AF37C128CD8C23060  L_67 = V_5;
				Completer_1_Resolve_m80FD1826B75CBBE1F2347FE41D8BB53A06111D5B((Completer_1_t5A0C8B591E66EA24FBD4B87E915D7E37AFC1CA58 *)(&___completer2), L_67, /*hidden argument*/Completer_1_Resolve_m80FD1826B75CBBE1F2347FE41D8BB53A06111D5B_RuntimeMethod_var);
				// }
				IL2CPP_LEAVE(0x1D5, FINALLY_01b3);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01b3;
		}

FINALLY_01b3:
		{ // begin finally (depth: 2)
			// s_DictionaryStringLongPool.Release(itemExchanges);
			IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
			Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB * L_68 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_DictionaryStringLongPool_8();
			Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_69 = V_2;
			NullCheck(L_68);
			Pool_1_Release_mD790AB072ADB365B08C7D64C049826EC6A9596B0(L_68, L_69, /*hidden argument*/Pool_1_Release_mD790AB072ADB365B08C7D64C049826EC6A9596B0_RuntimeMethod_var);
			// s_DictionaryStringLongPool.Release(currencyExchanges);
			Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB * L_70 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_DictionaryStringLongPool_8();
			Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_71 = V_1;
			NullCheck(L_70);
			Pool_1_Release_mD790AB072ADB365B08C7D64C049826EC6A9596B0(L_70, L_71, /*hidden argument*/Pool_1_Release_mD790AB072ADB365B08C7D64C049826EC6A9596B0_RuntimeMethod_var);
			// s_ItemDataListPool.Release(consumed);
			Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D * L_72 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->get_s_ItemDataListPool_7();
			List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_73 = V_3;
			NullCheck(L_72);
			Pool_1_Release_m518A1F3F1806EEFD042D2C6F2EE5408649A1C10D(L_72, L_73, /*hidden argument*/Pool_1_Release_m518A1F3F1806EEFD042D2C6F2EE5408649A1C10D_RuntimeMethod_var);
			// }
			IL2CPP_END_FINALLY(435)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(435)
		{
			IL2CPP_JUMP_TBL(0x1D5, IL_01d5)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_01d5:
		{
			// }
			goto IL_01e4;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_01d7;
		throw e;
	}

CATCH_01d7:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_15 = ((Exception_t *)__exception_local);
		// completer.Reject(e);
		Exception_t * L_74 = V_15;
		Completer_1_Reject_m777002F7DA44769394BBE625A2DF4870FBD9B1B6((Completer_1_t5A0C8B591E66EA24FBD4B87E915D7E37AFC1CA58 *)(&___completer2), L_74, /*hidden argument*/Completer_1_Reject_m777002F7DA44769394BBE625A2DF4870FBD9B1B6_RuntimeMethod_var);
		// }
		goto IL_01e4;
	} // end catch (depth: 1)

IL_01e4:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::UnityEngine.GameFoundation.DataAccessLayers.ITransactionDataLayer.RedeemAppleIap(System.String,System.String,UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.TransactionExchangeData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_UnityEngine_GameFoundation_DataAccessLayers_ITransactionDataLayer_RedeemAppleIap_m487CC968AE79DFAE2B68501D2F3734AB584EAAD4 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, String_t* ___key0, String_t* ___receipt1, Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423  ___completer2, const RuntimeMethod* method)
{
	{
		// => RedeemIap(key, completer);
		String_t* L_0 = ___key0;
		Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423  L_1 = ___completer2;
		BaseMemoryDataLayer_RedeemIap_m53E81AC1589284E90C1028B1F274C09F727CD882(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::UnityEngine.GameFoundation.DataAccessLayers.ITransactionDataLayer.RedeemGoogleIap(System.String,System.String,System.String,UnityEngine.Promise.Completer`1<UnityEngine.GameFoundation.Data.TransactionExchangeData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_UnityEngine_GameFoundation_DataAccessLayers_ITransactionDataLayer_RedeemGoogleIap_mF00682382727B23AF19DFD9B86D0CBEAE0104BDA (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, String_t* ___key0, String_t* ___purchaseData1, String_t* ___purchaseDataSignature2, Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423  ___completer3, const RuntimeMethod* method)
{
	{
		// => RedeemIap(key, completer);
		String_t* L_0 = ___key0;
		Completer_1_t386CFF14CE4D7767F67070F5BA7574DCA7636423  L_1 = ___completer3;
		BaseMemoryDataLayer_RedeemIap_m53E81AC1589284E90C1028B1F274C09F727CD882(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::InitializeWalletDataLayer(UnityEngine.GameFoundation.Data.WalletData,UnityEngine.GameFoundation.DefaultCatalog.CurrencyCatalogAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_InitializeWalletDataLayer_m883C5686065BEB87C8C69F9E9D39220A57DDED7C (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  ___data0, CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 * ___catalog1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_InitializeWalletDataLayer_m883C5686065BEB87C8C69F9E9D39220A57DDED7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_WalletDataLayer = new WalletDataLayer(data, catalog);
		WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  L_0 = ___data0;
		CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 * L_1 = ___catalog1;
		WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * L_2 = (WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF *)il2cpp_codegen_object_new(WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF_il2cpp_TypeInfo_var);
		WalletDataLayer__ctor_m94646596B1378BDE36EDDAD59EABE0EC1039C44B(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_WalletDataLayer_9(L_2);
		// }
		return;
	}
}
// UnityEngine.GameFoundation.Data.WalletData UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::UnityEngine.GameFoundation.IWalletDataLayer.GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  BaseMemoryDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_GetData_m99AFE3B74275826C28C337F25F2D292F27856EF8 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_GetData_m99AFE3B74275826C28C337F25F2D292F27856EF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (m_WalletDataLayer as IWalletDataLayer).GetData();
		WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * L_0 = __this->get_m_WalletDataLayer_9();
		NullCheck(L_0);
		WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  L_1 = InterfaceFuncInvoker0< WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  >::Invoke(0 /* UnityEngine.GameFoundation.Data.WalletData UnityEngine.GameFoundation.IWalletDataLayer::GetData() */, IWalletDataLayer_t01EDF84C9C7F6CA8EB187A3252545451F91A7433_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::UnityEngine.GameFoundation.IWalletDataLayer.SetBalance(System.String,System.Int64,UnityEngine.Promise.Completer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_SetBalance_m902BA9E62B0D8F333D2A076F9B1EE1AE4A92EB98 (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, String_t* ___currencyKey0, int64_t ___value1, Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  ___completer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_SetBalance_m902BA9E62B0D8F333D2A076F9B1EE1AE4A92EB98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (m_WalletDataLayer as IWalletDataLayer)
		// .SetBalance(currencyKey, value, completer);
		WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * L_0 = __this->get_m_WalletDataLayer_9();
		String_t* L_1 = ___currencyKey0;
		int64_t L_2 = ___value1;
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  L_3 = ___completer2;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, int64_t, Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  >::Invoke(1 /* System.Void UnityEngine.GameFoundation.IWalletDataLayer::SetBalance(System.String,System.Int64,UnityEngine.Promise.Completer) */, IWalletDataLayer_t01EDF84C9C7F6CA8EB187A3252545451F91A7433_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::UnityEngine.GameFoundation.IWalletDataLayer.AddBalance(System.String,System.Int64,UnityEngine.Promise.Completer`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_AddBalance_mC434AB9E5D68AFDBF6FDBB2D680AE2B554BD0C7E (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, String_t* ___currencyKey0, int64_t ___value1, Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF  ___completer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_AddBalance_mC434AB9E5D68AFDBF6FDBB2D680AE2B554BD0C7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (m_WalletDataLayer as IWalletDataLayer)
		// .AddBalance(currencyKey, value, completer);
		WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * L_0 = __this->get_m_WalletDataLayer_9();
		String_t* L_1 = ___currencyKey0;
		int64_t L_2 = ___value1;
		Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF  L_3 = ___completer2;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, int64_t, Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF  >::Invoke(2 /* System.Void UnityEngine.GameFoundation.IWalletDataLayer::AddBalance(System.String,System.Int64,UnityEngine.Promise.Completer`1<System.Int64>) */, IWalletDataLayer_t01EDF84C9C7F6CA8EB187A3252545451F91A7433_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::UnityEngine.GameFoundation.IWalletDataLayer.RemoveBalance(System.String,System.Int64,UnityEngine.Promise.Completer`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_RemoveBalance_m2FB92F7A1CBBA158426D263522EC08100DFC1AAA (BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 * __this, String_t* ___currencyKey0, int64_t ___value1, Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF  ___completer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_RemoveBalance_m2FB92F7A1CBBA158426D263522EC08100DFC1AAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (m_WalletDataLayer as IWalletDataLayer)
		// .RemoveBalance(currencyKey, value, completer);
		WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * L_0 = __this->get_m_WalletDataLayer_9();
		String_t* L_1 = ___currencyKey0;
		int64_t L_2 = ___value1;
		Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF  L_3 = ___completer2;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, int64_t, Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF  >::Invoke(3 /* System.Void UnityEngine.GameFoundation.IWalletDataLayer::RemoveBalance(System.String,System.Int64,UnityEngine.Promise.Completer`1<System.Int64>) */, IWalletDataLayer_t01EDF84C9C7F6CA8EB187A3252545451F91A7433_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMemoryDataLayer__cctor_m0A7FBCE64144E5C53040DA1C9338F0D885F82656 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseMemoryDataLayer__cctor_m0A7FBCE64144E5C53040DA1C9338F0D885F82656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Pool<List<CurrencyExchangeObject>> s_CurrencyExchangesListPool =
		//     new Pool<List<CurrencyExchangeObject>>(
		//         () => new List<CurrencyExchangeObject>(),
		//         list => list.Clear());
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var);
		U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * L_0 = ((U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t60E22F842BA86FDE2A99F8DD874CCE1F49EAB448 * L_1 = (Func_1_t60E22F842BA86FDE2A99F8DD874CCE1F49EAB448 *)il2cpp_codegen_object_new(Func_1_t60E22F842BA86FDE2A99F8DD874CCE1F49EAB448_il2cpp_TypeInfo_var);
		Func_1__ctor_m3DEEC8E97F306291257C5D51DEA99B62C3020702(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__34_0_m8173358889628248FD7F465EC20D0B3993801988_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m3DEEC8E97F306291257C5D51DEA99B62C3020702_RuntimeMethod_var);
		U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * L_2 = ((U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tB03796BBEE46B5AFBEA805E7D422268E5648AB46 * L_3 = (Action_1_tB03796BBEE46B5AFBEA805E7D422268E5648AB46 *)il2cpp_codegen_object_new(Action_1_tB03796BBEE46B5AFBEA805E7D422268E5648AB46_il2cpp_TypeInfo_var);
		Action_1__ctor_m1C358B6C23A18E0B273C0661086FF4CC3BA97A19(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__34_1_m4B6DF049DFEF6C49F4E4C07CCA2D61A69B8B00B4_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m1C358B6C23A18E0B273C0661086FF4CC3BA97A19_RuntimeMethod_var);
		Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE * L_4 = (Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE *)il2cpp_codegen_object_new(Pool_1_tC2CAD84EAF890FFF6780843D01A057C044BEF3EE_il2cpp_TypeInfo_var);
		Pool_1__ctor_mC0718AD299A29530658EE197FC04E0F161B74D3A(L_4, L_1, L_3, /*hidden argument*/Pool_1__ctor_mC0718AD299A29530658EE197FC04E0F161B74D3A_RuntimeMethod_var);
		((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->set_s_CurrencyExchangesListPool_3(L_4);
		// static readonly Pool<List<ItemExchangeDefinitionObject>> s_ItemExchangesListPool =
		//     new Pool<List<ItemExchangeDefinitionObject>>(
		//         () => new List<ItemExchangeDefinitionObject>(),
		//         list => list.Clear());
		U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * L_5 = ((U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_tE88EEE0B96B8324B3D1B14116159089F76B6497E * L_6 = (Func_1_tE88EEE0B96B8324B3D1B14116159089F76B6497E *)il2cpp_codegen_object_new(Func_1_tE88EEE0B96B8324B3D1B14116159089F76B6497E_il2cpp_TypeInfo_var);
		Func_1__ctor_mE7417780873C167E51692850DE06ABECE885E5FD(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__34_2_mD93E278B3675E2EC164036F7FDA50896D6C59CF9_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mE7417780873C167E51692850DE06ABECE885E5FD_RuntimeMethod_var);
		U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * L_7 = ((U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t4C9357D898236E35BEEA05F76DE8C34B8FF5EF6C * L_8 = (Action_1_t4C9357D898236E35BEEA05F76DE8C34B8FF5EF6C *)il2cpp_codegen_object_new(Action_1_t4C9357D898236E35BEEA05F76DE8C34B8FF5EF6C_il2cpp_TypeInfo_var);
		Action_1__ctor_m07E2A7736F7B91BE227B9E3E49ABE88C19CCE58A(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__34_3_mC334A051CA08156BB71BF4C2592DB8775C987EB1_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m07E2A7736F7B91BE227B9E3E49ABE88C19CCE58A_RuntimeMethod_var);
		Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 * L_9 = (Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6 *)il2cpp_codegen_object_new(Pool_1_tEA3A18384959D2316D5AD74027352ADA7EFE5AA6_il2cpp_TypeInfo_var);
		Pool_1__ctor_m2A4058A3DC1C190139E1F221FC5E8459029D5920(L_9, L_6, L_8, /*hidden argument*/Pool_1__ctor_m2A4058A3DC1C190139E1F221FC5E8459029D5920_RuntimeMethod_var);
		((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->set_s_ItemExchangesListPool_4(L_9);
		// static readonly Pool<List<Exception>> s_ExceptionListPool =
		//     new Pool<List<Exception>>(
		//         () => new List<Exception>(),
		//         list => list.Clear());
		U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * L_10 = ((U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t424489991AE168C0DFF23714862850ABAAB683F6 * L_11 = (Func_1_t424489991AE168C0DFF23714862850ABAAB683F6 *)il2cpp_codegen_object_new(Func_1_t424489991AE168C0DFF23714862850ABAAB683F6_il2cpp_TypeInfo_var);
		Func_1__ctor_mE41A8B0025EA83EA1D32B2110940BDE604AD5039(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__34_4_m0D1E35222B114E8669924BA750CDEC53CBE172A3_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mE41A8B0025EA83EA1D32B2110940BDE604AD5039_RuntimeMethod_var);
		U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * L_12 = ((U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tCB4CF566D79F662E724459D5BD25742D2375B190 * L_13 = (Action_1_tCB4CF566D79F662E724459D5BD25742D2375B190 *)il2cpp_codegen_object_new(Action_1_tCB4CF566D79F662E724459D5BD25742D2375B190_il2cpp_TypeInfo_var);
		Action_1__ctor_m79EDF3F25EF119356554542C28AF856FEB2DFC7C(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__34_5_m420E697A60AB8200A8593CB8FCDA744FBFF088E5_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m79EDF3F25EF119356554542C28AF856FEB2DFC7C_RuntimeMethod_var);
		Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A * L_14 = (Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A *)il2cpp_codegen_object_new(Pool_1_t8E53F51F0B5385474AA1121DC9039070EA32287A_il2cpp_TypeInfo_var);
		Pool_1__ctor_m37371B9C20BE830718CA1D13BC59A76FF5A765AC(L_14, L_11, L_13, /*hidden argument*/Pool_1__ctor_m37371B9C20BE830718CA1D13BC59A76FF5A765AC_RuntimeMethod_var);
		((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->set_s_ExceptionListPool_5(L_14);
		// static readonly Pool<List<string>> s_StringListPool =
		//     new Pool<List<string>>(
		//         () => new List<string>(),
		//         list => list.Clear());
		U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * L_15 = ((U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t40C51F5B2AE4E23C5A2C632CAB7292B16444953F * L_16 = (Func_1_t40C51F5B2AE4E23C5A2C632CAB7292B16444953F *)il2cpp_codegen_object_new(Func_1_t40C51F5B2AE4E23C5A2C632CAB7292B16444953F_il2cpp_TypeInfo_var);
		Func_1__ctor_m751F6F38BA84A659ADE65E0D35F6735EAA7C6822(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__34_6_m32F6F536452F872C6EBE05A83BC9CBEF5DDCB03E_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m751F6F38BA84A659ADE65E0D35F6735EAA7C6822_RuntimeMethod_var);
		U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * L_17 = ((U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t9C3E2FDBB284E0602F2CD1FCE3CBB76F3C83FB3E * L_18 = (Action_1_t9C3E2FDBB284E0602F2CD1FCE3CBB76F3C83FB3E *)il2cpp_codegen_object_new(Action_1_t9C3E2FDBB284E0602F2CD1FCE3CBB76F3C83FB3E_il2cpp_TypeInfo_var);
		Action_1__ctor_mFA4CE4D8ECBA3BF12EA3E9D1F5A8D49694CA1981(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__34_7_m7E42DFBE823A831CD61C1EF3F6FB54AF1BA400F4_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFA4CE4D8ECBA3BF12EA3E9D1F5A8D49694CA1981_RuntimeMethod_var);
		Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18 * L_19 = (Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18 *)il2cpp_codegen_object_new(Pool_1_tE1FB1716F9102E046E03BEA6F020858026F37E18_il2cpp_TypeInfo_var);
		Pool_1__ctor_m9BA047F1F4AD80CF4C65A9573E7E9798C1A8E88C(L_19, L_16, L_18, /*hidden argument*/Pool_1__ctor_m9BA047F1F4AD80CF4C65A9573E7E9798C1A8E88C_RuntimeMethod_var);
		((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->set_s_StringListPool_6(L_19);
		// static readonly Pool<List<InventoryItemData>> s_ItemDataListPool =
		//     new Pool<List<InventoryItemData>>(
		//         () => new List<InventoryItemData>(),
		//         list => list.Clear());
		U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * L_20 = ((U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t55FC41E651B445E42D4EA8EB2618F7F57FE8E776 * L_21 = (Func_1_t55FC41E651B445E42D4EA8EB2618F7F57FE8E776 *)il2cpp_codegen_object_new(Func_1_t55FC41E651B445E42D4EA8EB2618F7F57FE8E776_il2cpp_TypeInfo_var);
		Func_1__ctor_m48D6BF77D2362183F11CCB5A919D517850AE981A(L_21, L_20, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__34_8_m4EA9D8D8DA2AABEE9820A090ECDFCA018572DD92_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m48D6BF77D2362183F11CCB5A919D517850AE981A_RuntimeMethod_var);
		U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * L_22 = ((U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tF8D742FF2C7432253A3F24F44BFB5042ACC70F7E * L_23 = (Action_1_tF8D742FF2C7432253A3F24F44BFB5042ACC70F7E *)il2cpp_codegen_object_new(Action_1_tF8D742FF2C7432253A3F24F44BFB5042ACC70F7E_il2cpp_TypeInfo_var);
		Action_1__ctor_mDDADC3A7E2388BD7EC445DAB0B9A910CBC45C7FB(L_23, L_22, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__34_9_mC8A9F3F50FB45FA62D9378AA52852262B4E5B1DD_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mDDADC3A7E2388BD7EC445DAB0B9A910CBC45C7FB_RuntimeMethod_var);
		Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D * L_24 = (Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D *)il2cpp_codegen_object_new(Pool_1_t9D004F06BB17FAACFFC6BDCFC3C823BAF3B5555D_il2cpp_TypeInfo_var);
		Pool_1__ctor_m64C861558265755BDDDDA83E9D590FEEBE1E65CA(L_24, L_21, L_23, /*hidden argument*/Pool_1__ctor_m64C861558265755BDDDDA83E9D590FEEBE1E65CA_RuntimeMethod_var);
		((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->set_s_ItemDataListPool_7(L_24);
		// static readonly Pool<Dictionary<string, long>> s_DictionaryStringLongPool =
		//     new Pool<Dictionary<string, long>>(
		//         () => new Dictionary<string, long>(),
		//         dic => dic.Clear());
		U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * L_25 = ((U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t014E375EF334B5545E3B56A95E6E1F46487014E6 * L_26 = (Func_1_t014E375EF334B5545E3B56A95E6E1F46487014E6 *)il2cpp_codegen_object_new(Func_1_t014E375EF334B5545E3B56A95E6E1F46487014E6_il2cpp_TypeInfo_var);
		Func_1__ctor_m70E6DDB3FA636E66688FBA44805DF14ACF1510E5(L_26, L_25, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__34_10_mA98FF042ECB3F1105F364A7CF53919A65FCF863A_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m70E6DDB3FA636E66688FBA44805DF14ACF1510E5_RuntimeMethod_var);
		U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * L_27 = ((U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t89246F556F01EA068B8CC8237694622FE3E7DAF7 * L_28 = (Action_1_t89246F556F01EA068B8CC8237694622FE3E7DAF7 *)il2cpp_codegen_object_new(Action_1_t89246F556F01EA068B8CC8237694622FE3E7DAF7_il2cpp_TypeInfo_var);
		Action_1__ctor_m29E2A4E85B1A67E1903BD6CB8C5DF4E52AB4A374(L_28, L_27, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__34_11_mD3DB78A929671305751B0C79D096B5B33D5F57E8_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m29E2A4E85B1A67E1903BD6CB8C5DF4E52AB4A374_RuntimeMethod_var);
		Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB * L_29 = (Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB *)il2cpp_codegen_object_new(Pool_1_t54BCDCA9BBC5288D34915DFBC601461EDAB405FB_il2cpp_TypeInfo_var);
		Pool_1__ctor_mEF639DF25BB9E3FC10DFB75536E3DD740BA0C159(L_29, L_26, L_28, /*hidden argument*/Pool_1__ctor_mEF639DF25BB9E3FC10DFB75536E3DD740BA0C159_RuntimeMethod_var);
		((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_StaticFields*)il2cpp_codegen_static_fields_for(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var))->set_s_DictionaryStringLongPool_8(L_29);
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
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB8D9203E8882B49840E19F1A91B92281E7E8F4CE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mB8D9203E8882B49840E19F1A91B92281E7E8F4CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * L_0 = (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 *)il2cpp_codegen_object_new(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m10B74FB0B290B7FCDC6AA1F735EBF166C476343F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m10B74FB0B290B7FCDC6AA1F735EBF166C476343F (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject> UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::<.cctor>b__34_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * U3CU3Ec_U3C_cctorU3Eb__34_0_m8173358889628248FD7F465EC20D0B3993801988 (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__34_0_m8173358889628248FD7F465EC20D0B3993801988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new List<CurrencyExchangeObject>(),
		List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * L_0 = (List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 *)il2cpp_codegen_object_new(List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058_il2cpp_TypeInfo_var);
		List_1__ctor_mAD533765AF4067C57E08DC1AE505AE55A4C384E9(L_0, /*hidden argument*/List_1__ctor_mAD533765AF4067C57E08DC1AE505AE55A4C384E9_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::<.cctor>b__34_1(System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.CurrencyExchangeObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__34_1_m4B6DF049DFEF6C49F4E4C07CCA2D61A69B8B00B4 (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * __this, List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__34_1_m4B6DF049DFEF6C49F4E4C07CCA2D61A69B8B00B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// list => list.Clear());
		List_1_t7B49449672F6CC3BC42413A6BA99C3C8AAE8F058 * L_0 = ___list0;
		NullCheck(L_0);
		List_1_Clear_m4911195FE9B406E20BF6E4A91A9516EFCF9C6888(L_0, /*hidden argument*/List_1_Clear_m4911195FE9B406E20BF6E4A91A9516EFCF9C6888_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject> UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::<.cctor>b__34_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * U3CU3Ec_U3C_cctorU3Eb__34_2_mD93E278B3675E2EC164036F7FDA50896D6C59CF9 (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__34_2_mD93E278B3675E2EC164036F7FDA50896D6C59CF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new List<ItemExchangeDefinitionObject>(),
		List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * L_0 = (List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD *)il2cpp_codegen_object_new(List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD_il2cpp_TypeInfo_var);
		List_1__ctor_mCC584C29B683826A8745442F6C4AAF499B129345(L_0, /*hidden argument*/List_1__ctor_mCC584C29B683826A8745442F6C4AAF499B129345_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::<.cctor>b__34_3(System.Collections.Generic.List`1<UnityEngine.GameFoundation.DefaultCatalog.ItemExchangeDefinitionObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__34_3_mC334A051CA08156BB71BF4C2592DB8775C987EB1 (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * __this, List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__34_3_mC334A051CA08156BB71BF4C2592DB8775C987EB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// list => list.Clear());
		List_1_t28741A15B4A9A9805B55AC86E307A42393D358AD * L_0 = ___list0;
		NullCheck(L_0);
		List_1_Clear_mA9E26157403FF3A3A8F0924400B385A3EEBE490C(L_0, /*hidden argument*/List_1_Clear_mA9E26157403FF3A3A8F0924400B385A3EEBE490C_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<System.Exception> UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::<.cctor>b__34_4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * U3CU3Ec_U3C_cctorU3Eb__34_4_m0D1E35222B114E8669924BA750CDEC53CBE172A3 (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__34_4_m0D1E35222B114E8669924BA750CDEC53CBE172A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new List<Exception>(),
		List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * L_0 = (List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A *)il2cpp_codegen_object_new(List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A_il2cpp_TypeInfo_var);
		List_1__ctor_m3CA9F30DC986E649F8E82AD69F5085D355D91AC1(L_0, /*hidden argument*/List_1__ctor_m3CA9F30DC986E649F8E82AD69F5085D355D91AC1_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::<.cctor>b__34_5(System.Collections.Generic.List`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__34_5_m420E697A60AB8200A8593CB8FCDA744FBFF088E5 (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * __this, List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__34_5_m420E697A60AB8200A8593CB8FCDA744FBFF088E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// list => list.Clear());
		List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * L_0 = ___list0;
		NullCheck(L_0);
		List_1_Clear_mAFF5FCC778112D567ACD94E7C9BF12B2D4D3F245(L_0, /*hidden argument*/List_1_Clear_mAFF5FCC778112D567ACD94E7C9BF12B2D4D3F245_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::<.cctor>b__34_6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * U3CU3Ec_U3C_cctorU3Eb__34_6_m32F6F536452F872C6EBE05A83BC9CBEF5DDCB03E (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__34_6_m32F6F536452F872C6EBE05A83BC9CBEF5DDCB03E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new List<string>(),
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_0, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::<.cctor>b__34_7(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__34_7_m7E42DFBE823A831CD61C1EF3F6FB54AF1BA400F4 (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * __this, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__34_7_m7E42DFBE823A831CD61C1EF3F6FB54AF1BA400F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// list => list.Clear());
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = ___list0;
		NullCheck(L_0);
		List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306(L_0, /*hidden argument*/List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData> UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::<.cctor>b__34_8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * U3CU3Ec_U3C_cctorU3Eb__34_8_m4EA9D8D8DA2AABEE9820A090ECDFCA018572DD92 (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__34_8_m4EA9D8D8DA2AABEE9820A090ECDFCA018572DD92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new List<InventoryItemData>(),
		List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_0 = (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 *)il2cpp_codegen_object_new(List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1_il2cpp_TypeInfo_var);
		List_1__ctor_m9DF265560E0235B28378496E47309E6063B206F4(L_0, /*hidden argument*/List_1__ctor_m9DF265560E0235B28378496E47309E6063B206F4_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::<.cctor>b__34_9(System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__34_9_mC8A9F3F50FB45FA62D9378AA52852262B4E5B1DD (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * __this, List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__34_9_mC8A9F3F50FB45FA62D9378AA52852262B4E5B1DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// list => list.Clear());
		List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_0 = ___list0;
		NullCheck(L_0);
		List_1_Clear_mF04E8638626A1F44AAC6A72BCF3621E6DAE148F2(L_0, /*hidden argument*/List_1_Clear_mF04E8638626A1F44AAC6A72BCF3621E6DAE148F2_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::<.cctor>b__34_10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * U3CU3Ec_U3C_cctorU3Eb__34_10_mA98FF042ECB3F1105F364A7CF53919A65FCF863A (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__34_10_mA98FF042ECB3F1105F364A7CF53919A65FCF863A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new Dictionary<string, long>(),
		Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_0 = (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 *)il2cpp_codegen_object_new(Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF5E99A779CC438267A3A001FDD447BCDEB834CD8(L_0, /*hidden argument*/Dictionary_2__ctor_mF5E99A779CC438267A3A001FDD447BCDEB834CD8_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.BaseMemoryDataLayer_<>c::<.cctor>b__34_11(System.Collections.Generic.Dictionary`2<System.String,System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__34_11_mD3DB78A929671305751B0C79D096B5B33D5F57E8 (U3CU3Ec_t422E80F0828992E4FAE2544A613BA27C9CBC5D71 * __this, Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * ___dic0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__34_11_mD3DB78A929671305751B0C79D096B5B33D5F57E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dic => dic.Clear());
		Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_0 = ___dic0;
		NullCheck(L_0);
		Dictionary_2_Clear_m9FA6AF4B8A330D12BDA062B1ABD701B2414F7061(L_0, /*hidden argument*/Dictionary_2_Clear_m9FA6AF4B8A330D12BDA062B1ABD701B2414F7061_RuntimeMethod_var);
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
// System.Void UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::.ctor(UnityEngine.GameFoundation.Data.InventoryManagerData,UnityEngine.GameFoundation.DefaultCatalog.InventoryCatalogAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryDataLayer__ctor_mDEA42D12DC25222460E5EF1A08B69C035360ADE9 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  ___data0, InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * ___catalog1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InventoryDataLayer__ctor_mDEA42D12DC25222460E5EF1A08B69C035360ADE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * V_0 = NULL;
	Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// public InventoryDataLayer(InventoryManagerData data, InventoryCatalogAsset catalog)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// m_Catalog = catalog;
		InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * L_0 = ___catalog1;
		__this->set_m_Catalog_1(L_0);
		// var validatedItems = GetValidItems(data, catalog);
		InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  L_1 = ___data0;
		InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * L_2 = ___catalog1;
		List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_3 = InventoryDataLayer_GetValidItems_mCE59294129027267C6E350E5E63062C769AF8D5D(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// m_Items = new Dictionary<string, InventoryItemData>(validatedItems.Count);
		List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_mC7FD6CF59297FB2322612B6D443EF51046619AD0_inline(L_4, /*hidden argument*/List_1_get_Count_mC7FD6CF59297FB2322612B6D443EF51046619AD0_RuntimeMethod_var);
		Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * L_6 = (Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 *)il2cpp_codegen_object_new(Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA57B94D4742CD878E8265E600C4D7548D0DDF90C(L_6, L_5, /*hidden argument*/Dictionary_2__ctor_mA57B94D4742CD878E8265E600C4D7548D0DDF90C_RuntimeMethod_var);
		__this->set_m_Items_0(L_6);
		// foreach (var item in validatedItems)
		List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_7 = V_0;
		NullCheck(L_7);
		Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649  L_8 = List_1_GetEnumerator_mFFAA67A6EE2BD1AB710D4CBA0349C5E921BEED7D(L_7, /*hidden argument*/List_1_GetEnumerator_mFFAA67A6EE2BD1AB710D4CBA0349C5E921BEED7D_RuntimeMethod_var);
		V_1 = L_8;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_002f:
		{
			// foreach (var item in validatedItems)
			InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_9 = Enumerator_get_Current_m356BA8F142DE34D3AEAC6E1B7E5727334AFE4A82_inline((Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m356BA8F142DE34D3AEAC6E1B7E5727334AFE4A82_RuntimeMethod_var);
			V_2 = L_9;
			// m_Items.Add(item.id, item);
			Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * L_10 = __this->get_m_Items_0();
			InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_11 = V_2;
			String_t* L_12 = L_11.get_id_1();
			InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_13 = V_2;
			NullCheck(L_10);
			Dictionary_2_Add_m39317B14AE57B950700B72A09464C9BBEDC1ED84(L_10, L_12, L_13, /*hidden argument*/Dictionary_2_Add_m39317B14AE57B950700B72A09464C9BBEDC1ED84_RuntimeMethod_var);
		}

IL_0049:
		{
			// foreach (var item in validatedItems)
			bool L_14 = Enumerator_MoveNext_mD347A2D3614B42E67980978F6FC1830F4A0D0FA2((Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mD347A2D3614B42E67980978F6FC1830F4A0D0FA2_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_002f;
			}
		}

IL_0052:
		{
			IL2CPP_LEAVE(0x62, FINALLY_0054);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m014B02D27BC94C1B69BF39A307251357F2DEF53B((Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m014B02D27BC94C1B69BF39A307251357F2DEF53B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(84)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::TryGetItem(System.String,UnityEngine.GameFoundation.Data.InventoryItemData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InventoryDataLayer_TryGetItem_mFB1E28B8164007193265AE3EC2EC0D3111734E92 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___id0, InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InventoryDataLayer_TryGetItem_mFB1E28B8164007193265AE3EC2EC0D3111734E92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Items.TryGetValue(id, out item);
		Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * L_0 = __this->get_m_Items_0();
		String_t* L_1 = ___id0;
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 * L_2 = ___item1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m308EB25FBED07C9DBD8762182727C3AAC2D189D4(L_0, L_1, (InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 *)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m308EB25FBED07C9DBD8762182727C3AAC2D189D4_RuntimeMethod_var);
		return L_3;
	}
}
// System.Int32 UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::GetItemsByDefinition(System.String,System.Collections.Generic.ICollection`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InventoryDataLayer_GetItemsByDefinition_m07703C98D1A25AEF9576C7B43C9B34F270B3138F (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___key0, RuntimeObject* ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InventoryDataLayer_GetItemsByDefinition_m07703C98D1A25AEF9576C7B43C9B34F270B3138F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Tools.ThrowIfArgNullOrEmpty(key, nameof(key));
		String_t* L_0 = ___key0;
		Tools_ThrowIfArgNullOrEmpty_m937FE947DD8528E8BEF39BF007FC83C60CF991AA_inline(L_0, _stringLiteralA62F2225BF70BFACCBC7F1EF2A397836717377DE, /*hidden argument*/NULL);
		// var count = 0;
		V_0 = 0;
		// target?.Clear();
		RuntimeObject* L_1 = ___target1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_2 = ___target1;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Clear() */, ICollection_1_t2E51991ADA605DB75870908AF6D7C3093DC3FCBA_il2cpp_TypeInfo_var, L_2);
	}

IL_0016:
	{
		// foreach (var item in m_Items.Values)
		Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * L_3 = __this->get_m_Items_0();
		NullCheck(L_3);
		ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56 * L_4 = Dictionary_2_get_Values_m4C759A21D1BA2CF9A18839E633893B820FC740D3(L_3, /*hidden argument*/Dictionary_2_get_Values_m4C759A21D1BA2CF9A18839E633893B820FC740D3_RuntimeMethod_var);
		NullCheck(L_4);
		Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F  L_5 = ValueCollection_GetEnumerator_m50ADDDB3B4C44E696B74592A088EDE8CD0FD8257(L_4, /*hidden argument*/ValueCollection_GetEnumerator_m50ADDDB3B4C44E696B74592A088EDE8CD0FD8257_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_0029:
		{
			// foreach (var item in m_Items.Values)
			InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_6 = Enumerator_get_Current_mBA19190EA7134D32EA733222201695355B272ECD_inline((Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F *)(&V_1), /*hidden argument*/Enumerator_get_Current_mBA19190EA7134D32EA733222201695355B272ECD_RuntimeMethod_var);
			V_2 = L_6;
			// if (item.definitionKey == key)
			InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_7 = V_2;
			String_t* L_8 = L_7.get_definitionKey_0();
			String_t* L_9 = ___key0;
			bool L_10 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_0052;
			}
		}

IL_003f:
		{
			// count++;
			int32_t L_11 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
			// target?.Add(item.id);
			RuntimeObject* L_12 = ___target1;
			if (!L_12)
			{
				goto IL_0052;
			}
		}

IL_0046:
		{
			RuntimeObject* L_13 = ___target1;
			InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_14 = V_2;
			String_t* L_15 = L_14.get_id_1();
			NullCheck(L_13);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t2E51991ADA605DB75870908AF6D7C3093DC3FCBA_il2cpp_TypeInfo_var, L_13, L_15);
		}

IL_0052:
		{
			// foreach (var item in m_Items.Values)
			bool L_16 = Enumerator_MoveNext_m2902C433DA1C3A67123A211B4BAC3BF8C806991B((Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2902C433DA1C3A67123A211B4BAC3BF8C806991B_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_0029;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m802C9606434944FAD9694BB1A656C6F56680E67F((Enumerator_tB856020F6F6A7EEAA8D5B4AFA7457BBD3E4E7F6F *)(&V_1), /*hidden argument*/Enumerator_Dispose_m802C9606434944FAD9694BB1A656C6F56680E67F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(93)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006b:
	{
		// return count;
		int32_t L_17 = V_0;
		return L_17;
	}
}
// UnityEngine.GameFoundation.Data.InventoryItemData UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::CreateItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  InventoryDataLayer_CreateItem_m7CA6500F145602BB6CD82EE2DDB9F68EEEBD7CA8 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InventoryDataLayer_CreateItem_m7CA6500F145602BB6CD82EE2DDB9F68EEEBD7CA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var itemId = Guid.NewGuid().ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0 = Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1 = Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5((Guid_t *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		// return CreateItem(key, itemId);
		String_t* L_2 = ___key0;
		String_t* L_3 = V_0;
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_4 = InventoryDataLayer_CreateItem_m545AC5C4C63BDC11E3D2BFC6642EBBFF6F259C65(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.GameFoundation.Data.InventoryItemData UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::CreateItem(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  InventoryDataLayer_CreateItem_m545AC5C4C63BDC11E3D2BFC6642EBBFF6F259C65 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___key0, String_t* ___itemId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InventoryDataLayer_CreateItem_m545AC5C4C63BDC11E3D2BFC6642EBBFF6F259C65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * V_0 = NULL;
	{
		// Tools.ThrowIfArgNullOrEmpty(key, nameof(key));
		String_t* L_0 = ___key0;
		Tools_ThrowIfArgNullOrEmpty_m937FE947DD8528E8BEF39BF007FC83C60CF991AA_inline(L_0, _stringLiteralA62F2225BF70BFACCBC7F1EF2A397836717377DE, /*hidden argument*/NULL);
		// Tools.ThrowIfArgNullOrEmpty(itemId, nameof(itemId));
		String_t* L_1 = ___itemId1;
		Tools_ThrowIfArgNullOrEmpty_m937FE947DD8528E8BEF39BF007FC83C60CF991AA_inline(L_1, _stringLiteral7C3A89AB0E47C559AF9904EC143E1478AB90D4AA, /*hidden argument*/NULL);
		// var itemDefinition = m_Catalog.FindItem(key);
		InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * L_2 = __this->get_m_Catalog_1();
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_4 = SingleCollectionCatalogAsset_1_FindItem_m8DE1ECC1E15C584B9D6D5AA8CE460F490FE2E9EB(L_2, L_3, /*hidden argument*/SingleCollectionCatalogAsset_1_FindItem_m8DE1ECC1E15C584B9D6D5AA8CE460F490FE2E9EB_RuntimeMethod_var);
		V_0 = L_4;
		// if (itemDefinition == null)
		InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// throw new CatalogItemNotFoundException(key);
		String_t* L_7 = ___key0;
		CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05 * L_8 = (CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05 *)il2cpp_codegen_object_new(CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05_il2cpp_TypeInfo_var);
		CatalogItemNotFoundException__ctor_m994FCCFF959FBEFB3D75FB34DA1FE39D1136C326(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, InventoryDataLayer_CreateItem_m545AC5C4C63BDC11E3D2BFC6642EBBFF6F259C65_RuntimeMethod_var);
	}

IL_0033:
	{
		// if (m_Items.ContainsKey(itemId))
		Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * L_9 = __this->get_m_Items_0();
		String_t* L_10 = ___itemId1;
		NullCheck(L_9);
		bool L_11 = Dictionary_2_ContainsKey_m11725FFCE98867A4BADB62D2747E71CA7E0C807B(L_9, L_10, /*hidden argument*/Dictionary_2_ContainsKey_m11725FFCE98867A4BADB62D2747E71CA7E0C807B_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		// throw new InvalidOperationException($"An Item with the id \"{itemId}\" already exists.");
		String_t* L_12 = ___itemId1;
		String_t* L_13 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral6D545434E0E83DD3106593E86B9EFAE8E4458F19, L_12, _stringLiteralA55922AD734E3EB55F581798E455DFF8BD160591, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_14 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, InventoryDataLayer_CreateItem_m545AC5C4C63BDC11E3D2BFC6642EBBFF6F259C65_RuntimeMethod_var);
	}

IL_0057:
	{
		// return CreateItemNoCheck(itemDefinition, itemId);
		InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_15 = V_0;
		String_t* L_16 = ___itemId1;
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_17 = InventoryDataLayer_CreateItemNoCheck_m84F2405724B0B4DC42EF05CE82070E4210996EA7(__this, L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// UnityEngine.GameFoundation.Data.InventoryItemData UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::CreateItemNoCheck(UnityEngine.GameFoundation.DefaultCatalog.InventoryItemDefinitionAsset,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  InventoryDataLayer_CreateItemNoCheck_m84F2405724B0B4DC42EF05CE82070E4210996EA7 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * ___itemDefinition0, String_t* ___itemId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InventoryDataLayer_CreateItemNoCheck_m84F2405724B0B4DC42EF05CE82070E4210996EA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  V_0;
	memset((&V_0), 0, sizeof(V_0));
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857  V_4;
	memset((&V_4), 0, sizeof(V_4));
	PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var item = new InventoryItemData
		// {
		//     id = itemId,
		//     definitionKey = itemDefinition.key
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 ));
		String_t* L_0 = ___itemId1;
		(&V_1)->set_id_1(L_0);
		InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_1 = ___itemDefinition0;
		NullCheck(L_1);
		String_t* L_2 = CatalogItemAsset_get_key_mEDAC681266C93C18BF4F35175B862529395FE2AC_inline(L_1, /*hidden argument*/NULL);
		(&V_1)->set_definitionKey_0(L_2);
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_3 = V_1;
		V_0 = L_3;
		// item.properties = new PropertyData[itemDefinition.properties.Count];
		InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_4 = ___itemDefinition0;
		NullCheck(L_4);
		Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * L_5 = InventoryItemDefinitionAsset_get_properties_m7F90C4A334706B4FF51CE4390FF00296E4EEBC5E_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = Dictionary_2_get_Count_m6C657CC81D30C953E50BBAA777237905FCD43C8A(L_5, /*hidden argument*/Dictionary_2_get_Count_m6C657CC81D30C953E50BBAA777237905FCD43C8A_RuntimeMethod_var);
		PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_7 = (PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7*)(PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7*)SZArrayNew(PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7_il2cpp_TypeInfo_var, (uint32_t)L_6);
		(&V_0)->set_properties_2(L_7);
		// var i = 0;
		V_2 = 0;
		// foreach (var propertyEntry in itemDefinition.properties)
		InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_8 = ___itemDefinition0;
		NullCheck(L_8);
		Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * L_9 = InventoryItemDefinitionAsset_get_properties_m7F90C4A334706B4FF51CE4390FF00296E4EEBC5E_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F  L_10 = Dictionary_2_GetEnumerator_mEF13A19FC6CAB881F4CF54646BDA2590A20022EF(L_9, /*hidden argument*/Dictionary_2_GetEnumerator_mEF13A19FC6CAB881F4CF54646BDA2590A20022EF_RuntimeMethod_var);
		V_3 = L_10;
	}

IL_0044:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_0046:
		{
			// foreach (var propertyEntry in itemDefinition.properties)
			KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857  L_11 = Enumerator_get_Current_m986900096F65631FC2F03BB6BD836662555CF9C2_inline((Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F *)(&V_3), /*hidden argument*/Enumerator_get_Current_m986900096F65631FC2F03BB6BD836662555CF9C2_RuntimeMethod_var);
			V_4 = L_11;
			// item.properties[i] = new PropertyData
			// {
			//     key = propertyEntry.Key,
			//     value = propertyEntry.Value
			// };
			InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_12 = V_0;
			PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_13 = L_12.get_properties_2();
			int32_t L_14 = V_2;
			il2cpp_codegen_initobj((&V_5), sizeof(PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5 ));
			String_t* L_15 = KeyValuePair_2_get_Key_m90EC5C1FAFCD87594A0381F44DB565E2AE890850_inline((KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_m90EC5C1FAFCD87594A0381F44DB565E2AE890850_RuntimeMethod_var);
			(&V_5)->set_key_0(L_15);
			Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  L_16 = KeyValuePair_2_get_Value_m2DCC560EC657356BEE09C1B635A6F4B0B2090D97_inline((KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m2DCC560EC657356BEE09C1B635A6F4B0B2090D97_RuntimeMethod_var);
			(&V_5)->set_value_1(L_16);
			PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_17 = V_5;
			NullCheck(L_13);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5 )L_17);
			// ++i;
			int32_t L_18 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		}

IL_0085:
		{
			// foreach (var propertyEntry in itemDefinition.properties)
			bool L_19 = Enumerator_MoveNext_m46A41074D7B10356393C5C3402A3763883F66CB7((Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m46A41074D7B10356393C5C3402A3763883F66CB7_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0046;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0x9E, FINALLY_0090);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0090;
	}

FINALLY_0090:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m6B4543F61030F72B3B87E9C17550986E0299D597((Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F *)(&V_3), /*hidden argument*/Enumerator_Dispose_m6B4543F61030F72B3B87E9C17550986E0299D597_RuntimeMethod_var);
		IL2CPP_END_FINALLY(144)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(144)
	{
		IL2CPP_JUMP_TBL(0x9E, IL_009e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009e:
	{
		// m_Items.Add(itemId, item);
		Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * L_20 = __this->get_m_Items_0();
		String_t* L_21 = ___itemId1;
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_22 = V_0;
		NullCheck(L_20);
		Dictionary_2_Add_m39317B14AE57B950700B72A09464C9BBEDC1ED84(L_20, L_21, L_22, /*hidden argument*/Dictionary_2_Add_m39317B14AE57B950700B72A09464C9BBEDC1ED84_RuntimeMethod_var);
		// return item;
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_23 = V_0;
		return L_23;
	}
}
// System.Boolean UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::DeleteItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InventoryDataLayer_DeleteItem_m23AA189A113E989E713B6402140EDD9F60E954BC (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InventoryDataLayer_DeleteItem_m23AA189A113E989E713B6402140EDD9F60E954BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal bool DeleteItem(string id) => m_Items.Remove(id);
		Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * L_0 = __this->get_m_Items_0();
		String_t* L_1 = ___id0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_Remove_mDE9F5EECE65340FCBE65B7E0A93F9B9F61694D0E(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_mDE9F5EECE65340FCBE65B7E0A93F9B9F61694D0E_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameFoundation.Data.InventoryItemData> UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::GetValidItems(UnityEngine.GameFoundation.Data.InventoryManagerData,UnityEngine.GameFoundation.DefaultCatalog.InventoryCatalogAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * InventoryDataLayer_GetValidItems_mCE59294129027267C6E350E5E63062C769AF8D5D (InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  ___data0, InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * ___catalog1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InventoryDataLayer_GetValidItems_mCE59294129027267C6E350E5E63062C769AF8D5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * V_1 = NULL;
	List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * V_2 = NULL;
	int32_t V_3 = 0;
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * V_6 = NULL;
	bool V_7 = false;
	Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * V_8 = NULL;
	Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649  V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  V_11;
	memset((&V_11), 0, sizeof(V_11));
	String_t* V_12 = NULL;
	Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F  V_14;
	memset((&V_14), 0, sizeof(V_14));
	KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857  V_15;
	memset((&V_15), 0, sizeof(V_15));
	bool V_16 = false;
	Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2  V_17;
	memset((&V_17), 0, sizeof(V_17));
	PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  V_18;
	memset((&V_18), 0, sizeof(V_18));
	PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  V_19;
	memset((&V_19), 0, sizeof(V_19));
	PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  V_20;
	memset((&V_20), 0, sizeof(V_20));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// int numDataItems = data.items.Length;
		InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  L_0 = ___data0;
		InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* L_1 = L_0.get_items_0();
		NullCheck(L_1);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		// var validatedItems = new List<InventoryItemData>(numDataItems);
		int32_t L_2 = V_0;
		List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_3 = (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 *)il2cpp_codegen_object_new(List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1_il2cpp_TypeInfo_var);
		List_1__ctor_m1828C7E57AB499530F12A8010F7D4A8E8469C359(L_3, L_2, /*hidden argument*/List_1__ctor_m1828C7E57AB499530F12A8010F7D4A8E8469C359_RuntimeMethod_var);
		V_1 = L_3;
		// if (numDataItems > 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_02a6;
		}
	}
	{
		// var validatedProperties = new List<PropertyData>();
		List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * L_5 = (List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 *)il2cpp_codegen_object_new(List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193_il2cpp_TypeInfo_var);
		List_1__ctor_m8F4520370F3B03E1E4C822C3300DE506E2286A9E(L_5, /*hidden argument*/List_1__ctor_m8F4520370F3B03E1E4C822C3300DE506E2286A9E_RuntimeMethod_var);
		V_2 = L_5;
		// for (var itemIndex = 0; itemIndex < numDataItems; itemIndex++)
		V_3 = 0;
		goto IL_029f;
	}

IL_0024:
	{
		// var item = data.items[itemIndex];
		InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  L_6 = ___data0;
		InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* L_7 = L_6.get_items_0();
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// var itemDefinition = catalog.FindItem(item.definitionKey);
		InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * L_11 = ___catalog1;
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_12 = V_4;
		String_t* L_13 = L_12.get_definitionKey_0();
		NullCheck(L_11);
		InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_14 = SingleCollectionCatalogAsset_1_FindItem_m8DE1ECC1E15C584B9D6D5AA8CE460F490FE2E9EB(L_11, L_13, /*hidden argument*/SingleCollectionCatalogAsset_1_FindItem_m8DE1ECC1E15C584B9D6D5AA8CE460F490FE2E9EB_RuntimeMethod_var);
		V_6 = L_14;
		// if (itemDefinition == null)
		InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_15 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_15, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		// error = new CatalogItemNotFoundException(item.definitionKey);
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_17 = V_4;
		String_t* L_18 = L_17.get_definitionKey_0();
		CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05 * L_19 = (CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05 *)il2cpp_codegen_object_new(CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05_il2cpp_TypeInfo_var);
		CatalogItemNotFoundException__ctor_m994FCCFF959FBEFB3D75FB34DA1FE39D1136C326(L_19, L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		// Debug.LogWarning($"\"{item.id}\" has been skipped.\nReason: {error}");
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_20 = V_4;
		String_t* L_21 = L_20.get_id_1();
		Exception_t * L_22 = V_5;
		String_t* L_23 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral57582034B7ACE451889683A65600221EBF7DC374, L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_23, /*hidden argument*/NULL);
		// continue;
		goto IL_029b;
	}

IL_0076:
	{
		// var isItemIdAlreadyUsed = false;
		V_7 = (bool)0;
		// foreach (var validatedItem in validatedItems)
		List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_24 = V_1;
		NullCheck(L_24);
		Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649  L_25 = List_1_GetEnumerator_mFFAA67A6EE2BD1AB710D4CBA0349C5E921BEED7D(L_24, /*hidden argument*/List_1_GetEnumerator_mFFAA67A6EE2BD1AB710D4CBA0349C5E921BEED7D_RuntimeMethod_var);
		V_9 = L_25;
	}

IL_0081:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a2;
		}

IL_0083:
		{
			// foreach (var validatedItem in validatedItems)
			InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_26 = Enumerator_get_Current_m356BA8F142DE34D3AEAC6E1B7E5727334AFE4A82_inline((Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 *)(&V_9), /*hidden argument*/Enumerator_get_Current_m356BA8F142DE34D3AEAC6E1B7E5727334AFE4A82_RuntimeMethod_var);
			// if (validatedItem.id == item.id)
			String_t* L_27 = L_26.get_id_1();
			InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_28 = V_4;
			String_t* L_29 = L_28.get_id_1();
			bool L_30 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_27, L_29, /*hidden argument*/NULL);
			if (!L_30)
			{
				goto IL_00a2;
			}
		}

IL_009d:
		{
			// isItemIdAlreadyUsed = true;
			V_7 = (bool)1;
			// break;
			IL2CPP_LEAVE(0xBB, FINALLY_00ad);
		}

IL_00a2:
		{
			// foreach (var validatedItem in validatedItems)
			bool L_31 = Enumerator_MoveNext_mD347A2D3614B42E67980978F6FC1830F4A0D0FA2((Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_mD347A2D3614B42E67980978F6FC1830F4A0D0FA2_RuntimeMethod_var);
			if (L_31)
			{
				goto IL_0083;
			}
		}

IL_00ab:
		{
			IL2CPP_LEAVE(0xBB, FINALLY_00ad);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ad;
	}

FINALLY_00ad:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m014B02D27BC94C1B69BF39A307251357F2DEF53B((Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 *)(&V_9), /*hidden argument*/Enumerator_Dispose_m014B02D27BC94C1B69BF39A307251357F2DEF53B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(173)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(173)
	{
		IL2CPP_JUMP_TBL(0xBB, IL_00bb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00bb:
	{
		// if (isItemIdAlreadyUsed)
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_00e8;
		}
	}
	{
		// error = new Exception("An item with the id \"{item.id}\" already exist.");
		Exception_t * L_33 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_33, _stringLiteral58CAF10A3AB5334B19293B6CDACA7C76E6838FAB, /*hidden argument*/NULL);
		V_5 = L_33;
		// Debug.LogWarning($"\"{item.id}\" has been skipped.\nReason: {error}");
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_34 = V_4;
		String_t* L_35 = L_34.get_id_1();
		Exception_t * L_36 = V_5;
		String_t* L_37 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral57582034B7ACE451889683A65600221EBF7DC374, L_35, L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_37, /*hidden argument*/NULL);
		// continue;
		goto IL_029b;
	}

IL_00e8:
	{
		// var defaultProperties = itemDefinition.properties;
		InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_38 = V_6;
		NullCheck(L_38);
		Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * L_39 = InventoryItemDefinitionAsset_get_properties_m7F90C4A334706B4FF51CE4390FF00296E4EEBC5E_inline(L_38, /*hidden argument*/NULL);
		V_8 = L_39;
		// if (item.properties != null)
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_40 = V_4;
		PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_41 = L_40.get_properties_2();
		if (!L_41)
		{
			goto IL_01d0;
		}
	}
	{
		// for (var propertyIndex = 0; propertyIndex < item.properties.Length; propertyIndex++)
		V_10 = 0;
		goto IL_01c0;
	}

IL_0105:
	{
		// var property = item.properties[propertyIndex];
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_42 = V_4;
		PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_43 = L_42.get_properties_2();
		int32_t L_44 = V_10;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_11 = L_46;
		// var propertyKey = property.key;
		PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_47 = V_11;
		String_t* L_48 = L_47.get_key_0();
		V_12 = L_48;
		// if (!defaultProperties.TryGetValue(propertyKey, out var defaultProperty))
		Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * L_49 = V_8;
		String_t* L_50 = V_12;
		NullCheck(L_49);
		bool L_51 = Dictionary_2_TryGetValue_mCF01EC967CE9CE7F149DAB04AD8EB257E2A440FA(L_49, L_50, (Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 *)(&V_13), /*hidden argument*/Dictionary_2_TryGetValue_mCF01EC967CE9CE7F149DAB04AD8EB257E2A440FA_RuntimeMethod_var);
		if (L_51)
		{
			goto IL_0157;
		}
	}
	{
		// error = new PropertyNotFoundException(item.id, propertyKey);
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_52 = V_4;
		String_t* L_53 = L_52.get_id_1();
		String_t* L_54 = V_12;
		PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7 * L_55 = (PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7 *)il2cpp_codegen_object_new(PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7_il2cpp_TypeInfo_var);
		PropertyNotFoundException__ctor_m25D4599343AAE909888AFA8C754F2A25537EC3B5(L_55, L_53, L_54, /*hidden argument*/NULL);
		V_5 = L_55;
		// Debug.LogWarning(
		//     $"\"{item.id}\"'s \"{propertyKey}\" property has been skipped.\nReason: {error}");
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_56 = V_4;
		String_t* L_57 = L_56.get_id_1();
		String_t* L_58 = V_12;
		Exception_t * L_59 = V_5;
		String_t* L_60 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral2177DC8A52B9B9DC76543C41C0C99997176FD300, L_57, L_58, L_59, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_60, /*hidden argument*/NULL);
		// continue;
		goto IL_01ba;
	}

IL_0157:
	{
		// if (defaultProperty.type != property.value.type)
		int32_t L_61 = Property_get_type_m4C40EFB19CE65EE72F01A8827FDB2500EAADF433_inline((Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 *)(&V_13), /*hidden argument*/NULL);
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * L_62 = (&V_11)->get_address_of_value_1();
		int32_t L_63 = Property_get_type_m4C40EFB19CE65EE72F01A8827FDB2500EAADF433_inline((Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 *)L_62, /*hidden argument*/NULL);
		if ((((int32_t)L_61) == ((int32_t)L_63)))
		{
			goto IL_01b2;
		}
	}
	{
		// error = new PropertyInvalidCastException(
		//     propertyKey, defaultProperty.type, property.value.type);
		String_t* L_64 = V_12;
		int32_t L_65 = Property_get_type_m4C40EFB19CE65EE72F01A8827FDB2500EAADF433_inline((Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 *)(&V_13), /*hidden argument*/NULL);
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * L_66 = (&V_11)->get_address_of_value_1();
		int32_t L_67 = Property_get_type_m4C40EFB19CE65EE72F01A8827FDB2500EAADF433_inline((Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 *)L_66, /*hidden argument*/NULL);
		PropertyInvalidCastException_tBFCD1DB7F89F6CA3AE59C2C52995F26E2C66EAA2 * L_68 = (PropertyInvalidCastException_tBFCD1DB7F89F6CA3AE59C2C52995F26E2C66EAA2 *)il2cpp_codegen_object_new(PropertyInvalidCastException_tBFCD1DB7F89F6CA3AE59C2C52995F26E2C66EAA2_il2cpp_TypeInfo_var);
		PropertyInvalidCastException__ctor_m584CF4F6BB5ADF7787AB0C434AE1950DF79E012B(L_68, L_64, L_65, L_67, /*hidden argument*/NULL);
		V_5 = L_68;
		// Debug.LogWarning(
		//     $"\"{item.id}\"'s \"{propertyKey}\" property has been reset.\nReason: {error}");
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_69 = V_4;
		String_t* L_70 = L_69.get_id_1();
		String_t* L_71 = V_12;
		Exception_t * L_72 = V_5;
		String_t* L_73 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteralD595A68DD1CF52B5FF50B971777A5A7A1E15448B, L_70, L_71, L_72, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_73, /*hidden argument*/NULL);
		// property.value = defaultProperties[propertyKey];
		Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * L_74 = V_8;
		String_t* L_75 = V_12;
		NullCheck(L_74);
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  L_76 = Dictionary_2_get_Item_m867D501667B240E4D5D83BCB1875565D2DC85E33(L_74, L_75, /*hidden argument*/Dictionary_2_get_Item_m867D501667B240E4D5D83BCB1875565D2DC85E33_RuntimeMethod_var);
		(&V_11)->set_value_1(L_76);
	}

IL_01b2:
	{
		// validatedProperties.Add(property);
		List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * L_77 = V_2;
		PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_78 = V_11;
		NullCheck(L_77);
		List_1_Add_m227CF67D0E03C8F0327AC5C42706CA77F8EF4179(L_77, L_78, /*hidden argument*/List_1_Add_m227CF67D0E03C8F0327AC5C42706CA77F8EF4179_RuntimeMethod_var);
	}

IL_01ba:
	{
		// for (var propertyIndex = 0; propertyIndex < item.properties.Length; propertyIndex++)
		int32_t L_79 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_01c0:
	{
		// for (var propertyIndex = 0; propertyIndex < item.properties.Length; propertyIndex++)
		int32_t L_80 = V_10;
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_81 = V_4;
		PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_82 = L_81.get_properties_2();
		NullCheck(L_82);
		if ((((int32_t)L_80) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_82)->max_length)))))))
		{
			goto IL_0105;
		}
	}

IL_01d0:
	{
		// foreach (var defaultProperty in defaultProperties)
		Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * L_83 = V_8;
		NullCheck(L_83);
		Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F  L_84 = Dictionary_2_GetEnumerator_mEF13A19FC6CAB881F4CF54646BDA2590A20022EF(L_83, /*hidden argument*/Dictionary_2_GetEnumerator_mEF13A19FC6CAB881F4CF54646BDA2590A20022EF_RuntimeMethod_var);
		V_14 = L_84;
	}

IL_01d9:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0264;
		}

IL_01de:
		{
			// foreach (var defaultProperty in defaultProperties)
			KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857  L_85 = Enumerator_get_Current_m986900096F65631FC2F03BB6BD836662555CF9C2_inline((Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F *)(&V_14), /*hidden argument*/Enumerator_get_Current_m986900096F65631FC2F03BB6BD836662555CF9C2_RuntimeMethod_var);
			V_15 = L_85;
			// var isDefaultPropertyValidated = false;
			V_16 = (bool)0;
			// foreach (var validatedProperty in validatedProperties)
			List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * L_86 = V_2;
			NullCheck(L_86);
			Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2  L_87 = List_1_GetEnumerator_m528C0D47C249BF65C793C952FE9AC1F32BDCF374(L_86, /*hidden argument*/List_1_GetEnumerator_m528C0D47C249BF65C793C952FE9AC1F32BDCF374_RuntimeMethod_var);
			V_17 = L_87;
		}

IL_01f2:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0217;
			}

IL_01f4:
			{
				// foreach (var validatedProperty in validatedProperties)
				PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_88 = Enumerator_get_Current_m89363CF89DC816FAF8DC920261607529997CFA11_inline((Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2 *)(&V_17), /*hidden argument*/Enumerator_get_Current_m89363CF89DC816FAF8DC920261607529997CFA11_RuntimeMethod_var);
				V_18 = L_88;
				// if (defaultProperty.Key == validatedProperty.key)
				String_t* L_89 = KeyValuePair_2_get_Key_m90EC5C1FAFCD87594A0381F44DB565E2AE890850_inline((KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857 *)(&V_15), /*hidden argument*/KeyValuePair_2_get_Key_m90EC5C1FAFCD87594A0381F44DB565E2AE890850_RuntimeMethod_var);
				PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_90 = V_18;
				String_t* L_91 = L_90.get_key_0();
				bool L_92 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_89, L_91, /*hidden argument*/NULL);
				if (!L_92)
				{
					goto IL_0217;
				}
			}

IL_0212:
			{
				// isDefaultPropertyValidated = true;
				V_16 = (bool)1;
				// break;
				IL2CPP_LEAVE(0x230, FINALLY_0222);
			}

IL_0217:
			{
				// foreach (var validatedProperty in validatedProperties)
				bool L_93 = Enumerator_MoveNext_m46FED2735DD1276C929694AEC6C74FB20CED1BF3((Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2 *)(&V_17), /*hidden argument*/Enumerator_MoveNext_m46FED2735DD1276C929694AEC6C74FB20CED1BF3_RuntimeMethod_var);
				if (L_93)
				{
					goto IL_01f4;
				}
			}

IL_0220:
			{
				IL2CPP_LEAVE(0x230, FINALLY_0222);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0222;
		}

FINALLY_0222:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m2DEB8F0492890C1A4F49B99312409D7FEB7600B5((Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2 *)(&V_17), /*hidden argument*/Enumerator_Dispose_m2DEB8F0492890C1A4F49B99312409D7FEB7600B5_RuntimeMethod_var);
			IL2CPP_END_FINALLY(546)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(546)
		{
			IL2CPP_JUMP_TBL(0x230, IL_0230)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0230:
		{
			// if (!isDefaultPropertyValidated)
			bool L_94 = V_16;
			if (L_94)
			{
				goto IL_0264;
			}
		}

IL_0234:
		{
			// var validProperty = new PropertyData
			// {
			//     key = defaultProperty.Key,
			//     value = defaultProperty.Value
			// };
			il2cpp_codegen_initobj((&V_20), sizeof(PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5 ));
			String_t* L_95 = KeyValuePair_2_get_Key_m90EC5C1FAFCD87594A0381F44DB565E2AE890850_inline((KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857 *)(&V_15), /*hidden argument*/KeyValuePair_2_get_Key_m90EC5C1FAFCD87594A0381F44DB565E2AE890850_RuntimeMethod_var);
			(&V_20)->set_key_0(L_95);
			Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  L_96 = KeyValuePair_2_get_Value_m2DCC560EC657356BEE09C1B635A6F4B0B2090D97_inline((KeyValuePair_2_t24C1C79006472921A6E3508C3034CFFEEA754857 *)(&V_15), /*hidden argument*/KeyValuePair_2_get_Value_m2DCC560EC657356BEE09C1B635A6F4B0B2090D97_RuntimeMethod_var);
			(&V_20)->set_value_1(L_96);
			PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_97 = V_20;
			V_19 = L_97;
			// validatedProperties.Add(validProperty);
			List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * L_98 = V_2;
			PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_99 = V_19;
			NullCheck(L_98);
			List_1_Add_m227CF67D0E03C8F0327AC5C42706CA77F8EF4179(L_98, L_99, /*hidden argument*/List_1_Add_m227CF67D0E03C8F0327AC5C42706CA77F8EF4179_RuntimeMethod_var);
		}

IL_0264:
		{
			// foreach (var defaultProperty in defaultProperties)
			bool L_100 = Enumerator_MoveNext_m46A41074D7B10356393C5C3402A3763883F66CB7((Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F *)(&V_14), /*hidden argument*/Enumerator_MoveNext_m46A41074D7B10356393C5C3402A3763883F66CB7_RuntimeMethod_var);
			if (L_100)
			{
				goto IL_01de;
			}
		}

IL_0270:
		{
			IL2CPP_LEAVE(0x280, FINALLY_0272);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0272;
	}

FINALLY_0272:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m6B4543F61030F72B3B87E9C17550986E0299D597((Enumerator_t51E94BE1F896B74B58934007C359D0D339D0179F *)(&V_14), /*hidden argument*/Enumerator_Dispose_m6B4543F61030F72B3B87E9C17550986E0299D597_RuntimeMethod_var);
		IL2CPP_END_FINALLY(626)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(626)
	{
		IL2CPP_JUMP_TBL(0x280, IL_0280)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0280:
	{
		// item.properties = validatedProperties.ToArray();
		List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * L_101 = V_2;
		NullCheck(L_101);
		PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_102 = List_1_ToArray_mE20291164A306DD09DB55E3E3070ED179E82622F(L_101, /*hidden argument*/List_1_ToArray_mE20291164A306DD09DB55E3E3070ED179E82622F_RuntimeMethod_var);
		(&V_4)->set_properties_2(L_102);
		// validatedProperties.Clear();
		List_1_tD313B19637DD4F1A0078F35FD896ADD39921F193 * L_103 = V_2;
		NullCheck(L_103);
		List_1_Clear_mFF2FBF0587AD0204632D836F27CDD8D47F091975(L_103, /*hidden argument*/List_1_Clear_mFF2FBF0587AD0204632D836F27CDD8D47F091975_RuntimeMethod_var);
		// validatedItems.Add(item);
		List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_104 = V_1;
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_105 = V_4;
		NullCheck(L_104);
		List_1_Add_mED5FE4B3F58CB7DC42ECF61798C1B7310DF341BC(L_104, L_105, /*hidden argument*/List_1_Add_mED5FE4B3F58CB7DC42ECF61798C1B7310DF341BC_RuntimeMethod_var);
	}

IL_029b:
	{
		// for (var itemIndex = 0; itemIndex < numDataItems; itemIndex++)
		int32_t L_106 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
	}

IL_029f:
	{
		// for (var itemIndex = 0; itemIndex < numDataItems; itemIndex++)
		int32_t L_107 = V_3;
		int32_t L_108 = V_0;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_0024;
		}
	}

IL_02a6:
	{
		// return validatedItems;
		List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * L_109 = V_1;
		return L_109;
	}
}
// UnityEngine.GameFoundation.Data.InventoryManagerData UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::UnityEngine.GameFoundation.IInventoryDataLayer.GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetData_mF137231B8D944F3FAD6206C2CE97366199782BD9 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetData_mF137231B8D944F3FAD6206C2CE97366199782BD9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* V_0 = NULL;
	InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var items = new InventoryItemData[m_Items.Count];
		Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * L_0 = __this->get_m_Items_0();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m9DF02C2E30236E01494D77576674A472980F7448(L_0, /*hidden argument*/Dictionary_2_get_Count_m9DF02C2E30236E01494D77576674A472980F7448_RuntimeMethod_var);
		InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* L_2 = (InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24*)(InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24*)SZArrayNew(InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// m_Items.Values.CopyTo(items, 0);
		Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * L_3 = __this->get_m_Items_0();
		NullCheck(L_3);
		ValueCollection_t0484675329911B9D659E02F53F6180C5E6733F56 * L_4 = Dictionary_2_get_Values_m4C759A21D1BA2CF9A18839E633893B820FC740D3(L_3, /*hidden argument*/Dictionary_2_get_Values_m4C759A21D1BA2CF9A18839E633893B820FC740D3_RuntimeMethod_var);
		InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* L_5 = V_0;
		NullCheck(L_4);
		ValueCollection_CopyTo_mE8BA34846D4732113FCC7AF2852E6D0C8890CA7F(L_4, L_5, 0, /*hidden argument*/ValueCollection_CopyTo_mE8BA34846D4732113FCC7AF2852E6D0C8890CA7F_RuntimeMethod_var);
		// var data = new InventoryManagerData
		// {
		//     items = items
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5 ));
		InventoryItemDataU5BU5D_t6774507FE96A6060F931ACACA4CFBE9902C69B24* L_6 = V_0;
		(&V_1)->set_items_0(L_6);
		InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  L_7 = V_1;
		// return data;
		return L_7;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::UnityEngine.GameFoundation.IInventoryDataLayer.CreateItem(System.String,System.String,UnityEngine.Promise.Completer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_CreateItem_mBAA8573E75086FD4838A9081E5959EC113B487AE (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___key0, String_t* ___itemId1, Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  ___completer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_CreateItem_mBAA8573E75086FD4838A9081E5959EC113B487AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * V_0 = NULL;
	CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05 * V_1 = NULL;
	InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * V_2 = NULL;
	{
		// Tools.RejectIfArgNullOrEmpty(key, nameof(key), completer);
		String_t* L_0 = ___key0;
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  L_1 = ___completer2;
		Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9  L_2 = Completer_op_Implicit_m776071298E5802343C492ECEE9ED1E12FE6D928B(L_1, /*hidden argument*/NULL);
		Tools_RejectIfArgNullOrEmpty_mCB4E81DDE885337E6EE85E75F55D74CF81B224E7_inline(L_0, _stringLiteralA62F2225BF70BFACCBC7F1EF2A397836717377DE, L_2, /*hidden argument*/NULL);
		// Tools.RejectIfArgNullOrEmpty(itemId, nameof(itemId), completer);
		String_t* L_3 = ___itemId1;
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  L_4 = ___completer2;
		Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9  L_5 = Completer_op_Implicit_m776071298E5802343C492ECEE9ED1E12FE6D928B(L_4, /*hidden argument*/NULL);
		Tools_RejectIfArgNullOrEmpty_mCB4E81DDE885337E6EE85E75F55D74CF81B224E7_inline(L_3, _stringLiteral7C3A89AB0E47C559AF9904EC143E1478AB90D4AA, L_5, /*hidden argument*/NULL);
		// var itemDefinition = m_Catalog.FindItem(key);
		InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * L_6 = __this->get_m_Catalog_1();
		String_t* L_7 = ___key0;
		NullCheck(L_6);
		InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_8 = SingleCollectionCatalogAsset_1_FindItem_m8DE1ECC1E15C584B9D6D5AA8CE460F490FE2E9EB(L_6, L_7, /*hidden argument*/SingleCollectionCatalogAsset_1_FindItem_m8DE1ECC1E15C584B9D6D5AA8CE460F490FE2E9EB_RuntimeMethod_var);
		V_0 = L_8;
		// if (itemDefinition == null)
		InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		// var reason = new CatalogItemNotFoundException(key);
		String_t* L_11 = ___key0;
		CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05 * L_12 = (CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05 *)il2cpp_codegen_object_new(CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05_il2cpp_TypeInfo_var);
		CatalogItemNotFoundException__ctor_m994FCCFF959FBEFB3D75FB34DA1FE39D1136C326(L_12, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// completer.Reject(reason);
		CatalogItemNotFoundException_t22FA7576A6A96B66D0EB1970990CAFEEAD25CA05 * L_13 = V_1;
		Completer_Reject_mC041DF09A1CD4AA308F22BF97721699633416880((Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 *)(&___completer2), L_13, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// if (m_Items.ContainsKey(itemId))
		Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * L_14 = __this->get_m_Items_0();
		String_t* L_15 = ___itemId1;
		NullCheck(L_14);
		bool L_16 = Dictionary_2_ContainsKey_m11725FFCE98867A4BADB62D2747E71CA7E0C807B(L_14, L_15, /*hidden argument*/Dictionary_2_ContainsKey_m11725FFCE98867A4BADB62D2747E71CA7E0C807B_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		// var reason = new InvalidOperationException(
		//     $"An Item with the id \"{itemId}\" already exists.");
		String_t* L_17 = ___itemId1;
		String_t* L_18 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral6D545434E0E83DD3106593E86B9EFAE8E4458F19, L_17, _stringLiteralA55922AD734E3EB55F581798E455DFF8BD160591, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_19 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_19, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// completer.Reject(reason);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_20 = V_2;
		Completer_Reject_mC041DF09A1CD4AA308F22BF97721699633416880((Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 *)(&___completer2), L_20, /*hidden argument*/NULL);
	}

IL_0075:
	{
		// CreateItemNoCheck(itemDefinition, itemId);
		InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_21 = V_0;
		String_t* L_22 = ___itemId1;
		InventoryDataLayer_CreateItemNoCheck_m84F2405724B0B4DC42EF05CE82070E4210996EA7(__this, L_21, L_22, /*hidden argument*/NULL);
		// completer.Resolve();
		Completer_Resolve_mC374BAED823673FC0A04AD6D7929D5A6A7BFB2EB((Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 *)(&___completer2), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::UnityEngine.GameFoundation.IInventoryDataLayer.DeleteItem(System.String,UnityEngine.Promise.Completer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_DeleteItem_m8C9CA09F365414B50AC081E462234408BC5815C7 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___itemId0, Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  ___completer1, const RuntimeMethod* method)
{
	{
		// DeleteItem(itemId);
		String_t* L_0 = ___itemId0;
		InventoryDataLayer_DeleteItem_m23AA189A113E989E713B6402140EDD9F60E954BC(__this, L_0, /*hidden argument*/NULL);
		// completer.Resolve();
		Completer_Resolve_mC374BAED823673FC0A04AD6D7929D5A6A7BFB2EB((Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 *)(&___completer1), /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.GameFoundation.Property UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::UnityEngine.GameFoundation.IInventoryDataLayer.GetPropertyValue(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetPropertyValue_m7B2FF6874BC596A57A49938EE0FD75C51D025CF0 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___itemId0, String_t* ___propertyKey1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetPropertyValue_m7B2FF6874BC596A57A49938EE0FD75C51D025CF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Tools.ThrowIfArgNullOrEmpty(itemId, nameof(itemId));
		String_t* L_0 = ___itemId0;
		Tools_ThrowIfArgNullOrEmpty_m937FE947DD8528E8BEF39BF007FC83C60CF991AA_inline(L_0, _stringLiteral7C3A89AB0E47C559AF9904EC143E1478AB90D4AA, /*hidden argument*/NULL);
		// Tools.ThrowIfArgNullOrEmpty(propertyKey, nameof(propertyKey));
		String_t* L_1 = ___propertyKey1;
		Tools_ThrowIfArgNullOrEmpty_m937FE947DD8528E8BEF39BF007FC83C60CF991AA_inline(L_1, _stringLiteralDB30212988D94ACDA3FBA81327CACCA32E9158A0, /*hidden argument*/NULL);
		// if (!m_Items.TryGetValue(itemId, out var item))
		Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * L_2 = __this->get_m_Items_0();
		String_t* L_3 = ___itemId0;
		NullCheck(L_2);
		bool L_4 = Dictionary_2_TryGetValue_m308EB25FBED07C9DBD8762182727C3AAC2D189D4(L_2, L_3, (InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m308EB25FBED07C9DBD8762182727C3AAC2D189D4_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// throw new InventoryItemNotFoundException(itemId);
		String_t* L_5 = ___itemId0;
		InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C * L_6 = (InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C *)il2cpp_codegen_object_new(InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C_il2cpp_TypeInfo_var);
		InventoryItemNotFoundException__ctor_mFE85B44B53517F567DE65E88F121B4A23B963FF5(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetPropertyValue_m7B2FF6874BC596A57A49938EE0FD75C51D025CF0_RuntimeMethod_var);
	}

IL_002d:
	{
		// foreach (var itemProperty in item.properties)
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_7 = V_0;
		PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_8 = L_7.get_properties_2();
		V_1 = L_8;
		V_2 = 0;
		goto IL_0059;
	}

IL_0038:
	{
		// foreach (var itemProperty in item.properties)
		PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		// if (itemProperty.key == propertyKey)
		PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_13 = V_3;
		String_t* L_14 = L_13.get_key_0();
		String_t* L_15 = ___propertyKey1;
		bool L_16 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0055;
		}
	}
	{
		// return itemProperty.value;
		PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_17 = V_3;
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  L_18 = L_17.get_value_1();
		return L_18;
	}

IL_0055:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0059:
	{
		// foreach (var itemProperty in item.properties)
		int32_t L_20 = V_2;
		PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))))
		{
			goto IL_0038;
		}
	}
	{
		// throw new PropertyNotFoundException(itemId, propertyKey);
		String_t* L_22 = ___itemId0;
		String_t* L_23 = ___propertyKey1;
		PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7 * L_24 = (PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7 *)il2cpp_codegen_object_new(PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7_il2cpp_TypeInfo_var);
		PropertyNotFoundException__ctor_m25D4599343AAE909888AFA8C754F2A25537EC3B5(L_24, L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_GetPropertyValue_m7B2FF6874BC596A57A49938EE0FD75C51D025CF0_RuntimeMethod_var);
	}
}
// System.Boolean UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::UnityEngine.GameFoundation.IInventoryDataLayer.TryGetPropertyValue(System.String,System.String,UnityEngine.GameFoundation.Property&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_TryGetPropertyValue_mFAE06A7718E04F6F98A38C08E3A4C0D4F2E6FB89 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___itemId0, String_t* ___propertyKey1, Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * ___propertyValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_TryGetPropertyValue_mFAE06A7718E04F6F98A38C08E3A4C0D4F2E6FB89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (string.IsNullOrWhiteSpace(itemId)
		//     || string.IsNullOrWhiteSpace(propertyKey)
		//     || !m_Items.TryGetValue(itemId, out var item))
		String_t* L_0 = ___itemId0;
		bool L_1 = String_IsNullOrWhiteSpace_m62102CA65546AE151DC8254B72110F4AA48E2135(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = ___propertyKey1;
		bool L_3 = String_IsNullOrWhiteSpace_m62102CA65546AE151DC8254B72110F4AA48E2135(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * L_4 = __this->get_m_Items_0();
		String_t* L_5 = ___itemId0;
		NullCheck(L_4);
		bool L_6 = Dictionary_2_TryGetValue_m308EB25FBED07C9DBD8762182727C3AAC2D189D4(L_4, L_5, (InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m308EB25FBED07C9DBD8762182727C3AAC2D189D4_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0029;
		}
	}

IL_0020:
	{
		// propertyValue = default;
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * L_7 = ___propertyValue2;
		il2cpp_codegen_initobj(L_7, sizeof(Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 ));
		// return false;
		return (bool)0;
	}

IL_0029:
	{
		// foreach (var itemProperty in item.properties)
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_8 = V_0;
		PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_9 = L_8.get_properties_2();
		V_1 = L_9;
		V_2 = 0;
		goto IL_005c;
	}

IL_0034:
	{
		// foreach (var itemProperty in item.properties)
		PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		// if (itemProperty.key == propertyKey)
		PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_14 = V_3;
		String_t* L_15 = L_14.get_key_0();
		String_t* L_16 = ___propertyKey1;
		bool L_17 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0058;
		}
	}
	{
		// propertyValue = itemProperty.value;
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * L_18 = ___propertyValue2;
		PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_19 = V_3;
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  L_20 = L_19.get_value_1();
		*(Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 *)L_18 = L_20;
		Il2CppCodeGenWriteBarrier((void**)&(((Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 *)L_18)->___stringValue_2), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0058:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_005c:
	{
		// foreach (var itemProperty in item.properties)
		int32_t L_22 = V_2;
		PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))))
		{
			goto IL_0034;
		}
	}
	{
		// propertyValue = default;
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * L_24 = ___propertyValue2;
		il2cpp_codegen_initobj(L_24, sizeof(Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 ));
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.InventoryDataLayer::UnityEngine.GameFoundation.IInventoryDataLayer.SetPropertyValue(System.String,System.String,UnityEngine.GameFoundation.Property,UnityEngine.Promise.Completer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_SetPropertyValue_m8519504ED9180D3F258D3941FE5673872D8CF4E9 (InventoryDataLayer_tE0A2C2833E521B6C0A861001947C45FC5BCA4E76 * __this, String_t* ___itemId0, String_t* ___propertyKey1, Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  ___value2, Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  ___completer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InventoryDataLayer_UnityEngine_GameFoundation_IInventoryDataLayer_SetPropertyValue_m8519504ED9180D3F258D3941FE5673872D8CF4E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (Tools.RejectIfArgNullOrEmpty(itemId, nameof(itemId), completer))
		String_t* L_0 = ___itemId0;
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  L_1 = ___completer3;
		Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9  L_2 = Completer_op_Implicit_m776071298E5802343C492ECEE9ED1E12FE6D928B(L_1, /*hidden argument*/NULL);
		bool L_3 = Tools_RejectIfArgNullOrEmpty_mCB4E81DDE885337E6EE85E75F55D74CF81B224E7_inline(L_0, _stringLiteral7C3A89AB0E47C559AF9904EC143E1478AB90D4AA, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// if (Tools.RejectIfArgNullOrEmpty(propertyKey, nameof(propertyKey), completer))
		String_t* L_4 = ___propertyKey1;
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  L_5 = ___completer3;
		Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9  L_6 = Completer_op_Implicit_m776071298E5802343C492ECEE9ED1E12FE6D928B(L_5, /*hidden argument*/NULL);
		bool L_7 = Tools_RejectIfArgNullOrEmpty_mCB4E81DDE885337E6EE85E75F55D74CF81B224E7_inline(L_4, _stringLiteralDB30212988D94ACDA3FBA81327CACCA32E9158A0, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// return;
		return;
	}

IL_002a:
	{
		// if (!m_Items.TryGetValue(itemId, out var item))
		Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * L_8 = __this->get_m_Items_0();
		String_t* L_9 = ___itemId0;
		NullCheck(L_8);
		bool L_10 = Dictionary_2_TryGetValue_m308EB25FBED07C9DBD8762182727C3AAC2D189D4(L_8, L_9, (InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m308EB25FBED07C9DBD8762182727C3AAC2D189D4_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0048;
		}
	}
	{
		// completer.Reject(new InventoryItemNotFoundException(itemId));
		String_t* L_11 = ___itemId0;
		InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C * L_12 = (InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C *)il2cpp_codegen_object_new(InventoryItemNotFoundException_t78945836F9BFEF405D12C882AD6738800E9BF71C_il2cpp_TypeInfo_var);
		InventoryItemNotFoundException__ctor_mFE85B44B53517F567DE65E88F121B4A23B963FF5(L_12, L_11, /*hidden argument*/NULL);
		Completer_Reject_mC041DF09A1CD4AA308F22BF97721699633416880((Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 *)(&___completer3), L_12, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0048:
	{
		// for (var i = 0; i < item.properties.Length; i++)
		V_1 = 0;
		goto IL_00d3;
	}

IL_004f:
	{
		// var itemProperty = item.properties[i];
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_13 = V_0;
		PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_14 = L_13.get_properties_2();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = L_17;
		// if (itemProperty.key == propertyKey)
		PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_18 = V_2;
		String_t* L_19 = L_18.get_key_0();
		String_t* L_20 = ___propertyKey1;
		bool L_21 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_19, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00cf;
		}
	}
	{
		// if (itemProperty.value.type != value.type)
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * L_22 = (&V_2)->get_address_of_value_1();
		int32_t L_23 = Property_get_type_m4C40EFB19CE65EE72F01A8827FDB2500EAADF433_inline((Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 *)L_22, /*hidden argument*/NULL);
		int32_t L_24 = Property_get_type_m4C40EFB19CE65EE72F01A8827FDB2500EAADF433_inline((Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 *)(&___value2), /*hidden argument*/NULL);
		if ((((int32_t)L_23) == ((int32_t)L_24)))
		{
			goto IL_00a0;
		}
	}
	{
		// completer.Reject(
		//     new PropertyInvalidCastException(
		//         propertyKey, itemProperty.value.type, value.type));
		String_t* L_25 = ___propertyKey1;
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * L_26 = (&V_2)->get_address_of_value_1();
		int32_t L_27 = Property_get_type_m4C40EFB19CE65EE72F01A8827FDB2500EAADF433_inline((Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 *)L_26, /*hidden argument*/NULL);
		int32_t L_28 = Property_get_type_m4C40EFB19CE65EE72F01A8827FDB2500EAADF433_inline((Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 *)(&___value2), /*hidden argument*/NULL);
		PropertyInvalidCastException_tBFCD1DB7F89F6CA3AE59C2C52995F26E2C66EAA2 * L_29 = (PropertyInvalidCastException_tBFCD1DB7F89F6CA3AE59C2C52995F26E2C66EAA2 *)il2cpp_codegen_object_new(PropertyInvalidCastException_tBFCD1DB7F89F6CA3AE59C2C52995F26E2C66EAA2_il2cpp_TypeInfo_var);
		PropertyInvalidCastException__ctor_m584CF4F6BB5ADF7787AB0C434AE1950DF79E012B(L_29, L_25, L_27, L_28, /*hidden argument*/NULL);
		Completer_Reject_mC041DF09A1CD4AA308F22BF97721699633416880((Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 *)(&___completer3), L_29, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a0:
	{
		// itemProperty.value = value;
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  L_30 = ___value2;
		(&V_2)->set_value_1(L_30);
		// item.properties[i] = itemProperty;
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_31 = V_0;
		PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_32 = L_31.get_properties_2();
		int32_t L_33 = V_1;
		PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_34 = V_2;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5 )L_34);
		// m_Items[item.id] = item;
		Dictionary_2_t74E5D30F9A83D712879526C8207F02E9FD0601F3 * L_35 = __this->get_m_Items_0();
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_36 = V_0;
		String_t* L_37 = L_36.get_id_1();
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_38 = V_0;
		NullCheck(L_35);
		Dictionary_2_set_Item_m7F887A070EAA3D92B548106FB64E77CCD91BE3F9(L_35, L_37, L_38, /*hidden argument*/Dictionary_2_set_Item_m7F887A070EAA3D92B548106FB64E77CCD91BE3F9_RuntimeMethod_var);
		// completer.Resolve();
		Completer_Resolve_mC374BAED823673FC0A04AD6D7929D5A6A7BFB2EB((Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 *)(&___completer3), /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00cf:
	{
		// for (var i = 0; i < item.properties.Length; i++)
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00d3:
	{
		// for (var i = 0; i < item.properties.Length; i++)
		int32_t L_40 = V_1;
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_41 = V_0;
		PropertyDataU5BU5D_t7D57B3060AA2E9826A986D85E85FD834773AE0D7* L_42 = L_41.get_properties_2();
		NullCheck(L_42);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))))
		{
			goto IL_004f;
		}
	}
	{
		// completer.Reject(new PropertyNotFoundException(itemId, propertyKey));
		String_t* L_43 = ___itemId0;
		String_t* L_44 = ___propertyKey1;
		PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7 * L_45 = (PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7 *)il2cpp_codegen_object_new(PropertyNotFoundException_t141DECF4245C35F0B5BD4515C82791450679DED7_il2cpp_TypeInfo_var);
		PropertyNotFoundException__ctor_m25D4599343AAE909888AFA8C754F2A25537EC3B5(L_45, L_43, L_44, /*hidden argument*/NULL);
		Completer_Reject_mC041DF09A1CD4AA308F22BF97721699633416880((Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 *)(&___completer3), L_45, /*hidden argument*/NULL);
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
// UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataSerializer UnityEngine.GameFoundation.DefaultLayers.Persistence.BaseDataPersistence::get_serializer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseDataPersistence_get_serializer_mDB389CD21F5A432EA23989C7BA6419CEF1B2F2FE (BaseDataPersistence_t6314CED3A904BB34596A984FFFB67ABBC205AB92 * __this, const RuntimeMethod* method)
{
	{
		// protected IDataSerializer serializer { get; }
		RuntimeObject* L_0 = __this->get_U3CserializerU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.Persistence.BaseDataPersistence::.ctor(UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataPersistence__ctor_m5E40F9FFCDC6F7D4B8D415D9FE49C742E5F54332 (BaseDataPersistence_t6314CED3A904BB34596A984FFFB67ABBC205AB92 * __this, RuntimeObject* ___serializer0, const RuntimeMethod* method)
{
	{
		// public BaseDataPersistence(IDataSerializer serializer)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.serializer = serializer;
		RuntimeObject* L_0 = ___serializer0;
		__this->set_U3CserializerU3Ek__BackingField_0(L_0);
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
// System.Void UnityEngine.GameFoundation.DefaultLayers.Persistence.JsonDataSerializer::Serialize(UnityEngine.GameFoundation.Data.GameFoundationData,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonDataSerializer_Serialize_m023C245B7BBAA3B3F308CF29B41F42637FC24169 (JsonDataSerializer_tC698450A00DF2674FFCED7DEAA30182A5A213015 * __this, GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  ___data0, TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonDataSerializer_Serialize_m023C245B7BBAA3B3F308CF29B41F42637FC24169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var json = JsonUtility.ToJson(data);
		GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  L_0 = ___data0;
		GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  L_1 = L_0;
		RuntimeObject * L_2 = Box(GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = JsonUtility_ToJson_m588D3BCFA6FC7FA342FC221D4CB02729E901E573(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// writer.Write(json);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_4 = ___writer1;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, L_5);
		// }
		return;
	}
}
// UnityEngine.GameFoundation.Data.GameFoundationData UnityEngine.GameFoundation.DefaultLayers.Persistence.JsonDataSerializer::Deserialize(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  JsonDataSerializer_Deserialize_m0B9E21DB22811405289C0C4FC27498AA2720A6B3 (JsonDataSerializer_tC698450A00DF2674FFCED7DEAA30182A5A213015 * __this, TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonDataSerializer_Deserialize_m0B9E21DB22811405289C0C4FC27498AA2720A6B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonUtility.FromJson<GameFoundationData>(reader.ReadToEnd());
		TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_0);
		GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  L_2 = JsonUtility_FromJson_TisGameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6_m15406CDCA3935580C05949EA06D83B073A108ACC(L_1, /*hidden argument*/JsonUtility_FromJson_TisGameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6_m15406CDCA3935580C05949EA06D83B073A108ACC_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.Persistence.JsonDataSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonDataSerializer__ctor_mE997FBCD959FE8F95C0B2179F2414D0926D070C4 (JsonDataSerializer_tC698450A00DF2674FFCED7DEAA30182A5A213015 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.String UnityEngine.GameFoundation.DefaultLayers.Persistence.LocalPersistence::get_fullpath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalPersistence_get_fullpath_m0345914530DA82A33B4CFAEF2C8BF861320DFDC0 (LocalPersistence_t8240944F90C8B135BE0A433BD3E3D13047469133 * __this, const RuntimeMethod* method)
{
	{
		// public string fullpath { get; }
		String_t* L_0 = __this->get_U3CfullpathU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.Persistence.LocalPersistence::.ctor(System.String,UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalPersistence__ctor_mF94027E38207050D3C035EA5CA8E6AB7EF2BCDB9 (LocalPersistence_t8240944F90C8B135BE0A433BD3E3D13047469133 * __this, String_t* ___filename0, RuntimeObject* ___serializer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalPersistence__ctor_mF94027E38207050D3C035EA5CA8E6AB7EF2BCDB9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(serializer)
		RuntimeObject* L_0 = ___serializer1;
		BaseDataPersistence__ctor_m5E40F9FFCDC6F7D4B8D415D9FE49C742E5F54332(__this, L_0, /*hidden argument*/NULL);
		// this.filename = filename;
		String_t* L_1 = ___filename0;
		__this->set_U3CfilenameU3Ek__BackingField_1(L_1);
		// fullpath = $"{Application.persistentDataPath}/{filename}";
		String_t* L_2 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_3 = ___filename0;
		String_t* L_4 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_2, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, L_3, /*hidden argument*/NULL);
		__this->set_U3CfullpathU3Ek__BackingField_2(L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.Persistence.LocalPersistence::Save(UnityEngine.GameFoundation.Data.GameFoundationData,System.Action,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalPersistence_Save_m3826B2D0FAB28C83A4712FF30A3816571DE58E03 (LocalPersistence_t8240944F90C8B135BE0A433BD3E3D13047469133 * __this, GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  ___content0, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___onSaveCompleted1, Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * ___onSaveFailed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalPersistence_Save_m3826B2D0FAB28C83A4712FF30A3816571DE58E03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// string pathBackup = $"{fullpath}{kBackupSuffix}";
		String_t* L_0 = LocalPersistence_get_fullpath_m0345914530DA82A33B4CFAEF2C8BF861320DFDC0_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral004E2057A125C06430754D451410E967133F8E42, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			// using (var sw = new StreamWriter(fullpath, false, Encoding.Default))
			String_t* L_2 = LocalPersistence_get_fullpath_m0345914530DA82A33B4CFAEF2C8BF861320DFDC0_inline(__this, /*hidden argument*/NULL);
			Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_3 = Encoding_get_Default_m625C78C2A9A8504B8BA4141994412513DC470CE2(/*hidden argument*/NULL);
			StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * L_4 = (StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E *)il2cpp_codegen_object_new(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_il2cpp_TypeInfo_var);
			StreamWriter__ctor_m1D1CC9AC344BA16DBFD6A99AAADF2E383B4E888C(L_4, L_2, (bool)0, L_3, /*hidden argument*/NULL);
			V_1 = L_4;
		}

IL_0023:
		try
		{ // begin try (depth: 2)
			// serializer.Serialize(content, sw);
			RuntimeObject* L_5 = BaseDataPersistence_get_serializer_mDB389CD21F5A432EA23989C7BA6419CEF1B2F2FE_inline(__this, /*hidden argument*/NULL);
			GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  L_6 = ___content0;
			StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * L_7 = V_1;
			NullCheck(L_5);
			InterfaceActionInvoker2< GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6 , TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * >::Invoke(0 /* System.Void UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataSerializer::Serialize(UnityEngine.GameFoundation.Data.GameFoundationData,System.IO.TextWriter) */, IDataSerializer_t5FDB9ECD010A66ED01507BD66149B32D9427AE4A_il2cpp_TypeInfo_var, L_5, L_6, L_7);
			// }
			IL2CPP_LEAVE(0x3C, FINALLY_0032);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0032;
		}

FINALLY_0032:
		{ // begin finally (depth: 2)
			{
				StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * L_8 = V_1;
				if (!L_8)
				{
					goto IL_003b;
				}
			}

IL_0035:
			{
				StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * L_9 = V_1;
				NullCheck(L_9);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_9);
			}

IL_003b:
			{
				IL2CPP_END_FINALLY(50)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(50)
		{
			IL2CPP_JUMP_TBL(0x3C, IL_003c)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_003c:
		{
			// File.Copy(fullpath, pathBackup, true);
			String_t* L_10 = LocalPersistence_get_fullpath_m0345914530DA82A33B4CFAEF2C8BF861320DFDC0_inline(__this, /*hidden argument*/NULL);
			String_t* L_11 = V_0;
			File_Copy_m42EEC6C53F171AD23C837EAD48905F11D94C04BF(L_10, L_11, (bool)1, /*hidden argument*/NULL);
			// }
			goto IL_0058;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_004b;
		throw e;
	}

CATCH_004b:
	{ // begin catch(System.Exception)
		{
			// catch (Exception e)
			V_2 = ((Exception_t *)__exception_local);
			// onSaveFailed?.Invoke(e);
			Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * L_12 = ___onSaveFailed2;
			if (!L_12)
			{
				goto IL_0056;
			}
		}

IL_004f:
		{
			Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * L_13 = ___onSaveFailed2;
			Exception_t * L_14 = V_2;
			NullCheck(L_13);
			Action_1_Invoke_m8D8F32903083AC7B78962DA7FF3EFCE6580A1B41(L_13, L_14, /*hidden argument*/Action_1_Invoke_m8D8F32903083AC7B78962DA7FF3EFCE6580A1B41_RuntimeMethod_var);
		}

IL_0056:
		{
			// return;
			goto IL_0061;
		}
	} // end catch (depth: 1)

IL_0058:
	{
		// onSaveCompleted?.Invoke();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_15 = ___onSaveCompleted1;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_16 = ___onSaveCompleted1;
		NullCheck(L_16);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_16, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.Persistence.LocalPersistence::Load(System.Action`1<UnityEngine.GameFoundation.Data.GameFoundationData>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalPersistence_Load_mFDCAC4B0BCAD14C3548F39F011A8E6A5C1F0AF55 (LocalPersistence_t8240944F90C8B135BE0A433BD3E3D13047469133 * __this, Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9 * ___onLoadCompleted0, Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * ___onLoadFailed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalPersistence_Load_mFDCAC4B0BCAD14C3548F39F011A8E6A5C1F0AF55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// string pathBackup = $"{fullpath}{kBackupSuffix}";
		String_t* L_0 = LocalPersistence_get_fullpath_m0345914530DA82A33B4CFAEF2C8BF861320DFDC0_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral004E2057A125C06430754D451410E967133F8E42, /*hidden argument*/NULL);
		V_1 = L_1;
		// if (File.Exists(fullpath))
		String_t* L_2 = LocalPersistence_get_fullpath_m0345914530DA82A33B4CFAEF2C8BF861320DFDC0_inline(__this, /*hidden argument*/NULL);
		bool L_3 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// path = fullpath;
		String_t* L_4 = LocalPersistence_get_fullpath_m0345914530DA82A33B4CFAEF2C8BF861320DFDC0_inline(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		// }
		goto IL_0057;
	}

IL_0027:
	{
		// else if (File.Exists(pathBackup))
		String_t* L_5 = V_1;
		bool L_6 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// path = pathBackup;
		String_t* L_7 = V_1;
		V_0 = L_7;
		// }
		goto IL_0057;
	}

IL_0033:
	{
		// onLoadFailed?.Invoke(new FileNotFoundException($"There is no file at the path \"{fullpath}\"."));
		Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * L_8 = ___onLoadFailed1;
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * L_9 = ___onLoadFailed1;
		String_t* L_10 = LocalPersistence_get_fullpath_m0345914530DA82A33B4CFAEF2C8BF861320DFDC0_inline(__this, /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral52942F416FAF8D67D1AD2B23B495D45973E32F53, L_10, _stringLiteralF8D1786CF7A23D7C5E90DC84390F00EC8874EE73, /*hidden argument*/NULL);
		FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 * L_12 = (FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 *)il2cpp_codegen_object_new(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431_il2cpp_TypeInfo_var);
		FileNotFoundException__ctor_mA72DAA77008E903BC162A8D32FDE7F874B27E858(L_12, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Action_1_Invoke_m8D8F32903083AC7B78962DA7FF3EFCE6580A1B41(L_9, L_12, /*hidden argument*/Action_1_Invoke_m8D8F32903083AC7B78962DA7FF3EFCE6580A1B41_RuntimeMethod_var);
	}

IL_0056:
	{
		// return;
		return;
	}

IL_0057:
	{
		// var fileInfo = new FileInfo(path);
		String_t* L_13 = V_0;
		FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C * L_14 = (FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C *)il2cpp_codegen_object_new(FileInfo_tF8C1D41E1ABDAC19BF4F76A491DD28DD8DBEE35C_il2cpp_TypeInfo_var);
		FileInfo__ctor_m77D19A494A542C924C36FDD8AE5CDBEA97CE68B8(L_14, L_13, /*hidden argument*/NULL);
		// using (var sr = new StreamReader(fileInfo.OpenRead(), Encoding.Default))
		NullCheck(L_14);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_15 = FileInfo_OpenRead_m50151E576A99801FCE1B130EFE8AC1E034A9706B(L_14, /*hidden argument*/NULL);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_16 = Encoding_get_Default_m625C78C2A9A8504B8BA4141994412513DC470CE2(/*hidden argument*/NULL);
		StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * L_17 = (StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E *)il2cpp_codegen_object_new(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_il2cpp_TypeInfo_var);
		StreamReader__ctor_mF319C927A1274118E912D93F2EB2AAE4DA17E3DC(L_17, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
	}

IL_006d:
	try
	{ // begin try (depth: 1)
		// data = serializer.Deserialize(sr);
		RuntimeObject* L_18 = BaseDataPersistence_get_serializer_mDB389CD21F5A432EA23989C7BA6419CEF1B2F2FE_inline(__this, /*hidden argument*/NULL);
		StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * L_19 = V_3;
		NullCheck(L_18);
		GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  L_20 = InterfaceFuncInvoker1< GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6 , TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * >::Invoke(1 /* UnityEngine.GameFoundation.Data.GameFoundationData UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataSerializer::Deserialize(System.IO.TextReader) */, IDataSerializer_t5FDB9ECD010A66ED01507BD66149B32D9427AE4A_il2cpp_TypeInfo_var, L_18, L_19);
		V_2 = L_20;
		// }
		IL2CPP_LEAVE(0x86, FINALLY_007c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		{
			StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * L_21 = V_3;
			if (!L_21)
			{
				goto IL_0085;
			}
		}

IL_007f:
		{
			StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * L_22 = V_3;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_22);
		}

IL_0085:
		{
			IL2CPP_END_FINALLY(124)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0086:
	{
		// onLoadCompleted?.Invoke(data);
		Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9 * L_23 = ___onLoadCompleted0;
		if (!L_23)
		{
			goto IL_0090;
		}
	}
	{
		Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9 * L_24 = ___onLoadCompleted0;
		GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  L_25 = V_2;
		NullCheck(L_24);
		Action_1_Invoke_m9B0F57DB4870BEFB17155B9714C417484F261509(L_24, L_25, /*hidden argument*/Action_1_Invoke_m9B0F57DB4870BEFB17155B9714C417484F261509_RuntimeMethod_var);
	}

IL_0090:
	{
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
// UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataPersistence UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer::get_persistence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PersistenceDataLayer_get_persistence_m75267B05E1C41B53AE77E0D462B3122943218DDB (PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * __this, const RuntimeMethod* method)
{
	{
		// public IDataPersistence persistence { get; }
		RuntimeObject* L_0 = __this->get_U3CpersistenceU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer::.ctor(UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataPersistence,UnityEngine.GameFoundation.DefaultCatalog.GameFoundationDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceDataLayer__ctor_m3B85C786F517F6446CDEA56BFDADF13CE4CE8721 (PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * __this, RuntimeObject* ___persistence0, GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PersistenceDataLayer__ctor_m3B85C786F517F6446CDEA56BFDADF13CE4CE8721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * G_B1_1 = NULL;
	{
		// PromiseGenerator m_PromiseGenerator = new PromiseGenerator();
		PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C * L_0 = (PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C *)il2cpp_codegen_object_new(PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C_il2cpp_TypeInfo_var);
		PromiseGenerator__ctor_m0902415830C324FF33148B3EF9B4FF159CA1591D(L_0, /*hidden argument*/NULL);
		__this->set_m_PromiseGenerator_11(L_0);
		// : base(database)
		GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * L_1 = ___database1;
		IL2CPP_RUNTIME_CLASS_INIT(BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878_il2cpp_TypeInfo_var);
		BaseMemoryDataLayer__ctor_m3B6E749EFC6009D3D1781DE44D4BABEAC92C9CF0(__this, L_1, /*hidden argument*/NULL);
		// this.persistence = persistence ?? throw new ArgumentNullException(nameof(persistence));
		RuntimeObject* L_2 = ___persistence0;
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_0023;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_4 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_4, _stringLiteral0AAD6CBBD31E5018A84C00721B0877164C732C4D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, PersistenceDataLayer__ctor_m3B85C786F517F6446CDEA56BFDADF13CE4CE8721_RuntimeMethod_var);
	}

IL_0023:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_U3CpersistenceU3Ek__BackingField_10(G_B2_0);
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer::Initialize(UnityEngine.Promise.Completer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceDataLayer_Initialize_m36745CEEFA870FC6FE0BB4BAFC578F4AD75A5018 (PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * __this, Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  ___completer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PersistenceDataLayer_Initialize_m36745CEEFA870FC6FE0BB4BAFC578F4AD75A5018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F * L_0 = (U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_m5ACF304BB97A7077A8CFC9D8F7C8A9D269FF42D4(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F * L_2 = V_0;
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  L_3 = ___completer0;
		NullCheck(L_2);
		L_2->set_completer_1(L_3);
		// persistence.Load(
		//     InitializeWith,
		//     error =>
		//     {
		//         switch (error)
		//         {
		//             case FileNotFoundException _:
		//                 InitializeWith(database.CreateDefaultData());
		//                 break;
		// 
		//             default:
		//                 completer.Reject(error);
		//                 break;
		//         }
		//     });
		RuntimeObject* L_4 = PersistenceDataLayer_get_persistence_m75267B05E1C41B53AE77E0D462B3122943218DDB_inline(__this, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F * L_5 = V_0;
		Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9 * L_6 = (Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9 *)il2cpp_codegen_object_new(Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9_il2cpp_TypeInfo_var);
		Action_1__ctor_m4D76A4607B5FA7911ADB40D45263645DF4B9476D(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3CInitializeU3Eg__InitializeWithU7C0_m4D885D79D294F21E46A28C9F632C4D64C64640C8_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4D76A4607B5FA7911ADB40D45263645DF4B9476D_RuntimeMethod_var);
		U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F * L_7 = V_0;
		Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * L_8 = (Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 *)il2cpp_codegen_object_new(Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85_il2cpp_TypeInfo_var);
		Action_1__ctor_mE8E44E4F2A93E5B1E8C68373E66EC348B631616A(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3CInitializeU3Eb__1_m2B62158577A8F973AB20617472C869218DDE6DD2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mE8E44E4F2A93E5B1E8C68373E66EC348B631616A_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker2< Action_1_tD9399E5598E7CF4C8588531030A2B13D9ECE9AD9 *, Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * >::Invoke(0 /* System.Void UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataPersistence::Load(System.Action`1<UnityEngine.GameFoundation.Data.GameFoundationData>,System.Action`1<System.Exception>) */, IDataPersistence_t9AD5A56789F56D8702CE83917B9BA759F2963F79_il2cpp_TypeInfo_var, L_4, L_6, L_8);
		// }
		return;
	}
}
// UnityEngine.Promise.Deferred UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Deferred_t9E66F9D4FE2384EE0876310669A738E26D88EA94  PersistenceDataLayer_Save_m65F717C357B10BB723104D12E6CFE03774635C62 (PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PersistenceDataLayer_Save_m65F717C357B10BB723104D12E6CFE03774635C62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Deferred_t9E66F9D4FE2384EE0876310669A738E26D88EA94  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var data = GetData();
		GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  L_0 = BaseMemoryDataLayer_GetData_m699CFD2A193C244F4617FEAA3B3453BD71553B34(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// m_PromiseGenerator.GetPromiseHandles(out var deferred, out var completer);
		PromiseGenerator_t9537D7C88D6142F275699BF6D1156ED302CA4A8C * L_1 = __this->get_m_PromiseGenerator_11();
		NullCheck(L_1);
		PromiseGenerator_GetPromiseHandles_m4F86D67F789CA5D9193AB5767A2F11F4D23DAC91(L_1, (Deferred_t9E66F9D4FE2384EE0876310669A738E26D88EA94 *)(&V_1), (Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 *)(&V_2), /*hidden argument*/NULL);
		// persistence.Save(data, completer.Resolve, completer.Reject);
		RuntimeObject* L_2 = PersistenceDataLayer_get_persistence_m75267B05E1C41B53AE77E0D462B3122943218DDB_inline(__this, /*hidden argument*/NULL);
		GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  L_3 = V_0;
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  L_4 = V_2;
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  L_5 = L_4;
		RuntimeObject * L_6 = Box(Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632_il2cpp_TypeInfo_var, &L_5);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_7, L_6, (intptr_t)((intptr_t)Completer_Resolve_mC374BAED823673FC0A04AD6D7929D5A6A7BFB2EB_RuntimeMethod_var), /*hidden argument*/NULL);
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  L_8 = V_2;
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  L_9 = L_8;
		RuntimeObject * L_10 = Box(Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632_il2cpp_TypeInfo_var, &L_9);
		Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * L_11 = (Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 *)il2cpp_codegen_object_new(Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85_il2cpp_TypeInfo_var);
		Action_1__ctor_mE8E44E4F2A93E5B1E8C68373E66EC348B631616A(L_11, L_10, (intptr_t)((intptr_t)Completer_Reject_mC041DF09A1CD4AA308F22BF97721699633416880_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mE8E44E4F2A93E5B1E8C68373E66EC348B631616A_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker3< GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6 , Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *, Action_1_tB9C8F2B71FE45910DA24CD14AC6B159B02454C85 * >::Invoke(1 /* System.Void UnityEngine.GameFoundation.DefaultLayers.Persistence.IDataPersistence::Save(UnityEngine.GameFoundation.Data.GameFoundationData,System.Action,System.Action`1<System.Exception>) */, IDataPersistence_t9AD5A56789F56D8702CE83917B9BA759F2963F79_il2cpp_TypeInfo_var, L_2, L_3, L_7, L_11);
		// return deferred;
		Deferred_t9E66F9D4FE2384EE0876310669A738E26D88EA94  L_12 = V_1;
		return L_12;
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
// System.Void UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer_<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m5ACF304BB97A7077A8CFC9D8F7C8A9D269FF42D4 (U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer_<>c__DisplayClass5_0::<Initialize>g__InitializeWithU7C0(UnityEngine.GameFoundation.Data.GameFoundationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CInitializeU3Eg__InitializeWithU7C0_m4D885D79D294F21E46A28C9F632C4D64C64640C8 (U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F * __this, GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  ___data0, const RuntimeMethod* method)
{
	{
		// InitializeInventoryDataLayer(data.inventoryManagerData, database.inventoryCatalog);
		PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * L_0 = __this->get_U3CU3E4__this_0();
		GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  L_1 = ___data0;
		InventoryManagerData_t755033AC9DCBF2E6FB1681B1B8F8465785B43DB5  L_2 = L_1.get_inventoryManagerData_0();
		PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * L_3 = __this->get_U3CU3E4__this_0();
		NullCheck(L_3);
		GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * L_4 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 *)L_3)->get_database_1();
		NullCheck(L_4);
		InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * L_5 = GameFoundationDatabase_get_inventoryCatalog_mCAE4C021AB9D6651B262AB17AD26F9C94433292C_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		BaseMemoryDataLayer_InitializeInventoryDataLayer_m5A26E4866F3E5FAF4B4BEA9EA367F3C0E84CD05F(L_0, L_2, L_5, /*hidden argument*/NULL);
		// InitializeWalletDataLayer(data.walletData, database.currencyCatalog);
		PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * L_6 = __this->get_U3CU3E4__this_0();
		GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  L_7 = ___data0;
		WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  L_8 = L_7.get_walletData_1();
		PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * L_9 = __this->get_U3CU3E4__this_0();
		NullCheck(L_9);
		GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * L_10 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 *)L_9)->get_database_1();
		NullCheck(L_10);
		CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 * L_11 = GameFoundationDatabase_get_currencyCatalog_m110378A98F4C110C0CB8C985BD67983B5CB37BA7_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		BaseMemoryDataLayer_InitializeWalletDataLayer_m883C5686065BEB87C8C69F9E9D39220A57DDED7C(L_6, L_8, L_11, /*hidden argument*/NULL);
		// m_Version = data.version;
		PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * L_12 = __this->get_U3CU3E4__this_0();
		GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  L_13 = ___data0;
		int32_t L_14 = L_13.get_version_2();
		NullCheck(L_12);
		((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 *)L_12)->set_m_Version_0(L_14);
		// completer.Resolve();
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 * L_15 = __this->get_address_of_completer_1();
		Completer_Resolve_mC374BAED823673FC0A04AD6D7929D5A6A7BFB2EB((Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 *)L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.PersistenceDataLayer_<>c__DisplayClass5_0::<Initialize>b__1(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CInitializeU3Eb__1_m2B62158577A8F973AB20617472C869218DDE6DD2 (U3CU3Ec__DisplayClass5_0_tBC534B1769668A5038786A69FD0F16DE67ADE05F * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass5_0_U3CInitializeU3Eb__1_m2B62158577A8F973AB20617472C869218DDE6DD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		// switch (error)
		Exception_t * L_0 = ___error0;
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Exception_t * L_2 = V_0;
		if (!((FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 *)IsInstClass((RuntimeObject*)L_2, FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		// InitializeWith(database.CreateDefaultData());
		PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * L_3 = __this->get_U3CU3E4__this_0();
		NullCheck(L_3);
		GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * L_4 = ((BaseMemoryDataLayer_t9017F6AE3314818AC1113A7E0DDCDFC3692AE878 *)L_3)->get_database_1();
		NullCheck(L_4);
		GameFoundationData_tDE1F48B3E24063594BBE45ECBDAEFF7DA40800C6  L_5 = GameFoundationDatabase_CreateDefaultData_m4E938A6BED7E8B32621B37E78D6F8A8EF01E269B(L_4, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass5_0_U3CInitializeU3Eg__InitializeWithU7C0_m4D885D79D294F21E46A28C9F632C4D64C64640C8(__this, L_5, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0024:
	{
		// completer.Reject(error);
		Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 * L_6 = __this->get_address_of_completer_1();
		Exception_t * L_7 = ___error0;
		Completer_Reject_mC041DF09A1CD4AA308F22BF97721699633416880((Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 *)L_6, L_7, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::.ctor(UnityEngine.GameFoundation.Data.WalletData,UnityEngine.GameFoundation.DefaultCatalog.CurrencyCatalogAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WalletDataLayer__ctor_m94646596B1378BDE36EDDAD59EABE0EC1039C44B (WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * __this, WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  ___data0, CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 * ___catalog1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WalletDataLayer__ctor_m94646596B1378BDE36EDDAD59EABE0EC1039C44B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34* V_0 = NULL;
	Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96  V_1;
	memset((&V_1), 0, sizeof(V_1));
	CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * V_2 = NULL;
	bool V_3 = false;
	int64_t V_4 = 0;
	BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34* V_5 = NULL;
	int32_t V_6 = 0;
	BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// public WalletDataLayer(WalletData data, CurrencyCatalogAsset catalog)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// if (catalog == null)
		CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 * L_0 = ___catalog1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// throw new ArgumentNullException(nameof(catalog));
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteral41DABAE7B9269B285D97D343465FADF2FC075403, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, WalletDataLayer__ctor_m94646596B1378BDE36EDDAD59EABE0EC1039C44B_RuntimeMethod_var);
	}

IL_001a:
	{
		// m_Balances = new Dictionary<string, long>();
		Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_3 = (Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 *)il2cpp_codegen_object_new(Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF5E99A779CC438267A3A001FDD447BCDEB834CD8(L_3, /*hidden argument*/Dictionary_2__ctor_mF5E99A779CC438267A3A001FDD447BCDEB834CD8_RuntimeMethod_var);
		__this->set_m_Balances_0(L_3);
		// var currencies = catalog.m_Items;
		CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 * L_4 = ___catalog1;
		NullCheck(L_4);
		List_1_tBB084B43212FDEFD6528918D02DB2A0F6A887DD4 * L_5 = ((SingleCollectionCatalogAsset_1_t4FAA70BA78DFF7743ABA367E27CFF413CF32684B *)L_4)->get_m_Items_6();
		// var balances = data.balances;
		WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  L_6 = ___data0;
		BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34* L_7 = L_6.get_balances_0();
		V_0 = L_7;
		// foreach (var currency in currencies)
		NullCheck(L_5);
		Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96  L_8 = List_1_GetEnumerator_m976F107CF99D138133B74EBC09A1F6BC45BDD302(L_5, /*hidden argument*/List_1_GetEnumerator_m976F107CF99D138133B74EBC09A1F6BC45BDD302_RuntimeMethod_var);
		V_1 = L_8;
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b8;
		}

IL_003a:
		{
			// foreach (var currency in currencies)
			CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * L_9 = Enumerator_get_Current_mB9AD6BA38683883152F81CAE6A61F858A084D4ED_inline((Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mB9AD6BA38683883152F81CAE6A61F858A084D4ED_RuntimeMethod_var);
			V_2 = L_9;
			// var found = false;
			V_3 = (bool)0;
			// long balance = 0;
			V_4 = (((int64_t)((int64_t)0)));
			// if (balances != null)
			BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34* L_10 = V_0;
			if (!L_10)
			{
				goto IL_008d;
			}
		}

IL_004b:
		{
			// foreach (var balanceData in balances)
			BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34* L_11 = V_0;
			V_5 = L_11;
			V_6 = 0;
			goto IL_0085;
		}

IL_0053:
		{
			// foreach (var balanceData in balances)
			BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34* L_12 = V_5;
			int32_t L_13 = V_6;
			NullCheck(L_12);
			int32_t L_14 = L_13;
			BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89  L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			V_7 = L_15;
			// found = balanceData.currencyKey == currency.key;
			BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89  L_16 = V_7;
			String_t* L_17 = L_16.get_currencyKey_0();
			CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * L_18 = V_2;
			NullCheck(L_18);
			String_t* L_19 = CatalogItemAsset_get_key_mEDAC681266C93C18BF4F35175B862529395FE2AC_inline(L_18, /*hidden argument*/NULL);
			bool L_20 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, L_19, /*hidden argument*/NULL);
			V_3 = L_20;
			// if (found)
			bool L_21 = V_3;
			if (!L_21)
			{
				goto IL_007f;
			}
		}

IL_0074:
		{
			// balance = balanceData.balance;
			BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89  L_22 = V_7;
			int64_t L_23 = L_22.get_balance_1();
			V_4 = L_23;
			// break;
			goto IL_008d;
		}

IL_007f:
		{
			int32_t L_24 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		}

IL_0085:
		{
			// foreach (var balanceData in balances)
			int32_t L_25 = V_6;
			BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34* L_26 = V_5;
			NullCheck(L_26);
			if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
			{
				goto IL_0053;
			}
		}

IL_008d:
		{
			// if (!found)
			bool L_27 = V_3;
			if (L_27)
			{
				goto IL_00a5;
			}
		}

IL_0090:
		{
			// Debug.LogWarning($"Data should have a balance for currency {currency.key}");
			CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * L_28 = V_2;
			NullCheck(L_28);
			String_t* L_29 = CatalogItemAsset_get_key_mEDAC681266C93C18BF4F35175B862529395FE2AC_inline(L_28, /*hidden argument*/NULL);
			String_t* L_30 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral30DE0AE3EC67BC664C64337AE1E93E8D9D846E13, L_29, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_30, /*hidden argument*/NULL);
		}

IL_00a5:
		{
			// m_Balances.Add(currency.key, balance);
			Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_31 = __this->get_m_Balances_0();
			CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * L_32 = V_2;
			NullCheck(L_32);
			String_t* L_33 = CatalogItemAsset_get_key_mEDAC681266C93C18BF4F35175B862529395FE2AC_inline(L_32, /*hidden argument*/NULL);
			int64_t L_34 = V_4;
			NullCheck(L_31);
			Dictionary_2_Add_m9BECA78DFA98D15B4EB7E342D45A27A362FCD28F(L_31, L_33, L_34, /*hidden argument*/Dictionary_2_Add_m9BECA78DFA98D15B4EB7E342D45A27A362FCD28F_RuntimeMethod_var);
		}

IL_00b8:
		{
			// foreach (var currency in currencies)
			bool L_35 = Enumerator_MoveNext_mD3A7ED19E4B473FD6776F8347EFA7B86B15B9481((Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mD3A7ED19E4B473FD6776F8347EFA7B86B15B9481_RuntimeMethod_var);
			if (L_35)
			{
				goto IL_003a;
			}
		}

IL_00c4:
		{
			IL2CPP_LEAVE(0xD4, FINALLY_00c6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c6;
	}

FINALLY_00c6:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFD0668F5A7D6780EB7D7C50A402931900EFF64BE((Enumerator_t6AA2EB5F69F05692EE300188DFA66C2A76E19B96 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mFD0668F5A7D6780EB7D7C50A402931900EFF64BE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(198)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(198)
	{
		IL2CPP_JUMP_TBL(0xD4, IL_00d4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d4:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::CheckBalance(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WalletDataLayer_CheckBalance_m0F484862B3A174B01D53A1CA2BBBF787928FEC9F (String_t* ___currencyKey0, int64_t ___balance1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WalletDataLayer_CheckBalance_m0F484862B3A174B01D53A1CA2BBBF787928FEC9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	Currency_tD2C5A9B9D9C96D7A0258F29FF5EBD8AA1F1BA0B4 * G_B4_0 = NULL;
	Currency_tD2C5A9B9D9C96D7A0258F29FF5EBD8AA1F1BA0B4 * G_B3_0 = NULL;
	{
		// if (balance < 0)
		int64_t L_0 = ___balance1;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0010;
		}
	}
	{
		// throw new OverflowException("Not enough currency");
		OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * L_1 = (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)il2cpp_codegen_object_new(OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var);
		OverflowException__ctor_mE1A042FFEBF00B79612E8595B8D49785B357D731(L_1, _stringLiteral28DC5C7303C12D28EB83E2E64606FC2C6DAAF7A3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, WalletDataLayer_CheckBalance_m0F484862B3A174B01D53A1CA2BBBF787928FEC9F_RuntimeMethod_var);
	}

IL_0010:
	{
		// var catalog = GameFoundation.catalogs.currencyCatalog;
		IL2CPP_RUNTIME_CLASS_INIT(GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_il2cpp_TypeInfo_var);
		CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E * L_2 = GameFoundation_get_catalogs_m771AF654DCA16FC27262307B48BFFF210749363B_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		CurrencyCatalog_tAB18AF857693F4241A0D55E29C1C3DD7211048EE * L_3 = CatalogManager_get_currencyCatalog_m53FD6BBBF8EAA3450F7B63A3D63D1E47C3A883CB_inline(L_2, /*hidden argument*/NULL);
		// var currency = catalog.FindItem(currencyKey);
		String_t* L_4 = ___currencyKey0;
		NullCheck(L_3);
		Currency_tD2C5A9B9D9C96D7A0258F29FF5EBD8AA1F1BA0B4 * L_5 = SingleCollectionCatalog_1_FindItem_mEC08ED5EF5A3ABD914A6E34D930075426B0BED1E(L_3, L_4, /*hidden argument*/SingleCollectionCatalog_1_FindItem_mEC08ED5EF5A3ABD914A6E34D930075426B0BED1E_RuntimeMethod_var);
		// if (currency is null)
		Currency_tD2C5A9B9D9C96D7A0258F29FF5EBD8AA1F1BA0B4 * L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_0039;
		}
	}
	{
		// throw new Exception($"Currency {currencyKey} not found");
		String_t* L_7 = ___currencyKey0;
		String_t* L_8 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral2B1E312B53A5D84502EA74011B9572A602948040, L_7, _stringLiteral889B5F775AA656D7545D5296BF46A00D10E462E4, /*hidden argument*/NULL);
		Exception_t * L_9 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, WalletDataLayer_CheckBalance_m0F484862B3A174B01D53A1CA2BBBF787928FEC9F_RuntimeMethod_var);
	}

IL_0039:
	{
		// var maximum = currency.maximumBalance;
		NullCheck(G_B4_0);
		int64_t L_10 = Currency_get_maximumBalance_mB729CA2927C07DE11F9EBFF8FDA0E412951E4C7B_inline(G_B4_0, /*hidden argument*/NULL);
		V_0 = L_10;
		// if (maximum != 0 && balance > maximum)
		int64_t L_11 = V_0;
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_12 = ___balance1;
		int64_t L_13 = V_0;
		if ((((int64_t)L_12) <= ((int64_t)L_13)))
		{
			goto IL_0062;
		}
	}
	{
		// throw new OverflowException
		//     ($"{balance} exceeds the limits ({maximum})");
		int64_t L_14 = ___balance1;
		int64_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_15);
		int64_t L_17 = V_0;
		int64_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral5FFD286B34FD606B231828781F168FCA656AF210, L_16, L_19, /*hidden argument*/NULL);
		OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * L_21 = (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)il2cpp_codegen_object_new(OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var);
		OverflowException__ctor_mE1A042FFEBF00B79612E8595B8D49785B357D731(L_21, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, WalletDataLayer_CheckBalance_m0F484862B3A174B01D53A1CA2BBBF787928FEC9F_RuntimeMethod_var);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Int64 UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::AdjustBalance(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WalletDataLayer_AdjustBalance_m3B27A52270BB6DD218741F0E357C8E873A16075D (WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * __this, String_t* ___currencyKey0, int64_t ___amount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WalletDataLayer_AdjustBalance_m3B27A52270BB6DD218741F0E357C8E873A16075D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		// m_Balances.TryGetValue(currencyKey, out var oldBalance);
		Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_0 = __this->get_m_Balances_0();
		String_t* L_1 = ___currencyKey0;
		NullCheck(L_0);
		Dictionary_2_TryGetValue_mC7583ABC280CFC4A1BA68817E5CD15A1E5105490(L_0, L_1, (int64_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mC7583ABC280CFC4A1BA68817E5CD15A1E5105490_RuntimeMethod_var);
		// var newBalance = oldBalance + amount;
		int64_t L_2 = V_0;
		int64_t L_3 = ___amount1;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_2, (int64_t)L_3));
		// CheckBalance(currencyKey, newBalance);
		String_t* L_4 = ___currencyKey0;
		int64_t L_5 = V_1;
		WalletDataLayer_CheckBalance_m0F484862B3A174B01D53A1CA2BBBF787928FEC9F(L_4, L_5, /*hidden argument*/NULL);
		// m_Balances[currencyKey] = newBalance;
		Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_6 = __this->get_m_Balances_0();
		String_t* L_7 = ___currencyKey0;
		int64_t L_8 = V_1;
		NullCheck(L_6);
		Dictionary_2_set_Item_m10A9075140115FE57059AA1509076C79C12C5BE0(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_set_Item_m10A9075140115FE57059AA1509076C79C12C5BE0_RuntimeMethod_var);
		// return newBalance;
		int64_t L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::SetBalance(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WalletDataLayer_SetBalance_mC12E0F2B4DC7AC335572F5DCFA479E5EA3056641 (WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * __this, String_t* ___currencyKey0, int64_t ___balance1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WalletDataLayer_SetBalance_mC12E0F2B4DC7AC335572F5DCFA479E5EA3056641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckBalance(currencyKey, balance);
		String_t* L_0 = ___currencyKey0;
		int64_t L_1 = ___balance1;
		WalletDataLayer_CheckBalance_m0F484862B3A174B01D53A1CA2BBBF787928FEC9F(L_0, L_1, /*hidden argument*/NULL);
		// m_Balances[currencyKey] = balance;
		Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_2 = __this->get_m_Balances_0();
		String_t* L_3 = ___currencyKey0;
		int64_t L_4 = ___balance1;
		NullCheck(L_2);
		Dictionary_2_set_Item_m10A9075140115FE57059AA1509076C79C12C5BE0(L_2, L_3, L_4, /*hidden argument*/Dictionary_2_set_Item_m10A9075140115FE57059AA1509076C79C12C5BE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int64 UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::GetBalance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WalletDataLayer_GetBalance_m0B6AE94C1AC57E11DA221E0FFA8D945174296E8A (WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * __this, String_t* ___currencyKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WalletDataLayer_GetBalance_m0B6AE94C1AC57E11DA221E0FFA8D945174296E8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// Tools.ThrowIfArgNullOrEmpty(currencyKey, nameof(currencyKey));
		String_t* L_0 = ___currencyKey0;
		Tools_ThrowIfArgNullOrEmpty_m937FE947DD8528E8BEF39BF007FC83C60CF991AA_inline(L_0, _stringLiteral3DC9F89D6C03A25EE3C4125B725A7592005E5F11, /*hidden argument*/NULL);
		// var found = m_Balances.TryGetValue(currencyKey, out var balance);
		Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_1 = __this->get_m_Balances_0();
		String_t* L_2 = ___currencyKey0;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_TryGetValue_mC7583ABC280CFC4A1BA68817E5CD15A1E5105490(L_1, L_2, (int64_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mC7583ABC280CFC4A1BA68817E5CD15A1E5105490_RuntimeMethod_var);
		// if (!found)
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// throw new ArgumentException($"Currency {currencyKey} Not found", nameof(currencyKey));
		String_t* L_4 = ___currencyKey0;
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral2B1E312B53A5D84502EA74011B9572A602948040, L_4, _stringLiteralAB08F4197BF1646492C73377E04084D115992D3E, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_6 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_6, L_5, _stringLiteral3DC9F89D6C03A25EE3C4125B725A7592005E5F11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, WalletDataLayer_GetBalance_m0B6AE94C1AC57E11DA221E0FFA8D945174296E8A_RuntimeMethod_var);
	}

IL_0036:
	{
		// return balance;
		int64_t L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.GameFoundation.Data.WalletData UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::UnityEngine.GameFoundation.IWalletDataLayer.GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  WalletDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_GetData_mFB22E47E824B8E587DEBDA57DED840E72886D754 (WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WalletDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_GetData_mFB22E47E824B8E587DEBDA57DED840E72886D754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274  V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  V_4;
	memset((&V_4), 0, sizeof(V_4));
	BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var data = new WalletData
		// {
		//     balances = new BalanceData[m_Balances.Count]
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19 ));
		Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_0 = __this->get_m_Balances_0();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m51F855E8CD8525A5BB0B17B6108DAA36C6F14E3C(L_0, /*hidden argument*/Dictionary_2_get_Count_m51F855E8CD8525A5BB0B17B6108DAA36C6F14E3C_RuntimeMethod_var);
		BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34* L_2 = (BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34*)(BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34*)SZArrayNew(BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34_il2cpp_TypeInfo_var, (uint32_t)L_1);
		(&V_2)->set_balances_0(L_2);
		WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  L_3 = V_2;
		V_0 = L_3;
		// var index = 0;
		V_1 = 0;
		// foreach (var balanceEntry in m_Balances)
		Dictionary_2_t6DFFCD2D1E11BBB29B43856D03331BB43BCD5CD5 * L_4 = __this->get_m_Balances_0();
		NullCheck(L_4);
		Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274  L_5 = Dictionary_2_GetEnumerator_mC1A5F815C548A3037CBF3E1B28DFB3229669AA4D(L_4, /*hidden argument*/Dictionary_2_GetEnumerator_mC1A5F815C548A3037CBF3E1B28DFB3229669AA4D_RuntimeMethod_var);
		V_3 = L_5;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0070;
		}

IL_0031:
		{
			// foreach (var balanceEntry in m_Balances)
			KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07  L_6 = Enumerator_get_Current_m7D3D5EEF5CDBD2A9038C0C7623BEA0CF2424B948_inline((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m7D3D5EEF5CDBD2A9038C0C7623BEA0CF2424B948_RuntimeMethod_var);
			V_4 = L_6;
			// data.balances[index++] = new BalanceData
			// {
			//     currencyKey = balanceEntry.Key,
			//     balance = balanceEntry.Value
			// };
			WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  L_7 = V_0;
			BalanceDataU5BU5D_t55EEFB66D815417B3B1B0947BBBBB2BBD3E6FA34* L_8 = L_7.get_balances_0();
			int32_t L_9 = V_1;
			int32_t L_10 = L_9;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
			il2cpp_codegen_initobj((&V_5), sizeof(BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89 ));
			String_t* L_11 = KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_inline((KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_mD96428916FCD6F20D1725388CCA82DA8B06DA60A_RuntimeMethod_var);
			(&V_5)->set_currencyKey_0(L_11);
			int64_t L_12 = KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_inline((KeyValuePair_2_tA7EDA595B1ED41778242272D7F35D83399BD0B07 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m4B85E3F70BDA099104698639902DBBE679690999_RuntimeMethod_var);
			(&V_5)->set_balance_1(L_12);
			BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89  L_13 = V_5;
			NullCheck(L_8);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (BalanceData_tE3C813E312BCD755BD2C764F0632BF2BD2883B89 )L_13);
		}

IL_0070:
		{
			// foreach (var balanceEntry in m_Balances)
			bool L_14 = Enumerator_MoveNext_mCA3E427659BA0100C56CC0ED0305444051B6FCDD((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mCA3E427659BA0100C56CC0ED0305444051B6FCDD_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0031;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007b;
	}

FINALLY_007b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2BC3322527E84E907571F92C1F45DBFBD17B177C((Enumerator_t0A4C45DCA6B0CB5AF8A2DDF2B062D35092F93274 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m2BC3322527E84E907571F92C1F45DBFBD17B177C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(123)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(123)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0089:
	{
		// return data;
		WalletData_t4CBB68D4EF6DF7517722CE33411F216806E0DC19  L_15 = V_0;
		return L_15;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::UnityEngine.GameFoundation.IWalletDataLayer.AddBalance(System.String,System.Int64,UnityEngine.Promise.Completer`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WalletDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_AddBalance_m2F63DAE60678A3EC1F26CE1F87008F155A9B3782 (WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * __this, String_t* ___currencyKey0, int64_t ___balance1, Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF  ___completer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WalletDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_AddBalance_m2F63DAE60678A3EC1F26CE1F87008F155A9B3782_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var isRejected = Tools.RejectIfArgNegative(balance, nameof(balance), completer);
		int64_t L_0 = ___balance1;
		Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF  L_1 = ___completer2;
		Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9  L_2 = Completer_1_op_Implicit_m2270066DB6F3FA36F9792DD9EE94675A0058E685(L_1, /*hidden argument*/Completer_1_op_Implicit_m2270066DB6F3FA36F9792DD9EE94675A0058E685_RuntimeMethod_var);
		bool L_3 = Tools_RejectIfArgNegative_m4C9595BEBE2B9F3B41E6A16647A35BD37AB3F7AC_inline(L_0, _stringLiteral8DFA30E0245064DF3F46F5CD1BFDA21A129CDDF1, L_2, /*hidden argument*/NULL);
		// if (isRejected)
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// var newBalance = AdjustBalance(currencyKey, balance);
		String_t* L_4 = ___currencyKey0;
		int64_t L_5 = ___balance1;
		int64_t L_6 = WalletDataLayer_AdjustBalance_m3B27A52270BB6DD218741F0E357C8E873A16075D(__this, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// completer.Resolve(newBalance);
		int64_t L_7 = V_0;
		Completer_1_Resolve_m0D04A8F71359B3DB2441772F6DC587A7384CCDD0((Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF *)(&___completer2), L_7, /*hidden argument*/Completer_1_Resolve_m0D04A8F71359B3DB2441772F6DC587A7384CCDD0_RuntimeMethod_var);
		// }
		goto IL_0033;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0028;
		throw e;
	}

CATCH_0028:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t *)__exception_local);
		// completer.Reject(e);
		Exception_t * L_8 = V_1;
		Completer_1_Reject_mDBEEB6BED718F4542F596C27F3127EE1DE5A772C((Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF *)(&___completer2), L_8, /*hidden argument*/Completer_1_Reject_mDBEEB6BED718F4542F596C27F3127EE1DE5A772C_RuntimeMethod_var);
		// }
		goto IL_0033;
	} // end catch (depth: 1)

IL_0033:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::UnityEngine.GameFoundation.IWalletDataLayer.RemoveBalance(System.String,System.Int64,UnityEngine.Promise.Completer`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WalletDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_RemoveBalance_m365D9A5EC228A7630ADC9E6025AFCBBE700BE79C (WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * __this, String_t* ___currencyKey0, int64_t ___balance1, Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF  ___completer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WalletDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_RemoveBalance_m365D9A5EC228A7630ADC9E6025AFCBBE700BE79C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var isRejected = Tools.RejectIfArgNegative(balance, nameof(balance), completer);
		int64_t L_0 = ___balance1;
		Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF  L_1 = ___completer2;
		Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9  L_2 = Completer_1_op_Implicit_m2270066DB6F3FA36F9792DD9EE94675A0058E685(L_1, /*hidden argument*/Completer_1_op_Implicit_m2270066DB6F3FA36F9792DD9EE94675A0058E685_RuntimeMethod_var);
		bool L_3 = Tools_RejectIfArgNegative_m4C9595BEBE2B9F3B41E6A16647A35BD37AB3F7AC_inline(L_0, _stringLiteral8DFA30E0245064DF3F46F5CD1BFDA21A129CDDF1, L_2, /*hidden argument*/NULL);
		// if (isRejected)
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// var newBalance = AdjustBalance(currencyKey, -balance);
		String_t* L_4 = ___currencyKey0;
		int64_t L_5 = ___balance1;
		int64_t L_6 = WalletDataLayer_AdjustBalance_m3B27A52270BB6DD218741F0E357C8E873A16075D(__this, L_4, ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		// completer.Resolve(newBalance);
		int64_t L_7 = V_0;
		Completer_1_Resolve_m0D04A8F71359B3DB2441772F6DC587A7384CCDD0((Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF *)(&___completer2), L_7, /*hidden argument*/Completer_1_Resolve_m0D04A8F71359B3DB2441772F6DC587A7384CCDD0_RuntimeMethod_var);
		// }
		goto IL_0034;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0029;
		throw e;
	}

CATCH_0029:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t *)__exception_local);
		// completer.Reject(e);
		Exception_t * L_8 = V_1;
		Completer_1_Reject_mDBEEB6BED718F4542F596C27F3127EE1DE5A772C((Completer_1_tEE9239FC1B6778C559BD0606F40CA956774887DF *)(&___completer2), L_8, /*hidden argument*/Completer_1_Reject_mDBEEB6BED718F4542F596C27F3127EE1DE5A772C_RuntimeMethod_var);
		// }
		goto IL_0034;
	} // end catch (depth: 1)

IL_0034:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.GameFoundation.DefaultLayers.WalletDataLayer::UnityEngine.GameFoundation.IWalletDataLayer.SetBalance(System.String,System.Int64,UnityEngine.Promise.Completer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WalletDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_SetBalance_m4465FC967A563482E2108BF993372EEF602601EA (WalletDataLayer_t561F647D47AB64F697330AC2CDD4AD4DDAB57CAF * __this, String_t* ___currencyKey0, int64_t ___balance1, Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632  ___completer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WalletDataLayer_UnityEngine_GameFoundation_IWalletDataLayer_SetBalance_m4465FC967A563482E2108BF993372EEF602601EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// SetBalance(currencyKey, balance);
		String_t* L_0 = ___currencyKey0;
		int64_t L_1 = ___balance1;
		WalletDataLayer_SetBalance_mC12E0F2B4DC7AC335572F5DCFA479E5EA3056641(__this, L_0, L_1, /*hidden argument*/NULL);
		// completer.Resolve();
		Completer_Resolve_mC374BAED823673FC0A04AD6D7929D5A6A7BFB2EB((Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 *)(&___completer2), /*hidden argument*/NULL);
		// }
		goto IL_001c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0011;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t *)__exception_local);
		// completer.Reject(e);
		Exception_t * L_2 = V_0;
		Completer_Reject_mC041DF09A1CD4AA308F22BF97721699633416880((Completer_t6EBA63CD51599CAE74F5FF080DABEAE6F4ED3632 *)(&___completer2), L_2, /*hidden argument*/NULL);
		// }
		goto IL_001c;
	} // end catch (depth: 1)

IL_001c:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * CurrencyExchangeObject_get_currency_m092564FE78419E8628BC981E957AD336420335E6_inline (CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511 * __this, const RuntimeMethod* method)
{
	{
		// public CurrencyAsset currency => m_Currency;
		CurrencyAsset_t5748BAFE2304C5C50B1F0D4A741A26E2DB20E632 * L_0 = __this->get_m_Currency_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* CatalogItemAsset_get_key_mEDAC681266C93C18BF4F35175B862529395FE2AC_inline (CatalogItemAsset_t913129526D34806C645196B3AAE87F709FF9A6F5 * __this, const RuntimeMethod* method)
{
	{
		// public string key => m_Key;
		String_t* L_0 = __this->get_m_Key_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t CurrencyExchangeObject_get_amount_mD84B11BDB6B8E8E049BEE368E515E4411B08B932_inline (CurrencyExchangeObject_tE738843F467B10077A092A0367A92BC463B1C511 * __this, const RuntimeMethod* method)
{
	{
		// public long amount => m_Amount;
		int64_t L_0 = __this->get_m_Amount_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * ItemExchangeDefinitionObject_get_item_m90A2A46981A2F4DF17F7D31C95F5064364E1A93C_inline (ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * __this, const RuntimeMethod* method)
{
	{
		// public InventoryItemDefinitionAsset item => m_Item;
		InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * L_0 = __this->get_m_Item_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t ItemExchangeDefinitionObject_get_amount_m1D6BA642E44F09ADAAAF934E27CE4F20A7BDA5C0_inline (ItemExchangeDefinitionObject_tAEBF4A25A49DDA4CF60F00DFFFDE207D5B2FA45A * __this, const RuntimeMethod* method)
{
	{
		// public long amount => m_Amount;
		int64_t L_0 = __this->get_m_Amount_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * BaseTransactionAsset_get_rewards_m4E5649CD3D00C240C3D82EA6558C057E0009C7CA_inline (BaseTransactionAsset_t89DEA1DADF16E5A8AFB89AD10B84583F52F30961 * __this, const RuntimeMethod* method)
{
	{
		// public TransactionExchangeDefinitionObject rewards => m_Rewards;
		TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * L_0 = __this->get_m_Rewards_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransactionCatalogAsset_t2B59953008F38A51B99AD36CC58D041F7ED6F543 * GameFoundationDatabase_get_transactionCatalog_m147EC786FBCAC867EB2ADB20778FBFAEB5B8E904_inline (GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * __this, const RuntimeMethod* method)
{
	{
		// public TransactionCatalogAsset transactionCatalog => m_TransactionCatalog;
		TransactionCatalogAsset_t2B59953008F38A51B99AD36CC58D041F7ED6F543 * L_0 = __this->get_m_TransactionCatalog_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * VirtualTransactionAsset_get_costs_mC404FD615A7BC65DFF5F1D664BE10F6A32001723_inline (VirtualTransactionAsset_t9D9A79A9D9D70B07143D90FFCD81F5316F14CE54 * __this, const RuntimeMethod* method)
{
	{
		// public TransactionExchangeDefinitionObject costs => m_Costs;
		TransactionExchangeDefinitionObject_tF94A41D1B8BCAE15CCC6316BCC3FA9C2745018D2 * L_0 = __this->get_m_Costs_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Tools_ThrowIfArgNullOrEmpty_m937FE947DD8528E8BEF39BF007FC83C60CF991AA_inline (String_t* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tools_ThrowIfArgNullOrEmpty_m937FE947DD8528E8BEF39BF007FC83C60CF991AAUnity_GameFoundation_DefaultLayers_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrWhiteSpace(value))
		String_t* L_0 = ___value0;
		bool L_1 = String_IsNullOrWhiteSpace_m62102CA65546AE151DC8254B72110F4AA48E2135(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentException("Cannot be null or empty", name);
		String_t* L_2 = ___name1;
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_3, _stringLiteral72FD887950EB165D5D6A97DF96B4CC652558EA52, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Tools_ThrowIfArgNullOrEmpty_m937FE947DD8528E8BEF39BF007FC83C60CF991AA_RuntimeMethod_var);
	}

IL_0014:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * InventoryItemDefinitionAsset_get_properties_m7F90C4A334706B4FF51CE4390FF00296E4EEBC5E_inline (InventoryItemDefinitionAsset_t3ED206A713E62D007DE1525F3D4BA74228C24146 * __this, const RuntimeMethod* method)
{
	{
		// internal Dictionary<string, Property> properties { get; }
		Dictionary_2_t407A635AC498D4B4B0D387D490AE80A5A73EBA83 * L_0 = __this->get_U3CpropertiesU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Property_get_type_m4C40EFB19CE65EE72F01A8827FDB2500EAADF433_inline (Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 * __this, const RuntimeMethod* method)
{
	{
		// public PropertyType type { get; internal set; }
		int32_t L_0 = __this->get_U3CtypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Tools_RejectIfArgNullOrEmpty_mCB4E81DDE885337E6EE85E75F55D74CF81B224E7_inline (String_t* ___value0, String_t* ___name1, Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9  ___rejectable2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tools_RejectIfArgNullOrEmpty_mCB4E81DDE885337E6EE85E75F55D74CF81B224E7Unity_GameFoundation_DefaultLayers_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrWhiteSpace(value))
		String_t* L_0 = ___value0;
		bool L_1 = String_IsNullOrWhiteSpace_m62102CA65546AE151DC8254B72110F4AA48E2135(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// rejectable.Reject(new ArgumentException("Incorrect value", name));
		String_t* L_2 = ___name1;
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_3, _stringLiteral78AA5F9AB7E5DF6BAA6E8C25BE06989EE0D721D7, L_2, /*hidden argument*/NULL);
		Rejectable_Reject_mFF89A77A9E4FA730FFDDA117CB76838E533DB9CA((Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9 *)(&___rejectable2), L_3, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_001c:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LocalPersistence_get_fullpath_m0345914530DA82A33B4CFAEF2C8BF861320DFDC0_inline (LocalPersistence_t8240944F90C8B135BE0A433BD3E3D13047469133 * __this, const RuntimeMethod* method)
{
	{
		// public string fullpath { get; }
		String_t* L_0 = __this->get_U3CfullpathU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseDataPersistence_get_serializer_mDB389CD21F5A432EA23989C7BA6419CEF1B2F2FE_inline (BaseDataPersistence_t6314CED3A904BB34596A984FFFB67ABBC205AB92 * __this, const RuntimeMethod* method)
{
	{
		// protected IDataSerializer serializer { get; }
		RuntimeObject* L_0 = __this->get_U3CserializerU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* PersistenceDataLayer_get_persistence_m75267B05E1C41B53AE77E0D462B3122943218DDB_inline (PersistenceDataLayer_t7EA55B3FE2B5F6AD6E965BD3501F24603DF09489 * __this, const RuntimeMethod* method)
{
	{
		// public IDataPersistence persistence { get; }
		RuntimeObject* L_0 = __this->get_U3CpersistenceU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * GameFoundationDatabase_get_inventoryCatalog_mCAE4C021AB9D6651B262AB17AD26F9C94433292C_inline (GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * __this, const RuntimeMethod* method)
{
	{
		// public InventoryCatalogAsset inventoryCatalog => m_InventoryCatalog;
		InventoryCatalogAsset_t7A0105AE7D23AB6A9520FA075B42D8CFD2BE5269 * L_0 = __this->get_m_InventoryCatalog_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 * GameFoundationDatabase_get_currencyCatalog_m110378A98F4C110C0CB8C985BD67983B5CB37BA7_inline (GameFoundationDatabase_tD044914203F0779626B4EE4EC99FD444F11A4BF1 * __this, const RuntimeMethod* method)
{
	{
		// public CurrencyCatalogAsset currencyCatalog => m_CurrencyCatalog;
		CurrencyCatalogAsset_t8E03BDF86AF8AB6660B13A6AF1A93AADD4E8BD52 * L_0 = __this->get_m_CurrencyCatalog_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E * GameFoundation_get_catalogs_m771AF654DCA16FC27262307B48BFFF210749363B_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameFoundation_get_catalogs_m771AF654DCA16FC27262307B48BFFF210749363BUnity_GameFoundation_DefaultLayers_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CatalogManager catalogs { get; private set; }
		IL2CPP_RUNTIME_CLASS_INIT(GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_il2cpp_TypeInfo_var);
		CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E * L_0 = ((GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_StaticFields*)il2cpp_codegen_static_fields_for(GameFoundation_t36EC78C7BF55C73301D8E86878A12F844BE8FD13_il2cpp_TypeInfo_var))->get_U3CcatalogsU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CurrencyCatalog_tAB18AF857693F4241A0D55E29C1C3DD7211048EE * CatalogManager_get_currencyCatalog_m53FD6BBBF8EAA3450F7B63A3D63D1E47C3A883CB_inline (CatalogManager_t6234D67EC838A22B5E9B286A2077382A92156D8E * __this, const RuntimeMethod* method)
{
	{
		// public CurrencyCatalog currencyCatalog { get; internal set; }
		CurrencyCatalog_tAB18AF857693F4241A0D55E29C1C3DD7211048EE * L_0 = __this->get_U3CcurrencyCatalogU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t Currency_get_maximumBalance_mB729CA2927C07DE11F9EBFF8FDA0E412951E4C7B_inline (Currency_tD2C5A9B9D9C96D7A0258F29FF5EBD8AA1F1BA0B4 * __this, const RuntimeMethod* method)
{
	{
		// public long maximumBalance { get; internal set; }
		int64_t L_0 = __this->get_U3CmaximumBalanceU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Tools_RejectIfArgNegative_m4C9595BEBE2B9F3B41E6A16647A35BD37AB3F7AC_inline (int64_t ___value0, String_t* ___name1, Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9  ___rejectable2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tools_RejectIfArgNegative_m4C9595BEBE2B9F3B41E6A16647A35BD37AB3F7ACUnity_GameFoundation_DefaultLayers_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * V_0 = NULL;
	{
		// if (value < 0)
		int64_t L_0 = ___value0;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_001b;
		}
	}
	{
		// var exception = new ArgumentOutOfRangeException(name, "Cannot be negative");
		String_t* L_1 = ___name1;
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_2, L_1, _stringLiteral8CF170CED3FC0E56C029056591A6714E886F2A07, /*hidden argument*/NULL);
		V_0 = L_2;
		// rejectable.Reject(exception);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = V_0;
		Rejectable_Reject_mFF89A77A9E4FA730FFDDA117CB76838E533DB9CA((Rejectable_tAB6B6A5B9C5DD44E6D1A99DF04660C94151227E9 *)(&___rejectable2), L_3, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69  Enumerator_get_Current_mE913D8E85D6164ABCCF4C40DFC47BF9F73113FC1_gshared_inline (Enumerator_t8BE931B9A2DEECD2A7AB98E695A9EF38672D8442 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69  L_0 = (KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69 )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9F83FF061862906EC22FBF347D3A4679404AD7B5_gshared_inline (KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int64_t KeyValuePair_2_get_Value_mC744B4139952F6175332F5637910AE8CD932E17E_gshared_inline (KeyValuePair_2_tC70EB699EE63B967B33EC548142991FDE438CD69 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = (int64_t)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  Enumerator_get_Current_m356BA8F142DE34D3AEAC6E1B7E5727334AFE4A82_gshared_inline (Enumerator_t3B4E55B4166C9C17102EEF8824A068BF5DAC9649 * __this, const RuntimeMethod* method)
{
	{
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_0 = (InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC7FD6CF59297FB2322612B6D443EF51046619AD0_gshared_inline (List_1_t51A478F8BA68934D2E480A26EFE95627ED4DD2E1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  Enumerator_get_Current_m1D948FA839E563AE149DBA8AA49945608465FD8C_gshared_inline (Enumerator_t3AC3965C6BFCD0E63A7EE4F079227CE2C3A7DFAB * __this, const RuntimeMethod* method)
{
	{
		InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889  L_0 = (InventoryItemData_t19A6F02D15184601C1B723E12333D14D5CEF4889 )__this->get_currentValue_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E  Enumerator_get_Current_m7361FF1D80659C4783B41EFCFE4C2E984F3B2746_gshared_inline (Enumerator_tCB3F8BE3B2F729B8717C7CF3095568887CF42D70 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E  L_0 = (KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mC4743FEA40F9FCD0C9B4CB8EA2E62A40A3343A56_gshared_inline (KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  KeyValuePair_2_get_Value_mB9B4E54A14AE48282FBCDD34FB62FA20EB70C659_gshared_inline (KeyValuePair_2_t997E266027721D05AF5DDD8390D12AF94C722C4E * __this, const RuntimeMethod* method)
{
	{
		Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953  L_0 = (Property_t34C7B1D6FFC7376F24936EE9023BFB872262A953 )__this->get_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  Enumerator_get_Current_m89363CF89DC816FAF8DC920261607529997CFA11_gshared_inline (Enumerator_tA434975C593F99C0B455C8B64D2B7D48B631D5C2 * __this, const RuntimeMethod* method)
{
	{
		PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5  L_0 = (PropertyData_tAC5E5F7AE36D0CB99EAC9F2DBF6B8AB13AB76DA5 )__this->get_current_3();
		return L_0;
	}
}
