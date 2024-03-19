// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseShooting/WwiseShootingPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseShootingPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WwiseShooting();
	WWISESHOOTING_API UClass* Z_Construct_UClass_AWwiseShootingPlayerController();
	WWISESHOOTING_API UClass* Z_Construct_UClass_AWwiseShootingPlayerController_NoRegister();
// End Cross Module References
	void AWwiseShootingPlayerController::StaticRegisterNativesAWwiseShootingPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWwiseShootingPlayerController);
	UClass* Z_Construct_UClass_AWwiseShootingPlayerController_NoRegister()
	{
		return AWwiseShootingPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AWwiseShootingPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWwiseShootingPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseShooting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWwiseShootingPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWwiseShootingPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "WwiseShootingPlayerController.h" },
		{ "ModuleRelativePath", "WwiseShootingPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWwiseShootingPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "WwiseShootingPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWwiseShootingPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWwiseShootingPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWwiseShootingPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AWwiseShootingPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWwiseShootingPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWwiseShootingPlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWwiseShootingPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWwiseShootingPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWwiseShootingPlayerController_Statics::ClassParams = {
		&AWwiseShootingPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWwiseShootingPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWwiseShootingPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWwiseShootingPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWwiseShootingPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWwiseShootingPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWwiseShootingPlayerController()
	{
		if (!Z_Registration_Info_UClass_AWwiseShootingPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWwiseShootingPlayerController.OuterSingleton, Z_Construct_UClass_AWwiseShootingPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWwiseShootingPlayerController.OuterSingleton;
	}
	template<> WWISESHOOTING_API UClass* StaticClass<AWwiseShootingPlayerController>()
	{
		return AWwiseShootingPlayerController::StaticClass();
	}
	AWwiseShootingPlayerController::AWwiseShootingPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWwiseShootingPlayerController);
	AWwiseShootingPlayerController::~AWwiseShootingPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_ianhu_Documents_Self_study_Github_WwiseShooting_Source_WwiseShooting_WwiseShootingPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ianhu_Documents_Self_study_Github_WwiseShooting_Source_WwiseShooting_WwiseShootingPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWwiseShootingPlayerController, AWwiseShootingPlayerController::StaticClass, TEXT("AWwiseShootingPlayerController"), &Z_Registration_Info_UClass_AWwiseShootingPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWwiseShootingPlayerController), 1643934683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ianhu_Documents_Self_study_Github_WwiseShooting_Source_WwiseShooting_WwiseShootingPlayerController_h_3325265044(TEXT("/Script/WwiseShooting"),
		Z_CompiledInDeferFile_FID_Users_ianhu_Documents_Self_study_Github_WwiseShooting_Source_WwiseShooting_WwiseShootingPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ianhu_Documents_Self_study_Github_WwiseShooting_Source_WwiseShooting_WwiseShootingPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
