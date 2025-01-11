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

#include "Types/SteamTypes.hpp"
#include "Types/UserStatsCommon.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientUserStats {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	992164068
	*/
	virtual auto AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1750807933
	*/
	virtual auto ClearAchievement(CGameID nGameID, const char *pchName) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	919055259
	*/
	virtual auto DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int32 nRangeStart, int32 nRangeEnd) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes_length_from_reg]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2577304158
	*/
	virtual auto DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int32 cUsers) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	557896196
	*/
	virtual auto FindLeaderboard(const char *pchLeaderboardName) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes4, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2279004826
	*/
	virtual auto FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1, bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1878899810
	*/
	virtual auto GetAchievement(CGameID nGameID, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	89050950
	*/
	virtual auto GetAchievementAchievedPercent(CGameID nGameID, const char *pchName, float *pflPercent) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4237710507
	*/
	virtual auto GetAchievementIcon(CGameID nGameID, const char *pchName, EGetAchievementIcon) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1, bytes4, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3393163443
	*/
	virtual auto GetAchievementProgress(CGameID, const char *, float *, float *, float *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[bytes1, bytes28, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2124497368
	*/
	virtual auto GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int32 index, LeaderboardEntry_t *pLeaderboardEntry, int32 pDetails[], int32 cDetailsMax) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2824068607
	*/
	virtual auto GetGlobalStat(CGameID nGameID, const char *pchName, int64 *pData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2824068607
	*/
	virtual auto GetGlobalStat(CGameID nGameID, const char *pchName, double *pData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes4]
	 *	[bytes4, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3183618604
	*/
	virtual auto GetGlobalStatHistory(CGameID nGameID, const char *pchName, int64 *pData, uint32 cubData) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes4]
	 *	[bytes4, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3183618604
	*/
	virtual auto GetGlobalStatHistory(CGameID nGameID, const char *pchName, double *pData, uint32 cubData) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3787313449
	*/
	virtual auto GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard) -> ELeaderboardDisplayType = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2295304639
	*/
	virtual auto GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2727738263
	*/
	virtual auto GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard) -> ELeaderboardSortMethod = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes4, bytes_length_from_mem, bytes4, bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1537413831
	*/
	virtual auto GetMostAchievedAchievementInfo(CGameID nGameID, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[bytes4, bytes_length_from_mem, bytes4, bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1351890186
	*/
	virtual auto GetNextMostAchievedAchievementInfo(CGameID nGameID, int32 iIteratorPrevious, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	642559988
	*/
	virtual auto GetNumAchievedAchievements(CGameID nGameID) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1852858521
	*/
	virtual auto GetNumAchievements(CGameID nGameID) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4195361948
	*/
	virtual auto GetNumStats(CGameID nGameID) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1789087504
	*/
	virtual auto GetNumberOfCurrentPlayers() -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2234749355
	*/
	virtual auto GetStat(CGameID nGameID, const char *pchName, int32 *pData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2234749355
	*/
	virtual auto GetStat(CGameID nGameID, const char *pchName, float *pData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2756866459
	*/
	virtual auto GetStatType(CGameID nGameID, const char *pchName) -> ESteamUserStatType = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8, string]
	 *	[bytes1, bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3347971080
	*/
	virtual auto GetUserAchievement(CSteamID steamIDUser, CGameID nGameID, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8, string]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1303484669
	*/
	virtual auto GetUserStat(CSteamID steamIDUser, CGameID nGameID, const char *pchName, int32 *pData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8, string]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1303484669
	*/
	virtual auto GetUserStat(CSteamID steamIDUser, CGameID nGameID, const char *pchName, float *pData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2543273710
	*/
	virtual auto IndicateAchievementProgress(CGameID nGameID, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4005309745
	*/
	virtual auto RequestCurrentStats(CGameID nGameID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2295417065
	*/
	virtual auto RequestGlobalAchievementPercentages(CGameID nGameID) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3187284143
	*/
	virtual auto RequestGlobalStats(CGameID nGameID, int32 nHistoryDays) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	39770736
	*/
	virtual auto RequestUserStats(CSteamID steamIDUser, CGameID nGameID) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1773933051
	*/
	virtual auto ResetAllStats(CGameID nGameID, bool bAchievementsToo) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4234607230
	*/
	virtual auto SetAchievement(CGameID nGameID, const char *pchName) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2881708557
	*/
	virtual auto SetMaxStatsLoaded(uint32 uMax) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1638809969
	*/
	virtual auto SetStat(CGameID nGameID, const char *pchName, int32 nData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1638809969
	*/
	virtual auto SetStat(CGameID nGameID, const char *pchName, float fData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2003446116
	*/
	virtual auto StoreStats(CGameID nGameID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes4, bytes8]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3658351491
	*/
	virtual auto UpdateAvgRateStat(CGameID nGameID, const char *pchName, float flCountThisSession, double dSessionLength) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4, bytes4, bytes_length_from_reg]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2793182763
	*/
	virtual auto UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int32 cScoreDetailsCount) -> SteamAPICall_t = 0;


};
