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
#include "Types/UtilsCommon.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientRemoteStorage {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean, bytes8, bytes4, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	83532305
	*/
	virtual auto BGetSubscribedFileDownloadInfo(int32 iFile, PublishedFileId_t *punPublishedFileId, uint32 *puBytesDownloaded, uint32 *puBytesExpected, AppId_t *pnAppId) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean, bytes4, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1585255599
	*/
	virtual auto BGetSubscribedFileDownloadInfo(PublishedFileId_t unPublishedFileId, uint32 *puBytesDownloaded, uint32 *puBytesExpected, AppId_t *pnAppId) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2321694387
	*/
	virtual auto BIsFileSyncing(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	418047339
	*/
	virtual auto CancelCurrentAndPendingOperations() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3643302940
	*/
	virtual auto ClearPublishFileUpdateRequests(AppId_t nAppId) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1180111226
	*/
	virtual auto CommitPublishedFileUpdate(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, JobID_t hUpdateRequest) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2659009871
	*/
	virtual auto CreatePublishedFileUpdateRequest(AppId_t nAppId, PublishedFileId_t unPublishedFileId) -> JobID_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2604170486
	*/
	virtual auto DeletePublishedFile(PublishedFileId_t unPublishedFileId) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3758283239
	*/
	virtual auto EGetFileSyncState(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile) -> EFileRemoteStorageSyncState = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	391545068
	*/
	virtual auto EnumeratePublishedFilesByUserAction(AppId_t nAppId, EWorkshopFileAction eAction, uint32 uStartIndex) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4, bytes4, bytes4, bytes4, utlvector, utlvector]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3891806765
	*/
	virtual auto EnumeratePublishedWorkshopFiles(AppId_t nAppId, EWorkshopEnumerationType eType, EPublishedFileInfoMatchingFileType eFileType, uint32 uStartIndex, uint32 cDays, uint32 cCount, const SteamParamStringArray_t *pTags, const SteamParamStringArray_t *pUserTags) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2536816817
	*/
	virtual auto EnumerateUserPublishedFiles(AppId_t nAppId, uint32 uStartIndex, ERemoteStoragePublishedFileSortOrder eOrder) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, uint64, bytes4, utlvector, utlvector]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1301188923
	*/
	virtual auto EnumerateUserSharedWorkshopFiles(AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, const SteamParamStringArray_t *pRequiredTags, const SteamParamStringArray_t *pExcludedTags) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes1, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2413423359
	*/
	virtual auto EnumerateUserSubscribedFiles(AppId_t nAppId, uint32 uStartIndex, uint8 uListType, EPublishedFileInfoMatchingFileType eMatchingFileType) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3475081953
	*/
	virtual auto EnumerateUserSubscribedFilesWithUpdates(AppId_t nAppId, uint32 uStartIndex, RTime32 uStartTime) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1546320015
	*/
	virtual auto EvaluateRemoteStorageSyncState(AppId_t nAppId, bool bUnk) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2189117229
	*/
	virtual auto FileDelete(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1398469908
	*/
	virtual auto FileExists(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3224330326
	*/
	virtual auto FileFetch(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	958353185
	*/
	virtual auto FileForget(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	460528030
	*/
	virtual auto FilePersist(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	659328847
	*/
	virtual auto FilePersisted(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string, bytes4]
	 *	[bytes4, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4007166541
	*/
	virtual auto FileRead(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile, void *pvData, int32 cubDataToRead) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string, bytes4, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3880728109
	*/
	virtual auto FileReadAsync(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *, uint32, uint32) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3271965634
	*/
	virtual auto FileReadAsyncComplete(AppId_t nAppId, uint64, void *, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1549351922
	*/
	virtual auto FileShare(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string, bytes1]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3494938087
	*/
	virtual auto FileTouch(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile, bool) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string, bytes4, bytes_length_from_mem]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2753736488
	*/
	virtual auto FileWrite(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile, const void *pvData, int32 cubData) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string, unknown]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	712688164
	*/
	virtual auto FileWriteAsync(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *, CUtlBuffer *) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	460452242
	*/
	virtual auto FileWriteStreamCancel(GID_t hStream) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3556054068
	*/
	virtual auto FileWriteStreamClose(GID_t hStream) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2277035570
	*/
	virtual auto FileWriteStreamOpen(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile) -> GID_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes_length_from_mem]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2321823327
	*/
	virtual auto FileWriteStreamWriteChunk(GID_t hStream, const void *pvData, int32 cubData) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2029767742
	*/
	virtual auto GetCREItemVoteSummary(PublishedFileId_t unPublishedFileId) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1017853524
	*/
	virtual auto GetCachedUGCCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1495157345
	*/
	virtual auto GetCachedUGCHandle(int32 iCachedContent) -> UGCHandle_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2873505558
	*/
	virtual auto GetConflictingFileTimestamps(AppId_t nAppId, RTime32 *pnTimestampLocal, RTime32 *pnTimestampRemote) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3385686478
	*/
	virtual auto GetFileCount(AppId_t nAppId, bool bFromExternalAPI) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	983571817
	*/
	virtual auto GetFileSize(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3948785757
	*/
	virtual auto GetFileTimestamp(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile) -> int64 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes8, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3323853031
	*/
	virtual auto GetQuota(AppId_t nAppId, uint64 *pnTotalBytes, uint64 *pnAvailableBytes) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	223450482
	*/
	virtual auto GetRemoteStorageSyncState(AppId_t nAppId) -> ERemoteStorageSyncState = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2579649754
	*/
	virtual auto GetSubscribedFileDownloadCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	9145526
	*/
	virtual auto GetSyncPlatforms(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile) -> ERemoteStoragePlatform = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes1, bytes4, unknown, bytes4, uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2427810250
	*/
	virtual auto GetUGCDetails(UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes1, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2522835662
	*/
	virtual auto GetUGCDownloadProgress(UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2176385047
	*/
	virtual auto GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	302295321
	*/
	virtual auto HaveLatestFilesLocally(AppId_t nAppId) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3610113501
	*/
	virtual auto IsAppSyncInProgress(AppId_t nAppId) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2312343118
	*/
	virtual auto IsCloudEnabledForAccount() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2347125323
	*/
	virtual auto IsCloudEnabledForApp(AppId_t nAppId) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3534110488
	*/
	virtual auto LoadLocalFileInfoCache(AppId_t nAppId) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3759090598
	*/
	virtual auto PauseAllSubscribedFileDownloads() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2532640538
	*/
	virtual auto PauseSubscribedFileDownloadsForApp(AppId_t nAppId) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string, string, bytes4, string, string, bytes4, utlvector, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3994061844
	*/
	virtual auto PublishFile(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *cszFileName, const char *cszPreviewFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, const SteamParamStringArray_t *pTags, EWorkshopFileType eType) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string, string, bytes4, string, bytes4, string, string, bytes4, utlvector]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3293673211
	*/
	virtual auto PublishVideo(AppId_t nAppId, EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, const SteamParamStringArray_t *pTags) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string, string, bytes4, string, string, bytes4, utlvector]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3641382885
	*/
	virtual auto PublishVideoFromURL(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *cszVideoURL, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, const SteamParamStringArray_t *pTags) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	903496630
	*/
	virtual auto ResetFileRequestState(AppId_t nAppId) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2480322180
	*/
	virtual auto ResolvePath(AppId_t nAppID, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchRelPath, char *pchDest, uint32 cchDest) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1361125336
	*/
	virtual auto ResolveSyncConflict(AppId_t nAppId, bool bAcceptLocalFiles) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1035815451
	*/
	virtual auto ResumeAllSubscribedFileDownloads() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3304501087
	*/
	virtual auto ResumeSubscribedFileDownloadsForApp(AppId_t nAppId) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2172817150
	*/
	virtual auto RunAutoCloudOnAppExit(AppId_t nAppId) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3144411471
	*/
	virtual auto RunAutoCloudOnAppLaunch(AppId_t nAppId) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4173529554
	*/
	virtual auto SetCloudEnabledForAccount(bool bEnabled) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	838031155
	*/
	virtual auto SetCloudEnabledForApp(AppId_t nAppId, bool bEnable) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2727561508
	*/
	virtual auto SetSyncPlatforms(AppId_t nAppId, ERemoteStorageFileRoot eRemoteStorageFileRoot, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	978000681
	*/
	virtual auto SetUserPublishedFileAction(AppId_t nAppId, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2828315152
	*/
	virtual auto SubscribePublishedFile(AppId_t nAppId, PublishedFileId_t unPublishedFileId) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes8]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2121035564
	*/
	virtual auto SynchronizeApp(AppId_t nAppId, bool bSyncClient, bool bSyncServer) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1295675804
	*/
	virtual auto UGCDownloadToLocation(UGCHandle_t hContent, const char *cszLocation, uint32 uUnk) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4, bytes4]
	 *	[bytes4, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	319904360
	*/
	virtual auto UGCRead(UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 uOffset, EUGCReadAction eAction) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2273872609
	*/
	virtual auto UnsubscribePublishedFile(AppId_t nAppId, PublishedFileId_t unPublishedFileId) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1945486202
	*/
	virtual auto UpdatePublishedFileDescription(JobID_t hUpdateRequest, const char *cszDescription) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2780423950
	*/
	virtual auto UpdatePublishedFileFile(JobID_t hUpdateRequest, const char *cszFile) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2255610418
	*/
	virtual auto UpdatePublishedFilePreviewFile(JobID_t hUpdateRequest, const char *cszPreviewFile) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2498219298
	*/
	virtual auto UpdatePublishedFileSetChangeDescription(JobID_t hUpdateRequest, const char *cszDescription) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, utlvector]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3733123858
	*/
	virtual auto UpdatePublishedFileTags(JobID_t hUpdateRequest, const SteamParamStringArray_t *pTags) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	355213198
	*/
	virtual auto UpdatePublishedFileTitle(JobID_t hUpdateRequest, const char *cszTitle) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	239638003
	*/
	virtual auto UpdatePublishedFileURL(JobID_t hUpdateRequest, const char *cszURL) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	195939255
	*/
	virtual auto UpdatePublishedFileVisibility(JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3458141424
	*/
	virtual auto UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp) -> SteamAPICall_t = 0;


};
