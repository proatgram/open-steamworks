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

osw_abstract_class OSW_UNSAFE_INTERFACE IClientSecureDesktop {
public:

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4147897185
	*/
	OSW_UNSAFE_WARNING
	virtual auto BStartStreaming(osw_unknown_arguments) -> osw_unknown_return = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4158101450
	*/
	OSW_UNSAFE_WARNING
	virtual auto SendSAS(osw_unknown_arguments) -> osw_unknown_return = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2315086918
	*/
	OSW_UNSAFE_WARNING
	virtual auto StopStreaming(osw_unknown_arguments) -> osw_unknown_return = 0;


};
