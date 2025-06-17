#include "GasBasicAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"

UGasBasicAttributeSet::UGasBasicAttributeSet()
{
	// Initialize default values
	InitHealth(100.0f);
	InitDamage(0.0f);
	InitAttackPower(10.0f);
}

void UGasBasicAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UGasBasicAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGasBasicAttributeSet, Damage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGasBasicAttributeSet, AttackPower, COND_None, REPNOTIFY_Always);
}

void UGasBasicAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	// Clamp values to reasonable ranges
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, 1000.0f);
	}
	else if (Attribute == GetDamageAttribute())
	{
		NewValue = FMath::Max(NewValue, 0.0f);
	}
	else if (Attribute == GetAttackPowerAttribute())
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
		// Handle health changes
		SetHealth(FMath::Clamp(GetHealth(), 0.0f, 1000.0f));
	}
	else if (Data.EvaluatedData.Attribute == GetDamageAttribute())
	{
		// Handle damage - this is typically a meta attribute that gets converted to health reduction
		if (GetDamage() > 0.0f)
		{
			// Convert damage to health reduction
			const float LocalDamage = GetDamage();
			SetDamage(0.0f); // Reset damage to 0
			
			if (LocalDamage > 0.0f)
			{
				// Apply damage to health
				const float NewHealth = GetHealth() - LocalDamage;
				SetHealth(FMath::Clamp(NewHealth, 0.0f, 1000.0f));
			}
		}
	}
	else if (Data.EvaluatedData.Attribute == GetAttackPowerAttribute())
	{
		// Handle attack power changes
		SetAttackPower(FMath::Max(GetAttackPower(), 0.0f));
	}
}

void UGasBasicAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGasBasicAttributeSet, Health, OldHealth);
}

void UGasBasicAttributeSet::OnRep_Damage(const FGameplayAttributeData& OldDamage)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGasBasicAttributeSet, Damage, OldDamage);
}

void UGasBasicAttributeSet::OnRep_AttackPower(const FGameplayAttributeData& OldAttackPower)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGasBasicAttributeSet, AttackPower, OldAttackPower);
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
