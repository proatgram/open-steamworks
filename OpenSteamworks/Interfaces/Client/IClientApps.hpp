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

osw_abstract_class OSW_UNSAFE_INTERFACE IClientApps {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4]
	 *	[boolean, bytes4, boolean, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2829842828
	*/
	virtual auto BGetDLCDataByIndex(AppId_t unAppID, int32 iDLC, AppId_t *pDlcAppID, bool *pbAvailable, char *pchName, int32 cchNameBufferSize) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2985065069
	*/
	virtual auto GetAllOwnedMultiplayerApps(AppId_t *punAppIDs, int32 cAppIDsMax) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2313663211
	*/
	virtual auto GetAppData(AppId_t unAppID, const char *pchKey, char *pchValue, int32 cchValueMax) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4, bytes1]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1441353344
	*/
	virtual auto GetAppDataSection(AppId_t unAppID, EAppInfoSection eSection, uint8 *pchBuffer, int32 cbBufferMax, bool bSharedKVSymbols) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3724306147
	*/
	virtual auto GetAppType(AppId_t unAppID) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4250932348
	*/
	virtual auto GetAvailableLaunchOptions(AppId_t unAppID, uint32 *, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1898026539
	*/
	virtual auto GetDLCCount(AppId_t unAppID) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3213844358
	*/
	virtual auto GetInternalAppIDFromGameID(CGameID nGameID) -> AppId_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes_length_from_reg, bytes4, bytes1]
	 *	[bytes4, bytes_length_from_reg, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4283401715
	*/
	virtual auto GetMultipleAppDataSections(AppId_t unAppID, const int32 *, int32, uint8 *, int32, bool, int32 *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes_length_from_reg]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2941399614
	*/
	virtual auto RequestAppInfoUpdate(const AppId_t *pAppIDs, int32 nNumAppIDs) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes_length_from_mem]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1254171508
	*/
	virtual auto SetLocalAppConfig(AppId_t unAppID, uint8 *pchBuffer, int32 cbBuffer) -> bool = 0;


};
