// Copyright GameDriver, Inc. All Rights Reserved.

using System;
using System.IO;
using UnrealBuildTool;


public class HPathDebugger : ModuleRules {
	public HPathDebugger(ReadOnlyTargetRules Target) : base(Target) {
       
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        DefaultBuildSettings = BuildSettingsVersion.Latest;
       // if (Target.Version.MajorVersion == 4)
        {
            CppStandard = CppStandardVersion.Cpp17;
        }


        OptimizeCode = CodeOptimization.Never;
        

        //bPrecompile = true;
        ////PrecompileForTargets = PrecompileTargetsType.Any;
bUsePrecompiled = true;


        PublicIncludePaths.AddRange(new string[] { Path.Combine(ModuleDirectory, "Public") });

		PrivateIncludePaths.AddRange(new string[] { Path.Combine(ModuleDirectory, "Private") });

        
        PublicDependencyModuleNames.AddRange(new string[] {
			"ApplicationCore","Core", "GameDriver", "SceneOutliner", "LevelEditor", "WorldBrowser", "Kismet", "ToolMenus", "GameDriver","EnhancedInput","HeadMountedDisplay","InputCore","XmlParser"
            //,"XRBase"
        });

		PrivateDependencyModuleNames.AddRange(new string[] {
           "CoreUObject","Engine","InputCore", 
            "Blutility",
            "EditorScriptingUtilities",
            "AIModule",
			"AssetRegistry",
			"HeadMountedDisplay",
			"UMG",
			"Slate",
			"SlateCore", "DeveloperSettings","GameDriver", "DesktopPlatform", "EnhancedInput", "EditorScriptingUtilities"
            
        });

        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(new string[] {
                "UnrealEd","EditorWidgets","EditorStyle","UMGEditor"
            });
        }
       
    }
}