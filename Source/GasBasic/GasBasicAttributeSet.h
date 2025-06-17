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
 * Contains essential attributes: Health, Damage, and Attack Power
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

	// Health Attribute
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health, Category = "Basic Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UGasBasicAttributeSet, Health);

	// Damage Attribute
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Damage, Category = "Basic Attributes")
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UGasBasicAttributeSet, Damage);

	// Attack Power Attribute
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_AttackPower, Category = "Basic Attributes")
	FGameplayAttributeData AttackPower;
	ATTRIBUTE_ACCESSORS(UGasBasicAttributeSet, AttackPower);

protected:
	// Rep notifies
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldHealth);

	UFUNCTION()
	void OnRep_Damage(const FGameplayAttributeData& OldDamage);

	UFUNCTION()
	void OnRep_AttackPower(const FGameplayAttributeData& OldAttackPower);

private:
	// Helper function to handle attribute changes
	void AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty);
};
