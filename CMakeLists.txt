cmake_minimum_required(VERSION 3.16)
project(Algo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algo main.cpp SortHelper.h SelectSort.h InsertSort.h shellSort.h)