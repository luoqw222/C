# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/linnux/Downloads/clion-2019.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/linnux/Downloads/clion-2019.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/linnux/C/CPrimerPlus/4.8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/linnux/C/CPrimerPlus/4.8/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/4_8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/4_8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/4_8.dir/flags.make

CMakeFiles/4_8.dir/main.c.o: CMakeFiles/4_8.dir/flags.make
CMakeFiles/4_8.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/linnux/C/CPrimerPlus/4.8/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/4_8.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/4_8.dir/main.c.o   -c /home/linnux/C/CPrimerPlus/4.8/main.c

CMakeFiles/4_8.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/4_8.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/linnux/C/CPrimerPlus/4.8/main.c > CMakeFiles/4_8.dir/main.c.i

CMakeFiles/4_8.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/4_8.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/linnux/C/CPrimerPlus/4.8/main.c -o CMakeFiles/4_8.dir/main.c.s

# Object files for target 4_8
4_8_OBJECTS = \
"CMakeFiles/4_8.dir/main.c.o"

# External object files for target 4_8
4_8_EXTERNAL_OBJECTS =

4_8: CMakeFiles/4_8.dir/main.c.o
4_8: CMakeFiles/4_8.dir/build.make
4_8: CMakeFiles/4_8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/linnux/C/CPrimerPlus/4.8/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 4_8"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/4_8.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/4_8.dir/build: 4_8

.PHONY : CMakeFiles/4_8.dir/build

CMakeFiles/4_8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/4_8.dir/cmake_clean.cmake
.PHONY : CMakeFiles/4_8.dir/clean

CMakeFiles/4_8.dir/depend:
	cd /home/linnux/C/CPrimerPlus/4.8/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/linnux/C/CPrimerPlus/4.8 /home/linnux/C/CPrimerPlus/4.8 /home/linnux/C/CPrimerPlus/4.8/cmake-build-debug /home/linnux/C/CPrimerPlus/4.8/cmake-build-debug /home/linnux/C/CPrimerPlus/4.8/cmake-build-debug/CMakeFiles/4_8.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/4_8.dir/depend

