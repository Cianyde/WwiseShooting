// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseShooting/WwiseShootingGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseShootingGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_WwiseShooting();
	WWISESHOOTING_API UClass* Z_Construct_UClass_AWwiseShootingGameMode();
	WWISESHOOTING_API UClass* Z_Construct_UClass_AWwiseShootingGameMode_NoRegister();
// End Cross Module References
	void AWwiseShootingGameMode::StaticRegisterNativesAWwiseShootingGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWwiseShootingGameMode);
	UClass* Z_Construct_UClass_AWwiseShootingGameMode_NoRegister()
	{
		return AWwiseShootingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AWwiseShootingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWwiseShootingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseShooting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWwiseShootingGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWwiseShootingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WwiseShootingGameMode.h" },
		{ "ModuleRelativePath", "WwiseShootingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWwiseShootingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWwiseShootingGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWwiseShootingGameMode_Statics::ClassParams = {
		&AWwiseShootingGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWwiseShootingGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AWwiseShootingGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AWwiseShootingGameMode()
	{
		if (!Z_Registration_Info_UClass_AWwiseShootingGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWwiseShootingGameMode.OuterSingleton, Z_Construct_UClass_AWwiseShootingGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWwiseShootingGameMode.OuterSingleton;
	}
	template<> WWISESHOOTING_API UClass* StaticClass<AWwiseShootingGameMode>()
	{
		return AWwiseShootingGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWwiseShootingGameMode);
	AWwiseShootingGameMode::~AWwiseShootingGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_ianhu_Documents_Self_study_Github_WwiseShooting_Source_WwiseShooting_WwiseShootingGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ianhu_Documents_Self_study_Github_WwiseShooting_Source_WwiseShooting_WwiseShootingGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWwiseShootingGameMode, AWwiseShootingGameMode::StaticClass, TEXT("AWwiseShootingGameMode"), &Z_Registration_Info_UClass_AWwiseShootingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWwiseShootingGameMode), 770270053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ianhu_Documents_Self_study_Github_WwiseShooting_Source_WwiseShooting_WwiseShootingGameMode_h_1389791732(TEXT("/Script/WwiseShooting"),
		Z_CompiledInDeferFile_FID_Users_ianhu_Documents_Self_study_Github_WwiseShooting_Source_WwiseShooting_WwiseShootingGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ianhu_Documents_Self_study_Github_WwiseShooting_Source_WwiseShooting_WwiseShootingGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
