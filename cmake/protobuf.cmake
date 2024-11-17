include(FetchContent)

fetchcontent_declare(Protobuf
    GIT_REPOSITORY "https://github.com/protocolbuffers/protobuf.git"
    GIT_TAG "v28.3"
    GIT_PROGRESS TRUE
    OVERRIDE_FIND_PACKAGE
)

set(protobuf_BUILD_TESTS OFF)
set(protobuf_BUILD_SHARED_LIBS OFF)

find_library(lib32-zlib
    REGISTRY
)

fetchcontent_makeavailable(Protobuf)

find_package(Protobuf CONFIG REQUIRED)
