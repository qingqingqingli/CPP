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
CMAKE_SOURCE_DIR = /home/qli/CLionProjects/CPP/module05/ex03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/qli/CLionProjects/CPP/module05/ex03/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex03.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex03.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex03.dir/flags.make

CMakeFiles/ex03.dir/main.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module05/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex03.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex03.dir/main.cpp.o -c /home/qli/CLionProjects/CPP/module05/ex03/main.cpp

CMakeFiles/ex03.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module05/ex03/main.cpp > CMakeFiles/ex03.dir/main.cpp.i

CMakeFiles/ex03.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module05/ex03/main.cpp -o CMakeFiles/ex03.dir/main.cpp.s

CMakeFiles/ex03.dir/Bureaucrat.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/Bureaucrat.cpp.o: ../Bureaucrat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module05/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex03.dir/Bureaucrat.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex03.dir/Bureaucrat.cpp.o -c /home/qli/CLionProjects/CPP/module05/ex03/Bureaucrat.cpp

CMakeFiles/ex03.dir/Bureaucrat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/Bureaucrat.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module05/ex03/Bureaucrat.cpp > CMakeFiles/ex03.dir/Bureaucrat.cpp.i

CMakeFiles/ex03.dir/Bureaucrat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/Bureaucrat.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module05/ex03/Bureaucrat.cpp -o CMakeFiles/ex03.dir/Bureaucrat.cpp.s

CMakeFiles/ex03.dir/Form.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/Form.cpp.o: ../Form.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module05/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex03.dir/Form.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex03.dir/Form.cpp.o -c /home/qli/CLionProjects/CPP/module05/ex03/Form.cpp

CMakeFiles/ex03.dir/Form.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/Form.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module05/ex03/Form.cpp > CMakeFiles/ex03.dir/Form.cpp.i

CMakeFiles/ex03.dir/Form.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/Form.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module05/ex03/Form.cpp -o CMakeFiles/ex03.dir/Form.cpp.s

CMakeFiles/ex03.dir/ShrubberyCreationForm.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/ShrubberyCreationForm.cpp.o: ../ShrubberyCreationForm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module05/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex03.dir/ShrubberyCreationForm.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex03.dir/ShrubberyCreationForm.cpp.o -c /home/qli/CLionProjects/CPP/module05/ex03/ShrubberyCreationForm.cpp

CMakeFiles/ex03.dir/ShrubberyCreationForm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/ShrubberyCreationForm.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module05/ex03/ShrubberyCreationForm.cpp > CMakeFiles/ex03.dir/ShrubberyCreationForm.cpp.i

CMakeFiles/ex03.dir/ShrubberyCreationForm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/ShrubberyCreationForm.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module05/ex03/ShrubberyCreationForm.cpp -o CMakeFiles/ex03.dir/ShrubberyCreationForm.cpp.s

CMakeFiles/ex03.dir/PresidentialPardonForm.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/PresidentialPardonForm.cpp.o: ../PresidentialPardonForm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module05/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ex03.dir/PresidentialPardonForm.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex03.dir/PresidentialPardonForm.cpp.o -c /home/qli/CLionProjects/CPP/module05/ex03/PresidentialPardonForm.cpp

CMakeFiles/ex03.dir/PresidentialPardonForm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/PresidentialPardonForm.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module05/ex03/PresidentialPardonForm.cpp > CMakeFiles/ex03.dir/PresidentialPardonForm.cpp.i

CMakeFiles/ex03.dir/PresidentialPardonForm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/PresidentialPardonForm.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module05/ex03/PresidentialPardonForm.cpp -o CMakeFiles/ex03.dir/PresidentialPardonForm.cpp.s

CMakeFiles/ex03.dir/Intern.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/Intern.cpp.o: ../Intern.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qli/CLionProjects/CPP/module05/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ex03.dir/Intern.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex03.dir/Intern.cpp.o -c /home/qli/CLionProjects/CPP/module05/ex03/Intern.cpp

CMakeFiles/ex03.dir/Intern.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/Intern.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qli/CLionProjects/CPP/module05/ex03/Intern.cpp > CMakeFiles/ex03.dir/Intern.cpp.i

CMakeFiles/ex03.dir/Intern.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/Intern.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qli/CLionProjects/CPP/module05/ex03/Intern.cpp -o CMakeFiles/ex03.dir/Intern.cpp.s

# Object files for target ex03
ex03_OBJECTS = \
"CMakeFiles/ex03.dir/main.cpp.o" \
"CMakeFiles/ex03.dir/Bureaucrat.cpp.o" \
"CMakeFiles/ex03.dir/Form.cpp.o" \
"CMakeFiles/ex03.dir/ShrubberyCreationForm.cpp.o" \
"CMakeFiles/ex03.dir/PresidentialPardonForm.cpp.o" \
"CMakeFiles/ex03.dir/Intern.cpp.o"

# External object files for target ex03
ex03_EXTERNAL_OBJECTS =

ex03: CMakeFiles/ex03.dir/main.cpp.o
ex03: CMakeFiles/ex03.dir/Bureaucrat.cpp.o
ex03: CMakeFiles/ex03.dir/Form.cpp.o
ex03: CMakeFiles/ex03.dir/ShrubberyCreationForm.cpp.o
ex03: CMakeFiles/ex03.dir/PresidentialPardonForm.cpp.o
ex03: CMakeFiles/ex03.dir/Intern.cpp.o
ex03: CMakeFiles/ex03.dir/build.make
ex03: CMakeFiles/ex03.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/qli/CLionProjects/CPP/module05/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable ex03"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex03.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex03.dir/build: ex03

.PHONY : CMakeFiles/ex03.dir/build

CMakeFiles/ex03.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex03.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex03.dir/clean

CMakeFiles/ex03.dir/depend:
	cd /home/qli/CLionProjects/CPP/module05/ex03/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/qli/CLionProjects/CPP/module05/ex03 /home/qli/CLionProjects/CPP/module05/ex03 /home/qli/CLionProjects/CPP/module05/ex03/cmake-build-debug /home/qli/CLionProjects/CPP/module05/ex03/cmake-build-debug /home/qli/CLionProjects/CPP/module05/ex03/cmake-build-debug/CMakeFiles/ex03.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex03.dir/depend

