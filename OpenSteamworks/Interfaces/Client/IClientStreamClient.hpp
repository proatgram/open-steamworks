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

osw_abstract_class OSW_UNSAFE_INTERFACE IClientStreamClient {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean, unknown]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	743974145
	*/
	virtual auto BGetStreamingClientConfig(CUtlBuffer *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[unknown]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1402289589
	*/
	virtual auto BSaveStreamingClientConfig(CUtlBuffer *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1690053183
	*/
	virtual auto FinishStreamingSession(CGameID gameID, const char *, const char *) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2510498106
	*/
	virtual auto Finished(CGameID gameID, EResult eResult) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3194627200
	*/
	virtual auto FocusGained(CGameID gameID, bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3290678028
	*/
	virtual auto FocusLost(CGameID gameID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3138674146
	*/
	virtual auto Launched(CGameID gameID) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2660796835
	*/
	virtual auto ReportStreamingSessionEvent(CGameID gameID, const char *) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1595605060
	*/
	virtual auto SetBitrateOverride(int32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3302908616
	*/
	virtual auto SetQualityOverride(int32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1434022038
	*/
	virtual auto StartStreamingSession(CGameID gameID) -> void = 0;


};
