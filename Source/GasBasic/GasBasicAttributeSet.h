#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

#include "GasBasicAttributeSet.generated.h"

// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * Basic Attribute Set for Gameplay Ability System
 * Contains essential attributes: Health, Shield, Armor, Damage types, and Mana
 * All attributes are replicated for multiplayer support
 */
UCLASS(BlueprintType, Blueprintable)
class GASBASIC_API UGasBasicAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UGasBasicAttributeSet();

	// AttributeSet Overrides
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	// Health Attributes
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health, Category = "Health")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UGasBasicAttributeSet, Health);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealth, Category = "Health")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UGasBasicAttributeSet, MaxHealth);

	// Shield Attributes
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Shield, Category = "Shield")
	FGameplayAttributeData Shield;
	ATTRIBUTE_ACCESSORS(UGasBasicAttributeSet, Shield);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxShield, Category = "Shield")
	FGameplayAttributeData MaxShield;
	ATTRIBUTE_ACCESSORS(UGasBasicAttributeSet, MaxShield);

	// Armor Attributes
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Armor, Category = "Armor")
	FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS(UGasBasicAttributeSet, Armor);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxArmor, Category = "Armor")
	FGameplayAttributeData MaxArmor;
	ATTRIBUTE_ACCESSORS(UGasBasicAttributeSet, MaxArmor);

	// Damage Attributes
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MeleeDamage, Category = "Damage")
	FGameplayAttributeData MeleeDamage;
	ATTRIBUTE_ACCESSORS(UGasBasicAttributeSet, MeleeDamage);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_ProjectileDamage, Category = "Damage")
	FGameplayAttributeData ProjectileDamage;
	ATTRIBUTE_ACCESSORS(UGasBasicAttributeSet, ProjectileDamage);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_HitScanDamage, Category = "Damage")
	FGameplayAttributeData HitScanDamage;
	ATTRIBUTE_ACCESSORS(UGasBasicAttributeSet, HitScanDamage);

	// Mana Attributes
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Mana, Category = "Mana")
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UGasBasicAttributeSet, Mana);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxMana, Category = "Mana")
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UGasBasicAttributeSet, MaxMana);

protected:
	// Rep notifies
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldHealth);
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	UFUNCTION()
	void OnRep_Shield(const FGameplayAttributeData& OldShield);
	UFUNCTION()
	void OnRep_MaxShield(const FGameplayAttributeData& OldMaxShield);

	UFUNCTION()
	void OnRep_Armor(const FGameplayAttributeData& OldArmor);
	UFUNCTION()
	void OnRep_MaxArmor(const FGameplayAttributeData& OldMaxArmor);

	UFUNCTION()
	void OnRep_MeleeDamage(const FGameplayAttributeData& OldMeleeDamage);
	UFUNCTION()
	void OnRep_ProjectileDamage(const FGameplayAttributeData& OldProjectileDamage);
	UFUNCTION()
	void OnRep_HitScanDamage(const FGameplayAttributeData& OldHitScanDamage);

	UFUNCTION()
	void OnRep_Mana(const FGameplayAttributeData& OldMana);
	UFUNCTION()
	void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);

private:
	// Helper function to handle attribute changes
	void AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty);
};
