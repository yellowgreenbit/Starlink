// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARLINK_Planet_generated_h
#error "Planet.generated.h already included, missing '#pragma once' in Planet.h"
#endif
#define STARLINK_Planet_generated_h

#define FID_Starlink_Source_Starlink_Public_Planet_h_12_SPARSE_DATA
#define FID_Starlink_Source_Starlink_Public_Planet_h_12_RPC_WRAPPERS
#define FID_Starlink_Source_Starlink_Public_Planet_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Starlink_Source_Starlink_Public_Planet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlanet(); \
	friend struct Z_Construct_UClass_APlanet_Statics; \
public: \
	DECLARE_CLASS(APlanet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starlink"), NO_API) \
	DECLARE_SERIALIZER(APlanet)


#define FID_Starlink_Source_Starlink_Public_Planet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlanet(); \
	friend struct Z_Construct_UClass_APlanet_Statics; \
public: \
	DECLARE_CLASS(APlanet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starlink"), NO_API) \
	DECLARE_SERIALIZER(APlanet)


#define FID_Starlink_Source_Starlink_Public_Planet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlanet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlanet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlanet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlanet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlanet(APlanet&&); \
	NO_API APlanet(const APlanet&); \
public:


#define FID_Starlink_Source_Starlink_Public_Planet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlanet(APlanet&&); \
	NO_API APlanet(const APlanet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlanet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlanet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlanet)


#define FID_Starlink_Source_Starlink_Public_Planet_h_9_PROLOG
#define FID_Starlink_Source_Starlink_Public_Planet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Starlink_Source_Starlink_Public_Planet_h_12_SPARSE_DATA \
	FID_Starlink_Source_Starlink_Public_Planet_h_12_RPC_WRAPPERS \
	FID_Starlink_Source_Starlink_Public_Planet_h_12_INCLASS \
	FID_Starlink_Source_Starlink_Public_Planet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Starlink_Source_Starlink_Public_Planet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Starlink_Source_Starlink_Public_Planet_h_12_SPARSE_DATA \
	FID_Starlink_Source_Starlink_Public_Planet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Starlink_Source_Starlink_Public_Planet_h_12_INCLASS_NO_PURE_DECLS \
	FID_Starlink_Source_Starlink_Public_Planet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARLINK_API UClass* StaticClass<class APlanet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Starlink_Source_Starlink_Public_Planet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
