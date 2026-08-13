cmake_minimum_required(VERSION 3.20)
project(mros-z)

add_library(mros-z)
target_compile_options(mros-z PRIVATE -Wall -Wextra)
set_target_properties(mros-z PROPERTIES C_STANDARD 11)

target_include_directories(mros-z PUBLIC include)
add_subdirectory(src)
