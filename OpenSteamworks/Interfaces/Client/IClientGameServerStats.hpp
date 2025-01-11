            /*****************************  Open SteamWorks  *********************************/
            /*                                                                               */
            /*  This file is part of the Open SteamWorks project. All individuals associated */
            /*  with this project do not claim ownership of the contents                     */
            /*                                                                               */
            /*  The code, comments, and all related files, projects, resources,              */
            /*  redistributables included with this project are Copyright Valve Corporation. */
            /*  Additionally, Valve, the Valve logo, Half-Life, the Half-Life logo, the      */
            /*  Lambda logo, Steam, the Steam logo, Team Fortress, the Team Fortress logo,   */
            /*  Opposing Force, Day of Defeat, the Day of Defeat logo, Counter-Strike, the   */
            /*  Counter-Strike logo, Source, the Source logo, and Counter-Strike Condition   */
            /*  Zero are trademarks and or registered trademarks of Valve Corporation.       */
            /*  All other trademarks are property of their respective owners.                */
            /*                                                                               */
            /*********************************  NOTICE!  *************************************/
            /*                                                                               */
            /*  This is auto-generated code! There may be problems with it or it may be      */
            /*  wrong. Use at your own risk!                                                 */
            /*                                                                               */
            /*********************************************************************************/

#pragma once

#include "Types/GameServerStatsCommon.hpp"
#include "Types/SteamTypes.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientGameServerStats {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2772484533
	*/
	virtual auto ClearUserAchievement(CSteamID steamIDUser, CGameID gameID, const char *pchName) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8, string]
	 *	[bytes1, bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3317360043
	*/
	virtual auto GetUserAchievement(CSteamID steamIDUser, CGameID gameID, const char *pchName, bool *pbAchieved, RTime32 *prtTime) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8, string]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1272876652
	*/
	virtual auto GetUserStat(CSteamID steamIDUser, CGameID gameID, const char *pchName, int32 *pData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8, string]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1272876652
	*/
	virtual auto GetUserStat(CSteamID steamIDUser, CGameID gameID, const char *pchName, float *pData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	9157351
	*/
	virtual auto RequestUserStats(CSteamID steamIDUser, CGameID gameID) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2851745680
	*/
	virtual auto SetMaxStatsLoaded(uint32 uMax) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4039828526
	*/
	virtual auto SetUserAchievement(CSteamID steamIDUser, CGameID gameID, const char *pchName) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8, string, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3223270861
	*/
	virtual auto SetUserStat(CSteamID steamIDUser, CGameID gameID, const char *pchName, int32 nData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8, string, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3223270861
	*/
	virtual auto SetUserStat(CSteamID steamIDUser, CGameID gameID, const char *pchName, float fData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2679117443
	*/
	virtual auto StoreUserStats(CSteamID steamIDUser, CGameID gameID) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8, string, bytes4, bytes8]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3693240981
	*/
	virtual auto UpdateUserAvgRateStat(CSteamID steamIDUser, CGameID gameID, const char *pchName, float flCountThisSession, double dSessionLength) -> bool = 0;


};
