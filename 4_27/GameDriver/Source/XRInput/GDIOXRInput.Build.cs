// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using System;
using UnrealBuildTool;



public class GDIOXRInput : ModuleRules
{
	public GDIOXRInput(ReadOnlyTargetRules Target) : base(Target)
	{

        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        DefaultBuildSettings = BuildSettingsVersion.Latest;
        //if (Target.Version.MajorVersion == 4)
        {
            CppStandard = CppStandardVersion.Cpp17;
        }
        //bForceUnityBuild = false;
        //PCHUsage = ModuleRules.PCHUsageMode.None;
        //bEnableExceptions = true;
        OptimizeCode = CodeOptimization.Never;
        PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);


        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core","CoreUObject", "UMG","InputDevice","AugmentedReality", "InputCore", "EnhancedInput", "HeadMountedDisplay","ApplicationCore","CoreUObject"
              
			}
            );
        if (Target.Version.MajorVersion == 5 && Target.Version.MinorVersion >= 3)
        {
            //IWYUSupport = IWYUSupport.Full;
            PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "XRBase"
            }
            );
        }
        else
        {
            bEnforceIWYU = true;
        }
        PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "ApplicationCore",
                    "UMG",
		            "CoreUObject",
                    "Engine"
                    
                }
            );  


        DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
              // ... add any modules that your module loads dynamically here ...
			}
			);

        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(new string[] {
                "UnrealEd","EditorWidgets","KismetWidgets","UMGEditor"
            });
        }

        OptimizeCode = CodeOptimization.Never;
        //bPrecompile = true;
        ////PrecompileForTargets = PrecompileTargetsType.Any;
bUsePrecompiled = true;

        // 	bUsePrecompiled = true;	
								
      //bUseRTTI = true;


    }
}

