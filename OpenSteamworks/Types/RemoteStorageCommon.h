//==========================  Open Steamworks  ================================
//
// This file is part of the Open Steamworks project. All individuals associated
// with this project do not claim ownership of the contents
// 
// The code, comments, and all related files, projects, resources,
// redistributables included with this project are Copyright Valve Corporation.
// Additionally, Valve, the Valve logo, Half-Life, the Half-Life logo, the
// Lambda logo, Steam, the Steam logo, Team Fortress, the Team Fortress logo,
// Opposing Force, Day of Defeat, the Day of Defeat logo, Counter-Strike, the
// Counter-Strike logo, Source, the Source logo, and Counter-Strike Condition
// Zero are trademarks and or registered trademarks of Valve Corporation.
// All other trademarks are property of their respective owners.
//
//=============================================================================

#pragma once

#include "SteamTypes.h"

// A handle to a piece of user generated content
using UGCHandle_t = uint64;
using PublishedFileUpdateHandle_t = uint64;
using PublishedFileId_t = uint64;
static constexpr UGCHandle_t k_UGCHandleInvalid = 0xffffffffffffffffull;
static constexpr PublishedFileUpdateHandle_t k_PublishedFileUpdateHandleInvalid = 0xffffffffffffffffull;

static constexpr uint32 k_cchPublishedDocumentTitleMax = 128 + 1;
static constexpr uint32 k_cchPublishedDocumentDescriptionMax = 8000;
static constexpr uint32 k_cchPublishedDocumentChangeDescriptionMax = 256;
static constexpr uint32 k_unEnumeratePublishedFilesMaxResults = 50;
static constexpr uint32 k_cchTagListMax = 1024 + 1;
static constexpr uint32 k_cchFilenameMax = 260;
static constexpr uint32 k_cchPublishedFileURLMax = 256;

enum ERemoteStorageFileRoot {
    k_ERemoteStorageFileRootInvalid = -1, // Invalid
    k_ERemoteStorageFileRootDefault, // Default
    k_ERemoteStorageFileRootGameInstall, // GameInstall
    k_ERemoteStorageFileRootWinMyDocuments, // WinMyDocuments
    k_ERemoteStorageFileRootWinAppDataLocal, // WinAppDataLocal
    k_ERemoteStorageFileRootWinAppDataRoaming, // WinAppDataRoaming
    k_ERemoteStorageFileRootSteamUserBaseStorage, // SteamUserBaseStorage
    k_ERemoteStorageFileRootMacHome, // MacHome
    k_ERemoteStorageFileRootMacAppSupport, // MacAppSupport
    k_ERemoteStorageFileRootMacDocuments, // MacDocuments
    k_ERemoteStorageFileRootWinSavedGames, // WinSavedGames
    k_ERemoteStorageFileRootWinProgramData, // WinProgramData
    k_ERemoteStorageFileRootSteamCloudDocuments, // SteamCloudDocuments
    k_ERemoteStorageFileRootWinAppDataLocalLow, // WinAppDataLocalLow
    k_ERemoteStorageFileRootMacCaches, // MacCaches
    k_ERemoteStorageFileRootLinuxHome, // LinuxHome
    k_ERemoteStorageFileRootLinuxXdgDataHome, // LinuxXdgDataHome
    k_ERemoteStorageFileRootLinuxXdgConfigHome, // LinuxXdgConfigHome
    k_ERemoteStorageFileRootAndroidSteamPackageRoot, // AndroidSteamPackageRoot
};

enum ERemoteStorageSyncState {
	k_ERemoteSyncStateDisabled = 0,
	k_ERemoteSyncStateUnknown = 1,
	k_ERemoteSyncStateSynchronized = 2,
	k_ERemoteSyncStateSyncInProgress = 3,
	k_ERemoteSyncStatePendingChangesInCloud = 4,
	k_ERemoteSyncStatePendingChangesLocally = 5,
	k_ERemoteSyncStatePendingChangesInCloudAndLocally = 6,
	k_ERemoteSyncStateConflictingChanges = 7,
};

enum EFileRemoteStorageSyncState {
	// TODO: Reverse this enum
};

enum EUCMFilePrivacyState {
	k_EUCMFilePrivacyStateInvalid = -1,

	k_EUCMFilePrivacyStateUnpublished = 0,
	k_EUCMFilePrivacyStatePublished = 1,

	k_EUCMFilePrivacyStatePrivate = 2,
	k_EUCMFilePrivacyStateFriendsOnly = 4,
	k_EUCMFilePrivacyStatePublic = 8,
	k_EUCMFilePrivacyStateAll = 14,
};

enum ERemoteStoragePlatform {
	k_ERemoteStoragePlatformNone		= 0,
	k_ERemoteStoragePlatformWindows		= (1 << 0),
	k_ERemoteStoragePlatformOSX			= (1 << 1),
	k_ERemoteStoragePlatformPS3			= (1 << 2),
	k_ERemoteStoragePlatformLinux		= (1 << 3),
	k_ERemoteStoragePlatformSwitch		= (1 << 4),
	k_ERemoteStoragePlatformAndroid		= (1 << 5),
	k_ERemoteStoragePlatformIPhoneOS	= (1 << 6),
	k_ERemoteStoragePlatformAll         = 0xffffffff
};

// Ways to handle a synchronization conflict
enum EResolveConflict {
	k_EResolveConflictKeepClient = 1,		// The local version of each file will be used to overwrite the server version
	k_EResolveConflictKeepServer = 2,		// The server version of each file will be used to overwrite the local version
};

enum ERemoteStoragePublishedFileVisibility {
	k_ERemoteStoragePublishedFileVisibilityPublic = 0,
	k_ERemoteStoragePublishedFileVisibilityFriendsOnly = 1,
	k_ERemoteStoragePublishedFileVisibilityPrivate = 2,
};

enum ERemoteStoragePublishedFileSortOrder {
	// TODO: Reverse this enum
};

enum EWorkshopFileType {
	k_EWorkshopFileTypeFirst = 0,

	k_EWorkshopFileTypeCommunity			  = 0,
	k_EWorkshopFileTypeMicrotransaction		  = 1,
	k_EWorkshopFileTypeCollection			  = 2,
	k_EWorkshopFileTypeArt					  = 3,
	k_EWorkshopFileTypeVideo				  = 4,
	k_EWorkshopFileTypeScreenshot			  = 5,
	k_EWorkshopFileTypeGame					  = 6,
	k_EWorkshopFileTypeSoftware				  = 7,
	k_EWorkshopFileTypeConcept				  = 8,
	k_EWorkshopFileTypeWebGuide				  = 9,
	k_EWorkshopFileTypeIntegratedGuide		  = 10,
	k_EWorkshopFileTypeMerch				  = 11,
	k_EWorkshopFileTypeControllerBinding	  = 12,
	k_EWorkshopFileTypeSteamworksAccessInvite = 13,
	k_EWorkshopFileTypeSteamVideo			  = 14,

	// Update k_EWorkshopFileTypeMax if you add values.
	k_EWorkshopFileTypeMax = 15
	
};

enum EWorkshopVote {
	k_EWorkshopVoteUnvoted = 0,
	k_EWorkshopVoteFor = 1,
	k_EWorkshopVoteAgainst = 2,
};

enum EWorkshopVideoProvider {
	// TODO: Reverse this enum
};

enum EWorkshopFileAction {
	k_EWorkshopFileActionPlayed = 0,
	k_EWorkshopFileActionCompleted = 1,
};


enum EWorkshopEnumerationType {
	k_EWorkshopEnumerationTypeRankedByVote = 0,
	k_EWorkshopEnumerationTypeRecent = 1,
	k_EWorkshopEnumerationTypeTrending = 2,
	k_EWorkshopEnumerationTypeFavoritesOfFriends = 3,
	k_EWorkshopEnumerationTypeVotedByFriends = 4,
	k_EWorkshopEnumerationTypeContentByFriends = 5,
	k_EWorkshopEnumerationTypeRecentFromFollowedUsers = 6,
};

enum EPublishedFileInfoMatchingFileType {
	// TODO: Reverse this enum
};

enum EUGCReadAction {
	// Keeps the file handle open unless the last byte is read.  You can use this when reading large files (over 100MB) in sequential chunks.
	// If the last byte is read, this will behave the same as k_EUGCRead_Close.  Otherwise, it behaves the same as k_EUGCRead_ContinueReading.
	// This value maintains the same behavior as before the EUGCReadAction parameter was introduced.
	k_EUGCRead_ContinueReadingUntilFinished = 0,

	// Keeps the file handle open.  Use this when using UGCRead to seek to different parts of the file.
	// When you are done seeking around the file, make a final call with k_EUGCRead_Close to close it.
	k_EUGCRead_ContinueReading = 1,

	// Frees the file handle.  Use this when you're done reading the content.  
	// To read the file from Steam again you will need to call UGCDownload again. 
	k_EUGCRead_Close = 2,
};


#pragma pack( push, 8 )

struct SteamParamStringArray_t {
	SteamParamStringArray_t() {
		m_ppStrings = nullptr;
		m_nNumStrings = 0;
	}

	const char **m_ppStrings;
	int32 m_nNumStrings;
};

//-----------------------------------------------------------------------------
// Purpose: helper structure for making updates to published files.
//	make sure to update serialization/deserialization in interfacemap.cpp if new properties are added
//-----------------------------------------------------------------------------
struct RemoteStorageUpdatePublishedFileRequest_t {
    public:
        RemoteStorageUpdatePublishedFileRequest_t() {
            Initialize( k_GIDNil );
        }

        RemoteStorageUpdatePublishedFileRequest_t( PublishedFileId_t unPublishedFileId ) {
            Initialize( unPublishedFileId );
        }

        PublishedFileId_t GetPublishedFileId() { return m_unPublishedFileId; }

        inline auto SetFile( const char *pchFile ) -> void {
            m_pchFile = pchFile;
            m_bUpdateFile = true;
        }

        inline auto GetFile() -> const char* { return m_pchFile; }
        inline auto BUpdateFile() -> bool { return m_bUpdateFile; }

        inline auto SetPreviewFile( const char *pchPreviewFile ) -> void {
            m_pchPreviewFile = pchPreviewFile;
            m_bUpdatePreviewFile = true;
        }

        inline auto GetPreviewFile() -> const char* { return m_pchPreviewFile; }
        inline auto BUpdatePreviewFile() -> bool { return m_bUpdatePreviewFile; }

        inline auto SetTitle( const char *pchTitle ) -> void {
            m_pchTitle = pchTitle;
            m_bUpdateTitle = true;
        }

        inline auto GetTitle() -> const char* { return m_pchTitle; }
        inline auto BUpdateTitle() -> bool { return m_bUpdateTitle; }

        inline auto SetDescription( const char *pchDescription ) -> void {
            m_pchDescription = pchDescription;
            m_bUpdateDescription = true;
        }

        inline auto GetDescription() -> const char* { return m_pchDescription; }
        inline auto BUpdateDescription() -> bool { return m_bUpdateDescription; }

        inline auto SetVisibility( ERemoteStoragePublishedFileVisibility eVisibility ) -> void {
            m_eVisibility = eVisibility;
            m_bUpdateVisibility = true;
        }

        inline auto GetVisibility() -> ERemoteStoragePublishedFileVisibility { return m_eVisibility; }
        inline auto BUpdateVisibility() -> bool { return m_bUpdateVisibility; }

        inline auto SetTags( SteamParamStringArray_t *pTags ) -> void {
            m_pTags = pTags;
            m_bUpdateTags = true;
        }

        inline auto GetTags() -> SteamParamStringArray_t* { return m_pTags; }
        inline auto BUpdateTags() -> bool { return m_bUpdateTags; }
        inline auto GetTagsPointer() -> SteamParamStringArray_t** { return &m_pTags; }

        inline auto Initialize( PublishedFileId_t unPublishedFileId ) -> void {
            m_unPublishedFileId = unPublishedFileId;
            m_pchFile = 0;
            m_pchPreviewFile = 0;
            m_pchTitle = 0;
            m_pchDescription = 0;
            m_pTags = 0;

            m_bUpdateFile = false;
            m_bUpdatePreviewFile = false;
            m_bUpdateTitle = false;
            m_bUpdateDescription = false;
            m_bUpdateTags = false;
            m_bUpdateVisibility = false;
        }

    private:
        PublishedFileId_t m_unPublishedFileId;
        const char *m_pchFile;
        const char *m_pchPreviewFile;
        const char *m_pchTitle;
        const char *m_pchDescription;
        ERemoteStoragePublishedFileVisibility m_eVisibility;
        SteamParamStringArray_t *m_pTags;

        bool m_bUpdateFile;
        bool m_bUpdatePreviewFile;
        bool m_bUpdateTitle;
        bool m_bUpdateDescription;
        bool m_bUpdateVisibility;
        bool m_bUpdateTags;
};



//-----------------------------------------------------------------------------
// Purpose: sent when the local file cache is fully synced with the server for an app
//	      That means that an application can be started and has all latest files
//-----------------------------------------------------------------------------
struct RemoteStorageAppSyncedClient_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 1 };

	AppId_t m_nAppID;
	EResult m_eResult;
	int m_unNumDownloads;
};

//-----------------------------------------------------------------------------
// Purpose: sent when the server is fully synced with the local file cache for an app
//          That means that we can shutdown Steam and our data is stored on the server
//-----------------------------------------------------------------------------
struct RemoteStorageAppSyncedServer_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 2 };

	AppId_t m_nAppID;
	EResult m_eResult;
	int m_unNumUploads;
};

//-----------------------------------------------------------------------------
// Purpose: Status of up and downloads during a sync session
//       
//-----------------------------------------------------------------------------
struct RemoteStorageAppSyncProgress_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 3 };

	char m_rgchCurrentFile[260];				// Current file being transferred
	AppId_t m_nAppID;							// App this info relates to
	uint32 m_uBytesTransferredThisChunk;		// Bytes transferred this chunk
	double m_dAppPercentComplete;				// Percent complete that this app's transfers are
	bool m_bUploading;							// if false, downloading
};

struct RemoteStorageAppInfoLoaded_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 4 };

	AppId_t m_nAppID;
	EResult m_eResult;
};

//-----------------------------------------------------------------------------
// Purpose: Sent after we've determined the list of files that are out of sync
//          with the server.
//-----------------------------------------------------------------------------
struct RemoteStorageAppSyncStatusCheck_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 5 };

	AppId_t m_nAppID;
	EResult m_eResult;
};

//-----------------------------------------------------------------------------
// Purpose: Sent after a conflict resolution attempt.
//-----------------------------------------------------------------------------
struct RemoteStorageConflictResolution_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 6 };

	AppId_t m_nAppID;
	EResult m_eResult;
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to FileShare()
//-----------------------------------------------------------------------------
struct RemoteStorageFileShareResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 7 };

	EResult m_eResult;			// The result of the operation
	UGCHandle_t m_hFile;		// The handle that can be shared with users and features
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to UGCDownload()
//-----------------------------------------------------------------------------
struct _Deprecated_RemoteStorageDownloadUGCResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 8 };

	EResult m_eResult;				// The result of the operation.
	UGCHandle_t m_hFile;			// The handle to the file that was attempted to be downloaded.
	AppId_t m_nAppID;				// ID of the app that created this file.
	int32 m_nSizeInBytes;			// The size of the file that was downloaded, in bytes.
	char *m_pchFileName;			// The name of the file that was downloaded. This pointer is
									// not guaranteed to be valid indefinitely.
	uint64 m_ulSteamIDOwner;		// Steam ID of the user who created this content.
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to PublishFile()
//-----------------------------------------------------------------------------
struct RemoteStoragePublishFileResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 9 };

	EResult m_eResult;				// The result of the operation.
	PublishedFileId_t m_nPublishedFileId;
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to GetPublishedFileDetails()
//-----------------------------------------------------------------------------
struct _Deprecated_RemoteStorageGetPublishedFileDetailsResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 10 };

	EResult m_eResult;				// The result of the operation.
	PublishedFileId_t m_nPublishedFileId;
	AppId_t m_nCreatorAppID;		// ID of the app that created this file.
	AppId_t m_nConsumerAppID;		// ID of the app that created this file.
	char m_rgchTitle[129];			// title of document
	char m_rgchDescription[257];	// description of document
	UGCHandle_t m_hFile;			// The handle of the primary file
	UGCHandle_t m_hPreviewFile;		// The handle of the preview file
	uint64 m_ulSteamIDOwner;		// Steam ID of the user who created this content.
	uint32 m_rtimeCreated;			// time when the published file was created
	uint32 m_rtimeUpdated;			// time when the published file was last updated
	ERemoteStoragePublishedFileVisibility m_eVisibility;
	bool m_bBanned;
	char m_rgchTags[1025];			// comma separated list of all tags associated with this file
	bool m_bTagsTruncated;			// whether the list of tags was too long to be returned in the provided buffer
	char m_pchFileName[260];		// The name of the primary file
	EWorkshopFileType m_eFileType;
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to DeletePublishedFile()
//-----------------------------------------------------------------------------
struct RemoteStorageDeletePublishedFileResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 11 };

	EResult m_eResult;				// The result of the operation.
	PublishedFileId_t m_nPublishedFileId;
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to EnumerateUserPublishedFiles()
//-----------------------------------------------------------------------------
struct RemoteStorageEnumerateUserPublishedFilesResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 12 };

	EResult m_eResult;				// The result of the operation.
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[ k_unEnumeratePublishedFilesMaxResults ];
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to SubscribePublishedFile()
//-----------------------------------------------------------------------------
struct RemoteStorageSubscribePublishedFileResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 13 };

	EResult m_eResult;				// The result of the operation.
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to EnumerateSubscribePublishedFiles()
//-----------------------------------------------------------------------------
struct RemoteStorageEnumerateUserSubscribedFilesResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 14 };

	EResult m_eResult;				// The result of the operation.
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[ k_unEnumeratePublishedFilesMaxResults ];
	uint32 m_rgRTimeSubscribed[ k_unEnumeratePublishedFilesMaxResults ];
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to UnsubscribePublishedFile()
//-----------------------------------------------------------------------------
struct RemoteStorageUnsubscribePublishedFileResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 15 };

	EResult m_eResult;				// The result of the operation.
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to UpdatePublishedFile()
//-----------------------------------------------------------------------------
struct RemoteStorageUpdatePublishedFileResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 16 };

	EResult m_eResult;				// The result of the operation.
	PublishedFileId_t m_nPublishedFileId;
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to UGCDownload()
//-----------------------------------------------------------------------------
struct RemoteStorageDownloadUGCResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 17 };

	EResult m_eResult;				// The result of the operation.
	UGCHandle_t m_hFile;			// The handle to the file that was attempted to be downloaded.
	AppId_t m_nAppID;				// ID of the app that created this file.
	int32 m_nSizeInBytes;			// The size of the file that was downloaded, in bytes.
	char m_pchFileName[260];		// The name of the file that was downloaded.
	uint64 m_ulSteamIDOwner;		// Steam ID of the user who created this content.
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to GetPublishedFileDetails()
//-----------------------------------------------------------------------------
struct RemoteStorageGetPublishedFileDetailsResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 18 };

	EResult m_eResult;						// The result of the operation.
	PublishedFileId_t m_nPublishedFileId;
	AppId_t m_nCreatorAppID;				// ID of the app that created this file.
	AppId_t m_nConsumerAppID;				// ID of the app that created this file.
	char m_rgchTitle[ k_cchPublishedDocumentTitleMax ]; // title of document
	char m_rgchDescription[ k_cchPublishedDocumentDescriptionMax ]; // description of document
	UGCHandle_t m_hFile;					// The handle of the primary file
	UGCHandle_t m_hPreviewFile;				// The handle of the preview file
	uint64 m_ulSteamIDOwner;				// Steam ID of the user who created this content.
	uint32 m_rtimeCreated;					// time when the published file was created
	uint32 m_rtimeUpdated;					// time when the published file was last updated
	ERemoteStoragePublishedFileVisibility m_eVisibility;
	bool m_bBanned;
	char m_rgchTags[ k_cchTagListMax ];		// comma separated list of all tags associated with this file
	bool m_bTagsTruncated;					// whether the list of tags was too long to be returned in the provided buffer
	char m_pchFileName[ k_cchFilenameMax ];	// The name of the primary file
	int32 m_nFileSize;						// File size of the primary file
	int32 m_nPreviewFileSize;				// File size of the preview file
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to EnumeratePublishedWorkshopFiles()
//-----------------------------------------------------------------------------
struct RemoteStorageEnumerateWorkshopFilesResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 19 };

	EResult m_eResult;
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[ k_unEnumeratePublishedFilesMaxResults ];
	float m_rgScore[ k_unEnumeratePublishedFilesMaxResults ]; // [0-1.0]
};

//-----------------------------------------------------------------------------
// Purpose: The result of GetPublishedItemVoteDetails
//-----------------------------------------------------------------------------
struct RemoteStorageGetPublishedItemVoteDetailsResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 20 };

	EResult m_eResult;
	PublishedFileId_t m_unPublishedFileId;
	int32 m_nVotesFor;
	int32 m_nVotesAgainst;
	int32 m_nReports;
	float m_fScore; // [0-1.0]
};

struct RemoteStoragePublishedFileSubscribed_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 21 };

	PublishedFileId_t m_unPublishedFileId;
	AppId_t m_nAppID;
};

struct RemoteStoragePublishedFileUnsubscribed_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 22 };

	PublishedFileId_t m_unPublishedFileId;
	AppId_t m_nAppID;
};

struct RemoteStoragePublishedFileDeleted_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 23 };

	PublishedFileId_t m_unPublishedFileId;
	AppId_t m_nAppID;
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to UpdateUserPublishedItemVote()
//-----------------------------------------------------------------------------
struct RemoteStorageUpdateUserPublishedItemVoteResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 24 };

	EResult m_eResult;
	PublishedFileId_t m_unPublishedFileId;
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to GetUserPublishedItemVoteDetails()
//-----------------------------------------------------------------------------
struct RemoteStorageUserVoteDetails_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 25 };

	EResult m_eResult;
	int32 m_iVote; // Probably an enum
	PublishedFileId_t m_unPublishedFileId;
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to EnumerateUserSharedWorkshopFiles()
//-----------------------------------------------------------------------------
struct RemoteStorageEnumerateUserSharedWorkshopFilesResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 26 };
	
	EResult m_eResult;
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[ k_unEnumeratePublishedFilesMaxResults ];
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to SetUserPublishedFileAction()
//-----------------------------------------------------------------------------
struct RemoteStorageSetUserPublishedFileActionResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 27 };

	EResult m_eResult;
	PublishedFileId_t m_unPublishedFileId;
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to EnumeratePublishedFilesByUserAction()
//-----------------------------------------------------------------------------
struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t {
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 28 };
	
	EResult m_eResult;
	EWorkshopFileAction m_eAction;
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[ k_unEnumeratePublishedFilesMaxResults ];
	uint32 m_rgRTimes[ k_unEnumeratePublishedFilesMaxResults ];
};

#pragma pack( pop )
