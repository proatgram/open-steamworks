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

#pragma once

#include "Types/SteamTypes.h"


typedef enum EDepotBuildStatus {
	k_EDepotBuildStatusInvalid = 0,
	k_EDepotBuildStatusProcessingConfig = 1,
	k_EDepotBuildStatusBuildingFileList = 2,
	k_EDepotBuildStatusProcessingData = 3,
	k_EDepotBuildStatusUploadingData = 4,
	k_EDepotBuildStatusCompleted = 5,
	k_EDepotBuildStatusFailed = 6,
}  EDepotBuildStatus;

//-----------------------------------------------------------------------------
// Purpose: Status of a given depot version, these are stored in the DB, don't renumber
//-----------------------------------------------------------------------------
enum EStatusDepotVersion {
	k_EStatusDepotVersionInvalid = 0,			
	k_EStatusDepotVersionDisabled = 1,			// version was disabled, no manifest & content available
	k_EStatusDepotVersionAvailable = 2,			// manifest & content is available, but not current
	k_EStatusDepotVersionCurrent = 3,			// current depot version. The can be multiple, one for public and one for each beta key
};

typedef uint32 HDEPOTBUILD;
