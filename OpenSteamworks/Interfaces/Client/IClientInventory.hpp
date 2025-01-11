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

#include "Types/InventoryCommon.hpp"
#include "Types/SteamTypes.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientInventory {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes_length_from_reg]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2054818137
	*/
	virtual auto AddPromoItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, uint32 unArrayLength) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, uint64]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2565478970
	*/
	virtual auto CheckResultSteamID(SteamInventoryResult_t resultHandle, CSteamID steamIDExpected) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3117667244
	*/
	virtual auto ConsumeItem(SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1, bytes_length_from_mem]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	106690205
	*/
	virtual auto DeserializeResult(SteamInventoryResult_t *pOutResultHandle, const void *pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE = false) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1461437185
	*/
	virtual auto DestroyResult(SteamInventoryResult_t resultHandle) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes_length_from_reg, bytes_length_from_reg]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1227665413
	*/
	virtual auto GenerateItems(SteamInventoryResult_t *pResultHandle, const SteamItemDef_t *pArrayItemDefs, uint32 uUnk, const uint32 *punArrayQuantity, uint32 unArrayLength) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2694864129
	*/
	virtual auto GetAllItems(SteamInventoryResult_t *pResultHandle) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64, bytes4]
	 *	[bytes1, bytes_length_from_reg, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1155307494
	*/
	virtual auto GetEligiblePromoItemDefinitionIDs(CSteamID steamID, SteamItemDef_t *pItemDefIDs, uint32 uUnk, uint32 *punItemDefIDsArraySize) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes8, bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4121323335
	*/
	virtual auto GetItemPrice(int32, uint64 *, uint64 *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes_length_from_reg]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3800648624
	*/
	virtual auto GetItemsByID(SteamInventoryResult_t *pResultHandle, const SteamItemInstanceID_t *pInstanceIDs, uint32 unCountInstanceIDs) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes_length_from_reg, bytes_length_from_reg, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	636735417
	*/
	virtual auto GetItemsWithPrices(int32 *, uint64 *, uint64 *, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1737253337
	*/
	virtual auto GetNumItemsWithPrices() -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3516143825
	*/
	virtual auto GetResultStatus(SteamInventoryResult_t resultHandle) -> EResult = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1044215044
	*/
	virtual auto GetResultTimestamp(SteamInventoryResult_t resultHandle) -> uint32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3095926249
	*/
	virtual auto InspectItem(int32 *, const char *) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3985528431
	*/
	virtual auto LoadItemDefinitions() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3898721836
	*/
	auto RemoveProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName) -> bool;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[uint64]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1300926355
	*/
	virtual auto RequestEligiblePromoItemDefinitionsIDs(CSteamID steamID) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	335130598
	*/
	virtual auto RequestPrices() -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4212306460
	*/
	virtual auto SendItemDropHeartbeat() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3861739336
	*/
	virtual auto SerializeResult(SteamInventoryResult_t resultHandle, void *pOutBuffer, uint32 uUnk, uint32 *punOutBufferSize) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8, string, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2584426373
	*/
	auto SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, const char *pchPropertyValue) -> bool;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8, string, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2584426373
	*/
	auto SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, bool bValue) -> bool;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8, string, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2584426373
	*/
	auto SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, int64 nValue) -> bool;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes8, string, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2584426373
	*/
	auto SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char *pchPropertyName, float flValue) -> bool;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes_length_from_reg, bytes_length_from_reg]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2416144403
	*/
	virtual auto StartPurchase(const int32 *, uint32, const uint32 *, uint32) -> SteamAPICall_t = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes8]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2875751522
	*/
	auto StartUpdateProperties() -> SteamInventoryUpdateHandle_t;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	436346611
	*/
	auto SubmitUpdateProperties(SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t *pResultHandle) -> bool;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes8, bytes4, bytes8]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3913447719
	*/
	virtual auto TransferItemQuantity(SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2918760934
	*/
	virtual auto TriggerItemDrop(SteamInventoryResult_t *pResultHandle, SteamItemDef_t dropListDefinition) -> bool = 0;


};
