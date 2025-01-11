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

#include "Types/ClientAudioCommon.hpp"
#include "Types/SteamTypes.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientAudio {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3384647021
	*/
	virtual auto BAppUsesVoice(uint32 uUnk) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes_length_from_mem, bytes4, bytes4]
	 *	[bytes4, bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3188946313
	*/
	virtual auto DecompressVoice(const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate) -> EVoiceResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1764193620
	*/
	virtual auto GetAvailableVoice(uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate) -> EVoiceResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4, bytes4, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3663586335
	*/
	virtual auto GetCompressedVoice(void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten) -> EVoiceResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	687891840
	*/
	virtual auto GetGameSystemVolume() -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1, bytes4, bytes1, bytes4, bytes4]
	 *	[bytes4, bytes4, bytes_length_from_reg, bytes4, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4261922303
	*/
	virtual auto GetVoice(bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate) -> EVoiceResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2431500974
	*/
	virtual auto GetVoiceOptimalSampleRate() -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3475216633
	*/
	virtual auto ResetVoiceRecording() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1073909274
	*/
	virtual auto SetGameSystemVolume(float) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	260715958
	*/
	virtual auto StartVoiceRecording() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	864899926
	*/
	virtual auto StopVoiceRecording() -> void = 0;


};
