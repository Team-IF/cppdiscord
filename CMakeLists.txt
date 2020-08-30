cmake_minimum_required(VERSION 3.17)
project(cppdiscord)

set(CMAKE_CXX_STANDARD 20)

file(GLOB HEADERS include/*h include/enums/*h include/guild/*h)
file(GLOB CPPFILES object/*cpp object/guild/*cpp)

add_library(cppdiscord SHARED discord_client.cpp ${HEADERS} ${CPPFILES})