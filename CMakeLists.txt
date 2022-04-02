cmake_minimum_required(VERSION 3.12.0)
project(restclient VERSION 0.1.0)

find_package(CURL REQUIRED)
set(CMAKE_CXX_STANDARD 98)
aux_source_directory(. SRC_LIST)
add_executable(restclient ${SRC_LIST})
target_link_libraries(restclient curl)
