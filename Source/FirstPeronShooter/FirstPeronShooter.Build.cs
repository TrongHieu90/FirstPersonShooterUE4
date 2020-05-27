// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FirstPeronShooter : ModuleRules
{
	public FirstPeronShooter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
