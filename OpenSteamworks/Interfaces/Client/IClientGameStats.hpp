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

#include "Types/GameStatsCommon.hpp"
#include "Types/SteamTypes.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientGameStats {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes4, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2828920306
	*/
	virtual auto AddNewRow(uint64 *pulRowID, uint64 ulSessionID, const char *pstrTableName) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2459315338
	*/
	virtual auto AddRowAttributeFloat(uint64 ulRowID, const char *pstrName, float fData) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	336540703
	*/
	virtual auto AddRowAttributeInt(uint64 ulRowID, const char *pstrName, int32 iData) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2617197078
	*/
	virtual auto AddRowAttributeInt64(uint64 ulRowID, const char *pstrName, int64 llData) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4247187108
	*/
	virtual auto AddRowAttributeString(uint64 ulRowID, const char *pstrName, const char *pstrData) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3372994730
	*/
	virtual auto AddSessionAttributeFloat(uint64 ulSessionID, const char *pstrName, float fData) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2420599505
	*/
	virtual auto AddSessionAttributeInt(uint64 ulSessionID, const char *pstrName, int32 nData) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3421232822
	*/
	virtual auto AddSessionAttributeInt64(uint64 ulSessionID, const char *pstrName, int64 llData) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2181138256
	*/
	virtual auto AddSessionAttributeString(uint64 ulSessionID, const char *pstrName, const char *pstrData) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	253508820
	*/
	virtual auto CommitOutstandingRows(uint64 ulSessionID) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2512720743
	*/
	virtual auto CommitRow(uint64 ulRowID) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes2]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2056930524
	*/
	virtual auto EndSession(uint64 ulSessionID, RTime32 rtTimeEnded, int16 nReasonCode) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1, bytes8, bytes4, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3038349390
	*/
	virtual auto GetNewSession(int8 nAccountType, uint64 ullAccountID, AppId_t nAppID, RTime32 rtTimeStarted) -> SteamAPICall_t = 0;


};
