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
CMAKE_SOURCE_DIR = /home/qli/CLionProjects/CPP/module04/ex01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex01.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex01.dir/flags.make

CMakeFiles/ex01.dir/main.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex01.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex01.dir/main.cpp.o -c /home/qli/CLionProjects/CPP/module04/ex01/main.cpp

CMakeFiles/ex01.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module04/ex01/main.cpp > CMakeFiles/ex01.dir/main.cpp.i

CMakeFiles/ex01.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module04/ex01/main.cpp -o CMakeFiles/ex01.dir/main.cpp.s

CMakeFiles/ex01.dir/AWeapon.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/AWeapon.cpp.o: ../AWeapon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex01.dir/AWeapon.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex01.dir/AWeapon.cpp.o -c /home/qli/CLionProjects/CPP/module04/ex01/AWeapon.cpp

CMakeFiles/ex01.dir/AWeapon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/AWeapon.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module04/ex01/AWeapon.cpp > CMakeFiles/ex01.dir/AWeapon.cpp.i

CMakeFiles/ex01.dir/AWeapon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/AWeapon.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module04/ex01/AWeapon.cpp -o CMakeFiles/ex01.dir/AWeapon.cpp.s

CMakeFiles/ex01.dir/PlasmaRifle.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/PlasmaRifle.cpp.o: ../PlasmaRifle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex01.dir/PlasmaRifle.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex01.dir/PlasmaRifle.cpp.o -c /home/qli/CLionProjects/CPP/module04/ex01/PlasmaRifle.cpp

CMakeFiles/ex01.dir/PlasmaRifle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/PlasmaRifle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module04/ex01/PlasmaRifle.cpp > CMakeFiles/ex01.dir/PlasmaRifle.cpp.i

CMakeFiles/ex01.dir/PlasmaRifle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/PlasmaRifle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module04/ex01/PlasmaRifle.cpp -o CMakeFiles/ex01.dir/PlasmaRifle.cpp.s

CMakeFiles/ex01.dir/PowerFist.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/PowerFist.cpp.o: ../PowerFist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex01.dir/PowerFist.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex01.dir/PowerFist.cpp.o -c /home/qli/CLionProjects/CPP/module04/ex01/PowerFist.cpp

CMakeFiles/ex01.dir/PowerFist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/PowerFist.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module04/ex01/PowerFist.cpp > CMakeFiles/ex01.dir/PowerFist.cpp.i

CMakeFiles/ex01.dir/PowerFist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/PowerFist.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module04/ex01/PowerFist.cpp -o CMakeFiles/ex01.dir/PowerFist.cpp.s

CMakeFiles/ex01.dir/Enemy.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/Enemy.cpp.o: ../Enemy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ex01.dir/Enemy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex01.dir/Enemy.cpp.o -c /home/qli/CLionProjects/CPP/module04/ex01/Enemy.cpp

CMakeFiles/ex01.dir/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/Enemy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module04/ex01/Enemy.cpp > CMakeFiles/ex01.dir/Enemy.cpp.i

CMakeFiles/ex01.dir/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/Enemy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module04/ex01/Enemy.cpp -o CMakeFiles/ex01.dir/Enemy.cpp.s

CMakeFiles/ex01.dir/SuperMutant.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/SuperMutant.cpp.o: ../SuperMutant.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ex01.dir/SuperMutant.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex01.dir/SuperMutant.cpp.o -c /home/qli/CLionProjects/CPP/module04/ex01/SuperMutant.cpp

CMakeFiles/ex01.dir/SuperMutant.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/SuperMutant.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module04/ex01/SuperMutant.cpp > CMakeFiles/ex01.dir/SuperMutant.cpp.i

CMakeFiles/ex01.dir/SuperMutant.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/SuperMutant.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module04/ex01/SuperMutant.cpp -o CMakeFiles/ex01.dir/SuperMutant.cpp.s

CMakeFiles/ex01.dir/RadScorpion.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/RadScorpion.cpp.o: ../RadScorpion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ex01.dir/RadScorpion.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex01.dir/RadScorpion.cpp.o -c /home/qli/CLionProjects/CPP/module04/ex01/RadScorpion.cpp

CMakeFiles/ex01.dir/RadScorpion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/RadScorpion.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module04/ex01/RadScorpion.cpp > CMakeFiles/ex01.dir/RadScorpion.cpp.i

CMakeFiles/ex01.dir/RadScorpion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/RadScorpion.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module04/ex01/RadScorpion.cpp -o CMakeFiles/ex01.dir/RadScorpion.cpp.s

CMakeFiles/ex01.dir/Character.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/Character.cpp.o: ../Character.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ex01.dir/Character.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex01.dir/Character.cpp.o -c /home/qli/CLionProjects/CPP/module04/ex01/Character.cpp

CMakeFiles/ex01.dir/Character.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/Character.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module04/ex01/Character.cpp > CMakeFiles/ex01.dir/Character.cpp.i

CMakeFiles/ex01.dir/Character.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/Character.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module04/ex01/Character.cpp -o CMakeFiles/ex01.dir/Character.cpp.s

CMakeFiles/ex01.dir/MoreEnemy.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/MoreEnemy.cpp.o: ../MoreEnemy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ex01.dir/MoreEnemy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex01.dir/MoreEnemy.cpp.o -c /home/qli/CLionProjects/CPP/module04/ex01/MoreEnemy.cpp

CMakeFiles/ex01.dir/MoreEnemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/MoreEnemy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module04/ex01/MoreEnemy.cpp > CMakeFiles/ex01.dir/MoreEnemy.cpp.i

CMakeFiles/ex01.dir/MoreEnemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/MoreEnemy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module04/ex01/MoreEnemy.cpp -o CMakeFiles/ex01.dir/MoreEnemy.cpp.s

CMakeFiles/ex01.dir/MoreWeapon.cpp.o: CMakeFiles/ex01.dir/flags.make
CMakeFiles/ex01.dir/MoreWeapon.cpp.o: ../MoreWeapon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ex01.dir/MoreWeapon.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex01.dir/MoreWeapon.cpp.o -c /home/qli/CLionProjects/CPP/module04/ex01/MoreWeapon.cpp

CMakeFiles/ex01.dir/MoreWeapon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex01.dir/MoreWeapon.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module04/ex01/MoreWeapon.cpp > CMakeFiles/ex01.dir/MoreWeapon.cpp.i

CMakeFiles/ex01.dir/MoreWeapon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex01.dir/MoreWeapon.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module04/ex01/MoreWeapon.cpp -o CMakeFiles/ex01.dir/MoreWeapon.cpp.s

# Object files for target ex01
ex01_OBJECTS = \
"CMakeFiles/ex01.dir/main.cpp.o" \
"CMakeFiles/ex01.dir/AWeapon.cpp.o" \
"CMakeFiles/ex01.dir/PlasmaRifle.cpp.o" \
"CMakeFiles/ex01.dir/PowerFist.cpp.o" \
"CMakeFiles/ex01.dir/Enemy.cpp.o" \
"CMakeFiles/ex01.dir/SuperMutant.cpp.o" \
"CMakeFiles/ex01.dir/RadScorpion.cpp.o" \
"CMakeFiles/ex01.dir/Character.cpp.o" \
"CMakeFiles/ex01.dir/MoreEnemy.cpp.o" \
"CMakeFiles/ex01.dir/MoreWeapon.cpp.o"

# External object files for target ex01
ex01_EXTERNAL_OBJECTS =

ex01: CMakeFiles/ex01.dir/main.cpp.o
ex01: CMakeFiles/ex01.dir/AWeapon.cpp.o
ex01: CMakeFiles/ex01.dir/PlasmaRifle.cpp.o
ex01: CMakeFiles/ex01.dir/PowerFist.cpp.o
ex01: CMakeFiles/ex01.dir/Enemy.cpp.o
ex01: CMakeFiles/ex01.dir/SuperMutant.cpp.o
ex01: CMakeFiles/ex01.dir/RadScorpion.cpp.o
ex01: CMakeFiles/ex01.dir/Character.cpp.o
ex01: CMakeFiles/ex01.dir/MoreEnemy.cpp.o
ex01: CMakeFiles/ex01.dir/MoreWeapon.cpp.o
ex01: CMakeFiles/ex01.dir/build.make
ex01: CMakeFiles/ex01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable ex01"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex01.dir/build: ex01

.PHONY : CMakeFiles/ex01.dir/build

CMakeFiles/ex01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex01.dir/clean

CMakeFiles/ex01.dir/depend:
	cd /home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/qli/CLionProjects/CPP/module04/ex01 /home/qli/CLionProjects/CPP/module04/ex01 /home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug /home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug /home/qli/CLionProjects/CPP/module04/ex01/cmake-build-debug/CMakeFiles/ex01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex01.dir/depend

