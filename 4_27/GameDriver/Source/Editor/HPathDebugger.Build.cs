/*
 *  Gamedriver HPath debugger
 */

using System;
using System.IO;
using UnrealBuildTool;


public class HPathDebugger : ModuleRules {
	public HPathDebugger(ReadOnlyTargetRules Target) : base(Target) {
        CppStandard = CppStandardVersion.Cpp17;
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

       // bForceUnityBuild = false;
        // 	bUsePrecompiled = true;

        OptimizeCode = CodeOptimization.Never;
        

        //bPrecompile = true;
        ////PrecompileForTargets = PrecompileTargetsType.Any;
bUsePrecompiled = true;


        PublicIncludePaths.AddRange(new string[] { Path.Combine(ModuleDirectory, "Public") });

		PrivateIncludePaths.AddRange(new string[] { Path.Combine(ModuleDirectory, "Private") });

        
        PublicDependencyModuleNames.AddRange(new string[] {
			"Core", "GameDriver", "SceneOutliner", "LevelEditor", "WorldBrowser", "Kismet", "ToolMenus", "GameDriver","EnhancedInput","HeadMountedDisplay","InputCore","XmlParser"
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
        /*
        DynamicallyLoadedModuleNames.AddRange(new string[] {});

        string[] files = Directory.GetFiles(Path.Combine(ModuleDirectory, "../../Managed"), "*.*", SearchOption.AllDirectories);

        foreach (string file in files)
        {
            RuntimeDependencies.Add(file);
        }

        string userAssemblies = Path.Combine(PluginDirectory, "../../Managed");

        if (Directory.Exists(userAssemblies))
        {
            files = Directory.GetFiles(userAssemblies, "*.*", SearchOption.AllDirectories);

            foreach (string file in files)
            {
                RuntimeDependencies.Add(file);
            }
        }
        */
    }
}