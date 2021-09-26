cmake_minimum_required (VERSION 3.19)
cmake_policy(SET CMP0091 NEW)	# For CMAKE_MSVC_RUNTIME_LIBRARY
project ("ObfuscatedString")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_MSVC_RUNTIME_LIBRARY  "MultiThreaded$<$<CONFIG:Debug>:Debug>")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/exe")

add_executable (ObfStr obf_str.cpp)
