cmake_minimum_required(VERSION 3.16)
project(Algo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algo main.cpp SortHelper.h selectSort.h insertSort.h shellSort.h mergeSort.h)