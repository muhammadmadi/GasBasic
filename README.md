# GAS Basic Plugin

Comprehensive Gameplay Ability System (GAS) attribute set for Unreal Engine 5.6+ with 11 essential attributes covering health, defense, damage types, and resources.

## Features

- **UGasBasicAttributeSet**: Complete attribute set with 11 attributes organized in logical categories
- **Health System**: Health and MaxHealth with proper clamping
- **Defense Systems**: Shield/MaxShield and Armor/MaxArmor for layered protection
- **Damage Types**: MeleeDamage, ProjectileDamage, and HitScanDamage for different weapon types
- **Resource System**: Mana and MaxMana for abilities and magic
- **Network Replication**: Full multiplayer support with RepNotify functions
- **Precompiled Binaries**: Ready to use without recompilation in UE 5.6 projects  
- **C++ Source Code**: Clean, well-documented source included for customization
- **Blueprint Integration**: All attributes are Blueprint-accessible

## Installation

### Method 1: Plugin Folder Installation (Recommended)
1. Copy the entire `GasBasic` folder to your project's `Plugins` directory
2. If the `Plugins` folder doesn't exist in your project root, create it
3. Restart Unreal Editor
4. Enable the plugin in Edit → Plugins → Gameplay → GAS Basic

### Method 2: Engine Plugins Installation (Global)
1. Copy the `GasBasic` folder to `[UE5_Installation]/Engine/Plugins/Marketplace/`
2. The plugin will be available in all projects

## Quick Start

1. **Enable Required Plugins**:
   - GameplayAbilities (should be enabled automatically)

2. **Use the Attribute Set**:
   - Add `UGasBasicAttributeSet` to your character's Ability System Component
   - Access all 11 attributes for your gameplay systems
   - Create Gameplay Effects to modify these attributes

## Attribute Overview

### 🩺 Health System
- **Health** (0-MaxHealth): Current character vitality
- **MaxHealth** (1+): Maximum health capacity

### 🛡️ Defense Systems  
- **Shield** (0-MaxShield): Energy-based protection
- **MaxShield** (0+): Maximum shield capacity
- **Armor** (0-MaxArmor): Physical damage reduction
- **MaxArmor** (0+): Maximum armor capacity

### ⚔️ Damage Types
- **MeleeDamage** (0+): Close combat damage output
- **ProjectileDamage** (0+): Projectile weapon damage output  
- **HitScanDamage** (0+): Instant hit weapon damage output

### 🔮 Resource System
- **Mana** (0-MaxMana): Current magical/ability resource
- **MaxMana** (0+): Maximum mana capacity

## Usage Example

```cpp
// In your character class, add the attribute set
UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
TObjectPtr<UGasBasicAttributeSet> AttributeSet;

// In constructor
AttributeSet = CreateDefaultSubobject<UGasBasicAttributeSet>(TEXT("AttributeSet"));

// Access attributes
const UGasBasicAttributeSet* GasAttributes = Cast<UGasBasicAttributeSet>(AttributeSet);
float CurrentHealth = GasAttributes->GetHealth();
float MaxHealth = GasAttributes->GetMaxHealth();
float Shield = GasAttributes->GetShield();
float MeleeDamage = GasAttributes->GetMeleeDamage();
```

## Default Values

- **Health**: 100 / **MaxHealth**: 100
- **Shield**: 0 / **MaxShield**: 50  
- **Armor**: 0 / **MaxArmor**: 100
- **MeleeDamage**: 10
- **ProjectileDamage**: 15
- **HitScanDamage**: 20
- **Mana**: 50 / **MaxMana**: 100

## Advanced Features

- **Smart Max Attribute Handling**: When MaxHealth changes, Health adjusts proportionally
- **Proper Clamping**: Current values automatically clamped to their maximums
- **Network Authority**: Server-authoritative with client prediction support
- **Blueprint Integration**: All attributes accessible via Blueprint nodes

## Documentation

- **PLUGIN_DOCUMENTATION.md**: Complete attribute reference and usage examples
- **Inline Comments**: Detailed code documentation
- **Blueprint Categories**: Attributes organized by logical categories

## Requirements

- Unreal Engine 5.6+
- GameplayAbilities plugin enabled

## Compatibility

- **Platforms**: Windows, Mac, Linux
- **Network**: Multiplayer ready with replication
- **Blueprint**: Full Blueprint support

## Extending the Plugin

This plugin provides a comprehensive foundation for GAS implementation. You can:

1. **Create Gameplay Effects** that modify these attributes
2. **Build damage calculation systems** using the different damage types
3. **Implement shield/armor mechanics** with proper damage ordering
4. **Add regeneration systems** for Shield and Mana
5. **Create UI widgets** that display attribute values

## Support

This plugin provides a complete, production-ready attribute system for most game types. Build upon it by creating custom Gameplay Effects and Abilities as needed for your project.
