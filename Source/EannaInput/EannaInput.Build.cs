using UnrealBuildTool;

public class EannaInput : ModuleRules
{
    public EannaInput(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "EnhancedInput", 
                "GameplayTags",
                "GameplayAbilities",
                "EannaGameplayAbilitySystem"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "EannaGameplayTags"
            }
        );
    }
}