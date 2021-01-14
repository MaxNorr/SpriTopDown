// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SpriTopDown : ModuleRules
{
	public SpriTopDown(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
				"Core", 
				"CoreUObject", 
				"Engine", 
				"InputCore", 
				"HeadMountedDisplay",
				"GameplayTags"
			}
		);

		PrivateDependencyModuleNames.AddRange(new string[] {
				"GameplayAbilities",
				"GameplayAbilitiesEditor",
				"GameplayTags",
				"GameplayTagsEditor",
				"GameplayTasks"
			}
		);
	}
}
