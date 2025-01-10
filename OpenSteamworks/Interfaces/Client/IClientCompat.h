//==========================  Open Steamworks  ================================
//
// This file is part of the Open Steamworks project. All individuals associated
// with this project do not claim ownership of the contents
// 
// The code, comments, and all related files, projects, resources,
// redistributables included with this project are Copyright Valve Corporation.
// Additionally, Valve, the Valve logo, Half-Life, the Half-Life logo, the
// Lambda logo, Steam, the Steam logo, Team Fortress, the Team Fortress logo,
// Opposing Force, Day of Defeat, the Day of Defeat logo, Counter-Strike, the
// Counter-Strike logo, Source, the Source logo, and Counter-Strike Condition
// Zero are trademarks and or registered trademarks of Valve Corporation.
// All other trademarks are property of their respective owners.
//
//=============================================================================

#ifndef ICLIENTCOMPAT_H
#define ICLIENTCOMPAT_H
#ifdef _WIN32
#pragma once
#endif

#include "Types/ClientCompatCommon.hpp"
#include "Types/SteamTypes.h"
#include "Types/ForwardDeclaredCommon.hpp"
#include "Types/RemoteStorageCommon.h"

class IClientCompat
{
public:
    virtual unknown_ret BIsCompatLayerEnabled() = 0;
    virtual unknown_ret EnableCompat(bool) = 0;
    virtual unknown_ret GetAvailableCompatTools(CUtlVector<CUtlString, CUtlMemory<CUtlString> >*) = 0;
    virtual unknown_ret GetAvailableCompatToolsFiltered(CUtlVector<CUtlString, CUtlMemory<CUtlString> >*, ERemoteStoragePlatform) = 0;
    virtual unknown_ret GetAvailableCompatToolsForApp(CUtlVector<CUtlString, CUtlMemory<CUtlString> >*, uint32) = 0;
    virtual unknown_ret SpecifyCompatTool(uint32, const char*, const char*, int32) = 0;
    virtual unknown_ret BIsCompatibilityToolEnabled(uint32) = 0;
    virtual unknown_ret GetCompatToolName(uint32) = 0;
    virtual unknown_ret GetCompatToolMappingPriority(uint32) = 0;
    virtual unknown_ret GetCompatToolDisplayName(const char*) = 0;
    virtual unknown_ret GetWhitelistedGameList(CUtlVector<AppWhitelistSetting_t, CUtlMemory<AppWhitelistSetting_t> >*) = 0;
    virtual unknown_ret GetControllerConfigOverrides(CUtlVector<AppControllerConfigOverride_t, CUtlMemory<AppControllerConfigOverride_t> >*) = 0;
    virtual unknown_ret StartSession(uint32) = 0;
    virtual unknown_ret ReleaseSession(uint32, uint64) = 0;
    virtual unknown_ret DeleteCompatData(uint32) = 0;
};

#endif // ICLIENTCOMPAT_H
