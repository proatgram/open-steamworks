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
#include "Types/VideoCommon.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientVideo {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3016183599
	*/
	virtual auto AddBroadcastGameData(const char *, const char *) -> void = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, string, bytes4, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3200595322
	*/
	OSW_UNSAFE_WARNING
	virtual auto AddRegion(const char *, const char *) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes1, bytes1, bytes1, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1459070998
	*/
	virtual auto AddTimelineMarker(const char *, bool, uint8, uint8, uint8) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2732174456
	*/
	virtual auto BGetBroadcastDimensions(int32 *iWidth, int32 *iHeight) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1609054429
	*/
	virtual auto BIsUploadingThumbnails() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3853358369
	*/
	virtual auto BeginBroadcastSession() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3229858658
	*/
	virtual auto BroadcastFirstTimeComplete() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	138521851
	*/
	virtual auto BroadcastRecorderError(EBroadcastRecorderResult) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4169210909
	*/
	virtual auto DroppedVideoFrames(int32) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3133964550
	*/
	virtual auto EGetBroadcastReady() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3521012885
	*/
	virtual auto EndBroadcastSession() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2932905144
	*/
	virtual auto GetApprovalRequestCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4221838867
	*/
	virtual auto GetApprovalRequests(CSteamID *, uint32) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3258058083
	*/
	virtual auto GetBroadcastDelaySeconds() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1634545948
	*/
	virtual auto GetBroadcastEncoderSetting() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	170127952
	*/
	virtual auto GetBroadcastIncludeDesktop() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3557692389
	*/
	virtual auto GetBroadcastMaxKbps() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	875170995
	*/
	virtual auto GetBroadcastPermissions() -> EBroadcastPermission = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	93302960
	*/
	virtual auto GetBroadcastRecordMic() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2325085152
	*/
	virtual auto GetBroadcastRecordSystemAudio() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1301008074
	*/
	virtual auto GetBroadcastSessionID() -> BroadcastSessionID_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3007872789
	*/
	virtual auto GetBroadcastShowChatCorner() -> EBroadcastChatCorner = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2550398428
	*/
	virtual auto GetBroadcastShowDebugInfo() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3162942023
	*/
	virtual auto GetBroadcastShowReminderBanner() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	23649110
	*/
	virtual auto GetOPFSettings(AppId_t appId) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3356574013
	*/
	virtual auto GetOPFStringForApp(AppId_t appId, char *pchBuffer, int32 iUnk, int32 *pnBufferSize) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4037721024
	*/
	virtual auto GetVideoURL(AppId_t appId) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[string]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	166973545
	*/
	virtual auto GetWatchBroadcastMPD(CSteamID) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2301040954
	*/
	virtual auto IgnoreApprovalRequest(CSteamID, uint32 uUnk) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4, bytes4, bytes4, bytes4, bytes_length_from_mem]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2777536552
	*/
	virtual auto InitBroadcastAudio(int32, int32, int32, int32, int32, const uint8 *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4, bytes4, bytes4, bytes_length_from_mem, bytes4, bytes_length_from_mem]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1296519846
	*/
	virtual auto InitBroadcastVideo(int32, int32, int32 iWidth, int32 iHeight, const uint8 *, int32, const uint8 *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes1, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2248705105
	*/
	virtual auto InviteToBroadcast(CSteamID steamID, bool bUnk, uint32 uUnk) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3144859465
	*/
	virtual auto IsBroadcasting(int32 *pnNumViewers) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2263453943
	*/
	virtual auto LoadBroadcastSettings() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1032620011
	*/
	virtual auto MuteBroadcastChatUser(BroadcastSessionID_t, CSteamID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1646420116
	*/
	virtual auto PostBroadcastChat(BroadcastSessionID_t, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes8, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3242225764
	*/
	virtual auto ReceiveBroadcastChat(CSteamID, BroadcastSessionID_t, bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	566723583
	*/
	virtual auto RemoveBroadcastGameData(const char *) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3293217776
	*/
	virtual auto RemoveRegion(unsigned int) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4012792382
	*/
	virtual auto RemoveTimelineMarker() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3387336113
	*/
	virtual auto SetBroadcastPermissions(EBroadcastPermission) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1081030671
	*/
	virtual auto SetCurrentVideoEncodingRate(int32) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1937031380
	*/
	virtual auto SetInHomeStreamState(bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1341177486
	*/
	virtual auto SetMicrophoneState(bool, bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1158459881
	*/
	virtual auto SetVideoSource(bool) -> void = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1468815050
	*/
	OSW_UNSAFE_WARNING
	virtual auto UnlockH264() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4, bytes_length_from_mem]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	720109415
	*/
	virtual auto UploadBroadcastThumbnail(int32 iWidth, int32 iHeight, const uint8 *pubRGBData, int32 iRGBDataSize) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1980547595
	*/
	virtual auto WatchBroadcast(CSteamID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes4, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3336868731
	*/
	virtual auto WebRTCAddCandidate(uint64, const char *, int, const char *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	595836753
	*/
	virtual auto WebRTCGetAnswer(uint64, CUtlString *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2794117582
	*/
	virtual auto WebRTCGetTURNAddress(CUtlString *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	161987722
	*/
	virtual auto WebRTCStartResult(uint64, bool, const char *) -> unknown_ret = 0;


};
