# Target TestPlatform
add_executable(TestPlatform $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/Test\ Platform/main.cpp>)

target_link_libraries(TestPlatform PRIVATE OpenSteamworks::OpenSteamAPI OpenSteamworks::EMsg)
