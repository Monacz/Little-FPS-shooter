// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef TEST2_ActorSpawner_generated_h
#error "ActorSpawner.generated.h already included, missing '#pragma once' in ActorSpawner.h"
#endif
#define TEST2_ActorSpawner_generated_h

#define Test2_Source_Test2_ActorSpawner_h_12_SPARSE_DATA
#define Test2_Source_Test2_ActorSpawner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnActor);


#define Test2_Source_Test2_ActorSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnActor);


#define Test2_Source_Test2_ActorSpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActorSpawner(); \
	friend struct Z_Construct_UClass_AActorSpawner_Statics; \
public: \
	DECLARE_CLASS(AActorSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AActorSpawner)


#define Test2_Source_Test2_ActorSpawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAActorSpawner(); \
	friend struct Z_Construct_UClass_AActorSpawner_Statics; \
public: \
	DECLARE_CLASS(AActorSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AActorSpawner)


#define Test2_Source_Test2_ActorSpawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActorSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActorSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActorSpawner(AActorSpawner&&); \
	NO_API AActorSpawner(const AActorSpawner&); \
public:


#define Test2_Source_Test2_ActorSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActorSpawner(AActorSpawner&&); \
	NO_API AActorSpawner(const AActorSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActorSpawner)


#define Test2_Source_Test2_ActorSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnVolume() { return STRUCT_OFFSET(AActorSpawner, SpawnVolume); }


#define Test2_Source_Test2_ActorSpawner_h_9_PROLOG
#define Test2_Source_Test2_ActorSpawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_ActorSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_ActorSpawner_h_12_SPARSE_DATA \
	Test2_Source_Test2_ActorSpawner_h_12_RPC_WRAPPERS \
	Test2_Source_Test2_ActorSpawner_h_12_INCLASS \
	Test2_Source_Test2_ActorSpawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_ActorSpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_ActorSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_ActorSpawner_h_12_SPARSE_DATA \
	Test2_Source_Test2_ActorSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_ActorSpawner_h_12_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_ActorSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST2_API UClass* StaticClass<class AActorSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_ActorSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
