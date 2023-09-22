// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EX1 : ModuleRules
{
	public EX1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
