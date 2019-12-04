cmake_minimum_required(VERSION 3.15)
project(SortingAlgorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(SortingAlgorithms CountingSort.cpp BubbleSort.cpp InsertionSort.cpp SelectionSort.cpp RadixSort.cpp)
add_executable(CountingSort CountingSort.cpp)
add_executable(SelectionSort SelectionSort.cpp)

add_executable(InsertionSort InsertionSort.cpp)
add_executable(BubbleSort BubbleSort.cpp)
add_executable(RadixSort RadixSort.cpp)
add_executable(HeapSort_Recursive HeapSort_Recursive.cpp)
add_executable(HeapSort_Iterative HeapSort_Iterative.cpp)