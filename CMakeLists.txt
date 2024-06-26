# Hacky solution to force compile 32 bit
cmake_minimum_required(VERSION 3.5)

set(CMAKE_C_FLAGS "-m32")
set(CMAKE_CXX_FLAGS "-m32")
set(FIND_LIBRARY_USE_LIB64_PATHS False CACHE BOOL "Disables 64bit libraries from being found with find_package" FORCE)
set(FIND_LIBRARY_USE_LIB32_PATHS True CACHE BOOL "Enables 32bit libraries being found with find_packahe" FORCE)

project(OpenSteamworks
    # TODO: Set version to Client Manifest Version
    VERSION 0.1
    DESCRIPTION "A set dumped and partially reverse engineered headers for Steamworks updated by a guy who has no experience in dumping or reverse engineering."
    HOMEPAGE_URL "https://github.com/proatgram/open-steamworks"
)

option(BUILD_TEST_PLATFORM "Build the optional Test Platform" OFF)


add_subdirectory("OpenSteamAPI/src")

if(BUILD_TEST_PLATFORM)
    add_subdirectory("Test Platform")
endif()
