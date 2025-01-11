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

osw_abstract_class OSW_UNSAFE_INTERFACE IClientConfigStore {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1290521457
	*/
	virtual auto FlushToDisk(bool bIsShuttingDown) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1398474663
	*/
	virtual auto GetBinary(EConfigStore eConfigStore, StringView pszKeyName, uint8 *pubBuf, uint32 cubBuf) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes4, unknown]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2310660597
	*/
	virtual auto GetBinary(EConfigStore eConfigStore, StringView pszKeyName, CUtlBuffer *pUtlBuf) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1023159517
	*/
	virtual auto GetBinaryWatermarked(EConfigStore eConfigStore, StringView pszKeyName, uint8 *pubBuf, uint32 cubBuf) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	703115589
	*/
	virtual auto GetBool(EConfigStore eConfigStore, StringView pszKeyNameIn, bool defaultValue) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	405017597
	*/
	virtual auto GetFloat(EConfigStore eConfigStore, StringView pszKeyName, float defaultValue) -> float = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	38544718
	*/
	virtual auto GetInt(EConfigStore eConfigStore, StringView pszKeyName, int32 defaultValue) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2053995592
	*/
	virtual auto GetKeySerialized(EConfigStore eConfigStore, StringView pszKeyNameIn, uint8 *pchBuffer, int32 cbBufferMax) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, string]
	 *	[string]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1431364851
	*/
	virtual auto GetString(EConfigStore eConfigStore, StringView pszKeyName, StringView defaultValue) -> const char* = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	416168339
	*/
	virtual auto GetUint64(EConfigStore eConfigStore, StringView pszKeyName, uint64 defaultValue) -> uint64 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	821615085
	*/
	virtual auto IsSet(EConfigStore eConfigStore, StringView pszKeyNameIn) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2520813490
	*/
	virtual auto RemoveKey(EConfigStore eConfigStore, StringView pszKeyName) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4, bytes_length_from_mem]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3332916121
	*/
	virtual auto SetBinary(EConfigStore eConfigStore, StringView pszKeyName, const uint8 *pubData, uint32 cubData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4, bytes_length_from_mem]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4024168340
	*/
	virtual auto SetBinaryWatermarked(EConfigStore eConfigStore, StringView pszKeyName, const uint8 *pubData, uint32 cubData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1873750329
	*/
	virtual auto SetBool(EConfigStore eConfigStore, StringView pszKeyNameIn, bool value) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	731190409
	*/
	virtual auto SetFloat(EConfigStore eConfigStore, StringView pszKeyNameIn, float flValue) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2703583347
	*/
	virtual auto SetInt(EConfigStore eConfigStore, StringView pszKeyNameIn, int32 nValue) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3167524116
	*/
	virtual auto SetString(EConfigStore eConfigStore, StringView pszKeyNameIn, StringView pszValue) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes8]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	943487677
	*/
	virtual auto SetUint64(EConfigStore eConfigStore, StringView pszKeyNameIn, uint64 unValue) -> bool = 0;


};
