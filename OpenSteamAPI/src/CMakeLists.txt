# Target OpenSteamAPI
if(WIN32)
    set(OpenSteamAPI_NATIVE $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/Win32Library.hpp>)
elseif(APPLE)
    set(OpenSteamAPI_NATIVE $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/OSXPathHelper.mm> $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/OSXPathHelper.h>)
elseif(UNIX)
    set(OpenSteamAPI_NATIVE $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/POSIXLibrary.hpp>)
else()
    message(FATAL_ERROR "Unsupported OS! Please contact maintainer.")
endif()

add_library(OpenSteamAPI
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/CCallbackMgr.cpp>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/CCallbackMgr.hpp>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/ClientWrap.cpp>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/Interface_OSW.cpp>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/Interface_OSW.hpp>
    ${OpenSteamAPI_NATIVE}
)
add_library(OpenSteamworks::OpenSteamAPI ALIAS OpenSteamAPI)

target_link_libraries(OpenSteamAPI
    PUBLIC
        OpenSteamworks::OpenSteamworks
)
