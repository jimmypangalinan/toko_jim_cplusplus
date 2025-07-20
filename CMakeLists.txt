cmake_minimum_required(VERSION 3.10)
project(TokoElektronikJim)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)
include_directories(src)

# Collect all source files
file(GLOB_RECURSE SOURCES 
    "src/*.cpp"
    "src/*.h"
)

# Create executable
add_executable(tokojim_store ${SOURCES})

# Set output directory
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

# Optional: Add compiler warnings
target_compile_options(tokojim_store PRIVATE 
    $<$<CXX_COMPILER_ID:GNU>:-Wall -Wextra>
    $<$<CXX_COMPILER_ID:Clang>:-Wall -Wextra>
)

# Optional: Create install target
install(TARGETS tokojim_store DESTINATION bin)
