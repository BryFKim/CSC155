# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/162/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/162/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bfhk/CLionProjects/CSC_155

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bfhk/CLionProjects/CSC_155/cmake-build-debug

# Include any dependencies generated for this target.
include labs/lab_3/CMakeFiles/lab_3.dir/depend.make
# Include the progress variables for this target.
include labs/lab_3/CMakeFiles/lab_3.dir/progress.make

# Include the compile flags for this target's objects.
include labs/lab_3/CMakeFiles/lab_3.dir/flags.make

labs/lab_3/CMakeFiles/lab_3.dir/lab_3.cpp.o: labs/lab_3/CMakeFiles/lab_3.dir/flags.make
labs/lab_3/CMakeFiles/lab_3.dir/lab_3.cpp.o: ../labs/lab_3/lab_3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bfhk/CLionProjects/CSC_155/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object labs/lab_3/CMakeFiles/lab_3.dir/lab_3.cpp.o"
	cd /home/bfhk/CLionProjects/CSC_155/cmake-build-debug/labs/lab_3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_3.dir/lab_3.cpp.o -c /home/bfhk/CLionProjects/CSC_155/labs/lab_3/lab_3.cpp

labs/lab_3/CMakeFiles/lab_3.dir/lab_3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_3.dir/lab_3.cpp.i"
	cd /home/bfhk/CLionProjects/CSC_155/cmake-build-debug/labs/lab_3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bfhk/CLionProjects/CSC_155/labs/lab_3/lab_3.cpp > CMakeFiles/lab_3.dir/lab_3.cpp.i

labs/lab_3/CMakeFiles/lab_3.dir/lab_3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_3.dir/lab_3.cpp.s"
	cd /home/bfhk/CLionProjects/CSC_155/cmake-build-debug/labs/lab_3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bfhk/CLionProjects/CSC_155/labs/lab_3/lab_3.cpp -o CMakeFiles/lab_3.dir/lab_3.cpp.s

# Object files for target lab_3
lab_3_OBJECTS = \
"CMakeFiles/lab_3.dir/lab_3.cpp.o"

# External object files for target lab_3
lab_3_EXTERNAL_OBJECTS =

labs/lab_3/lab_3: labs/lab_3/CMakeFiles/lab_3.dir/lab_3.cpp.o
labs/lab_3/lab_3: labs/lab_3/CMakeFiles/lab_3.dir/build.make
labs/lab_3/lab_3: labs/lab_3/CMakeFiles/lab_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bfhk/CLionProjects/CSC_155/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab_3"
	cd /home/bfhk/CLionProjects/CSC_155/cmake-build-debug/labs/lab_3 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
labs/lab_3/CMakeFiles/lab_3.dir/build: labs/lab_3/lab_3
.PHONY : labs/lab_3/CMakeFiles/lab_3.dir/build

labs/lab_3/CMakeFiles/lab_3.dir/clean:
	cd /home/bfhk/CLionProjects/CSC_155/cmake-build-debug/labs/lab_3 && $(CMAKE_COMMAND) -P CMakeFiles/lab_3.dir/cmake_clean.cmake
.PHONY : labs/lab_3/CMakeFiles/lab_3.dir/clean

labs/lab_3/CMakeFiles/lab_3.dir/depend:
	cd /home/bfhk/CLionProjects/CSC_155/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bfhk/CLionProjects/CSC_155 /home/bfhk/CLionProjects/CSC_155/labs/lab_3 /home/bfhk/CLionProjects/CSC_155/cmake-build-debug /home/bfhk/CLionProjects/CSC_155/cmake-build-debug/labs/lab_3 /home/bfhk/CLionProjects/CSC_155/cmake-build-debug/labs/lab_3/CMakeFiles/lab_3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : labs/lab_3/CMakeFiles/lab_3.dir/depend

