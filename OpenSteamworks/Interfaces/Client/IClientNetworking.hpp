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

#include "Types/NetworkingCommon.hpp"
#include "Types/SteamTypes.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientNetworking {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4002160172
	*/
	virtual auto AcceptP2PSessionWithUser(CSteamID steamIDRemote) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2951272315
	*/
	virtual auto AllowP2PPacketRelay(bool bAllow) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1187276354
	*/
	virtual auto CloseP2PChannelWithUser(CSteamID steamIDRemote, int32 iVirtualPort) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3091326072
	*/
	virtual auto CloseP2PSessionWithUser(CSteamID steamIDRemote) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes20, bytes2, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	891769022
	*/
	virtual auto CreateConnectionSocket(SteamIPAddress_t nIP, uint16 nPort, int32 nTimeoutSec) -> SNetSocket_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes20, bytes2, bytes1]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2069570624
	*/
	virtual auto CreateListenSocket(int32 nVirtualP2PPort, SteamIPAddress_t nIP, uint16 nPort, bool bAllowUseOfPacketRelay) -> SNetListenSocket_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4, bytes4, bytes1]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	776535208
	*/
	virtual auto CreateP2PConnectionSocket(CSteamID steamIDTarget, int32 nVirtualPort, int32 nTimeoutSec, bool bAllowUseOfPacketRelay) -> SNetSocket_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1489557674
	*/
	virtual auto DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3024202312
	*/
	virtual auto DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes20, bytes2]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	986054013
	*/
	virtual auto GetListenSocketInfo(SNetListenSocket_t hListenSocket, SteamIPAddress_t *pnIP, uint16 *pnPort) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1914829495
	*/
	virtual auto GetMaxPacketSize(SNetSocket_t hSocket) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes1, bytes20]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1061535649
	*/
	virtual auto GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t *pConnectionState) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2676482074
	*/
	virtual auto GetSocketConnectionType(SNetSocket_t hSocket) -> ESNetSocketConnectionType = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, uint64, bytes4, bytes20, bytes2]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2859676990
	*/
	virtual auto GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int32 *peSocketStatus, SteamIPAddress_t *punIPRemote, uint16 *punPortRemote) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2819674798
	*/
	virtual auto IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4246056979
	*/
	virtual auto IsP2PPacketAvailable(uint32 *pcubMsgSize, int32 iVirtualPort) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes4, uint64, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3026840687
	*/
	virtual auto ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int32 iVirtualPort) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes4, bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1856678720
	*/
	virtual auto RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes1, bytes_length_from_mem]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1270061763
	*/
	virtual auto SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4, bytes_length_from_mem, bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1470634498
	*/
	virtual auto SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int32 iVirtualPort) -> bool = 0;


};
