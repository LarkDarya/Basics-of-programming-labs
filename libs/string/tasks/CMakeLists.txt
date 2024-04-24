cmake_minimum_required(VERSION 3.26)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled main.c
        libs/string_/string_.c
        libs/string_/string_.h
        libs/string_/main_string_.c
        libs/string_/string_lab18_.c
        libs/string_/string_lab18_.h
        libs/string_/main_lab18_.c)


add_subdirectory(libs)
target_link_libraries(untitled string_)