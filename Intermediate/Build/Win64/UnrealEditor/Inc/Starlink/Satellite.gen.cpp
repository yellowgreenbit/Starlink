// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starlink/Public/Satellite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSatellite() {}
// Cross Module References
	STARLINK_API UClass* Z_Construct_UClass_ASatellite_NoRegister();
	STARLINK_API UClass* Z_Construct_UClass_ASatellite();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starlink();
// End Cross Module References
	void ASatellite::StaticRegisterNativesASatellite()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASatellite);
	UClass* Z_Construct_UClass_ASatellite_NoRegister()
	{
		return ASatellite::StaticClass();
	}
	struct Z_Construct_UClass_ASatellite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASatellite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starlink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASatellite_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Satellite.h" },
		{ "ModuleRelativePath", "Public/Satellite.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASatellite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASatellite>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASatellite_Statics::ClassParams = {
		&ASatellite::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASatellite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASatellite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASatellite()
	{
		if (!Z_Registration_Info_UClass_ASatellite.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASatellite.OuterSingleton, Z_Construct_UClass_ASatellite_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASatellite.OuterSingleton;
	}
	template<> STARLINK_API UClass* StaticClass<ASatellite>()
	{
		return ASatellite::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASatellite);
	struct Z_CompiledInDeferFile_FID_Starlink_Source_Starlink_Public_Satellite_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Starlink_Source_Starlink_Public_Satellite_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASatellite, ASatellite::StaticClass, TEXT("ASatellite"), &Z_Registration_Info_UClass_ASatellite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASatellite), 648057001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Starlink_Source_Starlink_Public_Satellite_h_2108823890(TEXT("/Script/Starlink"),
		Z_CompiledInDeferFile_FID_Starlink_Source_Starlink_Public_Satellite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Starlink_Source_Starlink_Public_Satellite_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
