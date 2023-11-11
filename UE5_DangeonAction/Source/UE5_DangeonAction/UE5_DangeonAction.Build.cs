// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_DangeonAction : ModuleRules
{
	public UE5_DangeonAction(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
