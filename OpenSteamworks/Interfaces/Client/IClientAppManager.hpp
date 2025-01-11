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

#include "Types/AppsCommon.hpp"
#include "Types/SteamTypes.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientAppManager {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	494900126
	*/
	virtual auto AddContentLogLine(StringView) -> void = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	419526616
	*/
	OSW_UNSAFE_WARNING
	virtual auto AddLibraryFolder(const char *szPath, const char *cUnk) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2493037601
	*/
	virtual auto BAllowDownloadsWhileAnyAppRunning() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	628179141
	*/
	virtual auto BCanRemotePlayTogether(AppId_t unAppID) -> bool = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4086083205
	*/
	OSW_UNSAFE_WARNING
	virtual auto BGetActiveBetaForApps(uint32 *puUnk, int32 iUnk, char *pcUnk, int32 iUnk2) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4, bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3568213392
	*/
	virtual auto BGetLibraryFolderInfo(int32 iBaseFolder, bool *, uint64 *, uint64 *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2837469339
	*/
	virtual auto BHasLocalContentServer() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1381764058
	*/
	virtual auto BIsAppUpToDate(AppId_t unAppID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[boolean, boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	377303586
	*/
	virtual auto BIsDlcEnabled(AppId_t unAppID, uint32, bool *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	730098731
	*/
	virtual auto BIsDownloadingEnabled() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1747727927
	*/
	virtual auto BIsLocalMultiplayerApp(AppId_t unAppID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	220704614
	*/
	virtual auto BThrottleDownloadsWhileStreaming() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3391679177
	*/
	virtual auto BeginLaunchQueryParams(AppId_t unAppId) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2935569269
	*/
	virtual auto BuildBackup(AppId_t unAppID, uint64 ullMaxFileSize, const char *cszBackupPath) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, string, string, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3248270483
	*/
	virtual auto BuildInstaller(const char *cszProjectFile, const char *cszBackupPath, const char *, const char *) -> bool = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1795836032
	*/
	OSW_UNSAFE_WARNING
	virtual auto CanMoveApp(AppId_t unAppID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3146576450
	*/
	virtual auto CancelBackup() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1164168723
	*/
	virtual auto CancelMoveApp(AppId_t unAppID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2609107226
	*/
	virtual auto CancelValidation(AppId_t unAppID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2653757556
	*/
	virtual auto ChangeAppDownloadQueuePlacement(AppId_t unAppID, EAppDownloadQueuePlacement eAppDownloadQueuePlacement) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2003243691
	*/
	virtual auto CheckBetaPassword(AppId_t unAppID, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	166419684
	*/
	virtual auto CommitLaunchQueryParams(AppId_t unAppId, const char *pchUnk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1667574248
	*/
	virtual auto ForceInstallDirOverride(const char *cszPath) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1387207412
	*/
	virtual auto GetActiveBeta(AppId_t unAppID, char *, int32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1939384558
	*/
	virtual auto GetAppAllowDownloadsWhileRunningBehavior(AppId_t unAppID) -> EAppAllowDownloadsWhileRunningBehavior = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	926664662
	*/
	virtual auto GetAppAutoUpdateBehavior(AppId_t unAppID) -> EAppAutoUpdateBehavior = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2525765697
	*/
	virtual auto GetAppAutoUpdateDelayedUntilTime(AppId_t unAppID) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes4, bytes4, bytes4, bytes8, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4126204356
	*/
	virtual auto GetAppContentInfo(AppId_t unAppID, bool, uint32 *, uint32 *, uint64 *, uint64 *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2709185940
	*/
	virtual auto GetAppDependencies(AppId_t unAppID, AppId_t *unAppIDs, uint32 uUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2413782362
	*/
	virtual auto GetAppDownloadQueueIndex(AppId_t unAppID) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	953103188
	*/
	virtual auto GetAppInstallDir(AppId_t unAppID, char *pchPath, uint32 cchPath) -> uint64 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3977997324
	*/
	virtual auto GetAppInstallState(AppId_t unAppID) -> EAppState = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	416389820
	*/
	virtual auto GetAppLibraryFolder(AppId_t unAppID) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes36]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3653846506
	*/
	virtual auto GetAppStateInfo(AppId_t unAppID, AppStateInfo_s *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1301730104
	*/
	virtual auto GetAutoUpdateTimeRestrictionEnabled() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3848856530
	*/
	virtual auto GetAutoUpdateTimeRestrictionHours(int32 *piUnk1, int32 *piUnk2) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1, bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1614913146
	*/
	virtual auto GetAvailableLanguages(AppId_t unAppID, bool, char *pchLanguages, uint32 cchLanguagesMax) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	933506442
	*/
	virtual auto GetCurrentLanguage(AppId_t unAppID, char *, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1651910313
	*/
	virtual auto GetCurrentLanguage(AppId_t unAppID) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2123395395
	*/
	virtual auto GetDependentApps(AppId_t unAppID, AppId_t *punAppIDs, int32 cAppIDsMax) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes8, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3722167731
	*/
	virtual auto GetDlcDownloadProgress(AppId_t unAppID, AppId_t unDLCAppID, uint64 *lluUnk1, uint64 *lluUnk2) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1, bytes28]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1564588562
	*/
	virtual auto GetDownloadStats(DownloadStats_s *pDownloadStats) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	566113085
	*/
	virtual auto GetDownloadThrottleRateKbps(bool) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2966823553
	*/
	virtual auto GetDownloadingAppID() -> AppId_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	212678397
	*/
	virtual auto GetFallbackLanguage(AppId_t unAppID, ELanguage) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	593663041
	*/
	virtual auto GetFileDetails(AppId_t unAppID, const char *pchUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1273432608
	*/
	virtual auto GetInstalledApps(uint32 *punAppIDs, uint32 cAppIDsMax) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2395667502
	*/
	virtual auto GetInstalledDepots(AppId_t unAppID, AppId_t puDepots[], uint32 cuDepotsMax) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1140204477
	*/
	virtual auto GetLaunchCommandLine(AppId_t unAppId, char *pchUnk, int32 iUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4108045233
	*/
	virtual auto GetLibraryFolderPath(int32 iBaseFolder, char *pchPath, int32 cbPath) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes8, bytes8, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1467806062
	*/
	virtual auto GetMoveAppProgress(AppId_t unAppID, uint64 *unk_1, uint64 *unk_2, uint32 *unk_3) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3731875437
	*/
	virtual auto GetNumAppsInDownloadQueue() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3765849462
	*/
	virtual auto GetNumInstalledApps() -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2913935059
	*/
	virtual auto GetNumLibraryFolders() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes120]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	703977741
	*/
	virtual auto GetUpdateInfo(AppId_t unAppID, AppUpdateInfo_s *pUpdateInfo) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	371648748
	*/
	virtual auto GetUseHTTPSForDownloads() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes1]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3754614665
	*/
	virtual auto InstallApp(AppId_t unAppID, int32 iBaseFolder, bool bLegacy) -> EAppUpdateError = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3488689060
	*/
	virtual auto IsAppDlcInstalled(AppId_t unAppID, AppId_t unDLCAppID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4180444947
	*/
	virtual auto LaunchApp(CGameID gameID, uint32 uLaunchOption, uint32 eLaunchSource, const char *pszUserArgs) -> EAppUpdateError = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	209186252
	*/
	virtual auto MarkContentCorrupt(AppId_t unAppID, bool bCorrupt) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1238914627
	*/
	virtual auto MoveApp(AppId_t unAppID, int32 unk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3866651432
	*/
	virtual auto RecoverAppFromFolder(AppId_t unAppID, const char *cszUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4137516858
	*/
	virtual auto RestoreAppFromBackup(AppId_t unAppID, const char *cszBackupPath) -> EAppUpdateError = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2842268799
	*/
	virtual auto SetAllowDownloadsWhileAnyAppRunning(bool bAllowDownloadsWhileAnyAppRunning) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	12894946
	*/
	virtual auto SetAppAllowDownloadsWhileRunningBehavior(AppId_t unAppID, EAppAllowDownloadsWhileRunningBehavior eAppAllowDownloadsWhileRunningBehavior) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3358229382
	*/
	virtual auto SetAppAutoUpdateBehavior(AppId_t unAppID, EAppAutoUpdateBehavior eAppAutoUpdateBehavior) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3104698906
	*/
	virtual auto SetAppDownloadQueueIndex(AppId_t unAppID, int32 iUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3161827366
	*/
	virtual auto SetAutoUpdateTimeRestrictionEnabled(bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1789685835
	*/
	virtual auto SetAutoUpdateTimeRestrictionEndHour(int32 iUnk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3900345782
	*/
	virtual auto SetAutoUpdateTimeRestrictionStartHour(int32 iUnk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2193526270
	*/
	virtual auto SetCurrentLanguage(AppId_t unAppID, ELanguage) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	285504526
	*/
	virtual auto SetDlcEnabled(AppId_t unAppID, uint32, bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2118301107
	*/
	virtual auto SetDownloadThrottleRateKbps(int32 iRate, bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3356348015
	*/
	virtual auto SetDownloadingEnabled(bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2172531327
	*/
	virtual auto SetLaunchQueryParam(AppId_t unAppId, const char *pchKey, const char *pchValue) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2087770130
	*/
	virtual auto SetThrottleDownloadsWhileStreaming(bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1524469730
	*/
	virtual auto SetUseHTTPSForDownloads(bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	127244476
	*/
	virtual auto ShutdownApp(AppId_t unAppID, bool bForce) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1387382963
	*/
	virtual auto StartValidatingApp(AppId_t unAppID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3679763427
	*/
	virtual auto SuspendDownloadThrottling(bool bSuspend) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1195080267
	*/
	virtual auto UninstallApp(AppId_t unAppID) -> EAppUpdateError = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2291793918
	*/
	virtual auto VerifySignedFiles(AppId_t unAppID) -> unknown_ret = 0;


};
