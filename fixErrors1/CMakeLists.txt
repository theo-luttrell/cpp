cmake_minimum_required(VERSION 4.0)
project(fixErrors1)

set(CMAKE_CXX_STANDARD 26)
SET(CMAKE_BUILD_TYPE Debug)
SET (CMAKE_CXX_FLAGS "-Wall -Werror -Wextra -pedantic -Wshadow -Woverloaded-virtual -Winvalid-pch -Wcast-align -Wformat=2 -Wformat-nonliteral -Wmissing-declarations -Wmissing-format-attribute -Wmissing-include-dirs -Wredundant-decls -Wswitch-default")

add_executable(fixErrors1 main.cpp)