cmake_minimum_required(VERSION 3.16)
project(UnderwaterSim LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# ----------------------------
# Add Executable
# ----------------------------
add_executable(UUV-Physics
    src/main.cpp
)

# ----------------------------
# Add Eigen headers
# ----------------------------
target_include_directories(UUV-Physics PRIVATE
    /usr/local/opt/eigen/include/eigen3
)
