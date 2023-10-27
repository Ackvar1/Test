// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/BaseGameClasses/TestGameInstanceBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestGameInstanceBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	TEST_API UClass* Z_Construct_UClass_UTestGameInstanceBase();
	TEST_API UClass* Z_Construct_UClass_UTestGameInstanceBase_NoRegister();
	TEST_API UClass* Z_Construct_UClass_UTestObjectConnectionAPIBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Test();
// End Cross Module References
	DEFINE_FUNCTION(UTestGameInstanceBase::execOnHandleCheckAuthHttpResponse)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ResponseCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHandleCheckAuthHttpResponse(Z_Param_ResponseCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTestGameInstanceBase::execOnHandleHttpResponse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHandleHttpResponse();
		P_NATIVE_END;
	}
	void UTestGameInstanceBase::StaticRegisterNativesUTestGameInstanceBase()
	{
		UClass* Class = UTestGameInstanceBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHandleCheckAuthHttpResponse", &UTestGameInstanceBase::execOnHandleCheckAuthHttpResponse },
			{ "OnHandleHttpResponse", &UTestGameInstanceBase::execOnHandleHttpResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestGameInstanceBase_OnHandleCheckAuthHttpResponse_Statics
	{
		struct TestGameInstanceBase_eventOnHandleCheckAuthHttpResponse_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTestGameInstanceBase_OnHandleCheckAuthHttpResponse_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestGameInstanceBase_eventOnHandleCheckAuthHttpResponse_Parms, ResponseCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestGameInstanceBase_OnHandleCheckAuthHttpResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestGameInstanceBase_OnHandleCheckAuthHttpResponse_Statics::NewProp_ResponseCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestGameInstanceBase_OnHandleCheckAuthHttpResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseGameClasses/TestGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestGameInstanceBase_OnHandleCheckAuthHttpResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestGameInstanceBase, nullptr, "OnHandleCheckAuthHttpResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTestGameInstanceBase_OnHandleCheckAuthHttpResponse_Statics::TestGameInstanceBase_eventOnHandleCheckAuthHttpResponse_Parms), Z_Construct_UFunction_UTestGameInstanceBase_OnHandleCheckAuthHttpResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestGameInstanceBase_OnHandleCheckAuthHttpResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestGameInstanceBase_OnHandleCheckAuthHttpResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestGameInstanceBase_OnHandleCheckAuthHttpResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestGameInstanceBase_OnHandleCheckAuthHttpResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestGameInstanceBase_OnHandleCheckAuthHttpResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTestGameInstanceBase_OnHandleHttpResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestGameInstanceBase_OnHandleHttpResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseGameClasses/TestGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestGameInstanceBase_OnHandleHttpResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestGameInstanceBase, nullptr, "OnHandleHttpResponse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestGameInstanceBase_OnHandleHttpResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestGameInstanceBase_OnHandleHttpResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestGameInstanceBase_OnHandleHttpResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestGameInstanceBase_OnHandleHttpResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestGameInstanceBase);
	UClass* Z_Construct_UClass_UTestGameInstanceBase_NoRegister()
	{
		return UTestGameInstanceBase::StaticClass();
	}
	struct Z_Construct_UClass_UTestGameInstanceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestObjectConnectionAPIBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TestObjectConnectionAPIBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestGameInstanceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Test,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestGameInstanceBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestGameInstanceBase_OnHandleCheckAuthHttpResponse, "OnHandleCheckAuthHttpResponse" }, // 1161029002
		{ &Z_Construct_UFunction_UTestGameInstanceBase_OnHandleHttpResponse, "OnHandleHttpResponse" }, // 1777732789
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestGameInstanceBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseGameClasses/TestGameInstanceBase.h" },
		{ "ModuleRelativePath", "BaseGameClasses/TestGameInstanceBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestGameInstanceBase_Statics::NewProp_TestObjectConnectionAPIBase_MetaData[] = {
		{ "ModuleRelativePath", "BaseGameClasses/TestGameInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestGameInstanceBase_Statics::NewProp_TestObjectConnectionAPIBase = { "TestObjectConnectionAPIBase", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestGameInstanceBase, TestObjectConnectionAPIBase), Z_Construct_UClass_UTestObjectConnectionAPIBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestGameInstanceBase_Statics::NewProp_TestObjectConnectionAPIBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestGameInstanceBase_Statics::NewProp_TestObjectConnectionAPIBase_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestGameInstanceBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestGameInstanceBase_Statics::NewProp_TestObjectConnectionAPIBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestGameInstanceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestGameInstanceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestGameInstanceBase_Statics::ClassParams = {
		&UTestGameInstanceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTestGameInstanceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestGameInstanceBase_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTestGameInstanceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestGameInstanceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestGameInstanceBase()
	{
		if (!Z_Registration_Info_UClass_UTestGameInstanceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestGameInstanceBase.OuterSingleton, Z_Construct_UClass_UTestGameInstanceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestGameInstanceBase.OuterSingleton;
	}
	template<> TEST_API UClass* StaticClass<UTestGameInstanceBase>()
	{
		return UTestGameInstanceBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestGameInstanceBase);
	UTestGameInstanceBase::~UTestGameInstanceBase() {}
	struct Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_BaseGameClasses_TestGameInstanceBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_BaseGameClasses_TestGameInstanceBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestGameInstanceBase, UTestGameInstanceBase::StaticClass, TEXT("UTestGameInstanceBase"), &Z_Registration_Info_UClass_UTestGameInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestGameInstanceBase), 1739475262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_BaseGameClasses_TestGameInstanceBase_h_2070835825(TEXT("/Script/Test"),
		Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_BaseGameClasses_TestGameInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_BaseGameClasses_TestGameInstanceBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
