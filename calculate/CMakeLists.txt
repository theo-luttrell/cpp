cmake_minimum_required(VERSION 4.0)
project(calculate)

set(CMAKE_CXX_STANDARD 26)
SET (CMAKE_CXX_FLAGS "-Wc++17-extensions -Wall -Werror -Wextra -pedantic -Wshadow -Woverloaded-virtual -Winvalid-pch -Wcast-align -Wformat=2 -Wformat-nonliteral -Wmissing-declarations -Wmissing-format-attribute -Wmissing-include-dirs -Wredundant-decls -Wswitch-default")

add_executable(calculate main.cpp)