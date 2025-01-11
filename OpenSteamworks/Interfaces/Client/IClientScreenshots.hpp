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

#include "Types/ScreenshotsCommon.hpp"
#include "Types/SteamTypes.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientScreenshots {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, string, string, string, bytes4, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1882835267
	*/
	virtual auto AddScreenshotToLibrary(CGameID gameID, EVRScreenshotType eVRKind, const char *cszScreenshotPath, const char *cszThumbnailPath, const char *pchUnk, int32 iWidth, int32 iHeight) -> ScreenshotHandle = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2210078784
	*/
	virtual auto AddToBatch(ScreenshotHandle hScreenshot) -> bool = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2393160773
	*/
	OSW_UNSAFE_WARNING
	virtual auto BGetUserScreenshotDirectory(char *pchBuf, uint32 cubBuf) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	7123480
	*/
	virtual auto CancelBatch() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	788823664
	*/
	virtual auto DeleteBatch(bool bDeleteFromCloud) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3244892105
	*/
	STEAMWORKS_STRUCT_RETURN(CGameID, GetGameWithLocalScreenshots, int32 iGameIndex)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1, bytes8, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3575458376
	*/
	virtual auto GetLocalLastScreenshot(CGameID *, uint32 *) -> unknown_ret = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[bytes1, bytes4, bytes4, bytes4, bytes4, bytes4, bytes8, bytes_length_from_mem, bytes1, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	255309952
	*/
	OSW_UNSAFE_WARNING
	virtual auto GetLocalScreenshot(CGameID gameID, int32 iScreenshotIndex, ScreenshotHandle *phScreenshot, int32 *piWidth, int32 *piHeight, uint32 *puTimestamp, EUCMFilePrivacyState *pePrivacy, uint64 *pullFileID, char *pchCaption, uint32 cubCaption, bool *pbSpoiler) -> bool = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[bytes1, bytes4, bytes4, bytes4, bytes4, bytes8, bytes_length_from_mem, bytes1, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3153405221
	*/
	OSW_UNSAFE_WARNING
	virtual auto GetLocalScreenshotByHandle(CGameID gameID, ScreenshotHandle hScreenshot, int32 *piWidth, int32 *piHeight, uint32 *puTimestamp, EUCMFilePrivacyState *pePrivacy, uint64 *pullFileID, char *pchCaption, uint32 cubCaption, bool *pbSpoiler) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	247912749
	*/
	virtual auto GetLocalScreenshotCount(CGameID gameID) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	753825428
	*/
	virtual auto GetLocation(CGameID gameID, ScreenshotHandle hScreenshot, char *pchLocation, uint32 cubLocation) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	394026076
	*/
	virtual auto GetNumGamesWithLocalScreenshots() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	246331229
	*/
	virtual auto GetScreenshotVRType(CGameID gameID, uint32 uUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1999225136
	*/
	virtual auto GetSizeInCloud(CGameID gameID, ScreenshotHandle hScreenshot) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1488798956
	*/
	virtual auto GetSizeOnDisk(CGameID gameID, ScreenshotHandle hScreenshot) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2387961059
	*/
	virtual auto GetTaggedPublishedFile(CGameID gameID, ScreenshotHandle hScreenshot, int32 iPublishedFileIndex) -> PublishedFileId_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3870458149
	*/
	virtual auto GetTaggedPublishedFileCount(CGameID gameID, ScreenshotHandle hScreenshot) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	721997470
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetTaggedUser, CGameID gameID, ScreenshotHandle hScreenshot, int32 iUserIndex)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2619951344
	*/
	virtual auto GetTaggedUserCount(CGameID gameID, ScreenshotHandle hScreenshot) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3042763041
	*/
	virtual auto IsPersisted(CGameID gameID, ScreenshotHandle hScreenshot) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3628832042
	*/
	virtual auto RecoverOldScreenshots() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3834886066
	*/
	virtual auto RequestScreenshotFromGame(AppId_t nAppId) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	939485553
	*/
	virtual auto ResolvePath(CGameID gameID, ScreenshotHandle hScreenshot, bool bUnk, char *szResolvedPath, uint32 cubResolvedPath) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2707423330
	*/
	virtual auto SetLocalScreenshotCaption(CGameID gameID, ScreenshotHandle hScreenshot, const char *cszCaption) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3314511234
	*/
	virtual auto SetLocalScreenshotPrivacy(CGameID gameID, ScreenshotHandle hScreenshot, EUCMFilePrivacyState ePrivacy) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3548199727
	*/
	virtual auto SetLocalScreenshotSpoiler(CGameID, ScreenshotHandle hScreenshot, bool bSpoiler) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	659044530
	*/
	virtual auto SetLocation(CGameID gameID, ScreenshotHandle hScreenshot, const char *cszLocation) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2300010716
	*/
	virtual auto SetShortcutDisplayName(CGameID, const char *cszName) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1705374324
	*/
	virtual auto StartBatch(CGameID gameID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes8]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3069162826
	*/
	virtual auto TagPublishedFile(CGameID gameID, ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileId) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3228697725
	*/
	virtual auto TagUser(CGameID gameID, ScreenshotHandle hScreenshot, CSteamID userID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3014007820
	*/
	virtual auto TriggerScreenshot(CGameID gameID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3556661281
	*/
	virtual auto UploadBatch(EUCMFilePrivacyState ePrivacy) -> SteamAPICall_t = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4, bytes4, bytes1, bytes8, bytes_length_from_mem]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	184440709
	*/
	OSW_UNSAFE_WARNING
	virtual auto WriteScreenshot(CGameID gameID, const uint8 *pubRGBData, uint32 uRGBDataSize, int32 iWidth, int32 iHeight) -> ScreenshotHandle = 0;


};
