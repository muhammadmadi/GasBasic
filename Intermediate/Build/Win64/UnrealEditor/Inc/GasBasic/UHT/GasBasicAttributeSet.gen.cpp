// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GasBasic/GasBasicAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGasBasicAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
GASBASIC_API UClass* Z_Construct_UClass_UGasBasicAttributeSet();
GASBASIC_API UClass* Z_Construct_UClass_UGasBasicAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_GasBasic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGasBasicAttributeSet Function OnRep_AttackPower *************************
struct Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower_Statics
{
	struct GasBasicAttributeSet_eventOnRep_AttackPower_Parms
	{
		FGameplayAttributeData OldAttackPower;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackPower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower_Statics::NewProp_OldAttackPower = { "OldAttackPower", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GasBasicAttributeSet_eventOnRep_AttackPower_Parms, OldAttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAttackPower_MetaData), NewProp_OldAttackPower_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower_Statics::NewProp_OldAttackPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGasBasicAttributeSet, nullptr, "OnRep_AttackPower", Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower_Statics::GasBasicAttributeSet_eventOnRep_AttackPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower_Statics::GasBasicAttributeSet_eventOnRep_AttackPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGasBasicAttributeSet::execOnRep_AttackPower)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AttackPower(Z_Param_Out_OldAttackPower);
	P_NATIVE_END;
}
// ********** End Class UGasBasicAttributeSet Function OnRep_AttackPower ***************************

// ********** Begin Class UGasBasicAttributeSet Function OnRep_Damage ******************************
struct Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage_Statics
{
	struct GasBasicAttributeSet_eventOnRep_Damage_Parms
	{
		FGameplayAttributeData OldDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage_Statics::NewProp_OldDamage = { "OldDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GasBasicAttributeSet_eventOnRep_Damage_Parms, OldDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldDamage_MetaData), NewProp_OldDamage_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage_Statics::NewProp_OldDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGasBasicAttributeSet, nullptr, "OnRep_Damage", Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage_Statics::GasBasicAttributeSet_eventOnRep_Damage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage_Statics::GasBasicAttributeSet_eventOnRep_Damage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGasBasicAttributeSet::execOnRep_Damage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Damage(Z_Param_Out_OldDamage);
	P_NATIVE_END;
}
// ********** End Class UGasBasicAttributeSet Function OnRep_Damage ********************************

// ********** Begin Class UGasBasicAttributeSet Function OnRep_Health ******************************
struct Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health_Statics
{
	struct GasBasicAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rep notifies\n" },
#endif
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rep notifies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GasBasicAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGasBasicAttributeSet, nullptr, "OnRep_Health", Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health_Statics::GasBasicAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health_Statics::GasBasicAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGasBasicAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// ********** End Class UGasBasicAttributeSet Function OnRep_Health ********************************

// ********** Begin Class UGasBasicAttributeSet ****************************************************
void UGasBasicAttributeSet::StaticRegisterNativesUGasBasicAttributeSet()
{
	UClass* Class = UGasBasicAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_AttackPower", &UGasBasicAttributeSet::execOnRep_AttackPower },
		{ "OnRep_Damage", &UGasBasicAttributeSet::execOnRep_Damage },
		{ "OnRep_Health", &UGasBasicAttributeSet::execOnRep_Health },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGasBasicAttributeSet;
UClass* UGasBasicAttributeSet::GetPrivateStaticClass()
{
	using TClass = UGasBasicAttributeSet;
	if (!Z_Registration_Info_UClass_UGasBasicAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GasBasicAttributeSet"),
			Z_Registration_Info_UClass_UGasBasicAttributeSet.InnerSingleton,
			StaticRegisterNativesUGasBasicAttributeSet,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGasBasicAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UGasBasicAttributeSet_NoRegister()
{
	return UGasBasicAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGasBasicAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Basic Attribute Set for Gameplay Ability System\n * Contains essential attributes: Health, Damage, and Attack Power\n * All attributes are replicated for multiplayer support\n */" },
#endif
		{ "IncludePath", "GasBasicAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic Attribute Set for Gameplay Ability System\nContains essential attributes: Health, Damage, and Attack Power\nAll attributes are replicated for multiplayer support" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Basic Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health Attribute\n" },
#endif
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health Attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Basic Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Damage Attribute\n" },
#endif
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage Attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "Basic Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attack Power Attribute\n" },
#endif
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack Power Attribute" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_AttackPower, "OnRep_AttackPower" }, // 3248676053
		{ &Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Damage, "OnRep_Damage" }, // 1237666318
		{ &Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health, "OnRep_Health" }, // 1434043099
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGasBasicAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasBasicAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_Damage = { "Damage", "OnRep_Damage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasBasicAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_AttackPower = { "AttackPower", "OnRep_AttackPower", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasBasicAttributeSet, AttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGasBasicAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_AttackPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGasBasicAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGasBasicAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_GasBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGasBasicAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::ClassParams = {
	&UGasBasicAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGasBasicAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGasBasicAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGasBasicAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGasBasicAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGasBasicAttributeSet()
{
	if (!Z_Registration_Info_UClass_UGasBasicAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGasBasicAttributeSet.OuterSingleton, Z_Construct_UClass_UGasBasicAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGasBasicAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UGasBasicAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Health(TEXT("Health"));
	static FName Name_Damage(TEXT("Damage"));
	static FName Name_AttackPower(TEXT("AttackPower"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_Damage == ClassReps[(int32)ENetFields_Private::Damage].Property->GetFName()
		&& Name_AttackPower == ClassReps[(int32)ENetFields_Private::AttackPower].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGasBasicAttributeSet"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UGasBasicAttributeSet);
UGasBasicAttributeSet::~UGasBasicAttributeSet() {}
// ********** End Class UGasBasicAttributeSet ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h__Script_GasBasic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGasBasicAttributeSet, UGasBasicAttributeSet::StaticClass, TEXT("UGasBasicAttributeSet"), &Z_Registration_Info_UClass_UGasBasicAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGasBasicAttributeSet), 3726845740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h__Script_GasBasic_4013868369(TEXT("/Script/GasBasic"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h__Script_GasBasic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h__Script_GasBasic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
