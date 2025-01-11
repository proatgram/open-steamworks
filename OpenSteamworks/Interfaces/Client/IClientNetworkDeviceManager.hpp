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

#include "Types/AppsCommon.hpp"
#include "Types/NetworkingDeviceManagerCommon.hpp"
#include "Types/SteamTypes.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientNetworkDeviceManager {
public:

	/*
	 * UNSAFE FUNCTION WARNING:
	 * The functions argc does not match the previous dump
	 * Use this function at your own risk.
	 * Old serialized arguments and returns:
	 * 	[NO DUMPED INFO]
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[protobuf]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3510156734
	*/
	OSW_UNSAFE_WARNING
	virtual auto ConnectToDevice(uint32, uint32, const char *, const char *, uint32, bool, bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1981097651
	*/
	virtual auto DisconnectFromDevice(uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3034009695
	*/
	virtual auto ForgetWirelessEndpoint(uint32, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes4, bytes4, bytes4, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2276174395
	*/
	virtual auto GetCustomIPSettings(uint32, uint32 *, uint32 *, uint32 *, uint32 *, uint32 *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1, unknown]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1649250574
	*/
	virtual auto GetNetworkDevicesData(NetworkDevicesData_t *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	904330511
	*/
	virtual auto IsInterfaceValid() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	246386590
	*/
	virtual auto RefreshDevices() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4, bytes4, bytes4, bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4267498400
	*/
	virtual auto SetCustomIPSettings(uint32, uint32, uint32, uint32, uint32, uint32) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4100146151
	*/
	virtual auto SetWifiEnabled(bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2908398733
	*/
	virtual auto SetWifiScanningEnabled(bool) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes1]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3476661277
	*/
	virtual auto SetWirelessEndpointAutoconnect(uint32, uint32, bool) -> unknown_ret = 0;


};
