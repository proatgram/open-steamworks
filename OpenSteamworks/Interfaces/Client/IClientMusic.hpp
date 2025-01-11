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

#include "Types/MusicCommon.hpp"
#include "Types/SteamTypes.hpp"

osw_abstract_class OSW_UNSAFE_INTERFACE IClientMusic {
public:

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3798091883
	*/
	virtual auto ActivateRemotePlayerWithID(int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2543192397
	*/
	virtual auto AddAlbumIDToPlaylistID(int32, int32, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes1, bytes1, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3863582874
	*/
	virtual auto AddAllTracksOfAlbumIDToQueue(int32, int32, bool, bool, bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	101611045
	*/
	virtual auto AddArtistNameToPlaylistID(int32, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes1, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	867568990
	*/
	virtual auto AddArtistToQueue(const char *, bool, bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2536425520
	*/
	virtual auto AddLocalLibraryDirectoryEntry(const char *) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3807017835
	*/
	virtual auto AddPlaylistIDToPlaylistID(int32, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1680336931
	*/
	virtual auto AddRandomTracksToPlaylistID(int32, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	364058287
	*/
	virtual auto AddTrackKeyToPlaylistID(int32, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes1, string, bytes1, bytes1, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	842366996
	*/
	virtual auto AddTracksOfAlbumIDToQueue(int32, int32, bool, const char *, bool, bool, bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes1, bytes1, bytes1, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1273123378
	*/
	virtual auto AddTracksOfPlaylistIDToQueue(int32, int32, bool, bool, bool, bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	593663323
	*/
	virtual auto AppendQueueToPlaylistID(int32, bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4263177902
	*/
	virtual auto BActivationSuccess(bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3094864355
	*/
	virtual auto BIsCurrentMusicRemote() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2251268010
	*/
	virtual auto BIsEnabled() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4170691721
	*/
	virtual auto BIsPlaying() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1774740674
	*/
	virtual auto BLocalLibraryIsCrawling() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2071401829
	*/
	virtual auto BRequestAllAlbumListData(int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2670817279
	*/
	virtual auto BRequestAllArtistListData(int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3189918158
	*/
	virtual auto BRequestAllPlayListData(int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2220356884
	*/
	virtual auto BRequestAllTracksListDataForAlbumID(int32, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2231674109
	*/
	virtual auto BRequestAllTracksListDataForPlaylistID(int32, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2406292187
	*/
	virtual auto CancelAlbumCoverRequestForIndex(int32) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	615393311
	*/
	virtual auto CurrentEntryDidChange() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3105258425
	*/
	virtual auto CurrentEntryIsAvailable(bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1523683426
	*/
	virtual auto CurrentEntryWillChange() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2195651841
	*/
	virtual auto DecreaseVolume() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	513348850
	*/
	virtual auto DeletePlaylistWithID(int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1101525496
	*/
	virtual auto DeregisterSteamMusicRemote() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1341057775
	*/
	virtual auto DumpStatusToConsole() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	854946883
	*/
	virtual auto EmptyQueue() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	315612778
	*/
	virtual auto Enable(bool bUnk) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1949211296
	*/
	virtual auto EnableCrawlLogging(bool bUnk) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2007178785
	*/
	virtual auto EnableLooped(bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1509353301
	*/
	virtual auto EnablePlayNext(bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	633963009
	*/
	virtual auto EnablePlayPrevious(bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	145447565
	*/
	virtual auto EnablePlaylists(bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	9243421
	*/
	virtual auto EnableQueue(bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1155067725
	*/
	virtual auto EnableShuffled(bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2494707048
	*/
	virtual auto ForgetCurrentUserSpotify() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1086370972
	*/
	virtual auto GetActiveRemotePlayerID() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4239033013
	*/
	virtual auto GetAlbumCoverForIndex(int32, void *, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3618286432
	*/
	virtual auto GetAlbumCoverURLForAlbumID(int32, char *, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4169057255
	*/
	virtual auto GetAlbumCoverURLForTrackKey(const char *, char *, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2648601822
	*/
	virtual auto GetCurrentEntryTextForRemotePlayerWithID(int32, char *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4040334312
	*/
	virtual auto GetCurrentQueueEntry() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3378534599
	*/
	virtual auto GetDefaultLocalLibraryDirectory(char *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	359534098
	*/
	virtual auto GetLocalLibraryAlbumCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2053788370
	*/
	virtual auto GetLocalLibraryAlbumCountForArtistName(const char *) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4104364944
	*/
	virtual auto GetLocalLibraryAlbumDirectoryForAlbumID(int32, char *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	20838591
	*/
	virtual auto GetLocalLibraryAlbumID(int32, bool) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes_length_from_mem, bytes4, bytes4, bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1360524233
	*/
	virtual auto GetLocalLibraryAlbumIDEntry(int32, char *, int32, char *, int32, int32 *, int32 *, bool *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4081154735
	*/
	virtual auto GetLocalLibraryAlbumIDForArtist(const char *, int32) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	177674814
	*/
	virtual auto GetLocalLibraryAlbumIDForTrackKey(const char *) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes4, bytes_length_from_mem, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1888854152
	*/
	virtual auto GetLocalLibraryAlbumIDTrackEntry(int32, int32, char *, int32, int32 *, char *, int32, char *, int32) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4249615367
	*/
	virtual auto GetLocalLibraryAlbumIDTrackKey(int32, int32, char *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3401720612
	*/
	virtual auto GetLocalLibraryAlbumSortNameForAlbumID(int32, char *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3874803136
	*/
	virtual auto GetLocalLibraryArtistCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1395372332
	*/
	virtual auto GetLocalLibraryArtistName(int32, char *, int32, char *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	468994140
	*/
	virtual auto GetLocalLibraryArtistSortNameForAlbumID(int32, char *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2426759304
	*/
	virtual auto GetLocalLibraryDirectoryEntry(int32, char *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	53913862
	*/
	virtual auto GetLocalLibraryDirectoryEntryCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes4, bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4177212223
	*/
	virtual auto GetLocalLibraryRepresentativeAlbumIDForArtist(const char *, bool *) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4, bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3431456862
	*/
	virtual auto GetLocalLibraryRepresentativeAlbumIDForPlaylist(int32, bool *) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes1, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	627243819
	*/
	virtual auto GetLocalLibraryTrackAndAlbumCountOfArtistName(const char *, int32 *, int32 *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2576726756
	*/
	virtual auto GetLocalLibraryTrackCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	849047014
	*/
	virtual auto GetLocalLibraryTrackCountForAlbumID(int32) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes4, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3072822237
	*/
	virtual auto GetLocalLibraryTrackEntry(const char *, char *, int32, int32 *, char *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3856731686
	*/
	virtual auto GetMostRecentlyAddedAlbums(int32, int32 *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes_length_from_reg]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1565101901
	*/
	virtual auto GetMostRecentlyPlayedAlbums(int32, int32 *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2779457291
	*/
	virtual auto GetNextPlaylistName(const char *, char *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	565103907
	*/
	virtual auto GetPlaybackDuration() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1216155412
	*/
	virtual auto GetPlaybackPosition() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	195749974
	*/
	virtual auto GetPlaybackStatus() -> AudioPlayback_Status = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	928540616
	*/
	virtual auto GetPlayingRepeatStatus() -> PlayingRepeat_Status = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2933888229
	*/
	virtual auto GetPlaylistCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1555113934
	*/
	virtual auto GetPlaylistID(int32) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes4, bytes4, bytes4, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2758978100
	*/
	virtual auto GetPlaylistIDData(int32, char *, int32, int32 *, int32 *, int32 *, int32 *, int32 *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1168010162
	*/
	virtual auto GetPlaylistIDForPosition(int32) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2671440006
	*/
	virtual auto GetPlaylistIDTrackCount(int32) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3142680262
	*/
	virtual auto GetPlaylistIDTrackKey(int32, int32, char *, int32, int32 *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2512770480
	*/
	virtual auto GetPositionForPlaylistID(int32) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1236020465
	*/
	virtual auto GetPositionForPlaylistItemID(int32) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1959828134
	*/
	virtual auto GetQueueCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem, bytes_length_from_mem, bytes_length_from_mem, bytes4, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2333908926
	*/
	virtual auto GetQueueEntryData(int32 iIndex, char *, int32, char *, int32, char *, int32, int32 *, ETrackQueueOrigin *, int32 *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1, bytes4, bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2766588993
	*/
	virtual auto GetQueueEntryOrigin(int32, ETrackQueueOrigin *, int32 *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4181753938
	*/
	virtual auto GetQueueEntryURI(int32 iIndex, char *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1193052698
	*/
	virtual auto GetRemotePlayerCount() -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1, bytes4, bytes_length_from_mem]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	350279049
	*/
	virtual auto GetRemotePlayerIDAndName(int32, int32 *, char *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	740581446
	*/
	virtual auto GetStatusLocalLibrary() -> MediaController_Status = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	207885926
	*/
	virtual auto GetStatusSpotify() -> MediaController_Status = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3972045253
	*/
	virtual auto GetVolume() -> float = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	865306133
	*/
	virtual auto IncreaseVolume() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4280041480
	*/
	virtual auto InsertPlaylistWithNameAtPosition(const char *, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[boolean]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2660378346
	*/
	virtual auto IsPlayingShuffled() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3864474102
	*/
	virtual auto LocalLibraryCrawlTrack(const char *) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3465918080
	*/
	virtual auto LocalLibraryStopCrawling() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string, string]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1575700470
	*/
	virtual auto LoginSpotify(const char *, const char *) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	938268937
	*/
	virtual auto LogoutSpotify() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1411975534
	*/
	virtual auto MarkTrackKeyAsPlayed(const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1107207149
	*/
	virtual auto MovePlaylistFromPositionToPosition(int32, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2594911900
	*/
	virtual auto MoveTrackFromPositionToPositonInPlaylistID(int32, int32, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2665090107
	*/
	virtual auto Pause() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3650327001
	*/
	virtual auto Play() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4221813324
	*/
	virtual auto PlayEntry(int32) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	349134222
	*/
	virtual auto PlayNext() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	221780312
	*/
	virtual auto PlayPrevious() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3338391530
	*/
	virtual auto PlaylistDidChange() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3355270039
	*/
	virtual auto PlaylistWillChange() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	623660469
	*/
	virtual auto QueueDidChange() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3422027338
	*/
	virtual auto QueueWillChange() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2682522162
	*/
	virtual auto RegisterSteamMusicRemote(const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	956979947
	*/
	virtual auto ReloginSpotify() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	352552034
	*/
	virtual auto RemoveAllTracksFromPlaylistID(int32, bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	997902429
	*/
	virtual auto RemovePlaylistPositionFromPlaylistID(int32, int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	827115691
	*/
	virtual auto RemoveQueueEntry(int32 iIndex, bool bUnk) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3508431711
	*/
	virtual auto RenamePlaylistWithID(int32, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	699226803
	*/
	virtual auto ReplacePlaylistWithSoundtrackAlbum(uint32 uUnk) -> unknown_ret = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3908234928
	*/
	virtual auto RequestAlbumCoverForAlbumID(int32) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3054986472
	*/
	virtual auto RequestAlbumCoverForTrackKey(const char *) -> int32 = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3077273682
	*/
	virtual auto ResetLocalLibrary() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1197838291
	*/
	virtual auto ResetLocalLibraryDirectories(bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3032536138
	*/
	virtual auto ResetPlaylistEntries() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2937986313
	*/
	virtual auto ResetQueueEntries() -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1073059250
	*/
	virtual auto SaveLocalLibraryDirectorySettings() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	516964171
	*/
	virtual auto SetCurrentPlaylistEntry(int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2724516614
	*/
	virtual auto SetCurrentQueueEntry(int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	572223155
	*/
	virtual auto SetDisplayName(const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4143050977
	*/
	virtual auto SetPNGIcon_64x64(void *, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4293247032
	*/
	virtual auto SetPlaybackPosition(int32) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	817082480
	*/
	virtual auto SetPlayingRepeatStatus(PlayingRepeat_Status) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	475478864
	*/
	virtual auto SetPlayingShuffled(bool bPlayingShuffled) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3377221656
	*/
	virtual auto SetPlaylistEntry(int32, int32, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4, string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3574328243
	*/
	virtual auto SetQueueEntry(int32, int32, const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1776840162
	*/
	virtual auto SetSuppressAutoTrackAdvance(bool) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3750518675
	*/
	virtual auto SetVolume(float flVolume) -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3636178819
	*/
	virtual auto StartUsingSpotify() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1586560573
	*/
	virtual auto StopUsingSpotify() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4167600534
	*/
	virtual auto ToggleMuteVolume() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3525833505
	*/
	virtual auto TogglePlayPause() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[bytes4]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3639177116
	*/
	virtual auto TogglePlayingRepeatStatus() -> PlayingRepeat_Status = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4, bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	456616694
	*/
	virtual auto UpdateCurrentEntryCoverArt(void *, uint32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3023716235
	*/
	virtual auto UpdateCurrentEntryElapsedSeconds(int32) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[string]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1634924291
	*/
	virtual auto UpdateCurrentEntryText(const char *) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[]
	 *	[]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	3945123701
	*/
	virtual auto UpdateLocalLibraryDirectoriesToCrawl() -> void = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	1503818659
	*/
	virtual auto UpdateLooped(bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4246190741
	*/
	virtual auto UpdatePlaybackStatus(AudioPlayback_Status) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes1]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	4119758671
	*/
	virtual auto UpdateShuffled(bool) -> bool = 0;

	/*
	 * Serialization information:
	 * Serialized arguments and returns:
	 * 	[bytes4]
	 *	[bytes1]
	 * Function address:
	 * 	0
	 * Function fencepost:
	 * 	2009389484
	*/
	virtual auto UpdateVolume(float) -> bool = 0;


};
