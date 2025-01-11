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

osw_abstract_class OSW_UNSAFE_INTERFACE IClientNetworkingUtilsSerialized {
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
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2948797870
	*/
	OSW_UNSAFE_WARNING
	virtual auto GetLauncherType(osw_unknown_arguments) -> osw_unknown_return = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes4, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	786558666
	*/
	OSW_UNSAFE_WARNING
	virtual auto GetNetworkConfigJSON_DEPRECATED(osw_unknown_arguments) -> osw_unknown_return = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2119074844
	*/
	virtual auto GotLocationString(osw_unknown_arguments) -> osw_unknown_return = 0;

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
	 * 	136715818
	*/
	OSW_UNSAFE_WARNING
	virtual auto PostAppSummaryUpdates(osw_unknown_arguments) -> osw_unknown_return = 0;

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes_length_from_mem]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3873806590
	*/
	OSW_UNSAFE_WARNING
	virtual auto PostConnectionStateMsg(osw_unknown_arguments) -> osw_unknown_return = 0;

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
	 * 	2360636135
	*/
	OSW_UNSAFE_WARNING
	virtual auto PostConnectionStateUpdatesForAllConnections(osw_unknown_arguments) -> osw_unknown_return = 0;

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
	 * 	3160474473
	*/
	OSW_UNSAFE_WARNING
	virtual auto TEST_ClearCachedNetworkConfig(osw_unknown_arguments) -> osw_unknown_return = 0;


};
