cmake_minimum_required(VERSION 3.16)
project(UnderwaterSim LANGUAGES CXX)

include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.5.0 # or latest stable tag
)

FetchContent_MakeAvailable(Catch2)


# --------------------------------
# Main executable
# --------------------------------
add_executable(UUV-Physics
    src/main.cpp
)

# Add Eigen include path
target_include_directories(UUV-Physics PRIVATE
    /usr/local/opt/eigen/include/eigen3
)

# Add our project headers
target_include_directories(UUV-Physics PRIVATE ${CMAKE_SOURCE_DIR}/include)

# --------------------------------
# Tests
# --------------------------------
add_executable(tests
    tests/test_state.cpp
)

target_include_directories(tests PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    /usr/local/opt/eigen/include/eigen3
)

target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)