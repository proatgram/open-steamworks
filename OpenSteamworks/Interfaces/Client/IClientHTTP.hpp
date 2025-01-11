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

#include "Types/HTTPCommon.hpp"
#include "Types/SteamTypes.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientHTTP {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3067844851
	*/
	virtual auto CancelHTTPRequest(HTTPRequestHandle hRequest) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	984566669
	*/
	virtual auto CreateCookieContainer(bool) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3840417542
	*/
	virtual auto CreateHTTPRequest(EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL) -> HTTPRequestHandle = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1235768031
	*/
	virtual auto DeferHTTPRequest(HTTPRequestHandle hRequest) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3307137443
	*/
	virtual auto GetHTTPDownloadProgressPct(HTTPRequestHandle hRequest, float *pflPercentOut) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3761420964
	*/
	virtual auto GetHTTPRequestWasTimedOut(HTTPRequestHandle hRequest, bool *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4292663548
	*/
	virtual auto GetHTTPResponseBodyData(HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	972259694
	*/
	virtual auto GetHTTPResponseBodySize(HTTPRequestHandle hRequest, uint32 *unBodySize) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3195597603
	*/
	virtual auto GetHTTPResponseHeaderSize(HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3443446518
	*/
	virtual auto GetHTTPResponseHeaderValue(HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2716226416
	*/
	virtual auto GetHTTPStreamingResponseBodyData(HTTPRequestHandle hRequest, uint32, uint8 *pBodyDataBuffer, uint32 unBufferSize) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2624257076
	*/
	virtual auto PrioritizeHTTPRequest(HTTPRequestHandle hRequest) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1334480344
	*/
	virtual auto ReleaseCookieContainer(uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2351388358
	*/
	virtual auto ReleaseHTTPRequest(HTTPRequestHandle hRequest) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2901900131
	*/
	virtual auto SendHTTPRequest(HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1099980685
	*/
	virtual auto SendHTTPRequestAndStreamResponse(HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, string, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1126204071
	*/
	virtual auto SetCookie(uint32, const char *, const char *, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2104289578
	*/
	virtual auto SetHTTPRequestAbsoluteTimeoutMS(HTTPRequestHandle hRequest, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes8]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	801015229
	*/
	virtual auto SetHTTPRequestContextValue(HTTPRequestHandle hRequest, uint64 ulContextValue) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	264269783
	*/
	virtual auto SetHTTPRequestCookieContainer(HTTPRequestHandle hRequest, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1722632989
	*/
	virtual auto SetHTTPRequestGetOrPostParameter(HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	174204381
	*/
	virtual auto SetHTTPRequestHeaderValue(HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1984092556
	*/
	virtual auto SetHTTPRequestNetworkActivityTimeout(HTTPRequestHandle hRequest, uint32 unTimeoutSeconds) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string, bytes4, bytes_length_from_mem]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1008626340
	*/
	virtual auto SetHTTPRequestRawPostBody(HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2772131096
	*/
	virtual auto SetHTTPRequestRequiresVerifiedCertificate(HTTPRequestHandle hRequest, bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	21690260
	*/
	virtual auto SetHTTPRequestUserAgentInfo(HTTPRequestHandle hRequest, const char *) -> bool = 0;


};
