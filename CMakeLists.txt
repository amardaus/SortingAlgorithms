cmake_minimum_required(VERSION 3.15)
project(SortingAlgorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(SortingAlgorithms CountingSort.cpp CountingSort.h BubbleSort.cpp BubbleSort.h InsertionSort.cpp InsertionSort.h SelectionSort.cpp SelectionSort.h RadixSort.cpp RadixSort.h HeapSort.cpp HeapSort.h)
add_executable(CountingSort CountingSort.cpp)
add_executable(SelectionSort SelectionSort.cpp)

add_executable(InsertionSort InsertionSort.cpp)
add_executable(BubbleSort BubbleSort.cpp)
add_executable(RadixSort RadixSort.cpp)