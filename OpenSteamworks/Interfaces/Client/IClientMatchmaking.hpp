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

#include "Types/MatchmakingCommon.hpp"
#include "Types/SteamTypes.hpp"
#include "Types/UserCommon.hpp"
#include "Types/ForwardDeclaredCommon.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientMatchmaking {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes2, bytes2, bytes4, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1163974147
	*/
	virtual auto AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2832038684
	*/
	virtual auto AddRequestLobbyListCompatibleMembersFilter(CSteamID steamID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	588727658
	*/
	virtual auto AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter filter) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3961152892
	*/
	virtual auto AddRequestLobbyListFilterSlotsAvailable(int32 nSlotsAvailable) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1154348084
	*/
	virtual auto AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int32 nValueToBeCloseTo) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1417380413
	*/
	virtual auto AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int32 nValueToMatch, ELobbyComparison eComparisonType) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3704666846
	*/
	virtual auto AddRequestLobbyListResultCountFilter(int32 cMaxResults) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, string, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2403877736
	*/
	virtual auto AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	302267233
	*/
	virtual auto BeginGMSQuery(AppId_t nAppId, int32 iRegionCode, const char *szFilterText) -> uint64 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4084267484
	*/
	virtual auto CreateLobby(ELobbyType eLobbyType, int32 cMaxMembers) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3832389799
	*/
	virtual auto DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3237384899
	*/
	virtual auto EnsureFavoriteGameAccountsUpdated(bool bUnk) -> uint64 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes4, bytes4, bytes2, bytes2, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2503931586
	*/
	virtual auto GetFavoriteGame(int32 iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3740779705
	*/
	virtual auto GetFavoriteGameCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes1, unknown]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2856939070
	*/
	virtual auto GetGMSQueryResults(uint64 ullGMSQuery, CMsgGMSClientServerQueryResponse *) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	473126687
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetLobbyByIndex, int32 iLobby)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4, bytes4]
	 *	[bytes4, bytes_length_from_reg, uint64, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	855649184
	*/
	virtual auto GetLobbyChatEntry(CSteamID steamIDLobby, int32 iChatID, CSteamID *pSteamIDUser, void *pvData, int32 cubData, EChatEntryType *peChatEntryType) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2319493852
	*/
	virtual auto GetLobbyDataByIndex(CSteamID steamIDLobby, int32 iLobbyData, char *pchKey, int32 cchKeyBufferSize, char *pchValue, int32 cchValueBufferSize) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	921063291
	*/
	virtual auto GetLobbyDataCount(CSteamID steamIDLobby) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1, bytes4, bytes2, uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3571446089
	*/
	virtual auto GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	610910575
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetLobbyMemberByIndex, CSteamID steamIDLobby, int32 iMember)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1356095973
	*/
	virtual auto GetLobbyMemberLimit(CSteamID steamIDLobby) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1726487880
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetLobbyOwner, CSteamID steamIDLobby)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2745953997
	*/
	virtual auto GetNumLobbyMembers(CSteamID steamIDLobby) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1798174102
	*/
	virtual auto InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2107392326
	*/
	virtual auto JoinLobby(CSteamID steamIDLobby) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2077763986
	*/
	virtual auto LeaveLobby(CSteamID steamIDLobby) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	187367843
	*/
	virtual auto PollGMSQuery(uint64 ullGMSQuery) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	865291662
	*/
	virtual auto ReleaseGMSQuery(uint64 ullGMSQuery) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes2, bytes2, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2312830600
	*/
	virtual auto RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1185109301
	*/
	virtual auto RequestFriendsLobbies() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2688257222
	*/
	virtual auto RequestLobbyData(CSteamID steamIDLobby) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1358822785
	*/
	virtual auto RequestLobbyList() -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4, bytes_length_from_mem]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2545699778
	*/
	virtual auto SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int32 cubMsgBody) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2919203398
	*/
	virtual auto SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobby2) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, string, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1708535023
	*/
	virtual auto SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4, bytes2, uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2337919420
	*/
	virtual auto SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	667538359
	*/
	virtual auto SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, string, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2866760539
	*/
	virtual auto SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3850464477
	*/
	virtual auto SetLobbyMemberLimit(CSteamID steamIDLobby, int32 cMaxMembers) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	739127910
	*/
	virtual auto SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2412908402
	*/
	virtual auto SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3102522910
	*/
	virtual auto SetLobbyVoiceEnabled(CSteamID steamIDLobby, bool bVoiceEnabled) -> void = 0;


};
