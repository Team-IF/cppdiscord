cmake_minimum_required(VERSION 3.16)
project(cppdiscord)

set(CMAKE_CXX_STANDARD 20)
find_package(cpprestsdk REQUIRED)

file(GLOB HEADERS include/*h include/enums/*h include/guild/*h)
file(GLOB CPPFILES object/*cpp object/guild/*cpp)

add_library(cppdiscord SHARED discord_client.cpp ${HEADERS} ${CPPFILES})
target_link_libraries(cppdiscord PRIVATE cpprestsdk::cpprest)