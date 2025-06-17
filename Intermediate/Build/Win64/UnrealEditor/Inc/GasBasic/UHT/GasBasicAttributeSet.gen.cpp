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

// ********** Begin Class UGasBasicAttributeSet Function OnRep_Armor *******************************
struct Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor_Statics
{
	struct GasBasicAttributeSet_eventOnRep_Armor_Parms
	{
		FGameplayAttributeData OldArmor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldArmor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor = { "OldArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GasBasicAttributeSet_eventOnRep_Armor_Parms, OldArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldArmor_MetaData), NewProp_OldArmor_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGasBasicAttributeSet, nullptr, "OnRep_Armor", Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor_Statics::GasBasicAttributeSet_eventOnRep_Armor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor_Statics::GasBasicAttributeSet_eventOnRep_Armor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGasBasicAttributeSet::execOnRep_Armor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArmor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Armor(Z_Param_Out_OldArmor);
	P_NATIVE_END;
}
// ********** End Class UGasBasicAttributeSet Function OnRep_Armor *********************************

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

// ********** Begin Class UGasBasicAttributeSet Function OnRep_HitScanDamage ***********************
struct Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage_Statics
{
	struct GasBasicAttributeSet_eventOnRep_HitScanDamage_Parms
	{
		FGameplayAttributeData OldHitScanDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHitScanDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHitScanDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage_Statics::NewProp_OldHitScanDamage = { "OldHitScanDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GasBasicAttributeSet_eventOnRep_HitScanDamage_Parms, OldHitScanDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHitScanDamage_MetaData), NewProp_OldHitScanDamage_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage_Statics::NewProp_OldHitScanDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGasBasicAttributeSet, nullptr, "OnRep_HitScanDamage", Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage_Statics::GasBasicAttributeSet_eventOnRep_HitScanDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage_Statics::GasBasicAttributeSet_eventOnRep_HitScanDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGasBasicAttributeSet::execOnRep_HitScanDamage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHitScanDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HitScanDamage(Z_Param_Out_OldHitScanDamage);
	P_NATIVE_END;
}
// ********** End Class UGasBasicAttributeSet Function OnRep_HitScanDamage *************************

// ********** Begin Class UGasBasicAttributeSet Function OnRep_Mana ********************************
struct Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana_Statics
{
	struct GasBasicAttributeSet_eventOnRep_Mana_Parms
	{
		FGameplayAttributeData OldMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GasBasicAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMana_MetaData), NewProp_OldMana_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGasBasicAttributeSet, nullptr, "OnRep_Mana", Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana_Statics::GasBasicAttributeSet_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana_Statics::GasBasicAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGasBasicAttributeSet::execOnRep_Mana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
	P_NATIVE_END;
}
// ********** End Class UGasBasicAttributeSet Function OnRep_Mana **********************************

// ********** Begin Class UGasBasicAttributeSet Function OnRep_MaxArmor ****************************
struct Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor_Statics
{
	struct GasBasicAttributeSet_eventOnRep_MaxArmor_Parms
	{
		FGameplayAttributeData OldMaxArmor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxArmor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor_Statics::NewProp_OldMaxArmor = { "OldMaxArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GasBasicAttributeSet_eventOnRep_MaxArmor_Parms, OldMaxArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxArmor_MetaData), NewProp_OldMaxArmor_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor_Statics::NewProp_OldMaxArmor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGasBasicAttributeSet, nullptr, "OnRep_MaxArmor", Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor_Statics::GasBasicAttributeSet_eventOnRep_MaxArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor_Statics::GasBasicAttributeSet_eventOnRep_MaxArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGasBasicAttributeSet::execOnRep_MaxArmor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxArmor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxArmor(Z_Param_Out_OldMaxArmor);
	P_NATIVE_END;
}
// ********** End Class UGasBasicAttributeSet Function OnRep_MaxArmor ******************************

// ********** Begin Class UGasBasicAttributeSet Function OnRep_MaxHealth ***************************
struct Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth_Statics
{
	struct GasBasicAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GasBasicAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGasBasicAttributeSet, nullptr, "OnRep_MaxHealth", Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth_Statics::GasBasicAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth_Statics::GasBasicAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGasBasicAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// ********** End Class UGasBasicAttributeSet Function OnRep_MaxHealth *****************************

// ********** Begin Class UGasBasicAttributeSet Function OnRep_MaxMana *****************************
struct Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana_Statics
{
	struct GasBasicAttributeSet_eventOnRep_MaxMana_Parms
	{
		FGameplayAttributeData OldMaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GasBasicAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxMana_MetaData), NewProp_OldMaxMana_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGasBasicAttributeSet, nullptr, "OnRep_MaxMana", Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana_Statics::GasBasicAttributeSet_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana_Statics::GasBasicAttributeSet_eventOnRep_MaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGasBasicAttributeSet::execOnRep_MaxMana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
	P_NATIVE_END;
}
// ********** End Class UGasBasicAttributeSet Function OnRep_MaxMana *******************************

// ********** Begin Class UGasBasicAttributeSet Function OnRep_MaxShield ***************************
struct Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield_Statics
{
	struct GasBasicAttributeSet_eventOnRep_MaxShield_Parms
	{
		FGameplayAttributeData OldMaxShield;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxShield_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxShield;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield_Statics::NewProp_OldMaxShield = { "OldMaxShield", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GasBasicAttributeSet_eventOnRep_MaxShield_Parms, OldMaxShield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxShield_MetaData), NewProp_OldMaxShield_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield_Statics::NewProp_OldMaxShield,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGasBasicAttributeSet, nullptr, "OnRep_MaxShield", Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield_Statics::GasBasicAttributeSet_eventOnRep_MaxShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield_Statics::GasBasicAttributeSet_eventOnRep_MaxShield_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGasBasicAttributeSet::execOnRep_MaxShield)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxShield);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxShield(Z_Param_Out_OldMaxShield);
	P_NATIVE_END;
}
// ********** End Class UGasBasicAttributeSet Function OnRep_MaxShield *****************************

// ********** Begin Class UGasBasicAttributeSet Function OnRep_MeleeDamage *************************
struct Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage_Statics
{
	struct GasBasicAttributeSet_eventOnRep_MeleeDamage_Parms
	{
		FGameplayAttributeData OldMeleeDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMeleeDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMeleeDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage_Statics::NewProp_OldMeleeDamage = { "OldMeleeDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GasBasicAttributeSet_eventOnRep_MeleeDamage_Parms, OldMeleeDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMeleeDamage_MetaData), NewProp_OldMeleeDamage_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage_Statics::NewProp_OldMeleeDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGasBasicAttributeSet, nullptr, "OnRep_MeleeDamage", Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage_Statics::GasBasicAttributeSet_eventOnRep_MeleeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage_Statics::GasBasicAttributeSet_eventOnRep_MeleeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGasBasicAttributeSet::execOnRep_MeleeDamage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMeleeDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MeleeDamage(Z_Param_Out_OldMeleeDamage);
	P_NATIVE_END;
}
// ********** End Class UGasBasicAttributeSet Function OnRep_MeleeDamage ***************************

// ********** Begin Class UGasBasicAttributeSet Function OnRep_ProjectileDamage ********************
struct Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage_Statics
{
	struct GasBasicAttributeSet_eventOnRep_ProjectileDamage_Parms
	{
		FGameplayAttributeData OldProjectileDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldProjectileDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldProjectileDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage_Statics::NewProp_OldProjectileDamage = { "OldProjectileDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GasBasicAttributeSet_eventOnRep_ProjectileDamage_Parms, OldProjectileDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldProjectileDamage_MetaData), NewProp_OldProjectileDamage_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage_Statics::NewProp_OldProjectileDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGasBasicAttributeSet, nullptr, "OnRep_ProjectileDamage", Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage_Statics::GasBasicAttributeSet_eventOnRep_ProjectileDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage_Statics::GasBasicAttributeSet_eventOnRep_ProjectileDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGasBasicAttributeSet::execOnRep_ProjectileDamage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldProjectileDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ProjectileDamage(Z_Param_Out_OldProjectileDamage);
	P_NATIVE_END;
}
// ********** End Class UGasBasicAttributeSet Function OnRep_ProjectileDamage **********************

// ********** Begin Class UGasBasicAttributeSet Function OnRep_Shield ******************************
struct Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield_Statics
{
	struct GasBasicAttributeSet_eventOnRep_Shield_Parms
	{
		FGameplayAttributeData OldShield;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldShield_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldShield;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield_Statics::NewProp_OldShield = { "OldShield", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GasBasicAttributeSet_eventOnRep_Shield_Parms, OldShield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldShield_MetaData), NewProp_OldShield_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield_Statics::NewProp_OldShield,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGasBasicAttributeSet, nullptr, "OnRep_Shield", Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield_Statics::GasBasicAttributeSet_eventOnRep_Shield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield_Statics::GasBasicAttributeSet_eventOnRep_Shield_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGasBasicAttributeSet::execOnRep_Shield)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldShield);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Shield(Z_Param_Out_OldShield);
	P_NATIVE_END;
}
// ********** End Class UGasBasicAttributeSet Function OnRep_Shield ********************************

// ********** Begin Class UGasBasicAttributeSet ****************************************************
void UGasBasicAttributeSet::StaticRegisterNativesUGasBasicAttributeSet()
{
	UClass* Class = UGasBasicAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Armor", &UGasBasicAttributeSet::execOnRep_Armor },
		{ "OnRep_Health", &UGasBasicAttributeSet::execOnRep_Health },
		{ "OnRep_HitScanDamage", &UGasBasicAttributeSet::execOnRep_HitScanDamage },
		{ "OnRep_Mana", &UGasBasicAttributeSet::execOnRep_Mana },
		{ "OnRep_MaxArmor", &UGasBasicAttributeSet::execOnRep_MaxArmor },
		{ "OnRep_MaxHealth", &UGasBasicAttributeSet::execOnRep_MaxHealth },
		{ "OnRep_MaxMana", &UGasBasicAttributeSet::execOnRep_MaxMana },
		{ "OnRep_MaxShield", &UGasBasicAttributeSet::execOnRep_MaxShield },
		{ "OnRep_MeleeDamage", &UGasBasicAttributeSet::execOnRep_MeleeDamage },
		{ "OnRep_ProjectileDamage", &UGasBasicAttributeSet::execOnRep_ProjectileDamage },
		{ "OnRep_Shield", &UGasBasicAttributeSet::execOnRep_Shield },
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
		{ "Comment", "/**\n * Basic Attribute Set for Gameplay Ability System\n * Contains essential attributes: Health, Shield, Armor, Damage types, and Mana\n * All attributes are replicated for multiplayer support\n */" },
#endif
		{ "IncludePath", "GasBasicAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic Attribute Set for Gameplay Ability System\nContains essential attributes: Health, Shield, Armor, Damage types, and Mana\nAll attributes are replicated for multiplayer support" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health Attributes\n" },
#endif
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[] = {
		{ "Category", "Shield" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shield Attributes\n" },
#endif
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shield Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxShield_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[] = {
		{ "Category", "Armor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Armor Attributes\n" },
#endif
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Armor Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxArmor_MetaData[] = {
		{ "Category", "Armor" },
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeDamage_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Damage Attributes\n" },
#endif
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitScanDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Mana" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mana Attributes\n" },
#endif
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mana Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Mana" },
		{ "ModuleRelativePath", "GasBasicAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shield;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxShield;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxArmor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeleeDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitScanDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Armor, "OnRep_Armor" }, // 31374307
		{ &Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Health, "OnRep_Health" }, // 1434043099
		{ &Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_HitScanDamage, "OnRep_HitScanDamage" }, // 1653780196
		{ &Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 2793984117
		{ &Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxArmor, "OnRep_MaxArmor" }, // 1051982156
		{ &Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 2170527760
		{ &Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 1829425462
		{ &Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MaxShield, "OnRep_MaxShield" }, // 2646442906
		{ &Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_MeleeDamage, "OnRep_MeleeDamage" }, // 639941483
		{ &Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_ProjectileDamage, "OnRep_ProjectileDamage" }, // 838596727
		{ &Z_Construct_UFunction_UGasBasicAttributeSet_OnRep_Shield, "OnRep_Shield" }, // 1526775747
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGasBasicAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasBasicAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasBasicAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_Shield = { "Shield", "OnRep_Shield", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasBasicAttributeSet, Shield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shield_MetaData), NewProp_Shield_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_MaxShield = { "MaxShield", "OnRep_MaxShield", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasBasicAttributeSet, MaxShield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxShield_MetaData), NewProp_MaxShield_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_Armor = { "Armor", "OnRep_Armor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasBasicAttributeSet, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Armor_MetaData), NewProp_Armor_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_MaxArmor = { "MaxArmor", "OnRep_MaxArmor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasBasicAttributeSet, MaxArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxArmor_MetaData), NewProp_MaxArmor_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_MeleeDamage = { "MeleeDamage", "OnRep_MeleeDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasBasicAttributeSet, MeleeDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeDamage_MetaData), NewProp_MeleeDamage_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_ProjectileDamage = { "ProjectileDamage", "OnRep_ProjectileDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasBasicAttributeSet, ProjectileDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileDamage_MetaData), NewProp_ProjectileDamage_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_HitScanDamage = { "HitScanDamage", "OnRep_HitScanDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasBasicAttributeSet, HitScanDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitScanDamage_MetaData), NewProp_HitScanDamage_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasBasicAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 1532612004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasBasicAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) }; // 1532612004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGasBasicAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_Shield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_MaxShield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_MaxArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_MeleeDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_ProjectileDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_HitScanDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasBasicAttributeSet_Statics::NewProp_MaxMana,
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
	static FName Name_MaxHealth(TEXT("MaxHealth"));
	static FName Name_Shield(TEXT("Shield"));
	static FName Name_MaxShield(TEXT("MaxShield"));
	static FName Name_Armor(TEXT("Armor"));
	static FName Name_MaxArmor(TEXT("MaxArmor"));
	static FName Name_MeleeDamage(TEXT("MeleeDamage"));
	static FName Name_ProjectileDamage(TEXT("ProjectileDamage"));
	static FName Name_HitScanDamage(TEXT("HitScanDamage"));
	static FName Name_Mana(TEXT("Mana"));
	static FName Name_MaxMana(TEXT("MaxMana"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Shield == ClassReps[(int32)ENetFields_Private::Shield].Property->GetFName()
		&& Name_MaxShield == ClassReps[(int32)ENetFields_Private::MaxShield].Property->GetFName()
		&& Name_Armor == ClassReps[(int32)ENetFields_Private::Armor].Property->GetFName()
		&& Name_MaxArmor == ClassReps[(int32)ENetFields_Private::MaxArmor].Property->GetFName()
		&& Name_MeleeDamage == ClassReps[(int32)ENetFields_Private::MeleeDamage].Property->GetFName()
		&& Name_ProjectileDamage == ClassReps[(int32)ENetFields_Private::ProjectileDamage].Property->GetFName()
		&& Name_HitScanDamage == ClassReps[(int32)ENetFields_Private::HitScanDamage].Property->GetFName()
		&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
		&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName();
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
		{ Z_Construct_UClass_UGasBasicAttributeSet, UGasBasicAttributeSet::StaticClass, TEXT("UGasBasicAttributeSet"), &Z_Registration_Info_UClass_UGasBasicAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGasBasicAttributeSet), 1136574673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h__Script_GasBasic_2777990485(TEXT("/Script/GasBasic"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h__Script_GasBasic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h__Script_GasBasic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
