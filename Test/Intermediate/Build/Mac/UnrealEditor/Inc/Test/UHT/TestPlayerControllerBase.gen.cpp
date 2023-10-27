// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/BaseGameClasses/TestPlayerControllerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPlayerControllerBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	TEST_API UClass* Z_Construct_UClass_ATestPlayerControllerBase();
	TEST_API UClass* Z_Construct_UClass_ATestPlayerControllerBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Test();
// End Cross Module References
	struct TestPlayerControllerBase_eventCreateWidget_Parms
	{
		int32 ResponseCode;
	};
	static FName NAME_ATestPlayerControllerBase_CreateWidget = FName(TEXT("CreateWidget"));
	void ATestPlayerControllerBase::CreateWidget(int32 const& ResponseCode)
	{
		TestPlayerControllerBase_eventCreateWidget_Parms Parms;
		Parms.ResponseCode=ResponseCode;
		ProcessEvent(FindFunctionChecked(NAME_ATestPlayerControllerBase_CreateWidget),&Parms);
	}
	void ATestPlayerControllerBase::StaticRegisterNativesATestPlayerControllerBase()
	{
	}
	struct Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseCode_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResponseCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget_Statics::NewProp_ResponseCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestPlayerControllerBase_eventCreateWidget_Parms, ResponseCode), METADATA_PARAMS(Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget_Statics::NewProp_ResponseCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget_Statics::NewProp_ResponseCode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget_Statics::NewProp_ResponseCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseGameClasses/TestPlayerControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayerControllerBase, nullptr, "CreateWidget", nullptr, nullptr, sizeof(TestPlayerControllerBase_eventCreateWidget_Parms), Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestPlayerControllerBase);
	UClass* Z_Construct_UClass_ATestPlayerControllerBase_NoRegister()
	{
		return ATestPlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_ATestPlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestPlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Test,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestPlayerControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestPlayerControllerBase_CreateWidget, "CreateWidget" }, // 588137702
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BaseGameClasses/TestPlayerControllerBase.h" },
		{ "ModuleRelativePath", "BaseGameClasses/TestPlayerControllerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestPlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestPlayerControllerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestPlayerControllerBase_Statics::ClassParams = {
		&ATestPlayerControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestPlayerControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestPlayerControllerBase()
	{
		if (!Z_Registration_Info_UClass_ATestPlayerControllerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestPlayerControllerBase.OuterSingleton, Z_Construct_UClass_ATestPlayerControllerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestPlayerControllerBase.OuterSingleton;
	}
	template<> TEST_API UClass* StaticClass<ATestPlayerControllerBase>()
	{
		return ATestPlayerControllerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestPlayerControllerBase);
	ATestPlayerControllerBase::~ATestPlayerControllerBase() {}
	struct Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_BaseGameClasses_TestPlayerControllerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_BaseGameClasses_TestPlayerControllerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestPlayerControllerBase, ATestPlayerControllerBase::StaticClass, TEXT("ATestPlayerControllerBase"), &Z_Registration_Info_UClass_ATestPlayerControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestPlayerControllerBase), 3317472052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_BaseGameClasses_TestPlayerControllerBase_h_373992969(TEXT("/Script/Test"),
		Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_BaseGameClasses_TestPlayerControllerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ackvar1_Desktop_Test_Test_Source_Test_BaseGameClasses_TestPlayerControllerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
