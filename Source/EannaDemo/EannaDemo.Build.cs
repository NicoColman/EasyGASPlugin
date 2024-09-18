using UnrealBuildTool;

public class EannaDemo : ModuleRules
{
    public EannaDemo(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core", 
                "GameplayAbilities", 
                "GameplayTasks",
                "EannaGameplayAbilitySystem",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "EannaGameplayTags"
            }
        );
    }
}