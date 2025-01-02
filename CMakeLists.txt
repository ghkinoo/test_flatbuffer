cmake_minimum_required(VERSION 3.29)
project(test_flatbuffer)

set(CMAKE_CXX_STANDARD 20)

include_directories(flatbuffers/include)

add_compile_definitions(FLATBUFFERS_DEBUG_VERIFICATION_FAILURE)
add_executable(test_flatbuffer main.cpp)