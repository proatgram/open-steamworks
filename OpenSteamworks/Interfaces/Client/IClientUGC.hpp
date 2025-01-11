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

#include "Types/RemoteStorageCommon.hpp"
#include "Types/SteamTypes.hpp"
#include "Types/UGCCommon.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientUGC {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3979201200
	*/
	virtual auto AddAppDependency(PublishedFileId_t nPublishedFileID, AppId_t nAppID) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3399931026
	*/
	virtual auto AddDependency(PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	204176065
	*/
	virtual auto AddExcludedTag(UGCQueryHandle_t handle, const char *pTagName) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1257050120
	*/
	virtual auto AddItemKeyValueTag(UGCUpdateHandle_t handle, const char *, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	798056525
	*/
	virtual auto AddItemPreviewFile(UGCUpdateHandle_t handle, const char *, EItemPreviewType) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2484165600
	*/
	virtual auto AddItemPreviewVideo(UGCUpdateHandle_t handle, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4086784171
	*/
	virtual auto AddItemToFavorites(AppId_t, PublishedFileId_t) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1401235891
	*/
	virtual auto AddRequiredKeyValueTag(UGCQueryHandle_t handle, const char *, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1755484246
	*/
	virtual auto AddRequiredTag(UGCQueryHandle_t handle, const char *pTagName) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1306574312
	*/
	virtual auto BInitWorkshopForGameServer(AppId_t, DepotId_t, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4, bytes4, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3209288607
	*/
	virtual auto CreateQueryAllUGCRequest(EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) -> UGCQueryHandle_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4, bytes4, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3209288607
	*/
	virtual auto CreateQueryAllUGCRequest(EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, const char *pchUnk) -> UGCQueryHandle_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes_length_from_reg]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	912074167
	*/
	virtual auto CreateQueryUGCDetailsRequest(PublishedFileId_t *, uint32) -> UGCQueryHandle_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4, bytes4, bytes4, bytes4, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2526423470
	*/
	virtual auto CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) -> UGCQueryHandle_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	955128682
	*/
	virtual auto DeleteItem(PublishedFileId_t nPublishedFileID) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2712132957
	*/
	virtual auto DownloadItem(AppId_t, PublishedFileId_t, bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3987379302
	*/
	virtual auto GetAllItemsSizeOnDisk(AppId_t) -> uint64 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2766102092
	*/
	virtual auto GetAppDependencies(PublishedFileId_t nPublishedFileID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes1, bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1969961575
	*/
	virtual auto GetAppItemsStatus(AppId_t, bool *, bool *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8]
	 *	[bytes1, bytes8, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2481577324
	*/
	virtual auto GetItemDownloadInfo(AppId_t, PublishedFileId_t, uint64 *, uint64 *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	619607887
	*/
	virtual auto GetItemState(AppId_t, PublishedFileId_t) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4, bytes8, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4006492204
	*/
	virtual auto GetItemUpdateProgress(UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal) -> EItemUpdateStatus = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes_length_from_mem, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2276543252
	*/
	virtual auto GetQueryUGCAdditionalPreview(UGCQueryHandle_t handle, uint32, uint32, char *, uint32, char *, uint32, EItemPreviewType *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	918449167
	*/
	virtual auto GetQueryUGCChildren(UGCQueryHandle_t handle, uint32, PublishedFileId_t *, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4032123893
	*/
	virtual auto GetQueryUGCImageURL(UGCQueryHandle_t handle, uint32, char *, uint32, uint32 *, uint32 *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes1, bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1716026743
	*/
	virtual auto GetQueryUGCIsDepotBuild(UGCQueryHandle_t, uint32, bool *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2424358568
	*/
	virtual auto GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32, uint32, char *, uint32, char *, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, string, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	396377485
	*/
	virtual auto GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32, const char *, char *, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	469524238
	*/
	virtual auto GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32, char *, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	332643220
	*/
	virtual auto GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle, uint32) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	804801347
	*/
	virtual auto GetQueryUGCNumKeyValueTags(UGCQueryHandle_t handle, uint32) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	498558679
	*/
	virtual auto GetQueryUGCNumTags(UGCQueryHandle_t handle, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	207950542
	*/
	virtual auto GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32, char *, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes1, bytes9772]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2033108142
	*/
	virtual auto GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t *pDetails) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[bytes1, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	587027734
	*/
	virtual auto GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32, EItemStatistic, uint64 *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1145893247
	*/
	virtual auto GetQueryUGCTag(UGCQueryHandle_t handle, uint32, uint32, char *, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	334155140
	*/
	virtual auto GetQueryUGCTagDisplayName(UGCQueryHandle_t handle, uint32, uint32, char *, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3602614384
	*/
	virtual auto GetUserItemVote(PublishedFileId_t) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2392259590
	*/
	virtual auto ReleaseQueryUGCRequest(UGCQueryHandle_t handle) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1781530017
	*/
	virtual auto RemoveAllItemKeyValueTags(UGCUpdateHandle_t handle) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2744367867
	*/
	virtual auto RemoveAppDependency(PublishedFileId_t nPublishedFileID, AppId_t nAppID) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3418354329
	*/
	virtual auto RemoveDependency(PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3426822039
	*/
	virtual auto RemoveItemFromFavorites(AppId_t, PublishedFileId_t) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1370574945
	*/
	virtual auto RemoveItemKeyValueTags(UGCUpdateHandle_t handle, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	236136046
	*/
	virtual auto RemoveItemPreview(UGCUpdateHandle_t handle, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	458215413
	*/
	virtual auto RequestUGCDetails(PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2627977026
	*/
	virtual auto SendQueryUGCRequest(UGCQueryHandle_t handle) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3000888774
	*/
	virtual auto SetAllowCachedResponse(UGCQueryHandle_t handle, uint32 unMaxAgeSeconds) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3672520181
	*/
	virtual auto SetAllowLegacyUpload(UGCUpdateHandle_t handle, bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2970022156
	*/
	virtual auto SetCloudFileNameFilter(UGCQueryHandle_t handle, const char *pMatchCloudFileName) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1686212891
	*/
	virtual auto SetItemMetadata(UGCUpdateHandle_t handle, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3250654101
	*/
	virtual auto SetItemUpdateLanguage(UGCUpdateHandle_t handle, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3654999946
	*/
	virtual auto SetLanguage(UGCQueryHandle_t handle, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1660884862
	*/
	virtual auto SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2942196594
	*/
	virtual auto SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2589874777
	*/
	virtual auto SetReturnAdditionalPreviews(UGCQueryHandle_t handle, bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	366678778
	*/
	virtual auto SetReturnChildren(UGCQueryHandle_t handle, bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2131247062
	*/
	virtual auto SetReturnKeyValueTags(UGCQueryHandle_t handle, bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	20285939
	*/
	virtual auto SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1813263238
	*/
	virtual auto SetReturnMetadata(UGCQueryHandle_t handle, bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	509644487
	*/
	virtual auto SetReturnOnlyIDs(UGCQueryHandle_t handle, bool bReturnOnlyIDs) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1822970490
	*/
	virtual auto SetReturnPlaytimeStats(UGCQueryHandle_t handle, uint32 unDays) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2807676691
	*/
	virtual auto SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1599470463
	*/
	virtual auto SetSearchText(UGCQueryHandle_t handle, const char *pSearchText) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1990756758
	*/
	virtual auto SetUserItemVote(PublishedFileId_t, bool) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes_length_from_reg]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	359050350
	*/
	virtual auto StartPlaytimeTracking(AppId_t, PublishedFileId_t *publishedFields, uint32 numPublishedFields) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes_length_from_reg]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2902659106
	*/
	virtual auto StopPlaytimeTracking(AppId_t, PublishedFileId_t *publishedFields, uint32 numPublishedFields) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1475467111
	*/
	virtual auto StopPlaytimeTrackingForAllItems(AppId_t) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3798104801
	*/
	virtual auto SuspendDownloads(AppId_t, bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	410541378
	*/
	virtual auto UpdateItemPreviewFile(UGCUpdateHandle_t handle, uint32, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3955228877
	*/
	virtual auto UpdateItemPreviewVideo(UGCUpdateHandle_t handle, uint32, const char *) -> bool = 0;


};
