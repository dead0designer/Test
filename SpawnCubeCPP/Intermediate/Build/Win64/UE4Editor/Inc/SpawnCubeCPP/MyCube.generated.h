// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPAWNCUBECPP_MyCube_generated_h
#error "MyCube.generated.h already included, missing '#pragma once' in MyCube.h"
#endif
#define SPAWNCUBECPP_MyCube_generated_h

#define SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_SPARSE_DATA
#define SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_RPC_WRAPPERS
#define SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCube(); \
	friend struct Z_Construct_UClass_AMyCube_Statics; \
public: \
	DECLARE_CLASS(AMyCube, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpawnCubeCPP"), NO_API) \
	DECLARE_SERIALIZER(AMyCube)


#define SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyCube(); \
	friend struct Z_Construct_UClass_AMyCube_Statics; \
public: \
	DECLARE_CLASS(AMyCube, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpawnCubeCPP"), NO_API) \
	DECLARE_SERIALIZER(AMyCube)


#define SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCube(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCube) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCube); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCube(AMyCube&&); \
	NO_API AMyCube(const AMyCube&); \
public:


#define SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCube(AMyCube&&); \
	NO_API AMyCube(const AMyCube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCube)


#define SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CubeMesh() { return STRUCT_OFFSET(AMyCube, CubeMesh); }


#define SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_9_PROLOG
#define SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_PRIVATE_PROPERTY_OFFSET \
	SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_SPARSE_DATA \
	SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_RPC_WRAPPERS \
	SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_INCLASS \
	SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_PRIVATE_PROPERTY_OFFSET \
	SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_SPARSE_DATA \
	SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_INCLASS_NO_PURE_DECLS \
	SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPAWNCUBECPP_API UClass* StaticClass<class AMyCube>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpawnCubeCPP_Source_SpawnCubeCPP_MyCube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
