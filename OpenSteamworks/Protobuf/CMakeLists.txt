file(GLOB_RECURSE PROTOBUF_FILES "*.proto")

add_library(OpenSteamworksProtobufs ${PROTOBUF_FILES})

file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/Protobuf")

protobuf_generate(
    TARGET OpenSteamworksProtobufs
    LANGAUEG cpp
    PROTOC_OUT_DIR "${CMAKE_CURRENT_BINARY_DIR}/Protobuf"
)

target_include_directories(OpenSteamworksProtobufs
    PUBLIC
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>;$<INSTALL_INTERFACE:OpenSteamworks/>"
)

target_link_libraries(OpenSteamworksProtobufs
    protobuf::libprotobuf-lite
)
