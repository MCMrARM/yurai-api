cmake_minimum_required(VERSION 3.0)

project(yurai C)

add_library(yurai SHARED stub/yurai.c)
target_include_directories(yurai PUBLIC include)
