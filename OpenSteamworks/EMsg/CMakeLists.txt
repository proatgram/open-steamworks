add_library(OpenSteamworksEMsg 
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/EMsg.hpp>;$<INSTALL_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/EMsg.hpp>"
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/EMsgs.hpp>;$<INSTALL_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/EMsgs.hpp>"
)
add_library(OpenSteamworks::EMsg ALIAS OpenSteamworksEMsg)

target_include_directories(OpenSteamworksEMsg
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamworks/>
        $<INSTALL_INTERFACE:OpenSteamworks/>
)

target_link_libraries(OpenSteamworksEMsg
    PUBLIC
        protobuf::libprotobuf
        OpenSteamworksProtobufs
)
