# GAS Basic Plugin - Complete Documentation

## Overview

The GAS Basic plugin provides a comprehensive Gameplay Ability System (GAS) attribute set for Unreal Engine 5.6+. It includes 11 essential attributes organized into logical categories for health, defense, damage, and resources.

## Attribute Categories

### 🩺 Health System
- **Health**: Current character vitality
- **MaxHealth**: Maximum health capacity

### 🛡️ Defense Systems
- **Shield**: Current shield protection (energy-based defense)
- **MaxShield**: Maximum shield capacity
- **Armor**: Current armor protection (physical defense)
- **MaxArmor**: Maximum armor capacity

### ⚔️ Damage Types
- **MeleeDamage**: Close combat damage output
- **ProjectileDamage**: Projectile weapon damage output
- **HitScanDamage**: Instant hit weapon damage output

### 🔮 Resource System
- **Mana**: Current magical/ability resource
- **MaxMana**: Maximum mana capacity

## Detailed Attribute Reference

### Health Attributes

#### Health
- **Type**: Current Value
- **Range**: 0.0 to MaxHealth
- **Default**: 100.0
- **Purpose**: Character's current vitality
- **Behavior**: 
  - Automatically clamped to MaxHealth
  - When reaches 0, character should be considered defeated
  - Adjusts proportionally when MaxHealth changes

#### MaxHealth
- **Type**: Maximum Value
- **Range**: 1.0+ (minimum 1 health)
- **Default**: 100.0
- **Purpose**: Maximum health capacity
- **Behavior**: 
  - When changed, current Health adjusts proportionally
  - Cannot be set below 1.0

### Shield Attributes

#### Shield
- **Type**: Current Value
- **Range**: 0.0 to MaxShield
- **Default**: 0.0 (starts empty)
- **Purpose**: Energy-based protection that absorbs damage before health
- **Behavior**: 
  - Automatically clamped to MaxShield
  - Typically regenerates over time
  - Should be depleted before health takes damage

#### MaxShield
- **Type**: Maximum Value
- **Range**: 0.0+
- **Default**: 50.0
- **Purpose**: Maximum shield capacity
- **Behavior**: 
  - When changed, current Shield adjusts proportionally
  - Can be 0 for characters without shields

### Armor Attributes

#### Armor
- **Type**: Current Value
- **Range**: 0.0 to MaxArmor
- **Default**: 0.0 (starts unarmored)
- **Purpose**: Physical protection that reduces incoming damage
- **Behavior**: 
  - Automatically clamped to MaxArmor
  - Can be damaged and repaired
  - Provides damage reduction calculations

#### MaxArmor
- **Type**: Maximum Value
- **Range**: 0.0+
- **Default**: 100.0
- **Purpose**: Maximum armor capacity
- **Behavior**: 
  - When changed, current Armor adjusts proportionally
  - Can be 0 for unarmored characters

### Damage Attributes

#### MeleeDamage
- **Type**: Damage Output
- **Range**: 0.0+
- **Default**: 10.0
- **Purpose**: Base damage for melee attacks (swords, fists, etc.)
- **Usage**: Used in melee attack calculations

#### ProjectileDamage
- **Type**: Damage Output
- **Range**: 0.0+
- **Default**: 15.0
- **Purpose**: Base damage for projectile weapons (arrows, bullets, etc.)
- **Usage**: Used in projectile attack calculations

#### HitScanDamage
- **Type**: Damage Output
- **Range**: 0.0+
- **Default**: 20.0
- **Purpose**: Base damage for instant hit weapons (lasers, sniper rifles, etc.)
- **Usage**: Used in hitscan attack calculations

### Mana Attributes

#### Mana
- **Type**: Current Value
- **Range**: 0.0 to MaxMana
- **Default**: 50.0
- **Purpose**: Current magical/ability resource
- **Behavior**: 
  - Automatically clamped to MaxMana
  - Consumed when using abilities
  - Typically regenerates over time

#### MaxMana
- **Type**: Maximum Value
- **Range**: 0.0+
- **Default**: 100.0
- **Purpose**: Maximum mana capacity
- **Behavior**: 
  - When changed, current Mana adjusts proportionally
  - Can be 0 for non-magical characters

## Network Replication

All attributes are fully replicated for multiplayer support:
- **Replication Condition**: COND_None (always replicate)
- **RepNotify**: REPNOTIFY_Always (always notify on changes)
- **Authority**: Server authoritative with client prediction support

## Usage Examples

### Basic Attribute Access
```cpp
// Get current values
float CurrentHealth = AttributeSet->GetHealth();
float CurrentShield = AttributeSet->GetShield();
float MeleeDmg = AttributeSet->GetMeleeDamage();

// Get maximum values
float MaxHP = AttributeSet->GetMaxHealth();
float MaxShield = AttributeSet->GetMaxShield();
```

### Damage Calculation Example
```cpp
// Calculate total damage output
float TotalMeleeDamage = AttributeSet->GetMeleeDamage() * WeaponMultiplier;

// Apply damage with shield/armor consideration
float IncomingDamage = 50.0f;
float CurrentShield = AttributeSet->GetShield();
float CurrentArmor = AttributeSet->GetArmor();

// Damage shields first
if (CurrentShield > 0)
{
    float ShieldDamage = FMath::Min(IncomingDamage, CurrentShield);
    // Apply shield damage via Gameplay Effect
    IncomingDamage -= ShieldDamage;
}

// Apply armor reduction to remaining damage
if (IncomingDamage > 0 && CurrentArmor > 0)
{
    float ArmorReduction = CurrentArmor * 0.01f; // 1% reduction per armor point
    IncomingDamage *= (1.0f - ArmorReduction);
}

// Apply remaining damage to health
if (IncomingDamage > 0)
{
    // Apply health damage via Gameplay Effect
}
```

### Resource Management
```cpp
// Check if player has enough mana for ability
float AbilityCost = 25.0f;
if (AttributeSet->GetMana() >= AbilityCost)
{
    // Apply mana cost via Gameplay Effect
    // Execute ability
}
```

## Integration Tips

1. **Create Gameplay Effects** for each attribute modification
2. **Use Blueprint nodes** to access attributes in Blueprint graphs
3. **Implement UI widgets** that bind to attribute changes
4. **Set up damage calculation systems** using the different damage types
5. **Create regeneration systems** for Shield and Mana
6. **Implement armor degradation** mechanics if desired

## Best Practices

- Always modify attributes through Gameplay Effects, not directly
- Use the appropriate damage type for different weapon categories
- Implement proper damage order: Shield → Armor reduction → Health
- Consider mana regeneration rates for balanced gameplay
- Use RepNotify functions to update UI elements
- Clamp values appropriately in your Gameplay Effects
