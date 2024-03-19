// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WwiseShooting : ModuleRules
{
	public WwiseShooting(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "AkAudio", "WwiseSoundEngine" });
	}
}
