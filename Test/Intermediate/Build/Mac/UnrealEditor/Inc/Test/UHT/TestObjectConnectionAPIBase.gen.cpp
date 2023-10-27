// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/ConnectionAPI/TestObjectConnectionAPIBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestObjectConnectionAPIBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TEST_API UClass* Z_Construct_UClass_UTestObjectConnectionAPIBase();
	TEST_API UClass* Z_Construct_UClass_UTestObjectConnectionAPIBase_NoRegister();
	TEST_API UFunction* Z_Construct_UDelegateFunction_Test_OnHandleCheckAuthHttpResponse__DelegateSignature();
	TEST_API UFunction* Z_Construct_UDelegateFunction_Test_OnHandleLoginHttpResponse__DelegateSignature();
	TEST_API UScriptStruct* Z_Construct_UScriptStruct_FLoginInfo();
	UPackage* Z_Construct_UPackage__Script_Test();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LoginInfo;
class UScriptStruct* FLoginInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LoginInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LoginInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoginInfo, (UObject*)Z_Construct_UPackage__Script_Test(), TEXT("LoginInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LoginInfo.OuterSingleton;
}
template<> TEST_API UScriptStruct* StaticStruct<FLoginInfo>()
{
	return FLoginInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLoginInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ConnectionAPI/TestObjectConnectionAPIBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoginInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoginInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoginInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Test,
		nullptr,
		&NewStructOps,
		"LoginInfo",
		sizeof(FLoginInfo),
		alignof(FLoginInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoginInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LoginInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LoginInfo.InnerSingleton, Z_Construct_UScriptStruct_FLoginInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LoginInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Test_OnHandleLoginHttpResponse__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Test_OnHandleLoginHttpResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ConnectionAPI/TestObjectConnectionAPIBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Test_OnHandleLoginHttpResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Test, nullptr, "OnHandleLoginHttpResponse__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Test_OnHandleLoginHttpResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Test_OnHandleLoginHttpResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Test_OnHandleLoginHttpResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Test_OnHandleLoginHttpResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHandleLoginHttpResponse_DelegateWrapper(const FMulticastScriptDelegate& OnHandleLoginHttpResponse)
{
	OnHandleLoginHttpResponse.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_Test_OnHandleCheckAuthHttpResponse__DelegateSignature_Statics
	{
		struct _Script_Test_eventOnHandleCheckAuthHttpResponse_Parms
		{
			int32 ResponseCode;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResponseCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_Test_OnHandleCheckAuthHttpResponse__DelegateSignature_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Test_eventOnHandleCheckAuthHttpResponse_Parms, ResponseCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Test_OnHandleCheckAuthHttpResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Test_OnHandleCheckAuthHttpResponse__DelegateSignature_Statics::NewProp_ResponseCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Test_OnHandleCheckAuthHttpResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ConnectionAPI/TestObjectConnectionAPIBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Test_OnHandleCheckAuthHttpResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Test, nullptr, "OnHandleCheckAuthHttpResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Test_OnHandleCheckAuthHttpResponse__DelegateSignature_Statics::_Script_Test_eventOnHandleCheckAuthHttpResponse_Parms), Z_Construct_UDelegateFunction_Test_OnHandleCheckAuthHttpResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Test_OnHandleCheckAuthHttpResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Test_OnHandleCheckAuthHttpResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Test_OnHandleCheckAuthHttpResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Test_OnHandleCheckAuthHttpResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Test_OnHandleCheckAuthHttpResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHandleCheckAuthHttpResponse_DelegateWrapper(const FMulticastScriptDelegate& OnHandleCheckAuthHttpResponse, int32 ResponseCode)
{
	struct _Script_Test_eventOnHandleCheckAuthHttpResponse_Parms
	{
		int32 ResponseCode;
	};
	_Script_Test_eventOnHandleCheckAuthHttpResponse_Parms Parms;
	Parms.ResponseCode=ResponseCode;
	OnHandleCheckAuthHttpResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UTestObjectConnectionAPIBase::StaticRegisterNativesUTestObjectConnectionAPIBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestObjectConnectionAPIBase);
	UClass* Z_Construct_UClass_UTestObjectConnectionAPIBase_NoRegister()
	{
		return UTestObjectConnectionAPIBase::StaticClass();
	}
	struct Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoginInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoginInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConnectionAPI/TestObjectConnectionAPIBase.h" },
		{ "ModuleRelativePath", "ConnectionAPI/TestObjectConnectionAPIBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::NewProp_LoginInfo_MetaData[] = {
		{ "ModuleRelativePath", "ConnectionAPI/TestObjectConnectionAPIBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::NewProp_LoginInfo = { "LoginInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestObjectConnectionAPIBase, LoginInfo), Z_Construct_UScriptStruct_FLoginInfo, METADATA_PARAMS(Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::NewProp_LoginInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::NewProp_LoginInfo_MetaData)) }; // 4206001771
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::NewProp_LoginInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestObjectConnectionAPIBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::ClassParams = {
		&UTestObjectConnectionAPIBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestObjectConnectionAPIBase()
	{
		if (!Z_Registration_Info_UClass_UTestObjectConnectionAPIBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestObjectConnectionAPIBase.OuterSingleton, Z_Construct_UClass_UTestObjectConnectionAPIBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestObjectConnectionAPIBase.OuterSingleton;
	}
	template<> TEST_API UClass* StaticClass<UTestObjectConnectionAPIBase>()
	{
		return UTestObjectConnectionAPIBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestObjectConnectionAPIBase);
	UTestObjectConnectionAPIBase::~UTestObjectConnectionAPIBase() {}
	struct Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_ConnectionAPI_TestObjectConnectionAPIBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_ConnectionAPI_TestObjectConnectionAPIBase_h_Statics::ScriptStructInfo[] = {
		{ FLoginInfo::StaticStruct, Z_Construct_UScriptStruct_FLoginInfo_Statics::NewStructOps, TEXT("LoginInfo"), &Z_Registration_Info_UScriptStruct_LoginInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoginInfo), 4206001771U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_ConnectionAPI_TestObjectConnectionAPIBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestObjectConnectionAPIBase, UTestObjectConnectionAPIBase::StaticClass, TEXT("UTestObjectConnectionAPIBase"), &Z_Registration_Info_UClass_UTestObjectConnectionAPIBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestObjectConnectionAPIBase), 1585262504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_ConnectionAPI_TestObjectConnectionAPIBase_h_3293421654(TEXT("/Script/Test"),
		Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_ConnectionAPI_TestObjectConnectionAPIBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_ConnectionAPI_TestObjectConnectionAPIBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_ConnectionAPI_TestObjectConnectionAPIBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_ConnectionAPI_TestObjectConnectionAPIBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
