# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = "/home/qli/Documents/Installed programs/clion-2020.2.4/bin/cmake/linux/bin/cmake"

# The command to remove a file.
RM = "/home/qli/Documents/Installed programs/clion-2020.2.4/bin/cmake/linux/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/qli/CLionProjects/CPP/test_files/module02/function overload"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/qli/CLionProjects/CPP/test_files/module02/function overload/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/sample.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sample.dir/flags.make

CMakeFiles/sample.dir/Sample.cpp.o: CMakeFiles/sample.dir/flags.make
CMakeFiles/sample.dir/Sample.cpp.o: ../Sample.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/qli/CLionProjects/CPP/test_files/module02/function overload/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sample.dir/Sample.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sample.dir/Sample.cpp.o -c "/home/qli/CLionProjects/CPP/test_files/module02/function overload/Sample.cpp"

CMakeFiles/sample.dir/Sample.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sample.dir/Sample.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/qli/CLionProjects/CPP/test_files/module02/function overload/Sample.cpp" > CMakeFiles/sample.dir/Sample.cpp.i

CMakeFiles/sample.dir/Sample.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sample.dir/Sample.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/qli/CLionProjects/CPP/test_files/module02/function overload/Sample.cpp" -o CMakeFiles/sample.dir/Sample.cpp.s

CMakeFiles/sample.dir/main.cpp.o: CMakeFiles/sample.dir/flags.make
CMakeFiles/sample.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/qli/CLionProjects/CPP/test_files/module02/function overload/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sample.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sample.dir/main.cpp.o -c "/home/qli/CLionProjects/CPP/test_files/module02/function overload/main.cpp"

CMakeFiles/sample.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sample.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/qli/CLionProjects/CPP/test_files/module02/function overload/main.cpp" > CMakeFiles/sample.dir/main.cpp.i

CMakeFiles/sample.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sample.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/qli/CLionProjects/CPP/test_files/module02/function overload/main.cpp" -o CMakeFiles/sample.dir/main.cpp.s

# Object files for target sample
sample_OBJECTS = \
"CMakeFiles/sample.dir/Sample.cpp.o" \
"CMakeFiles/sample.dir/main.cpp.o"

# External object files for target sample
sample_EXTERNAL_OBJECTS =

sample: CMakeFiles/sample.dir/Sample.cpp.o
sample: CMakeFiles/sample.dir/main.cpp.o
sample: CMakeFiles/sample.dir/build.make
sample: CMakeFiles/sample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/qli/CLionProjects/CPP/test_files/module02/function overload/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable sample"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sample.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sample.dir/build: sample

.PHONY : CMakeFiles/sample.dir/build

CMakeFiles/sample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sample.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sample.dir/clean

CMakeFiles/sample.dir/depend:
	cd "/home/qli/CLionProjects/CPP/test_files/module02/function overload/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/qli/CLionProjects/CPP/test_files/module02/function overload" "/home/qli/CLionProjects/CPP/test_files/module02/function overload" "/home/qli/CLionProjects/CPP/test_files/module02/function overload/cmake-build-debug" "/home/qli/CLionProjects/CPP/test_files/module02/function overload/cmake-build-debug" "/home/qli/CLionProjects/CPP/test_files/module02/function overload/cmake-build-debug/CMakeFiles/sample.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/sample.dir/depend
