#include "GasBasicAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"

UGasBasicAttributeSet::UGasBasicAttributeSet()
{
	// Initialize default values
	InitHealth(100.0f);
	InitMaxHealth(100.0f);
	InitShield(0.0f);
	InitMaxShield(50.0f);
	InitArmor(0.0f);
	InitMaxArmor(100.0f);
	InitMeleeDamage(10.0f);
	InitProjectileDamage(15.0f);
	InitHitScanDamage(20.0f);
	InitMana(50.0f);
	InitMaxMana(100.0f);
}

void UGasBasicAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UGasBasicAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGasBasicAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGasBasicAttributeSet, Shield, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGasBasicAttributeSet, MaxShield, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGasBasicAttributeSet, Armor, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGasBasicAttributeSet, MaxArmor, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGasBasicAttributeSet, MeleeDamage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGasBasicAttributeSet, ProjectileDamage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGasBasicAttributeSet, HitScanDamage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGasBasicAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGasBasicAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
}

void UGasBasicAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	// Clamp values to reasonable ranges
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
	}
	else if (Attribute == GetMaxHealthAttribute())
	{
		NewValue = FMath::Max(NewValue, 1.0f); // Minimum 1 health
	}
	else if (Attribute == GetShieldAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxShield());
	}
	else if (Attribute == GetMaxShieldAttribute())
	{
		NewValue = FMath::Max(NewValue, 0.0f);
	}
	else if (Attribute == GetArmorAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxArmor());
	}
	else if (Attribute == GetMaxArmorAttribute())
	{
		NewValue = FMath::Max(NewValue, 0.0f);
	}
	else if (Attribute == GetMeleeDamageAttribute() || Attribute == GetProjectileDamageAttribute() || Attribute == GetHitScanDamageAttribute())
	{
		NewValue = FMath::Max(NewValue, 0.0f);
	}
	else if (Attribute == GetManaAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxMana());
	}
	else if (Attribute == GetMaxManaAttribute())
	{
		NewValue = FMath::Max(NewValue, 0.0f);
	}
}

void UGasBasicAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* Source = Context.GetOriginalInstigatorAbilitySystemComponent();
	const FGameplayTagContainer& SourceTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();

	// Compute the delta between old and new, if it is available
	float DeltaValue = 0;
	if (Data.EvaluatedData.ModifierOp == EGameplayModOp::Type::Additive)
	{
		// If this was additive, store the raw delta value to be passed along later
		DeltaValue = Data.EvaluatedData.Magnitude;
	}

	// Get the Target actor, which should be the owner of this set
	AActor* TargetActor = nullptr;
	AController* TargetController = nullptr;
	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
	}

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		// Handle health changes - clamp to max health
		SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));
	}
	else if (Data.EvaluatedData.Attribute == GetMaxHealthAttribute())
	{
		// Handle max health changes - adjust current health if needed
		AdjustAttributeForMaxChange(Health, MaxHealth, GetMaxHealth(), GetHealthAttribute());
	}
	else if (Data.EvaluatedData.Attribute == GetShieldAttribute())
	{
		// Handle shield changes - clamp to max shield
		SetShield(FMath::Clamp(GetShield(), 0.0f, GetMaxShield()));
	}
	else if (Data.EvaluatedData.Attribute == GetMaxShieldAttribute())
	{
		// Handle max shield changes - adjust current shield if needed
		AdjustAttributeForMaxChange(Shield, MaxShield, GetMaxShield(), GetShieldAttribute());
	}
	else if (Data.EvaluatedData.Attribute == GetArmorAttribute())
	{
		// Handle armor changes - clamp to max armor
		SetArmor(FMath::Clamp(GetArmor(), 0.0f, GetMaxArmor()));
	}
	else if (Data.EvaluatedData.Attribute == GetMaxArmorAttribute())
	{
		// Handle max armor changes - adjust current armor if needed
		AdjustAttributeForMaxChange(Armor, MaxArmor, GetMaxArmor(), GetArmorAttribute());
	}
	else if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		// Handle mana changes - clamp to max mana
		SetMana(FMath::Clamp(GetMana(), 0.0f, GetMaxMana()));
	}
	else if (Data.EvaluatedData.Attribute == GetMaxManaAttribute())
	{
		// Handle max mana changes - adjust current mana if needed
		AdjustAttributeForMaxChange(Mana, MaxMana, GetMaxMana(), GetManaAttribute());
	}
	else if (Data.EvaluatedData.Attribute == GetMeleeDamageAttribute())
	{
		// Handle melee damage changes
		SetMeleeDamage(FMath::Max(GetMeleeDamage(), 0.0f));
	}
	else if (Data.EvaluatedData.Attribute == GetProjectileDamageAttribute())
	{
		// Handle projectile damage changes
		SetProjectileDamage(FMath::Max(GetProjectileDamage(), 0.0f));
	}
	else if (Data.EvaluatedData.Attribute == GetHitScanDamageAttribute())
	{
		// Handle hit scan damage changes
		SetHitScanDamage(FMath::Max(GetHitScanDamage(), 0.0f));
	}
}

void UGasBasicAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGasBasicAttributeSet, Health, OldHealth);
}

void UGasBasicAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGasBasicAttributeSet, MaxHealth, OldMaxHealth);
}

void UGasBasicAttributeSet::OnRep_Shield(const FGameplayAttributeData& OldShield)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGasBasicAttributeSet, Shield, OldShield);
}

void UGasBasicAttributeSet::OnRep_MaxShield(const FGameplayAttributeData& OldMaxShield)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGasBasicAttributeSet, MaxShield, OldMaxShield);
}

void UGasBasicAttributeSet::OnRep_Armor(const FGameplayAttributeData& OldArmor)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGasBasicAttributeSet, Armor, OldArmor);
}

void UGasBasicAttributeSet::OnRep_MaxArmor(const FGameplayAttributeData& OldMaxArmor)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGasBasicAttributeSet, MaxArmor, OldMaxArmor);
}

void UGasBasicAttributeSet::OnRep_MeleeDamage(const FGameplayAttributeData& OldMeleeDamage)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGasBasicAttributeSet, MeleeDamage, OldMeleeDamage);
}

void UGasBasicAttributeSet::OnRep_ProjectileDamage(const FGameplayAttributeData& OldProjectileDamage)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGasBasicAttributeSet, ProjectileDamage, OldProjectileDamage);
}

void UGasBasicAttributeSet::OnRep_HitScanDamage(const FGameplayAttributeData& OldHitScanDamage)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGasBasicAttributeSet, HitScanDamage, OldHitScanDamage);
}

void UGasBasicAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGasBasicAttributeSet, Mana, OldMana);
}

void UGasBasicAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGasBasicAttributeSet, MaxMana, OldMaxMana);
}

void UGasBasicAttributeSet::AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty)
{
	UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
	const float CurrentMaxValue = MaxAttribute.GetCurrentValue();
	if (!FMath::IsNearlyEqual(CurrentMaxValue, NewMaxValue) && AbilityComp)
	{
		// Change current value to maintain the current Val / Max percent
		const float CurrentValue = AffectedAttribute.GetCurrentValue();
		float NewDelta = (CurrentMaxValue > 0.f) ? (CurrentValue * NewMaxValue / CurrentMaxValue) - CurrentValue : NewMaxValue;

		AbilityComp->ApplyModToAttributeUnsafe(AffectedAttributeProperty, EGameplayModOp::Additive, NewDelta);
	}
}
