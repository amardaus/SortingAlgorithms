# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/olcia/Downloads/clion-2019.2.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/olcia/Downloads/clion-2019.2.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/olcia/Documents/AlgorytmyiStrukturyDanych/SortingAlgorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/olcia/Documents/AlgorytmyiStrukturyDanych/SortingAlgorithms/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SelectionSort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SelectionSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SelectionSort.dir/flags.make

CMakeFiles/SelectionSort.dir/SelectionSort.cpp.o: CMakeFiles/SelectionSort.dir/flags.make
CMakeFiles/SelectionSort.dir/SelectionSort.cpp.o: ../SelectionSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/olcia/Documents/AlgorytmyiStrukturyDanych/SortingAlgorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SelectionSort.dir/SelectionSort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SelectionSort.dir/SelectionSort.cpp.o -c /home/olcia/Documents/AlgorytmyiStrukturyDanych/SortingAlgorithms/SelectionSort.cpp

CMakeFiles/SelectionSort.dir/SelectionSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SelectionSort.dir/SelectionSort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/olcia/Documents/AlgorytmyiStrukturyDanych/SortingAlgorithms/SelectionSort.cpp > CMakeFiles/SelectionSort.dir/SelectionSort.cpp.i

CMakeFiles/SelectionSort.dir/SelectionSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SelectionSort.dir/SelectionSort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/olcia/Documents/AlgorytmyiStrukturyDanych/SortingAlgorithms/SelectionSort.cpp -o CMakeFiles/SelectionSort.dir/SelectionSort.cpp.s

# Object files for target SelectionSort
SelectionSort_OBJECTS = \
"CMakeFiles/SelectionSort.dir/SelectionSort.cpp.o"

# External object files for target SelectionSort
SelectionSort_EXTERNAL_OBJECTS =

SelectionSort: CMakeFiles/SelectionSort.dir/SelectionSort.cpp.o
SelectionSort: CMakeFiles/SelectionSort.dir/build.make
SelectionSort: CMakeFiles/SelectionSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/olcia/Documents/AlgorytmyiStrukturyDanych/SortingAlgorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SelectionSort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SelectionSort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SelectionSort.dir/build: SelectionSort

.PHONY : CMakeFiles/SelectionSort.dir/build

CMakeFiles/SelectionSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SelectionSort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SelectionSort.dir/clean

CMakeFiles/SelectionSort.dir/depend:
	cd /home/olcia/Documents/AlgorytmyiStrukturyDanych/SortingAlgorithms/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/olcia/Documents/AlgorytmyiStrukturyDanych/SortingAlgorithms /home/olcia/Documents/AlgorytmyiStrukturyDanych/SortingAlgorithms /home/olcia/Documents/AlgorytmyiStrukturyDanych/SortingAlgorithms/cmake-build-debug /home/olcia/Documents/AlgorytmyiStrukturyDanych/SortingAlgorithms/cmake-build-debug /home/olcia/Documents/AlgorytmyiStrukturyDanych/SortingAlgorithms/cmake-build-debug/CMakeFiles/SelectionSort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SelectionSort.dir/depend

