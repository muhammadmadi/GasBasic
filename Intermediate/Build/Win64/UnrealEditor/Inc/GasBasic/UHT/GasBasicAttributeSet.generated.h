// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GasBasicAttributeSet.h"

#ifdef GASBASIC_GasBasicAttributeSet_generated_h
#error "GasBasicAttributeSet.generated.h already included, missing '#pragma once' in GasBasicAttributeSet.h"
#endif
#define GASBASIC_GasBasicAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayAttributeData;

// ********** Begin Class UGasBasicAttributeSet ****************************************************
#define FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_HitScanDamage); \
	DECLARE_FUNCTION(execOnRep_ProjectileDamage); \
	DECLARE_FUNCTION(execOnRep_MeleeDamage); \
	DECLARE_FUNCTION(execOnRep_MaxArmor); \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_MaxShield); \
	DECLARE_FUNCTION(execOnRep_Shield); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


GASBASIC_API UClass* Z_Construct_UClass_UGasBasicAttributeSet_NoRegister();

#define FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGasBasicAttributeSet(); \
	friend struct Z_Construct_UClass_UGasBasicAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GASBASIC_API UClass* Z_Construct_UClass_UGasBasicAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UGasBasicAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GasBasic"), Z_Construct_UClass_UGasBasicAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UGasBasicAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Shield, \
		MaxShield, \
		Armor, \
		MaxArmor, \
		MeleeDamage, \
		ProjectileDamage, \
		HitScanDamage, \
		Mana, \
		MaxMana, \
		NETFIELD_REP_END=MaxMana	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UGasBasicAttributeSet) \
public:


#define FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGasBasicAttributeSet(UGasBasicAttributeSet&&) = delete; \
	UGasBasicAttributeSet(const UGasBasicAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGasBasicAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGasBasicAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGasBasicAttributeSet) \
	NO_API virtual ~UGasBasicAttributeSet();


#define FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h_22_PROLOG
#define FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h_25_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGasBasicAttributeSet;

// ********** End Class UGasBasicAttributeSet ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_testgas_Plugins_GasBasic_Source_GasBasic_GasBasicAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
