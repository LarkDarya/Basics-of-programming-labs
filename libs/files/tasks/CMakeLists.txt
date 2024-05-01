cmake_minimum_required(VERSION 3.26)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled main.c
        libs/files_/generating_test_data.c
        libs/files_/lab_19.c
        libs/files_/lab_19.h)


add_subdirectory(libs)
target_link_libraries(untitled files_)