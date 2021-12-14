// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/ActorSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSpawner() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_AActorSpawner_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_AActorSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Test2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AActorSpawner::execSpawnActor)
	{
		P_GET_STRUCT(FVector,Z_Param_coords);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActor(Z_Param_coords);
		P_NATIVE_END;
	}
	void AActorSpawner::StaticRegisterNativesAActorSpawner()
	{
		UClass* Class = AActorSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnActor", &AActorSpawner::execSpawnActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AActorSpawner_SpawnActor_Statics
	{
		struct ActorSpawner_eventSpawnActor_Parms
		{
			FVector coords;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_coords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActorSpawner_SpawnActor_Statics::NewProp_coords = { "coords", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorSpawner_eventSpawnActor_Parms, coords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActorSpawner_SpawnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorSpawner_SpawnActor_Statics::NewProp_coords,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActorSpawner_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActorSpawner_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActorSpawner, nullptr, "SpawnActor", nullptr, nullptr, sizeof(ActorSpawner_eventSpawnActor_Parms), Z_Construct_UFunction_AActorSpawner_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorSpawner_SpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActorSpawner_SpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorSpawner_SpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActorSpawner_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActorSpawner_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AActorSpawner_NoRegister()
	{
		return AActorSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AActorSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AActorSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AActorSpawner_SpawnActor, "SpawnActor" }, // 1601407833
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorSpawner.h" },
		{ "ModuleRelativePath", "ActorSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorSpawner_Statics::NewProp_SpawnVolume_MetaData[] = {
		{ "Category", "ActorSpawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActorSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorSpawner_Statics::NewProp_SpawnVolume = { "SpawnVolume", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorSpawner, SpawnVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorSpawner_Statics::NewProp_SpawnVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorSpawner_Statics::NewProp_SpawnVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorSpawner_Statics::NewProp_SpawnVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActorSpawner_Statics::ClassParams = {
		&AActorSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AActorSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AActorSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActorSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActorSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorSpawner, 1872322381);
	template<> TEST2_API UClass* StaticClass<AActorSpawner>()
	{
		return AActorSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorSpawner(Z_Construct_UClass_AActorSpawner, &AActorSpawner::StaticClass, TEXT("/Script/Test2"), TEXT("AActorSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
