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

#include "Types/SharedConnectionCommon.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientSharedConnection {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	902829230
	*/
	virtual auto AllocateSharedConnection() -> HSharedConnection = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean, unknown, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3367199586
	*/
	virtual auto BPopReceivedMessage(HSharedConnection hConn, CUtlBuffer *pBufOut, uint32 *hCall) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2796835490
	*/
	virtual auto RegisterEMsgHandler(HSharedConnection hConn, uint32 eMsg) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3532453050
	*/
	virtual auto RegisterServiceMethodHandler(HSharedConnection hConn, const char *msgHandler) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1895813770
	*/
	virtual auto ReleaseSharedConnection(HSharedConnection hConn) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes_length_from_mem]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2416628935
	*/
	virtual auto SendMessage(HSharedConnection hConn, void *pBuf, size_t szBuf) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes_length_from_mem]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2136052924
	*/
	virtual auto SendMessageAndAwaitResponse(HSharedConnection hConn, void *pBuf, size_t szBuf) -> int32 = 0;


};
