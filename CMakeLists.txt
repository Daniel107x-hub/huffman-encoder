cmake_minimum_required(VERSION 3.27)
set(PROJECT_NAME huffman_encoder)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 11)

set(OSBitness 32)
if(CMAKE_SIZEOF_VOID_P EQUAL 8) # Void pointer has 8 bytes long for 64 bits, 4 for 32 bits
    set(OSBitness 64)
endif ()
set(FullOutputDir "${CMAKE_SOURCE_DIR}/bin/${CMAKE_SYSTEM_NAME}${OSBitness}/${CMAKE_BUILD_TYPE}")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${FullOutputDir}/static libs")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${FullOutputDir}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${FullOutputDir}")

add_executable(${PROJECT_NAME} src/main.cpp)
