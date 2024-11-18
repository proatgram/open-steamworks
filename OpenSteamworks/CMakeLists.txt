add_library(OpenSteamworks INTERFACE)
add_library(OpenSteamworks::OpenSteamworks ALIAS OpenSteamworks)

set_target_properties(OpenSteamworks PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/>;$<INSTALL_INTERFACE:OpenSteamworks/>"
)
