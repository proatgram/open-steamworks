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
#include "Types/UtilsCommon.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientUtils {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3381743624
	*/
	virtual auto AllocPendingAPICallHandle() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1729321162
	*/
	virtual auto BDownloadsDisabled() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	631729319
	*/
	virtual auto BGetDiskSerialNumber(char *, int32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean, bytes_length_from_reg, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3164533310
	*/
	virtual auto BGetMacAddresses(uint64 *, uint32, uint32 *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3265618306
	*/
	virtual auto BIsClientUIInForeground() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3818896383
	*/
	virtual auto BIsGlobalInstance() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1665274247
	*/
	virtual auto CheckFileSignature(const char *szFileName) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	465846217
	*/
	virtual auto CheckSteamReachable() -> uint64 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	293080556
	*/
	virtual auto DispatchClearAllBrowsingData() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, string, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	8210196
	*/
	virtual auto DispatchClientPostMessage(const char *, const char *, const char *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	733349759
	*/
	virtual auto DispatchClientSettingsChanged() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3192108377
	*/
	virtual auto DispatchClientUICommand(const char *pcUnk, uint32 uUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1867762226
	*/
	virtual auto DispatchClientUINotification(EClientUINotificationType eUnk, const char *pcUnk, uint32 uUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	917638885
	*/
	virtual auto DispatchComputerActiveStateChange() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes4, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3920679240
	*/
	virtual auto DispatchOpenURLInClient(const char *pcUnk, uint32 uUnk, bool bUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	522800300
	*/
	virtual auto DumpJobs(const char *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, uint64, string, bytes4]
	 *	[bytes4, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1462122014
	*/
	virtual auto FilterText(uint32, ETextFilteringContext, CSteamID, const char *, char *, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2996149732
	*/
	virtual auto GamepadTextInputClosed(HSteamPipe hSteamPipe, bool, const char *) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1639900111
	*/
	virtual auto GenerateSupportSystemReport() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1178112163
	*/
	virtual auto GetAPICallFailureReason(SteamAPICall_t hSteamAPICall) -> ESteamAPICallFailure = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	786794022
	*/
	virtual auto GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int32 cubCallback, int32 iCallbackExpected, bool *pbFailed) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	184851620
	*/
	virtual auto GetAppID() -> AppId_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1557245535
	*/
	virtual auto GetAppIdForPid(uint32 unk, bool bUnk) -> AppId_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1, bytes4, bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3704538339
	*/
	virtual auto GetBatteryInformation(int32 *, bool *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1195139706
	*/
	virtual auto GetBuildID() -> uint64 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1006535430
	*/
	virtual auto GetCellID() -> CellID_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2837193018
	*/
	virtual auto GetCloudGamingPlatform() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2130198977
	*/
	virtual auto GetConnectedUniverse() -> EUniverse = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3257237234
	*/
	virtual auto GetControllerConfigFileForAppID(AppId_t unAppID, const char *pszControllerConfigFile, uint32 cubControllerConfigFile) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4174045216
	*/
	virtual auto GetCurrentBatteryPower() -> uint8 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2955473331
	*/
	virtual auto GetCurrentUIMode() -> EUIMode = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2033313750
	*/
	virtual auto GetEnteredGamepadTextInput(char *pchValue, uint32 cchValueMax) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1724855489
	*/
	virtual auto GetEnteredGamepadTextLength() -> uint32 = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8, bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2292193934
	*/
	OSW_UNSAFE_WARNING
	virtual auto GetGameOverlayUIInstanceFocusGameID(bool *pbUnk) -> CGameID = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4143262527
	*/
	virtual auto GetIPv6ConnectivityState(ESteamIPv6ConnectivityProtocol) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3965129298
	*/
	virtual auto GetImageRGBA(int32 iImage, uint8 *pubDest, int32 nDestBufferSize) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	329548729
	*/
	virtual auto GetImageSize(int32 iImage, uint32 *pnWidth, uint32 *pnHeight) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2878779866
	*/
	virtual auto GetLauncherType() -> ELauncherType = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1868323299
	*/
	virtual auto GetNumRunningApps() -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3547756955
	*/
	virtual auto GetOfflineMode() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	213815740
	*/
	virtual auto GetSecondsSinceAppActive() -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2990694016
	*/
	virtual auto GetSecondsSinceComputerActive() -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2381631356
	*/
	virtual auto GetServerRealTime() -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3672566842
	*/
	virtual auto GetSteamEnvironmentForApp(uint32, char *, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4205644866
	*/
	virtual auto GetSteamRealm() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3642935082
	*/
	virtual auto GetSupportSystemReport(char *, uint32 unk, uint8 *unk_2, uint32 unk_3) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	333870170
	*/
	virtual auto InitFilterText(uint32, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean, boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2007007638
	*/
	virtual auto IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1864918160
	*/
	virtual auto IsSteamChina() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4061381807
	*/
	virtual auto IsSteamRunningInVR() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3755438611
	*/
	virtual auto IsVRHeadsetStreamingEnabled(uint32 unk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4222132091
	*/
	virtual auto NeedsSteamChinaWorkshop(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	307804618
	*/
	virtual auto RecordSteamInterfaceCreation(const char *, const char *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3112461217
	*/
	virtual auto RespondToClientUINotification(uint32 uUnk, bool bUnk, uint32 uUnk1) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4, bytes_length_from_mem]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3432185150
	*/
	virtual auto SetAPICallResultWithoutPostingCallback(uint64, const void *, int32, int32) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1682915981
	*/
	virtual auto SetAPIDebuggingActive(bool bActive, bool bVerbose) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	891051693
	*/
	virtual auto SetAppIDForCurrentPipe(AppId_t nAppID, bool bTrackProcess) -> AppId_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	535808947
	*/
	virtual auto SetClientUIProcess() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4262740768
	*/
	virtual auto SetComputerActive() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1943370062
	*/
	virtual auto SetControllerConfigFileForAppID(AppId_t unAppID, const char *pszControllerConfigFile) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2167250433
	*/
	virtual auto SetCurrentUIMode(EUIMode eUIMode) -> void = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1, bytes1, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4123920203
	*/
	OSW_UNSAFE_WARNING
	virtual auto SetFocusedWindow(CGameID gameID, bool bUnk) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	789119504
	*/
	virtual auto SetLastGameLaunchMethod(EGameLaunchMethod eGameLaunchMethod) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4130767332
	*/
	virtual auto SetLauncherType(ELauncherType eLauncherType) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2752140689
	*/
	virtual auto SetOfflineMode(bool bOffline) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1, bytes1, bytes8]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2218086118
	*/
	virtual auto SetOverlayWindowFocusForPipe(bool, bool, CGameID gameID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3394030627
	*/
	virtual auto SetSpew(ESpewGroup eSpewGroup, int32 iSpewLevel, int32 iLogLevel) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3268735451
	*/
	virtual auto SetVRHeadsetStreamingEnabled(uint32 unk, bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4, bytes4, bytes4, bytes4, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1951694702
	*/
	virtual auto SetVideoAdapterInfo(int32, int32, int32, int32, int32, int32, const char *) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3785326637
	*/
	virtual auto ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eInputLineMode, const char *szText, uint32 uMaxLength, const char *szUnk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4225353667
	*/
	virtual auto ShutdownLauncher(bool, bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3022265070
	*/
	virtual auto SignalAppsToShutDown() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1866592625
	*/
	virtual auto SignalServiceAppsToDisconnect() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1998387437
	*/
	virtual auto StartVRDashboard() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2018616494
	*/
	virtual auto TestHTTP(const char *) -> unknown_ret = 0;


};
