// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using System;
using UnrealBuildTool;



public class GameDriver : ModuleRules
{
	public GameDriver(ReadOnlyTargetRules Target) : base(Target)
	{
       // IncludeOrderVersion = EngineIncludeOrderVersion.Latest;

        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        //PCHUsage = ModuleRules.PCHUsageMode.
       // bUseUnity = true;
        DefaultBuildSettings = BuildSettingsVersion.Latest;
       // if (Target.Version.MajorVersion == 4)
        {
            CppStandard = CppStandardVersion.Cpp17;
           
        }
        //bForceUnityBuild = false;
        // IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_2;
        bEnableExceptions = true;
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

      // PublicSystemLibraries.Add("boost_1_82_0");
        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Projects", "UMG","InputDevice","GDIOXRInput","HeadMountedDisplay","WebSockets",            "Networking"
            }
            );
        if (Target.Version.MajorVersion == 5)
        {
            PublicDependencyModuleNames.AddRange(
                       new string[]
                       {
                "CommonUI"
                       }
                       );
        }
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
                    "Engine",
                    "Slate",
                    "SlateCore",
                    "Sockets",
                    "Networking",
                    "InputCore", "HeadMountedDisplay", "EnhancedInput", "AndroidPermission", "AIModule", "XmlParser"
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

        Type = ModuleType.CPlusPlus;
		PublicIncludePaths.Add(Path.Combine(Path.Combine(ModuleDirectory, ".."), "ThirdParty"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "..", "ThirdParty", "boost_1_82_0"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "..", "ThirdParty", "pugixml-1.13"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "..", "ThirdParty", "compact25519"));
        //if (Target.)		
        //		
        if(Target.Platform == UnrealTargetPlatform.Win64)
        {
            bUseRTTI = true;
        }
        //bUseRTTI = true;


    }
}

