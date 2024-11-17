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

#include "Types/SteamTypes.h"
#include "Types/ClientCommon.h"

#if defined(__GNUC__) && defined(_WIN32)
	// This ugly hack allows us to provide GCC compatibility on windows without much effort
	#pragma push_macro("virtual")
	#undef virtual
	#define virtual virtual __thiscall
#endif


// client interfaces
#include "Interfaces/Client/IClientEngine.h"

#include "Interfaces/Client/IClientAppManager.h"
#include "Interfaces/Client/IClientApps.h"
#include "Interfaces/Client/IClientAudio.h"
#include "Interfaces/Client/IClientBilling.h"
#include "Interfaces/Client/IClientContentServer.h"
#include "Interfaces/Client/IClientDepotBuilder.h"
#include "Interfaces/Client/IClientFriends.h"
#include "Interfaces/Client/IClientGameCoordinator.h"
#include "Interfaces/Client/IClientGameServer.h"
#include "Interfaces/Client/IClientGameServerStats.h"
#include "Interfaces/Client/IClientGameStats.h"
#include "Interfaces/Client/IClientInventory.h"
#include "Interfaces/Client/IClientMasterServerUpdater.h"
#include "Interfaces/Client/IClientMatchmaking.h"
#include "Interfaces/Client/IClientMatchmakingServers.h"
#include "Interfaces/Client/IClientNetworking.h"
#include "Interfaces/Client/IClientRemoteStorage.h"
#include "Interfaces/Client/IClientScreenshots.h"
#include "Interfaces/Client/IClientUser.h"
#include "Interfaces/Client/IClientUserStats.h"
#include "Interfaces/Client/IClientUtils.h"
#include "Interfaces/Client/IClientHTTP.h"
#include "Interfaces/Client/IClientHTMLSurface.h"
#include "Interfaces/Client/IClientConfigStore.h"
#include "Interfaces/Client/IClientUnifiedMessages.h"
#include "Interfaces/Client/IClientStreamLauncher.h"
#include "Interfaces/Client/IClientNetworkDeviceManager.h"
#include "Interfaces/Client/IClientDeviceAuth.h"
#include "Interfaces/Client/IClientMusic.h"
#include "Interfaces/Client/IClientProductBuilder.h"
#include "Interfaces/Client/IClientShortcuts.h"
#include "Interfaces/Client/IClientStreamClient.h"
#include "Interfaces/Client/IClientUGC.h"
#include "Interfaces/Client/IClientVideo.h"
#include "Interfaces/Client/IClientBluetoothManager.h"
#include "Interfaces/Client/IClientParentalSettings.h"
#include "Interfaces/Client/IClientShader.h"
#include "Interfaces/Client/IClientSharedConnection.h"
#include "Interfaces/Client/IClientNetworkingSocketsSerialized.h"
#include "Interfaces/Client/IClientCompat.h"
#include "Interfaces/Client/IClientRemoteClientManager.h"
#include "Interfaces/Client/IClientStorageDeviceManager.h"
#include "Interfaces/Client/IClientSystemManager.h"

// callback
#include "Types/CCallback.h"

#if defined(__GNUC__) && defined(_WIN32)
	#pragma pop_macro("virtual")
#endif

// Breakpad
S_API errno_t STEAM_CALL Breakpad_SetSteamID( uint64 ulSteamID );
S_API errno_t STEAM_CALL Breakpad_SteamSetSteamID( uint64 ulSteamID );
S_API void STEAM_CALL Breakpad_SteamMiniDumpInit( uint32 a, const char *b, const char *c );
S_API errno_t STEAM_CALL Breakpad_SteamWriteMiniDumpSetComment( const char *pchMsg );
S_API void STEAM_CALL Breakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId( int a, int b );


// Steam user
S_API bool STEAM_CALL Steam_BConnected( HSteamUser hUser, HSteamPipe hSteamPipe );
S_API bool STEAM_CALL Steam_BLoggedOn( HSteamUser hUser, HSteamPipe hSteamPipe );
S_API void STEAM_CALL Steam_LogOn( HSteamUser hUser, HSteamPipe hSteamPipe, uint64 ulSteamID );
S_API void STEAM_CALL Steam_LogOff( HSteamUser hUser, HSteamPipe hSteamPipe );
S_API int STEAM_CALL Steam_InitiateGameConnection( HSteamUser hUser, HSteamPipe hSteamPipe, void *pBlob, int cbMaxBlob, uint64 steamID, int nGameAppID, uint32 unIPServer, uint16 usPortServer, bool bSecure );
S_API void STEAM_CALL Steam_TerminateGameConnection( HSteamUser hUser, HSteamPipe hSteamPipe, uint32 unIPServer, uint16 usPortServer );

// Steam callbacks
S_API bool STEAM_CALL Steam_BGetCallback( HSteamPipe hSteamPipe, CallbackMsg_t *pCallbackMsg );
S_API void STEAM_CALL Steam_FreeLastCallback( HSteamPipe hSteamPipe );
S_API bool STEAM_CALL Steam_GetAPICallResult( HSteamPipe hSteamPipe, SteamAPICall_t hSteamAPICall, void* pCallback, int cubCallback, int iCallbackExpected, bool* pbFailed );

// Steam client
S_API HSteamPipe STEAM_CALL Steam_CreateSteamPipe();
S_API bool STEAM_CALL Steam_BReleaseSteamPipe( HSteamPipe hSteamPipe );
S_API HSteamUser STEAM_CALL Steam_CreateLocalUser( HSteamPipe *phSteamPipe, EAccountType eAccountType );
S_API HSteamUser STEAM_CALL Steam_CreateGlobalUser( HSteamPipe *phSteamPipe );
S_API HSteamUser STEAM_CALL Steam_ConnectToGlobalUser( HSteamPipe hSteamPipe );
S_API void STEAM_CALL Steam_ReleaseUser( HSteamPipe hSteamPipe, HSteamUser hUser );
S_API void STEAM_CALL Steam_SetLocalIPBinding( uint32 unIP, uint16 usLocalPort );

// Steam game server
S_API int STEAM_CALL Steam_GSGetSteamGameConnectToken( HSteamUser hUser, HSteamPipe hSteamPipe, void *pBlob, int cbBlobMax ); // does this exist anymore?
S_API void* STEAM_CALL Steam_GetGSHandle( HSteamUser hUser, HSteamPipe hSteamPipe );
S_API bool STEAM_CALL Steam_GSSendSteam2UserConnect( void *phSteamHandle, uint32 unUserID, const void *pvRawKey, uint32 unKeyLen, uint32 unIPPublic, uint16 usPort, const void *pvCookie, uint32 cubCookie );
S_API bool STEAM_CALL Steam_GSSendUserDisconnect( void *phSteamHandle, uint64 ulSteamID, uint32 unUserID );
S_API OBSOLETE_FUNCTION bool STEAM_CALL Steam_GSSendUserStatusResponse( void *phSteamHandle, uint64 ulSteamID, int nSecondsConnected, int nSecondsSinceLast );
S_API bool STEAM_CALL Steam_GSUpdateStatus( void *phSteamHandle, int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pchMapName );
S_API bool STEAM_CALL Steam_GSRemoveUserConnect( void *phSteamHandle, uint32 unUserID );
S_API void STEAM_CALL Steam_GSSetSpawnCount( void *phSteamHandle, uint32 ucSpawn );
S_API bool STEAM_CALL Steam_GSGetSteam2GetEncryptionKeyToSendToNewClient( void *phSteamHandle, void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey );
S_API void STEAM_CALL Steam_GSLogOn( void *phSteamHandle );
S_API void STEAM_CALL Steam_GSLogOff( void *phSteamHandle );
S_API bool STEAM_CALL Steam_GSBLoggedOn( void *phSteamHandle );
S_API bool STEAM_CALL Steam_GSSetServerType( void *phSteamHandle, int32 nAppIdServed, uint32 unServerFlags, uint32 unGameIP, uint32 unGamePort, const char *pchGameDir, const char *pchVersion );
S_API bool STEAM_CALL Steam_GSBSecure( void *phSteamHandle);


//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//	Steam API setup & shutdown
//
//	These functions manage loading, initializing and shutdown of the steamclient.dll
//
//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// S_API void SteamAPI_Init(); (see below)
S_API void SteamAPI_Shutdown();

// checks if a local Steam client is running 
S_API bool SteamAPI_IsSteamRunning();

// Detects if your executable was launched through the Steam client, and restarts your game through 
// the client if necessary. The Steam client will be started if it is not running.
//
// Returns: true if your executable was NOT launched through the Steam client. This function will
//          then start your application through the client. Your current process should exit.
//
//          false if your executable was started through the Steam client or a steam_appid.txt file
//          is present in your game's directory (for development). Your current process should continue.
//
// NOTE: This function should be used only if you are using CEG or not using Steam's DRM. Once applied
//       to your executable, Steam's DRM will handle restarting through Steam if necessary.
S_API bool SteamAPI_RestartAppIfNecessary( uint32 unOwnAppID );

// crash dump recording functions
S_API void SteamAPI_WriteMiniDump( uint32 uStructuredExceptionCode, void* pvExceptionInfo, uint32 uBuildID );
S_API void SteamAPI_SetMiniDumpComment( const char *pchMsg );

// this should be called before the game initialized the steam APIs
// pchDate should be of the format "Mmm dd yyyy" (such as from the __DATE__ macro )
// pchTime should be of the format "hh:mm:ss" (such as from the __TIME__ macro )
// bFullMemoryDumps (Win32 only) -- writes out a uuid-full.dmp in the client/dumps folder
// pvContext-- can be NULL, will be the void * context passed into m_pfnPreMinidumpCallback
// PFNPreMinidumpCallback m_pfnPreMinidumpCallback   -- optional callback which occurs just before a .dmp file is written during a crash.  Applications can hook this to allow adding additional information into the .dmp comment stream.
S_API void SteamAPI_UseBreakpadCrashHandler( char const *pchVersion, char const *pchDate, char const *pchTime, bool bFullMemoryDumps, void *pvContext, PFNPreMinidumpCallback m_pfnPreMinidumpCallback );
S_API void SteamAPI_SetBreakpadAppID( uint32 unAppID );

// sets whether or not Steam_RunCallbacks() should do a try {} catch (...) {} around calls to issuing callbacks
S_API void STEAM_CALL SteamAPI_SetTryCatchCallbacks( bool bTryCatchCallbacks );

S_API void SteamAPI_RunCallbacks();

// functions used by the utility CCallback objects to receive callbacks
S_API void SteamAPI_RegisterCallback( class CCallbackBase *pCallback, int iCallback );
S_API void SteamAPI_UnregisterCallback( class CCallbackBase *pCallback );
// functions used by the utility CCallResult objects to receive async call results
S_API void SteamAPI_RegisterCallResult( class CCallbackBase *pCallback, SteamAPICall_t hAPICall );
S_API void SteamAPI_UnregisterCallResult( class CCallbackBase *pCallback, SteamAPICall_t hAPICall );
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//	steamclient.dll private wrapper functions
//
//	The following functions are part of abstracting API access to the steamclient.dll, but should only be used in very specific cases
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
S_API void STEAM_CALL Steam_RunCallbacks( HSteamPipe hSteamPipe, bool bGameServerCallbacks );
S_API void STEAM_CALL Steam_RegisterInterfaceFuncs( void *hModule );

S_API void STEAM_CALL Steam_ReleaseThreadLocalMemory(bool);

S_API void * STEAM_CALL SteamInternal_ContextInit(void *pContextInitData);
S_API void * STEAM_CALL SteamInternal_CreateInterface(const char *ver);

S_API HSteamUser STEAM_CALL Steam_GetHSteamUserCurrent();

S_API const char* STEAM_CALL SteamAPI_GetSteamInstallPath();

// used in version safe api
S_API HSteamPipe STEAM_CALL GetHSteamPipe();
S_API HSteamUser STEAM_CALL GetHSteamUser();

S_API HSteamPipe STEAM_CALL SteamAPI_GetHSteamPipe();
S_API HSteamUser STEAM_CALL SteamAPI_GetHSteamUser();

//S_API bool STEAM_CALL SteamGameServer_InitSafe( uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usSpectatorPort, uint16 usQueryPort, EServerMode eServerMode, const char *pchGameDir, const char *pchVersionString );
//S_API bool STEAM_CALL SteamGameServer_Init( uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usSpectatorPort, uint16 usQueryPort, EServerMode eServerMode, const char *pchGameDir, const char *pchVersionString );

S_API void STEAM_CALL SteamGameServer_Shutdown();
S_API void STEAM_CALL SteamGameServer_RunCallbacks();

S_API bool STEAM_CALL SteamGameServer_BSecure();
S_API uint64 STEAM_CALL SteamGameServer_GetSteamID();

S_API HSteamPipe STEAM_CALL SteamGameServer_GetHSteamPipe();
S_API HSteamUser STEAM_CALL SteamGameServer_GetHSteamUser(); 
S_API int32 STEAM_CALL SteamGameServer_GetIPCCallCount();

S_API bool STEAM_CALL SteamContentServer_Init(uint32 unIP, uint16 usPort);

S_API void STEAM_CALL SteamContentServer_Shutdown();
S_API void STEAM_CALL SteamContentServer_RunCallbacks();


// Purpose: utilities to decode/decrypt a ticket from the
// ISteamUser::RequestEncryptedAppTicket, ISteamUser::GetEncryptedAppTicket API
// 
// To use: declare CSteamEncryptedAppTicket, then call BDecryptTicket
// if BDecryptTicket returns true, other accessors are valid
static const int k_nSteamEncryptedAppTicketSymmetricKeyLen = 32;				


S_API bool SteamEncryptedAppTicket_BDecryptTicket( const uint8 *rgubTicketEncrypted, uint32 cubTicketEncrypted,
												  uint8 *rgubTicketDecrypted, uint32 *pcubTicketDecrypted,
												  const uint8 rgubKey[k_nSteamEncryptedAppTicketSymmetricKeyLen], int cubKey );

S_API bool SteamEncryptedAppTicket_BIsTicketForApp( uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted, AppId_t nAppID );

S_API RTime32 SteamEncryptedAppTicket_GetTicketIssueTime( uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted );

S_API void SteamEncryptedAppTicket_GetTicketSteamID( uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted, CSteamID *psteamID );

S_API AppId_t SteamEncryptedAppTicket_GetTicketAppID( uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted );

S_API bool SteamEncryptedAppTicket_BUserOwnsAppInTicket( uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted, AppId_t nAppID );

S_API bool SteamEncryptedAppTicket_BUserIsVacBanned( uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted );

S_API const uint8 *SteamEncryptedAppTicket_GetUserVariableData( uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted, uint32 *pcubUserData );
