cmake_minimum_required(VERSION 3.17)
project(cppdiscord)

set(CMAKE_CXX_STANDARD 20)

file(GLOB HEADERS "include/*h")

add_library(cppdiscord SHARED discord_client.cpp ${HEADERS} object/user.cpp object/guild/guild_user.cpp)