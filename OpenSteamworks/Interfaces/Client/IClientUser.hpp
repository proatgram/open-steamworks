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

#include "Types/ContentServerCommon.hpp"
#include "Types/ParentalSettingsCommon.hpp"
#include "Types/SteamTypes.hpp"
#include "Types/UserCommon.hpp"
#include "Types/UtilsCommon.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientUser {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	431059809
	*/
	virtual auto AckGuestPass(const char *pchGuestPassCode) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2511831165
	*/
	virtual auto AckSystemIM(uint64) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, uint64, bytes4, bytes2]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3156657335
	*/
	virtual auto AdvertiseGame(CGameID gameID, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	853146301
	*/
	virtual auto AuthorizeMicroTxn(GID_t gidTransID, EMicroTxnAuthResponse eMicroTxnAuthResponse) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3517363616
	*/
	virtual auto AuthorizeNewDevice(uint32, uint32, const char *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1871995321
	*/
	virtual auto BAccountExtraSecurity() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2235134908
	*/
	virtual auto BAccountShouldShowLockUI() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4103932029
	*/
	virtual auto BAllowCachedCredentialsInCafe() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	416577873
	*/
	virtual auto BConnected() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	443393213
	*/
	virtual auto BEnableEmbeddedClient(uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3990474495
	*/
	virtual auto BGameConnectTokensAvailable() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1628087780
	*/
	virtual auto BGetAppMinutesPlayed(AppId_t nAppId, int32 *pnForever, int32 *pnLastTwoWeeks) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[boolean, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1213081939
	*/
	virtual auto BGetGuideURL(AppId_t uAppID, char *pchURL, uint32 cchURL) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[boolean, bytes12, bytes4, bytes_length_from_mem, bytes4, boolean, bytes12, boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	804908475
	*/
	virtual auto BGetMicroTxnLineItem(GID_t gidTransID, uint32 unLineItem, CAmount *pamt, uint32 *punQuantity, char *pchDescription, uint32 cubDescriptionLength, int32 *pRecurringTimeUnit, uint8 *pRecurringFrequency, CAmount *pRecurringAmount, bool *pbUnk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean, bytes12, bytes12, boolean, bytes12]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1788250815
	*/
	virtual auto BGetMicroTxnPrice(GID_t gidTransID, CAmount *pamtTotal, CAmount *pamtTax, bool *pbVat, CAmount *pUnk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[boolean, unknown]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1787845987
	*/
	virtual auto BGetOfflineLogonTicket(const char *pchUnk, COffline_OfflineLogonTicket *pTicket) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean, unknown, unknown]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3457247085
	*/
	virtual auto BGetParentalWebToken(CUtlBuffer *, CUtlBuffer *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2398049595
	*/
	virtual auto BGetRecoveryEmail(char *, int) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean, unknown]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3916534724
	*/
	virtual auto BGetSerializedParentalSettings(CUtlBuffer *pBuffer) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean, boolean, bytes12, bytes12]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1291501647
	*/
	virtual auto BGetWalletBalance(bool *pbHasWallet, CAmount *pamtBalance, CAmount *pamtPending) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1454473739
	*/
	virtual auto BHasCachedCredentials(const char *pchUnk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	452568501
	*/
	virtual auto BHasEmbeddedClientToken(uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3102451335
	*/
	virtual auto BHasTwoFactor() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	798641870
	*/
	virtual auto BIsAccountCommunityBanned() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	476698855
	*/
	virtual auto BIsAccountLimited() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	480548745
	*/
	virtual auto BIsAccountLockedDown() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2402425208
	*/
	virtual auto BIsAnyGameOrServiceAppRunning() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1104960341
	*/
	virtual auto BIsAnyGameRunning() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3339940762
	*/
	virtual auto BIsAppBlocked(AppId_t unAppID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	472000778
	*/
	virtual auto BIsAppInBlockList(AppId_t unAppID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1262244446
	*/
	virtual auto BIsAppOverlayEnabled(CGameID gameID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3457053125
	*/
	virtual auto BIsBehindNAT() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1935345352
	*/
	virtual auto BIsCurrentlyNVStreaming() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1817600248
	*/
	virtual auto BIsFeatureBlocked(EParentalFeature eParentalFeature) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2648774728
	*/
	virtual auto BIsFeatureInBlockList(EParentalFeature eParentalFeature) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1128737047
	*/
	virtual auto BIsGameRunning(CGameID gameID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1188072489
	*/
	virtual auto BIsGameWindowReady(CGameID gameID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1840674887
	*/
	virtual auto BIsLockFromSiteLicense() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2017370511
	*/
	virtual auto BIsOtherSessionPlaying(uint32 *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1048326707
	*/
	virtual auto BIsParentalLockEnabled() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1754129474
	*/
	virtual auto BIsParentalLockLocked() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1499237290
	*/
	virtual auto BIsPhoneIdentifying() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3164481967
	*/
	virtual auto BIsPhoneRequiringVerification() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1266469364
	*/
	virtual auto BIsPhoneVerified() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	507660533
	*/
	virtual auto BIsRunningInCafe() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean, boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1947042251
	*/
	virtual auto BIsSandboxMicroTxn(GID_t gidTransID, bool *pbSandbox) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	378659725
	*/
	virtual auto BIsStreamingUIToRemoteDevice() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2379493210
	*/
	virtual auto BIsSubscribedApp(AppId_t nAppId) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1793648786
	*/
	virtual auto BKickOtherPlayingSession() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	106564577
	*/
	virtual auto BLimitedAccountCanInviteFriends() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1703699413
	*/
	virtual auto BLoggedOn() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3867701219
	*/
	virtual auto BMicroTxnRefundable(GID_t gidTransID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean, boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	704571062
	*/
	virtual auto BMicroTxnRequiresCachedPmtMethod(GID_t gidTransID, bool *pbRequired) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3780888194
	*/
	virtual auto BNeedsSSANextSteamLogon() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3045861739
	*/
	virtual auto BOverlayIgnoreChildProcesses(CGameID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1615558740
	*/
	virtual auto BPromptToChangePassword() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	891281897
	*/
	virtual auto BSetDurationControlOnlineState(EDurationControlOnlineState) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2366668512
	*/
	virtual auto BSetDurationControlOnlineStateForApp(EDurationControlOnlineState, AppId_t appID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2391743772
	*/
	virtual auto BSupportUser() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3114765059
	*/
	virtual auto BTextFilterIgnoresFriends() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3442381169
	*/
	virtual auto BTryingToLogin() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3474626450
	*/
	virtual auto BUpdateAppOwnershipTicket(AppId_t nAppID, bool bOnlyUpdateIfStale) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, uint64, bytes_length_from_mem]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2262560642
	*/
	virtual auto BeginAuthSession(const void *pTheirAuthTicket, int32 cbTicket, CSteamID steamID) -> EBeginAuthSessionResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1272438380
	*/
	virtual auto CancelAuthTicket(HAuthTicket hAuthTicket) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3530549688
	*/
	virtual auto CheckoutSiteLicenseSeat(uint32 uUnk) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	393939951
	*/
	virtual auto ClearAllLoginInformation() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1381569433
	*/
	virtual auto ClearNeedsSSANextSteamLogon() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3808326070
	*/
	virtual auto DeleteConfigKey(ERegistrySubTree eRegistrySubTree, const char *pchKey) -> bool = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2589709941
	*/
	OSW_UNSAFE_WARNING
	virtual auto DestroyCachedCredentials(const char *pchAccountName) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2603453363
	*/
	virtual auto EndAuthSession(CSteamID steamID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2478969772
	*/
	virtual auto GetAccountName(char *pchAccountName, uint32 cb) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3851968773
	*/
	virtual auto GetAccountName(CSteamID userID, char *pchAccountName, uint32 cb) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	734879535
	*/
	virtual auto GetAccountSecurityPolicyFlags() -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[string]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1128117076
	*/
	virtual auto GetAgreementSessionUrl() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2247854064
	*/
	virtual auto GetAppLastPlayedTime(AppId_t nAppId) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1439892109
	*/
	virtual auto GetAppOwnershipTicketData(uint32 nAppID, void *pvBuffer, uint32 cbBufferLength) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4, bytes_length_from_mem, bytes4, bytes4, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3359938624
	*/
	virtual auto GetAppOwnershipTicketExtendedData(uint32 nAppID, void *pvBuffer, uint32 cbBufferLength, uint32 *piAppId, uint32 *piSteamId, uint32 *piSignature, uint32 *pcbSignature) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2038169144
	*/
	virtual auto GetAppOwnershipTicketLength(uint32 nAppID) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1691284013
	*/
	virtual auto GetAppUpdateDisabledSecondsRemaining(uint32) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1291523471
	*/
	virtual auto GetAppsInGuestPassesToRedeem(uint32 *, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[string]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1848573867
	*/
	virtual auto GetAssociatedSiteName() -> const char* = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4, bytes_length_from_mem, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3390298139
	*/
	virtual auto GetAuthSessionTicket(void *pMyAuthTicket, int32 cbMaxMyAuthTicket, uint32 *pcbAuthTicket) -> HAuthTicket = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8, steamnetworkingidentity]
	 *	[bytes4, bytes_length_from_mem, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	972712776
	*/
	OSW_UNSAFE_WARNING
	virtual auto GetAuthSessionTicketForGameID(void *, int32, uint32 *, CGameID) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3939337152
	*/
	virtual auto GetAvailableSeats(uint32 uUnk) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3527561565
	*/
	virtual auto GetClientInstanceID() -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	964616723
	*/
	virtual auto GetCommunityPreference(ECommunityPreference eunk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes1, unknown]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	641833930
	*/
	virtual auto GetConfigBinaryBlob(ERegistrySubTree, const char *, CUtlBuffer *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3688805876
	*/
	virtual auto GetConfigInt(ERegistrySubTree eRegistrySubTree, const char *pchKey, int32 *pValue) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3614842417
	*/
	virtual auto GetConfigStoreKeyName(ERegistrySubTree eRegistrySubTree, const char *pchKey, char *pchStoreName, int32 cbStoreName) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3687331491
	*/
	virtual auto GetConfigString(ERegistrySubTree eRegistrySubTree, const char *pchKey, char *pchValue, int32 cbValue) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	313347943
	*/
	virtual auto GetCountAuthedComputers() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	502385579
	*/
	virtual auto GetCountUserNotification(EUserNotification) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1423538747
	*/
	virtual auto GetCountUserNotifications() -> unknown_ret = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3522395880
	*/
	OSW_UNSAFE_WARNING
	virtual auto GetCurrentWebAuthToken(char *pchBuffer, int32 cubBuffer, char *pchBuffer2, int32 cubBuffer2) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4, bytes8, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3809719294
	*/
	virtual auto GetCustomBinariesState(AppId_t unAppID, int64 *iUnk1, int64 *iUnk2) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3461294092
	*/
	virtual auto GetDurationControl() -> int64 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1946904231
	*/
	virtual auto GetDurationControlForApp(AppId_t nAppId) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3997797124
	*/
	virtual auto GetEmail(char *pchEmail, int32 cchEmail, bool *pbValidated) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1208932377
	*/
	virtual auto GetEmailDomainFromLogonFailure(char *pchEmailDomain, int32 cbEmailDomain) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3770155520
	*/
	virtual auto GetEncryptedAppTicket(void *pTicket, int32 cbMaxTicket, uint32 *pcbTicket) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3052465329
	*/
	virtual auto GetGameBadgeLevel(int32 nSeries, bool bFoil) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3211469971
	*/
	virtual auto GetGuestPassToGiveCount() -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes8, bytes4, bytes4, bytes4, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1412485749
	*/
	virtual auto GetGuestPassToGiveInfo(uint32 nPassIndex, GID_t *pgidGuestPassID, PackageId_t *pnPackageID, RTime32 *pRTime32Created, RTime32 *pRTime32Expiration, RTime32 *pRTime32Sent, RTime32 *pRTime32Redeemed, char *pchRecipientAddress, int32 cRecipientAddressSize) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1833634965
	*/
	virtual auto GetGuestPassToGiveOut(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	618302606
	*/
	virtual auto GetGuestPassToRedeem(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3057222566
	*/
	virtual auto GetGuestPassToRedeemCount() -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes8, bytes4, bytes4, bytes4, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1214426766
	*/
	virtual auto GetGuestPassToRedeemInfo(uint32 nPassIndex, GID_t *pgidGuestPassID, PackageId_t *pnPackageID, RTime32 *pRTime32Created, RTime32 *pRTime32Expiration, RTime32 *pRTime32Sent, RTime32 *pRTime32Redeemed) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	680419026
	*/
	virtual auto GetGuestPassToRedeemSenderName(uint32 nPassIndex, char *pchSenderName, int32 cSenderNameSize) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	195875811
	*/
	virtual auto GetInstallScriptState(char *pchDescription, uint32 cchDescription, uint32 *punNumSteps, uint32 *punCurrStep) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1290470322
	*/
	virtual auto GetLanguage(char *pchLanguage, int32 cbLanguage) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3398934239
	*/
	virtual auto GetLegacyCDKey(AppId_t nAppID, char *pchKeyData, int32 cbKeyData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3010408891
	*/
	virtual auto GetLogonState() -> ELogonState = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4259999276
	*/
	virtual auto GetMarketEligibility() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes8, bytes_length_from_mem, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3547171544
	*/
	virtual auto GetMarketingMessage(int32 cMarketingMessage, GID_t *gidMarketingMessageID, char *pubMsgUrl, int32 cubMessageUrl, EMarketingMessageFlags *eMarketingMssageFlags) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4139262763
	*/
	virtual auto GetMarketingMessageCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1019412206
	*/
	virtual auto GetMicroTxnAppID(GID_t gidTransID) -> AppId_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2714865626
	*/
	virtual auto GetMicroTxnLineItemCount(GID_t gidTransID) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4049034112
	*/
	virtual auto GetMicroTxnOrderID(GID_t gidTransID) -> uint64 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4161898034
	*/
	virtual auto GetMicroTxnSteamRealm(GID_t gidTransID) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3066264717
	*/
	virtual auto GetNumAppsInGuestPassesToRedeem() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1019281044
	*/
	virtual auto GetParentalUnlockTime() -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2522968862
	*/
	virtual auto GetPlayerSteamLevel() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2916802151
	*/
	STEAMWORKS_STRUCT_RETURN(CGameID, GetRunningGameID, int32 iGame)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3416226026
	*/
	virtual auto GetRunningGamePID(int32) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	658859873
	*/
	virtual auto GetSteamGuardDetails() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	168595417
	*/
	virtual auto GetSteamGuardEnabledTime() -> RTime32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[uint64]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3607432869
	*/
	STEAMWORKS_STRUCT_RETURN(CSteamID, GetSteamID)

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2245087005
	*/
	virtual auto GetSubscribedApps(AppId_t *, uint32, bool) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	529684784
	*/
	virtual auto GetTextFilterSetting() -> unknown_ret = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes1, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3358854461
	*/
	OSW_UNSAFE_WARNING
	virtual auto GetTimedTrialStatus(uint32, uint32 *, uint32 *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4230335601
	*/
	virtual auto GetTwoFactorDetails() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2725326785
	*/
	virtual auto GetUserConfigFolder(char *pchBuffer, int32 cubBuffer) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1139786770
	*/
	virtual auto GetUserDataFolder(CGameID gameID, char *pchBuffer, int32 cubBuffer) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	957502393
	*/
	virtual auto GetUserMachineName(char *pchMachineName, int32 cbMachineName) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, uint64, bytes8, bytes4, bytes2, bytes1]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	550484837
	*/
	virtual auto InitiateGameConnection(void *pOutputBlob, int32 cbBlobMax, CSteamID steamIDGS, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, uint64, bytes8, bytes4, bytes2, bytes1, bytes4, bytes_length_from_mem]
	 *	[bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1863321419
	*/
	virtual auto InitiateGameConnectionOld(void *pOutputBlob, int32 cbBlobMax, CSteamID steamIDGS, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure, void *pvSteam2GetEncryptionKey, int32 cbSteam2GetEncryptionKey) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	374924268
	*/
	virtual auto IsInstallScriptRunning() -> AppId_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4284662215
	*/
	virtual auto IsPasswordRemembered() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2509483822
	*/
	virtual auto IsPrimaryChatDestination() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2478440402
	*/
	virtual auto IsUserSubscribedAppInTicket(CSteamID steamID, AppId_t appID) -> EUserHasLicenseForAppResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2105576693
	*/
	virtual auto IsVACBanned(AppId_t nGameID) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	766544802
	*/
	virtual auto KillVRTheaterPancakeGame(CGameID) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3043898703
	*/
	virtual auto LockParentalLock() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1265411329
	*/
	virtual auto LogOff() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1046042777
	*/
	virtual auto LogOn(CSteamID steamID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3751721273
	*/
	virtual auto NumGamesRunning() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1078543036
	*/
	virtual auto OnBigPictureForStreamingDone() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2872666811
	*/
	virtual auto OnBigPictureForStreamingRestarting() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	276206633
	*/
	virtual auto OnBigPictureForStreamingStartResult(bool, void *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1207586650
	*/
	virtual auto OnGroupChatUserStateChange(uint64, uint32, int32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8, bytes4, bytes4, bytes4, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3771735468
	*/
	virtual auto OnNewGroupChatMsgAdded(uint64, uint64, uint32, uint32, uint32, const char *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1720413927
	*/
	virtual auto OnReceivedGroupChatSubscriptionResponse(uint64, uint64, bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	994648515
	*/
	virtual auto RaiseConnectionPriority(EConnectionPriority eConnectionPriority, EConnectionPriorityReason eUnk) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	87137573
	*/
	virtual auto RaiseWindowForGame(CGameID gameID) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	617045666
	*/
	virtual auto RedeemGuestPass(const char *pchGuestPassCode) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1263666844
	*/
	virtual auto RemoveLegacyCDKey(AppId_t nAppID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1587279309
	*/
	virtual auto RequestAccountLinkInfo() -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1, bytes1, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	145808556
	*/
	virtual auto RequestCustomBinaries(AppId_t unAppID, bool, bool, uint32 *) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3922526440
	*/
	virtual auto RequestEmbeddedClientToken(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes_length_from_mem]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	642168419
	*/
	virtual auto RequestEncryptedAppTicket(const void *pUserData, int32 cbUserData) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3503027821
	*/
	virtual auto RequestLegacyCDKey(AppId_t iAppID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2821477426
	*/
	virtual auto RequestLegacyCDKeyFromApp(AppId_t nMainAppID, AppId_t nDLCAppID, uint32 uUnk) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1534658255
	*/
	virtual auto RequestMicroTxnInfo(GID_t gidTransID) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1435885291
	*/
	virtual auto RequestNewSteamAnnouncementState() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2504183819
	*/
	virtual auto RequestNotifications() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8, bytes4, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	803512895
	*/
	virtual auto RequestSendSteamGroupChatMessage(uint64, uint64, uint32, const char *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	675359058
	*/
	virtual auto RequestSpecialSurvey(uint32 uSurveyId) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1887651266
	*/
	virtual auto RequestSteamGroupChatMessageHistory(uint64, uint64, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2400920534
	*/
	virtual auto RequestSteamGroupChatMessageNotifications(uint64, uint64, EChatNotificationFormat) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3972164033
	*/
	virtual auto RequestStoreAuthURL(const char *) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1756656996
	*/
	virtual auto RequestSurveySchedule() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3031630695
	*/
	virtual auto RequestTimedTrialStatus(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3666832281
	*/
	virtual auto RequestWebAuthToken() -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1940595017
	*/
	virtual auto RequiresLegacyCDKey(AppId_t nAppID, bool *pbUnk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	10944524
	*/
	virtual auto ResetConnectionPriority(int32 hRaiseConnectionPriorityPrev) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1625201299
	*/
	virtual auto ResetEmbeddedClient(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	326696747
	*/
	virtual auto RunInstallScript(AppId_t pAppIDs, const char *pchUnk, bool bUninstall) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	930661847
	*/
	virtual auto SendGameWebCallback(AppId_t unAppId, const char *szData) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes_length_from_mem]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3745843055
	*/
	virtual auto SendSpecialSurveyResponse(uint32 uSurveyId, const uint8 *pubData, uint32 cubData) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	673928127
	*/
	virtual auto SendSteamServiceStatusUpdate(EResult eResult, ESteamServiceStatusUpdate eUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3960731143
	*/
	virtual auto SendValidationEmail() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3838749840
	*/
	virtual auto Set2ndFactorAuthCode(const char *pchAuthCode, bool bDontRememberComputer) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	458487486
	*/
	virtual auto SetAccountCommunityBanned(bool bBanned) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1718745941
	*/
	virtual auto SetAccountLimited(bool bAccountLimited) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2428720500
	*/
	virtual auto SetAccountNameForCachedCredentialLogin(const char *pchAccountName, bool bUnk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2223103025
	*/
	virtual auto SetAsyncNotificationEnabled(uint32, bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2593931163
	*/
	virtual auto SetCellID(CellID_t cellID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8, bytes4, bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2826663503
	*/
	virtual auto SetClientStat(EClientStat eStat, int64 llValue, AppId_t nAppID, DepotId_t nDepotID, CellID_t nCellID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	768508499
	*/
	virtual auto SetCommunityPreference(ECommunityPreference eUnk, bool bUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1208604801
	*/
	virtual auto SetComputerInUse() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, unknown]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2026300287
	*/
	virtual auto SetConfigBinaryBlob(ERegistrySubTree, const char *, CUtlBuffer *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1944177826
	*/
	virtual auto SetConfigInt(ERegistrySubTree eRegistrySubTree, const char *pchKey, int32 iValue) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3715344610
	*/
	virtual auto SetConfigString(ERegistrySubTree eRegistrySubTree, const char *pchKey, const char *pchValue) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2510405117
	*/
	virtual auto SetEmail(const char *pchEmail) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1455490259
	*/
	virtual auto SetLanguage(const char *pchLanguage) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1533228989
	*/
	virtual auto SetLegacyCDKey(AppId_t nAppID, const char *pchKeyData) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2868125575
	*/
	virtual auto SetLimitedAccountCanInviteFriends(bool bCanInviteFriends) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, string, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	996439227
	*/
	virtual auto SetLoginInformation(const char *pchAccountName, const char *pchPassword, bool bRememberPassword) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	475078898
	*/
	virtual auto SetPhoneIsIdentifying(bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1405130925
	*/
	virtual auto SetPhoneIsRequiringVerification(bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3290556604
	*/
	virtual auto SetPhoneIsVerified(bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1793699048
	*/
	virtual auto SetSelfAsChatDestination(bool bUnk) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2530497507
	*/
	virtual auto SetTwoFactorCode(const char *) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1163140036
	*/
	virtual auto SetUserMachineName(const char *pchMachineName) -> void = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, string, string, bytes8, string, bytes4, bytes4, bytes4, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1289644519
	*/
	OSW_UNSAFE_WARNING
	virtual auto SpawnProcess(const char *lpApplicationName, const char *lpCommandLine, const char *lpCurrentDirectory, CGameID gameID, const char *pchGameName, uint32 uUnk, uint32 uUnk2, uint32 uUnk3) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1931411530
	*/
	virtual auto StopStreaming(uint32 uUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes2]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3945361789
	*/
	virtual auto TerminateGameConnection(uint32 unIPServer, uint16 usPortServer) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3747470703
	*/
	virtual auto Test_FakeConnectionTimeout() -> void = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3185617101
	*/
	OSW_UNSAFE_WARNING
	virtual auto TrackAppUsageEvent(CGameID gameID, int32 eAppUsageEvent) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes_length_from_mem]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3726403073
	*/
	virtual auto TrackSteamUsageEvent(ESteamUsageEvent eSteamUsageEvent, const uint8 *pubKV, uint32 cubKV) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3308505883
	*/
	virtual auto UnlockParentalLock(const char *pchUnk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3644985246
	*/
	virtual auto UpdateGameVrDllState(CGameID, bool, bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	565356985
	*/
	virtual auto UpdateSteamAnnouncementLastRead(uint64 ullUnk, uint32 uUnk) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3988630015
	*/
	virtual auto UploadLocalClientLogs() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1938264571
	*/
	virtual auto ValidateOfflineLogonTicket(const char *pchUnk) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3398507085
	*/
	virtual auto VerifyPassword(const char *pchPassword) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1599576475
	*/
	virtual auto WriteLegacyCDKey(AppId_t nAppID) -> bool = 0;


};
