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

#include "Types/FriendsCommon.hpp"
#include "Types/SteamTypes.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientFriends {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	908022498
	*/
	virtual auto AcceptVoiceCall(CSteamID steamIDLocalPeer, CSteamID steamIDRemotePeer) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2538763936
	*/
	virtual auto AcknowledgeInviteToClan(CSteamID steamID, bool bAcceptOrDenyClanInvite) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1296821774
	*/
	virtual auto ActivateGameOverlay(const char *pchDialog) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1820605370
	*/
	virtual auto ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1906338542
	*/
	virtual auto ActivateGameOverlayInviteDialogConnectString(const char *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3364522800
	*/
	virtual auto ActivateGameOverlayRemotePlayTogetherInviteDialog(CSteamID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4284044095
	*/
	virtual auto ActivateGameOverlayToStore(AppId_t nAppId, EOverlayToStoreFlag eFlag) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2692644322
	*/
	virtual auto ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1315198957
	*/
	virtual auto ActivateGameOverlayToWebPage(const char *pchURL, EActivateGameOverlayToWebPageMode eMode) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4099321007
	*/
	virtual auto AddFriend(CSteamID steamID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes2]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1026593499
	*/
	virtual auto AddFriendToGroup(CSteamID steamID, int16 iGroupID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	553284427
	*/
	virtual auto BCanReceive(HVoiceCall hVoiceCall) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	139430496
	*/
	virtual auto BCanSend(HVoiceCall hVoiceCall) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1671298657
	*/
	virtual auto BChatRoomHasAvailableVoiceSlots(CSteamID steamIDChat) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	890136888
	*/
	virtual auto BChatRoomModerated(CSteamID steamIDChat) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[boolean, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1378930099
	*/
	virtual auto BGetChatRoomMemberDetails(CSteamID steamIDChat, CSteamID steamIDUser, uint32 *prgfChatMemberDetails, uint32 *prgfChatMemberDetailsLocal) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, uint64, bytes4]
	 *	[boolean, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1563902422
	*/
	virtual auto BGetFriendAvatarURL(char *, uint32, CSteamID, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1888062613
	*/
	virtual auto BIsChatRoomVoiceSpeaking(CSteamID steamIDChat, CSteamID steamIDSpeaker) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	765097937
	*/
	virtual auto BVoiceIsLocalOnHold(HVoiceCall hVoiceCall) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1665656508
	*/
	virtual auto BVoiceIsRemoteOnHold(HVoiceCall hVoiceCall) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1551821515
	*/
	virtual auto BanChatMember(CSteamID steamIDChat, CSteamID steamIDUserToActOn) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3445890413
	*/
	virtual auto CancelTradeRequest(CSteamID steamIDPartner) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1142163816
	*/
	virtual auto ChatRoomVoiceRetryConnections(CSteamID steamIDChat) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	23938957
	*/
	virtual auto ClearChatHistory(CSteamID steamIDFriend) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	451600836
	*/
	virtual auto ClearChatRoomHistory(CSteamID steamID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	804793226
	*/
	virtual auto ClearFriendHasOfflineMessage(uint32 uFriend) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3996400391
	*/
	virtual auto ClearRichPresence(AppId_t nAppId) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2660761197
	*/
	virtual auto ClearSerializedChatRoomDlg(CSteamID steamIDChat) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4142055697
	*/
	virtual auto ClientLinkFilterInit() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	924073645
	*/
	virtual auto CloseClanChatWindowInSteam(CSteamID groupID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8, string, bytes4, uint64, uint64, uint64, bytes4, bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3297854714
	*/
	virtual auto CreateChatRoom(EChatRoomType eType, uint64 ulGameID, const char *pchName, ELobbyType eLobbyType, CSteamID steamIDClan, CSteamID steamIDFriendChat, CSteamID steamIDInvited, uint32 rgfChatPermissionOfficer, uint32 rgfChatPermissionMember, uint32 rgfChatPermissionAll) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1495651591
	*/
	virtual auto CreateFriendsGroup(const char *pchGroupName) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2219695605
	*/
	virtual auto DeleteFriendRegValue(CSteamID steamID, const char *pchKey) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes2]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	764221763
	*/
	virtual auto DeleteFriendsGroup(int16 iGroupID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes_length_from_reg]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2371515580
	*/
	virtual auto DownloadClanActivityCounts(CSteamID groupIDs[], int32 nIds) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2415703195
	*/
	virtual auto EnableVoiceCalibration(bool bState) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	632719776
	*/
	virtual auto EnableVoiceNotificationSounds(bool bEnable) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	235036782
	*/
	virtual auto EndChatRoomVoiceSpeaking(CSteamID steamIDChat, CSteamID steamIDMember) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1044641201
	*/
	virtual auto EndTalking(HVoiceCall hVoiceCall) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	293789391
	*/
	virtual auto EnumerateFollowingList(uint32 uStartIndex) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3539035669
	*/
	virtual auto FindFriendVoiceChatHandle(CSteamID steamIDFriend) -> HVoiceCall = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2537217145
	*/
	virtual auto GetCallState(HVoiceCall hVoiceCall) -> ECallState = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2068929214
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetChatMemberByIndex, CSteamID groupID, int32 iIndex)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4, bytes4]
	 *	[bytes4, bytes_length_from_reg, bytes4, bytes8, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3578765378
	*/
	virtual auto GetChatMessage(CSteamID steamIDFriend, int32 iChatID, void *pvData, int32 cubData, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter, RTime32 *puTime) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	99470702
	*/
	virtual auto GetChatMessagesCount(CSteamID steamIDFriend) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2412748431
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetChatRoomByIndex, int32 iChatRoom)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	443401119
	*/
	virtual auto GetChatRoomCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4, bytes4]
	 *	[bytes4, bytes_length_from_reg, uint64, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1301752844
	*/
	virtual auto GetChatRoomEntry(CSteamID steamIDChat, int32 iChatID, CSteamID *steamIDuser, void *pvData, int32 cubData, EChatEntryType *peChatEntryType) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1, bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1626950026
	*/
	virtual auto GetChatRoomLockState(CSteamID steamIDChat, bool *pbLocked) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	75408717
	*/
	virtual auto GetChatRoomMessagesCount(CSteamID steamIDChat) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64, bytes1]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3956372722
	*/
	virtual auto GetChatRoomPeakSample(CSteamID steamIDChat, CSteamID steamIDSpeaker, bool bIncoming) -> float = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1753919921
	*/
	virtual auto GetChatRoomPermissions(CSteamID steamIDChat, uint32 *prgfChatRoomPermissions) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2453394729
	*/
	virtual auto GetChatRoomVoiceStatus(CSteamID steamIDChat, CSteamID steamIDSpeaker) -> EChatRoomVoiceStatus = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4223555871
	*/
	virtual auto GetChatRoomVoiceTotalSlotCount(CSteamID steamIDChat) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4096655561
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetChatRoomVoiceUsedSlot, CSteamID steamIDChat, int32 iSlot)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2581853010
	*/
	virtual auto GetChatRoomVoiceUsedSlotCount(CSteamID steamIDChat) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1, bytes4, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4142651875
	*/
	virtual auto GetClanActivityCounts(CSteamID steamID, int32 *pnOnline, int32 *pnInGame, int32 *pnChatting) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2300746640
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetClanByIndex, int32 iClan)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1835088328
	*/
	virtual auto GetClanChatMemberCount(CSteamID groupID) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4, bytes4]
	 *	[bytes4, bytes_length_from_reg, bytes4, uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	989134146
	*/
	virtual auto GetClanChatMessage(CSteamID groupID, int32 iChatID, void *pvData, int32 cubData, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	666130126
	*/
	virtual auto GetClanCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3768438093
	*/
	virtual auto GetClanInviteCount() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3755068558
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetClanOfficerByIndex, CSteamID steamIDClan, int32 iOfficer)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1669709724
	*/
	virtual auto GetClanOfficerCount(CSteamID steamIDClan) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3176316233
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetClanOwner, CSteamID steamIDClan)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	386053165
	*/
	virtual auto GetClanRelationship(CSteamID steamIDclan) -> EClanRelationship = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1014359745
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetCoplayFriend, int32 iCoplayEvent)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1154168118
	*/
	virtual auto GetCoplayFriendCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2592353182
	*/
	virtual auto GetCountFriendsInGame(CGameID gameID) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	108070205
	*/
	virtual auto GetCountFriendsWhoPlayGame(CGameID gameID) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2598377062
	*/
	virtual auto GetCountFriendsWithOfflineMessages() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2084833258
	*/
	virtual auto GetEmoticonCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	789495859
	*/
	virtual auto GetEstimatedBitsPerSecond(HVoiceCall hVoiceCall, bool bIncoming) -> float = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes2]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2612162554
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetFirstFriendsGroupMember, int16 iGroupID)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes2]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	880889790
	*/
	virtual auto GetFirstGroupFriendsMember(CSteamID steamID) -> int16 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	83532728
	*/
	virtual auto GetFollowerCount(CSteamID steamID) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes1, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	111558506
	*/
	virtual auto GetFriendActivityCounts(int32 *pnOnline, int32 *pnInGame, bool bExcludeTaggedFriends) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4, bytes_length_from_reg, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2183614210
	*/
	virtual auto GetFriendArray(CSteamID *, int8 *, int32, int32) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4, bytes_length_from_reg, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	589401614
	*/
	virtual auto GetFriendArrayInGame(CSteamID *, uint64 *, int32) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, uint64]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2258471101
	*/
	virtual auto GetFriendAvatarHash(char *, uint32, CSteamID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2629021302
	*/
	virtual auto GetFriendBroadcastID(CSteamID steamIDFriend) -> uint64 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	676710095
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetFriendByIndex, int32 iFriend, EFriendFlags iFriendFlags)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1270835453
	*/
	virtual auto GetFriendClanRank(CSteamID steamIDUser, CSteamID steamIDClan) -> EClanRank = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1890879803
	*/
	virtual auto GetFriendCoplayGame(CSteamID steamIDFriend) -> AppId_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3698713532
	*/
	virtual auto GetFriendCoplayTime(CSteamID steamIDFriend) -> RTime32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	529104883
	*/
	virtual auto GetFriendCount(EFriendFlags iFriendFlags) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3491500569
	*/
	virtual auto GetFriendCountFromSource(CSteamID steamIDSource) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4031303039
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetFriendFromSourceByIndex, CSteamID steamIDSource, int32 iFriend)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1, bytes24]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3791877505
	*/
	virtual auto GetFriendGamePlayed(CSteamID steamID, FriendGameInfo_t *pGamePlayInfo) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4096894419
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetFriendGameServer, CSteamID steamIDFriend)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	979859774
	*/
	virtual auto GetFriendLastLogoffTime(CSteamID steamIDFriend) -> RTime32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1927190336
	*/
	virtual auto GetFriendLastLogonTime(CSteamID steamIDFriend) -> RTime32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4, bytes4]
	 *	[bytes4, bytes_length_from_reg, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1448983418
	*/
	virtual auto GetFriendMessage(CSteamID friendID, int32 iChatID, void *pvData, int32 cubData, EChatEntryType *peChatEntryType) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[string]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1446650518
	*/
	virtual auto GetFriendPersonaName_Public(CSteamID steamID) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3166041203
	*/
	virtual auto GetFriendPersonaState(CSteamID steamIDFriend) -> EPersonaState = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2121286075
	*/
	virtual auto GetFriendPersonaStateFlags(CSteamID steamIDFriend) -> EPersonaStateFlag = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, string]
	 *	[string]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1323862881
	*/
	virtual auto GetFriendProfileInfo(CSteamID steamIDFriend, const char *pchKey) -> const char* = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3362514119
	*/
	virtual auto GetFriendRelationship(CSteamID steamIDFriend) -> EFriendRelationship = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1456968122
	*/
	virtual auto GetFriendRestrictions(CSteamID steamIDFriend) -> EUserRestriction = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, uint64, string]
	 *	[string]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2788597436
	*/
	virtual auto GetFriendRichPresence(AppId_t nAppId, CSteamID steamIDFriend, const char *pchKey) -> const char* = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, uint64, bytes4]
	 *	[string]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2956216960
	*/
	virtual auto GetFriendRichPresenceKeyByIndex(AppId_t nAppId, CSteamID steamIDFriend, int32 iIndex) -> const char* = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	961263581
	*/
	virtual auto GetFriendRichPresenceKeyCount(AppId_t nAppId, CSteamID steamIDFriend) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2926900337
	*/
	STEAMWORKS_STRUCT_RETURN(FriendSessionStateInfo_t, GetFriendSessionStateInfo, CSteamID steamIDFriend)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2983857347
	*/
	virtual auto GetFriendSteamLevel(CSteamID steamIDFriend) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1869231112
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetFriendWhoPlaysGame, uint32 iIndex, CGameID gameID)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	815575808
	*/
	virtual auto GetFriendWithOfflineMessage(int32 iFriend) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes2]
	 *	[bytes1, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3862575326
	*/
	virtual auto GetFriendsGroupActivityCounts(int16 iGroupID, int32 *pnOnline, int32 *pnInGame) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes2]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2540981901
	*/
	virtual auto GetFriendsGroupCount() -> int16 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes2]
	 *	[bytes2]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	817445732
	*/
	virtual auto GetFriendsGroupIDByIndex(int16 iGroupIndex) -> int16 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes2]
	 *	[bytes2]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	630906797
	*/
	virtual auto GetFriendsGroupMembershipCount(int16 iGroupID) -> int16 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes2]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	467357573
	*/
	virtual auto GetGroupFriendsMembershipCount(CSteamID steamID) -> int16 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2038083669
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetKnownClanByIndex, int32 iClan)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3697333869
	*/
	virtual auto GetKnownClanCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4188273453
	*/
	virtual auto GetLargeFriendAvatar(CSteamID steamIDFriend) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2955846073
	*/
	virtual auto GetMediumFriendAvatar(CSteamID steamIDFriend) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3503350504
	*/
	virtual auto GetMicBoost() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes2]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4021802939
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetNextFriendsGroupMember, int16 iGroupID)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes2]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	461359891
	*/
	virtual auto GetNextGroupFriendsMember(CSteamID steamID) -> int16 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1970862973
	*/
	virtual auto GetNumChatsWithUnreadPriorityMessages() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3276138635
	*/
	virtual auto GetOnlineFriendCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2670853813
	*/
	virtual auto GetPeakSample(HVoiceCall hVoiceCall, bool bIncoming) -> float = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1415925625
	*/
	virtual auto GetPersonaState() -> EPersonaState = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[string]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3434002766
	*/
	virtual auto GetPlayerNickname_Public(CSteamID steamID) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4062940931
	*/
	virtual auto GetPushToTalkKey() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[bytes1, bytes4, bytes_length_from_mem, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	918579410
	*/
	virtual auto GetSerializedChatRoomDlg(CSteamID steamIDChat, void *pvHistory, int32 cubBuffer, int32 *pcubData, EChatRoomType *peRoomType) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2200510873
	*/
	virtual auto GetSizeOfSerializedChatRoomDlg(CSteamID steamIDChat) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2688528177
	*/
	virtual auto GetSmallFriendAvatar(CSteamID steamIDFriend) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4152637111
	*/
	virtual auto GetUserRestrictions() -> EUserRestriction = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1912691659
	*/
	virtual auto GetVoiceCalibrationSamplePeak() -> float = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	948791380
	*/
	virtual auto GetVoiceMicrophoneVolume() -> float = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1745653423
	*/
	virtual auto GetVoiceSpeakerVolume() -> float = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	102495345
	*/
	virtual auto HandleProtocolForOverlayBrowser(uint32 uUnk, const char *pchUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3239432559
	*/
	virtual auto HasFriend(CSteamID steamID, EFriendFlags iFriendFlags) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	205921988
	*/
	virtual auto HasHardwareMicBoost() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2262708542
	*/
	virtual auto HideFriend(CSteamID steamIDFriend, bool bHide) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2575001092
	*/
	virtual auto InviteFriendToClan(CSteamID steamIDfriend, CSteamID steamIDclan) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3560923842
	*/
	virtual auto InviteUserToChatRoom(CSteamID steamIDChat, CSteamID steamIDInvitee) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, uint64, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1234670057
	*/
	virtual auto InviteUserToGame(uint32 uUnk, CSteamID steamIDFriend, const char *pchConnectString) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1135072309
	*/
	virtual auto IsClanChatAdmin(CSteamID groupID, CSteamID userID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3302297415
	*/
	virtual auto IsClanChatWindowOpenInSteam(CSteamID groupID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4006851238
	*/
	virtual auto IsClanOfficialGameGroup(CSteamID steamID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2478147893
	*/
	virtual auto IsClanPublic(CSteamID steamID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4024834868
	*/
	virtual auto IsFollowing(CSteamID steamID) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes2]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2059313549
	*/
	virtual auto IsFriendMemberOfFriendsGroup(CSteamID steamID, int16 iGroupID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2815453067
	*/
	virtual auto IsInGameVoiceSpeaking() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4166678407
	*/
	virtual auto IsPersonaNameSet() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3915242293
	*/
	virtual auto IsPushToMuteEnabled() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1752307486
	*/
	virtual auto IsPushToTalkEnabled() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2059965568
	*/
	virtual auto IsPushToTalkKeyDown() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	831175661
	*/
	virtual auto IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2900838016
	*/
	virtual auto IsVoiceCalibrating() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	928660475
	*/
	virtual auto JoinChatRoom(CSteamID steamIDChat) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	16013496
	*/
	virtual auto JoinChatRoomGroup(uint64 ullUnk1, uint64 ullUnk2) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	289051860
	*/
	virtual auto JoinClanChatRoom(CSteamID groupID) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3397690490
	*/
	virtual auto KickChatMember(CSteamID steamIDChat, CSteamID steamIDUserToActOn) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3861000536
	*/
	virtual auto LeaveChatRoom(CSteamID steamIDChat) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3251628418
	*/
	virtual auto LeaveClanChatRoom(CSteamID groupID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3424197895
	*/
	virtual auto LinkDisposition(const char *) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes1, bytes1, bytes1, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3694721523
	*/
	virtual auto NotifyChatRoomDlgsOfUIChange(CSteamID steamIDChat, bool bShowAvatars, bool bBeepOnNewMsg, bool bShowSteamIDs, bool bShowTimestampOnNewMsg) -> bool = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes1, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3359014643
	*/
	OSW_UNSAFE_WARNING
	virtual auto NotifyGameOverlayStateChanged(bool bActive) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3683723576
	*/
	virtual auto NotifyGameServerChangeRequested(const char *pchServerAddress, const char *pchPassword) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, uint64, uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	266680716
	*/
	virtual auto NotifyLobbyJoinRequested(AppId_t nAppId, CSteamID steamIDLobby, CSteamID steamIDFriend) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, uint64, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1632794154
	*/
	virtual auto NotifyRichPresenceJoinRequested(AppId_t nAppId, CSteamID steamIDFriend, const char *pchConnectString) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1, bytes1, bytes1, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2589489169
	*/
	virtual auto NotifyUIOfMenuChange(bool bShowAvatars, bool bSortByName, bool bShowOnlineOnly, bool bShowUntaggedFriends) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1531338894
	*/
	virtual auto OpenChatDialog(CSteamID steamID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1313456353
	*/
	virtual auto OpenClanChatWindowInSteam(CSteamID groupID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2498101135
	*/
	virtual auto OpenFriendsDialog(bool bUnk1, bool bUnk2) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	90704536
	*/
	virtual auto OpenInviteToTradeDialog(CSteamID steamID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, uint64, bytes4, bytes1, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3990188365
	*/
	virtual auto ProcessActivateGameOverlayInMainUI(const char *pchUnk, CSteamID steamId, uint32 uUnk, bool bUnk, int32 iUnk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	332205383
	*/
	virtual auto RegisterProtocolInOverlayBrowser(const char *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	607392817
	*/
	virtual auto ReinitAudio() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1680291546
	*/
	virtual auto RemoveFriend(CSteamID steamID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes2]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	661176909
	*/
	virtual auto RemoveFriendFromGroup(CSteamID steamID, int16 iGroupID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes2]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1932428251
	*/
	virtual auto RenameFriendsGroup(const char *pchNewGroupName, int16 iGroupID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3569140897
	*/
	virtual auto ReplyToFriendMessage(CSteamID friendID, const char *cszMessage) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2866465148
	*/
	virtual auto ReportChatDeclined(CSteamID steamID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	703694896
	*/
	virtual auto RequestClanOfficerList(CSteamID steamIDClan) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4139881509
	*/
	virtual auto RequestEmoticonList() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2005523430
	*/
	virtual auto RequestFriendMessageHistory(CSteamID steamIDFriend) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4126758118
	*/
	virtual auto RequestFriendMessageHistoryForOfflineMessages() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	770858911
	*/
	virtual auto RequestFriendProfileInfo(CSteamID steamIDFriend) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2998931853
	*/
	virtual auto RequestFriendRichPresence(AppId_t nAppId, CSteamID steamIDFriend) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2391545642
	*/
	virtual auto RequestFriendsWhoPlayGame(CGameID gameID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1070005821
	*/
	virtual auto RequestPersonaNameHistory(CSteamID steamIDFriend) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3838198588
	*/
	virtual auto RequestTrade(CSteamID steamIDPartner) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3188467210
	*/
	virtual auto RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2548224709
	*/
	virtual auto SendChatMsg(CSteamID steamIDChat, EChatEntryType eChatEntryType, const char *pvMsgBody) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4172451776
	*/
	virtual auto SendClanChatMessage(CSteamID groupID, const char *cszMessage) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2768040466
	*/
	virtual auto SendMsgToFriend(CSteamID steamIDFriend, EChatEntryType eChatEntryType, const char *pvMsgBody) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2412382140
	*/
	virtual auto SendResumeRequest(HVoiceCall hVoiceCall) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4, bytes_length_from_mem]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1913764102
	*/
	virtual auto SerializeChatRoomDlg(CSteamID steamIDChat, const void *pvHistory, int32 cubHistory) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4168630895
	*/
	virtual auto SetAutoAnswer(bool bAutoAnswer) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3041549906
	*/
	virtual auto SetAutoReflectVoice(bool bState) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1101146186
	*/
	virtual auto SetChatRoomModerated(CSteamID steamIDChat, bool bModerated) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1570905796
	*/
	virtual auto SetChatRoomType(CSteamID steamIDChat, ELobbyType eLobbyType) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3555315215
	*/
	virtual auto SetDoNotDisturb(bool bDoNotDisturb) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, string, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3233614585
	*/
	virtual auto SetFriendRegValue(CSteamID steamIDFriend, const char *pchKey, const char *pchValue) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes_length_from_reg]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2672855040
	*/
	virtual auto SetFriendsUIActiveClanChatList(uint32 *pUnk, int32 iUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2940729014
	*/
	virtual auto SetIgnoreFriend(CSteamID steamIDFriend, bool bIgnore) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3130785303
	*/
	virtual auto SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3359375539
	*/
	virtual auto SetListenForFriendsMessages(bool bListen) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2141155438
	*/
	virtual auto SetMicBoost(bool bBoost) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3980196937
	*/
	virtual auto SetNumChatsWithUnreadPriorityMessages(int32 num) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1997614081
	*/
	virtual auto SetPersonaName(const char *pchPersonaName) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3830291597
	*/
	virtual auto SetPersonaState(EPersonaState ePersonaState) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	50523525
	*/
	virtual auto SetPlayedWith(CSteamID steamIDUserPlayedWith) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2787732786
	*/
	virtual auto SetPlayerNickname(CSteamID playerSteamID, const char *cszNickname) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2180790835
	*/
	virtual auto SetPortTypes(uint32 unFlags) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3592751446
	*/
	virtual auto SetPushToTalkEnabled(bool bEnable, bool bUnk) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1943831503
	*/
	virtual auto SetPushToTalkKey(int32 nVirtualKey) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	709231584
	*/
	virtual auto SetRichPresence(AppId_t nAppId, const char *pchKey, const char *pchValue) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	459767110
	*/
	virtual auto SetVoiceMicrophoneVolume(float flVolume) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3928916541
	*/
	virtual auto SetVoiceSpeakerVolume(float flVolume) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	45630885
	*/
	virtual auto ShowChatRoomGroupInvite(const char *cUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3907320499
	*/
	virtual auto StartChatRoomVoiceSpeaking(CSteamID steamIDChat, CSteamID steamIDMember) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2635919570
	*/
	virtual auto StartTalking(HVoiceCall hVoiceCall) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2855269274
	*/
	virtual auto TerminateChatRoom(CSteamID steamIDChat) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	146450803
	*/
	virtual auto TestChatRoomPeerDisconnect(CSteamID steamIDChat, CSteamID steamIDSpeaker) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1353386446
	*/
	virtual auto TestVoiceDisconnect(HVoiceCall hVoiceCall) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3523792881
	*/
	virtual auto TestVoicePacketLoss(float flFractionOfIncomingPacketsToDrop) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2775484432
	*/
	virtual auto TimeSinceLastVoiceDataReceived(HVoiceCall hVoiceCall) -> float = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4237080481
	*/
	virtual auto TimeSinceLastVoiceDataSend(HVoiceCall hVoiceCall) -> float = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3444915044
	*/
	virtual auto TradeResponse(uint32 unTradeRequestID, bool bAccept) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4040591838
	*/
	virtual auto UnBanChatMember(CSteamID steamIDChat, CSteamID steamIDUserToActOn) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1542766054
	*/
	virtual auto VoiceAnswer(HVoiceCall hVoiceCall) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3570496858
	*/
	virtual auto VoiceCall(CSteamID steamIDLocalPeer, CSteamID steamIDRemotePeer) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1059253438
	*/
	virtual auto VoiceCallNew(CSteamID steamIDLocalPeer, CSteamID steamIDRemotePeer) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3656263515
	*/
	virtual auto VoiceHangUp(CSteamID steamIDLocalPeer, HVoiceCall hVoiceCall) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4192776519
	*/
	virtual auto VoiceIsAvailable() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2963316330
	*/
	virtual auto VoiceIsValid(HVoiceCall hVoiceCall) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1013274663
	*/
	virtual auto VoicePutOnHold(HVoiceCall HVoiceCall, bool bLocalHold) -> void = 0;


};
