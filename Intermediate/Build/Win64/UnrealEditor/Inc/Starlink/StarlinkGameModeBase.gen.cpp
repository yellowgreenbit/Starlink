// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starlink/StarlinkGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarlinkGameModeBase() {}
// Cross Module References
	STARLINK_API UClass* Z_Construct_UClass_AStarlinkGameModeBase_NoRegister();
	STARLINK_API UClass* Z_Construct_UClass_AStarlinkGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Starlink();
// End Cross Module References
	void AStarlinkGameModeBase::StaticRegisterNativesAStarlinkGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStarlinkGameModeBase);
	UClass* Z_Construct_UClass_AStarlinkGameModeBase_NoRegister()
	{
		return AStarlinkGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AStarlinkGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarlinkGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starlink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarlinkGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "StarlinkGameModeBase.h" },
		{ "ModuleRelativePath", "StarlinkGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarlinkGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarlinkGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStarlinkGameModeBase_Statics::ClassParams = {
		&AStarlinkGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStarlinkGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStarlinkGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarlinkGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AStarlinkGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStarlinkGameModeBase.OuterSingleton, Z_Construct_UClass_AStarlinkGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStarlinkGameModeBase.OuterSingleton;
	}
	template<> STARLINK_API UClass* StaticClass<AStarlinkGameModeBase>()
	{
		return AStarlinkGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarlinkGameModeBase);
	struct Z_CompiledInDeferFile_FID_Starlink_Source_Starlink_StarlinkGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Starlink_Source_Starlink_StarlinkGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStarlinkGameModeBase, AStarlinkGameModeBase::StaticClass, TEXT("AStarlinkGameModeBase"), &Z_Registration_Info_UClass_AStarlinkGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStarlinkGameModeBase), 2370631210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Starlink_Source_Starlink_StarlinkGameModeBase_h_1724971299(TEXT("/Script/Starlink"),
		Z_CompiledInDeferFile_FID_Starlink_Source_Starlink_StarlinkGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Starlink_Source_Starlink_StarlinkGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
