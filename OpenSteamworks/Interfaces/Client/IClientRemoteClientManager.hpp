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

#include "Types/RemoteClientCommon.hpp"
#include "Types/UtilsCommon.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientRemoteClientManager {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, string, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2554411124
	*/
	virtual auto AcceptEULA(uint64, uint32, const char *, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1732358928
	*/
	virtual auto BCreateRemotePlayGroup(void *unk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes_length_from_reg, bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3765086919
	*/
	virtual auto BCreateRemotePlayInviteAndSession(RemotePlayPlayer_t friendID, AppId_t appID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean, unknown]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3176738697
	*/
	virtual auto BGetControllerConfigMessageForLocal(void *unk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean, unknown]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1710579083
	*/
	virtual auto BGetStreamTransportSignal(uint32, CUtlBuffer *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean, unknown]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	733571073
	*/
	virtual auto BGetStreamingClientConfig(CUtlBuffer *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes_length_from_reg]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1412040198
	*/
	virtual auto BHasRemotePlayInviteAndSession(RemotePlayPlayer_t) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3011667553
	*/
	virtual auto BIsBigPictureActiveForStreaming() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2681345455
	*/
	virtual auto BIsRemoteLaunch(CGameID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2862994355
	*/
	virtual auto BIsStreamClientRemotePlayTogether() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3145353072
	*/
	virtual auto BIsStreamClientRunning() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2803758151
	*/
	virtual auto BIsStreamClientRunningConnectedToClient(CGameID, uint64) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2579697909
	*/
	virtual auto BIsStreamStartInProgress(uint64, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1006533178
	*/
	virtual auto BIsStreamingClientConnected() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3880588116
	*/
	virtual auto BIsStreamingDisabledBySystemPolicy() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1601964271
	*/
	virtual auto BIsStreamingEnabled() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3187259994
	*/
	virtual auto BIsStreamingSessionActive() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	158714541
	*/
	virtual auto BIsStreamingSessionActiveForGame(CGameID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3024798018
	*/
	virtual auto BIsStreamingSupported() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[protobuf]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1654917182
	*/
	virtual auto BQueueControllerConfigMessageForRemote(void *unk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1495091354
	*/
	virtual auto BRemoteClientHasStreamingEnabled(uint64) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2070114005
	*/
	virtual auto BRemoteClientHasStreamingEnabledByIndex(uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	899443415
	*/
	virtual auto BRemoteClientHasStreamingSupported(uint64) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3133546832
	*/
	virtual auto BRemoteClientHasStreamingSupportedByIndex(uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	650115179
	*/
	virtual auto BRemoteClientStreaming(uint64) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1609059028
	*/
	virtual auto BRemoteDeviceStreaming(uint64) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[unknown]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	416617672
	*/
	virtual auto BSetStreamingClientConfig(CUtlBuffer *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4160301922
	*/
	virtual auto BStreamingClientWantsRecentGames() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3126005082
	*/
	virtual auto BStreamingDesktopToRemotePlayTogetherEnabled() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3102944927
	*/
	virtual auto CancelRemoteClientPairing(uint64) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes_length_from_reg]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2244800364
	*/
	virtual auto CancelRemotePlayInviteAndSession(RemotePlayPlayer_t) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1548215623
	*/
	virtual auto ConnectToRemote(uint64) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1491652342
	*/
	virtual auto ConnectToRemoteAddress(const char *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	309552194
	*/
	virtual auto DisbandRemotePlayTogetherGroup() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes_length_from_reg, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1680726587
	*/
	virtual auto GetClientInputSettings(RemotePlayPlayer_t, RemoteClientInputSettings_t *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4081480588
	*/
	virtual auto GetClientPlatformTypes() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	165382581
	*/
	virtual auto GetCloudGameTimeRemaining(CGameID, uint64) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	260487742
	*/
	virtual auto GetControllerConfig(uint64, uint8 *, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes_length_from_reg, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1067885198
	*/
	virtual auto GetPerUserInputSettings(RemotePlayPlayer_t, RemoteClientInputSettings_t *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	672528634
	*/
	virtual auto GetRemoteClientAppAvailability(uint64, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	341822860
	*/
	virtual auto GetRemoteClientAppState(uint64, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2273534513
	*/
	virtual auto GetRemoteClientAppStateByIndex(uint32, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1745919253
	*/
	virtual auto GetRemoteClientConnectState(uint64) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3576517828
	*/
	virtual auto GetRemoteClientConnectStateByIndex(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2653803379
	*/
	virtual auto GetRemoteClientConnectedCount() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3785056348
	*/
	virtual auto GetRemoteClientCount() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1866507186
	*/
	virtual auto GetRemoteClientFormFactor(uint64) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2993881339
	*/
	virtual auto GetRemoteClientIDByIndex(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[string]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3742246363
	*/
	virtual auto GetRemoteClientName(uint64) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[string]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2764632274
	*/
	virtual auto GetRemoteClientNameByIndex(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[string, bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1983939123
	*/
	virtual auto GetRemoteClientPlatformName(uint64, bool *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	726595503
	*/
	virtual auto GetRemoteClientStreamingEnabledCount() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2255966564
	*/
	virtual auto GetRemoteClientStreamingSession(uint64) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	156811301
	*/
	virtual auto GetRemoteDeviceCount() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2506072413
	*/
	virtual auto GetRemoteDeviceFormFactor(uint64) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2614937638
	*/
	virtual auto GetRemoteDeviceIDByIndex(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[string]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1325926524
	*/
	virtual auto GetRemoteDeviceName(uint64) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[string]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1195348727
	*/
	virtual auto GetRemoteDeviceNameByIndex(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1665872577
	*/
	virtual auto GetRemoteDeviceStreamingSession(uint64) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	76069667
	*/
	virtual auto GetStreamClientFormFactor(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes36]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2098109937
	*/
	virtual auto GetStreamClientPlayer(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2661111329
	*/
	virtual auto GetStreamingPINSize(int32 *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes_length_from_reg]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3786169397
	*/
	virtual auto GetStreamingSessionForRemotePlayer(RemotePlayPlayer_t) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1248862889
	*/
	virtual auto JoinRemotePlaySession(CSteamID, const char *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, string, bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2528011494
	*/
	virtual auto LaunchAppProgress(uint32, const char *, const char *, int32, int32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4129799996
	*/
	virtual auto LaunchAppResult(uint32, ERemoteClientLaunchResult) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes_length_from_reg]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1396413397
	*/
	virtual auto LaunchAppResultRequestLaunchOption(uint32, const int32 *, int32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes_length_from_reg, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	41963168
	*/
	virtual auto OnClientUsedInput(RemotePlayPlayer_t, EClientUsedInputType) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3428482801
	*/
	virtual auto OnPlaceholderStateChanged(bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2159011188
	*/
	virtual auto OnRemoteClientRemotePlayClearControllers() -> unknown_ret = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes_length_from_reg, bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2865500371
	*/
	OSW_UNSAFE_WARNING
	virtual auto OnRemoteClientRemotePlayControllerIndexSet(RemotePlayPlayer_t, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	251584186
	*/
	virtual auto OnRemotePlayUIMovedController() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2155532413
	*/
	virtual auto OnSendRemotePlayTogetherInvite(CSteamID, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes_length_from_mem]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4244952599
	*/
	virtual auto PostControllerConfig(uint64, const uint8 *, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3733994230
	*/
	virtual auto ProcessStreamAvailable(uint32, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes_length_from_reg, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3869694415
	*/
	virtual auto ProcessStreamClientConnected(uint32, RemotePlayPlayer_t, ESteamDeviceFormFactor) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3816206421
	*/
	virtual auto ProcessStreamClientDisconnected(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1073966607
	*/
	virtual auto ProcessStreamShutdown(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2822021641
	*/
	virtual auto RefreshRemoteClients(bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3375024818
	*/
	virtual auto RequestControllerConfig(uint64, uint32, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1879478429
	*/
	virtual auto SendStreamTransportSignal(uint32, const CUtlBuffer *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes_length_from_reg, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	194768433
	*/
	virtual auto SetPerUserControllerInputEnabled(RemotePlayPlayer_t, bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes_length_from_reg, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1955737744
	*/
	virtual auto SetPerUserKeyboardInputEnabled(RemotePlayPlayer_t, bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes_length_from_reg, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	417630560
	*/
	virtual auto SetPerUserMouseInputEnabled(RemotePlayPlayer_t, bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2320893330
	*/
	virtual auto SetRemoteDeviceAuthorized(bool, const char *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2470952672
	*/
	virtual auto SetRemotePlayTogetherBitrateOverride(int32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	185519452
	*/
	virtual auto SetRemotePlayTogetherQualityOverride(int32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3201756830
	*/
	virtual auto SetStreamingDesktopToRemotePlayTogetherEnabled(bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	304046295
	*/
	virtual auto SetStreamingDriversInstalled(bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	342914697
	*/
	virtual auto SetStreamingEnabled(bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1095605896
	*/
	virtual auto SetStreamingPIN(const char *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	359146356
	*/
	virtual auto SetUIReadyForStream(bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3125169710
	*/
	virtual auto ShutdownStreamClients(bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4, bytes4, bytes4, bytes_length_from_reg]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1086982578
	*/
	virtual auto StartStream(uint64, uint32, int32, ERemoteClientStreamEnv, const RemoteClientReservedGamepad_t *, int32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2640289886
	*/
	virtual auto StopStreamingSession(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3040068262
	*/
	virtual auto StreamingAudioFinished() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2000706300
	*/
	virtual auto StreamingAudioPreparationComplete(bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3949006016
	*/
	virtual auto UnpairRemoteDevices() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2728347562
	*/
	virtual auto UpdateRemotePlayTogetherGroup() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3716735129
	*/
	virtual auto UpdateStreamClientNetworkUtilization(uint32, float, float) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1712504744
	*/
	virtual auto UpdateStreamClientResolution(uint32, int32, int32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2572614160
	*/
	virtual auto UsedVideoH264() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	930130756
	*/
	virtual auto UsedVideoHEVC() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3226255744
	*/
	virtual auto UsedVideoX264() -> unknown_ret = 0;


};
