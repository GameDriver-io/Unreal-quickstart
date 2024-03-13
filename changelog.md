# Changelog for GameDriver for Unity releases

## 10-22-2023 Version 2023.10
- *Added blueprint Api* for Gamedriver 
 - Simulate Touch in blueprints
 - Use HierarchyPath to access objects
- Added a C++ APi, for those using Unreal's test framework in C++.
- Added support for USceneComponent with FindLookAtRotation()
- Added GetObjectPosition support on components. 
- Added Node Locking functionality and Licence Panel in editor.
- Added the ability to access user defined struct variables
- Added the ability get and set TArray fields.
- Added the ability read TSet fields. 
- Added the ability read TMap<int,int> as a Dictionary. Also works for Enums. 
- Added Vector2D, Quat and Transform support to SetFieldValue. 
- Refactored recorder for improved performance
- Better implementation of analog events in enhanced mode. 
- bug fixes related to unique-Ptr handling
- bug fix for handling inputFloat
- bug fix for editor tools getting component hpath and method
- Fixed Int64 values being serialized/deserialized 
- Fixed waitforobjectvalue on mac
- Fixed Tap on mobile UI elements.
- Fixed GetObjectFieldValue() not resolving Color field
- fixes to editor tools REPL tool
- fixed touch offset in windowed editor mode.
- Various compilation fixes for mobile. 
- Updated docs
