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

#include "SteamTypes.hpp"

using BroadcastSessionID_t = uint64;

enum EBroadcastUploadResult {
	k_EBroadcastUploadResultNone, // None
	k_EBroadcastUploadResultOK, // OK
	k_EBroadcastUploadResultInitFailed, // Init Failed
	k_EBroadcastUploadResultFrameFailed, // Frame Failed
	k_EBroadcastUploadResultTimeout, // Upload Timeout
	k_EBroadcastUploadResultBandwidthExceeded, // Bandwidth Exceeded
	k_EBroadcastUploadResultLowFPS, // Low FPS
	k_EBroadcastUploadResultMissingKeyFrames, // Missing Key Frames
	k_EBroadcastUploadResultNoConnection, // No Connection
	k_EBroadcastUploadResultRelayFailed, // Relay Failed
	k_EBroadcastUploadResultSettingsChanged, // Settings Changed
	k_EBroadcastUploadResultMissingAudio, // Missing Audio
	k_EBroadcastUploadResultTooFarBehind, // Too Far behind
	k_EBroadcastUploadResultTranscodeBehind, // Transcode Behind
	k_EBroadcastUploadResultNotAllowedToPlay, // Not allowed to play
	k_EBroadcastUploadResultServerBusy, // Server Busy
	k_EBroadcastUploadResultBanned, // Banned
	k_EBroadcastUploadResultAlreadyActive, // Already Active
	k_EBroadcastUploadResultForcedOff, // Forced Off
	k_EBroadcastUploadResultAudioBehind, // Audio Behind
	k_EBroadcastUploadResultServerShutdown, // Server Shutdown
	k_EBroadcastUploadResultUploadDisconnected, // Upload Disconnected
	k_EBroadcastUploadResultVideoInitFailed, // Video Init Failed
	k_EBroadcastUploadResultAudioInitFailed, // Audio Init Failed
};

enum EBroadcastPermission {
	k_EBroadcastPermissionBroadcastDisabled,
	k_EBroadcastPermissionByFriendRequest,
	k_EBroadcastPermissionFriends,
	k_EBroadcastPermissionAll,
};

enum EBroadcastChatCorner {
	k_EBroadcastChatCornerNone,
	k_EBroadcastChatCornerTopLeft,
	k_EBroadcastChatCornerTopRight,
	k_EBroadcastChatCornerBottomRight,
	k_EBroadcastChatCornerBottomLeft,
};

enum EBroadcastRecorderResult {
	// TODO: Reverse this enum
};

enum EBroadcastChatMsg {
	// TODO: Reverse this enum
};


// k_iClientVideoCallbacks callbacks


#pragma pack( push, 8 )

struct BeginBroadcastSessionResult_t {
	enum { k_iCallback = k_iClientVideoCallbacks + 1 };

	EResult m_eResult;
	BroadcastSessionID_t m_ulBroadcastID;
};

struct EndBroadcastSessionResult_t {
	enum { k_iCallback = k_iClientVideoCallbacks + 2 };

	EResult m_eResult;
};

struct BroadcastUploadStart_t {
	enum { k_iCallback = k_iClientVideoCallbacks + 4 };
};

struct BroadcastUploadStop_t {
	enum { k_iCallback = k_iClientVideoCallbacks + 5 };

	EBroadcastUploadResult m_eResult;
};

struct BroadcastViewerState_t {
	enum { k_iCallback = k_iClientVideoCallbacks + 8 };

	CSteamID m_steamID;
	bool m_bIsWatching;
	EBroadcastPermission m_ePermission;
};

struct BroadcastSettingsLoaded_t {
	enum { k_iCallback = k_iClientVideoCallbacks + 13 };
};

struct BroadcastStatus_t {
	enum { k_iCallback = k_iClientVideoCallbacks + 15 };

	BroadcastSessionID_t m_ulBroadcastID;
	uint32 m_unNumViewers;
	uint32 m_unNumRequests;
	bool m_bIsBroadcasting;
};

struct BroadcastChatMessage_t {
	enum { k_iCallback = k_iClientVideoCallbacks + 16 };

	CSteamID m_steamID;
	BroadcastSessionID_t m_ulBroadcastID;
	EBroadcastChatMsg m_eMsgType;
	char m_szPersona[128];
	char m_szMessage[140];
	bool m_bInGame;
};

struct BroadcastUploadStatus_t {
	enum { k_iCallback = k_iClientVideoCallbacks + 17 };

	uint32 m_unTotalBytesSent;
	uint32 m_unVideoBytesDrop;
	uint32 m_unTotalBytesPend;
	uint32 m_unVideoSendFPS;
};

struct UnlockH264Result_t  {
	enum { k_iCallback = k_iClientVideoCallbacks + 19 };

	EResult m_eResult;
};

#pragma pack( pop )
