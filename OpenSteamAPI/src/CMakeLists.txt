# Target OpenSteamAPI
if(WIN32)
    set(OpenSteamAPI_NATIVE $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/Win32Library.h>)
elseif(APPLE)
    set(OpenSteamAPI_NATIVE $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/OSXPathHelper.mm> $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/OSXPathHelper.h>)
elseif(UNIX)
    set(OpenSteamAPI_NATIVE $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/POSIXLibrary.h>)
else()
    message(FATAL_ERROR "Unsupported OS! Please contact maintainer.")
endif()

add_library(OpenSteamAPI
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/CCallbackMgr.cpp>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/CCallbackMgr.h>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/ClientWrap.cpp>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/Interface_OSW.cpp>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamAPI/src/Interface_OSW.h>
    ${OpenSteamAPI_NATIVE}
)

target_include_directories(OpenSteamAPI 
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/OpenSteamworks>
        $<INSTALL_INTERFACE:include/OpenSteamworks>
)
