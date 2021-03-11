# Blood 2 for VS2019

[Original Readme.txt](./Readme_Monolith.txt)

This is the minimum I've found to get it compiling in VS2019. Note that it's suppressing over 5000 warnings by defining _CRT_SECURE_NO_WARNINGS and NO_STRICT.

- The Nightmares expansion needs both _ADD_ON *and* _ADDON defined
- To compile the demo, put "_DEMO" on the non-Nightmares preprocessor list

## Changes from original source
- B2_LITE (Shared/SharedDefs.h) has been unset to enable extra effects and sounds
- CWeaponFX::GetImpactSound has been rewritten to fix a memory access write violation (includes adding s_FileBuffer in Shared/ClientServerShared.h)
- ENCRYPT_CHEATS set to 0, CCheatMgr::Decrypt causes a memory access write violation
- A lot of variable fallthroughs have been fixed, mostly in ClientShellDLL/*FX.cpp
- Fixed an equality check that was an assignment in the FlagStand class
- Fixed incorrect stride in a loop in CPolyGridFX
- Fixed a CNewStatusBar array not being deleted correctly
- Fixed Script constructor initializing beyond array bounds
- CGameSpyMgr stubbed out so server can link