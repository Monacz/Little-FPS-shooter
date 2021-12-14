// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FVector;
struct FHitResult;
#ifdef TEST2_ActorToSpawn_generated_h
#error "ActorToSpawn.generated.h already included, missing '#pragma once' in ActorToSpawn.h"
#endif
#define TEST2_ActorToSpawn_generated_h

#define Test2_Source_Test2_ActorToSpawn_h_12_SPARSE_DATA
#define Test2_Source_Test2_ActorToSpawn_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Test2_Source_Test2_ActorToSpawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Test2_Source_Test2_ActorToSpawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActorToSpawn(); \
	friend struct Z_Construct_UClass_AActorToSpawn_Statics; \
public: \
	DECLARE_CLASS(AActorToSpawn, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AActorToSpawn)


#define Test2_Source_Test2_ActorToSpawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAActorToSpawn(); \
	friend struct Z_Construct_UClass_AActorToSpawn_Statics; \
public: \
	DECLARE_CLASS(AActorToSpawn, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AActorToSpawn)


#define Test2_Source_Test2_ActorToSpawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActorToSpawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActorToSpawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorToSpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorToSpawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActorToSpawn(AActorToSpawn&&); \
	NO_API AActorToSpawn(const AActorToSpawn&); \
public:


#define Test2_Source_Test2_ActorToSpawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActorToSpawn(AActorToSpawn&&); \
	NO_API AActorToSpawn(const AActorToSpawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorToSpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorToSpawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActorToSpawn)


#define Test2_Source_Test2_ActorToSpawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(AActorToSpawn, SphereComp); } \
	FORCEINLINE static uint32 __PPO__StaticMeshComp() { return STRUCT_OFFSET(AActorToSpawn, StaticMeshComp); } \
	FORCEINLINE static uint32 __PPO__ParticleComp() { return STRUCT_OFFSET(AActorToSpawn, ParticleComp); }


#define Test2_Source_Test2_ActorToSpawn_h_9_PROLOG
#define Test2_Source_Test2_ActorToSpawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_ActorToSpawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_ActorToSpawn_h_12_SPARSE_DATA \
	Test2_Source_Test2_ActorToSpawn_h_12_RPC_WRAPPERS \
	Test2_Source_Test2_ActorToSpawn_h_12_INCLASS \
	Test2_Source_Test2_ActorToSpawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_ActorToSpawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_ActorToSpawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_ActorToSpawn_h_12_SPARSE_DATA \
	Test2_Source_Test2_ActorToSpawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_ActorToSpawn_h_12_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_ActorToSpawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class AActorToSpawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_ActorToSpawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
