# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /cygdrive/c/Users/Admin/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Admin/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/Admin/Documents/GitHub/ACM_pracstise/Day1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/Admin/Documents/GitHub/ACM_pracstise/Day1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Day1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Day1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Day1.dir/flags.make

CMakeFiles/Day1.dir/L._New_Gam.cpp.o: CMakeFiles/Day1.dir/flags.make
CMakeFiles/Day1.dir/L._New_Gam.cpp.o: ../L.\ New\ Gam.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Admin/Documents/GitHub/ACM_pracstise/Day1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Day1.dir/L._New_Gam.cpp.o"
	C:/cygwin64/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Day1.dir/L._New_Gam.cpp.o -c "/cygdrive/c/Users/Admin/Documents/GitHub/ACM_pracstise/Day1/L. New Gam.cpp"

CMakeFiles/Day1.dir/L._New_Gam.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Day1.dir/L._New_Gam.cpp.i"
	C:/cygwin64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/Admin/Documents/GitHub/ACM_pracstise/Day1/L. New Gam.cpp" > CMakeFiles/Day1.dir/L._New_Gam.cpp.i

CMakeFiles/Day1.dir/L._New_Gam.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Day1.dir/L._New_Gam.cpp.s"
	C:/cygwin64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/Admin/Documents/GitHub/ACM_pracstise/Day1/L. New Gam.cpp" -o CMakeFiles/Day1.dir/L._New_Gam.cpp.s

CMakeFiles/Day1.dir/L._New_Gam.cpp.o.requires:

.PHONY : CMakeFiles/Day1.dir/L._New_Gam.cpp.o.requires

CMakeFiles/Day1.dir/L._New_Gam.cpp.o.provides: CMakeFiles/Day1.dir/L._New_Gam.cpp.o.requires
	$(MAKE) -f CMakeFiles/Day1.dir/build.make CMakeFiles/Day1.dir/L._New_Gam.cpp.o.provides.build
.PHONY : CMakeFiles/Day1.dir/L._New_Gam.cpp.o.provides

CMakeFiles/Day1.dir/L._New_Gam.cpp.o.provides.build: CMakeFiles/Day1.dir/L._New_Gam.cpp.o


# Object files for target Day1
Day1_OBJECTS = \
"CMakeFiles/Day1.dir/L._New_Gam.cpp.o"

# External object files for target Day1
Day1_EXTERNAL_OBJECTS =

Day1.exe: CMakeFiles/Day1.dir/L._New_Gam.cpp.o
Day1.exe: CMakeFiles/Day1.dir/build.make
Day1.exe: CMakeFiles/Day1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Admin/Documents/GitHub/ACM_pracstise/Day1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Day1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Day1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Day1.dir/build: Day1.exe

.PHONY : CMakeFiles/Day1.dir/build

CMakeFiles/Day1.dir/requires: CMakeFiles/Day1.dir/L._New_Gam.cpp.o.requires

.PHONY : CMakeFiles/Day1.dir/requires

CMakeFiles/Day1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Day1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Day1.dir/clean

CMakeFiles/Day1.dir/depend:
	cd /cygdrive/c/Users/Admin/Documents/GitHub/ACM_pracstise/Day1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Admin/Documents/GitHub/ACM_pracstise/Day1 /cygdrive/c/Users/Admin/Documents/GitHub/ACM_pracstise/Day1 /cygdrive/c/Users/Admin/Documents/GitHub/ACM_pracstise/Day1/cmake-build-debug /cygdrive/c/Users/Admin/Documents/GitHub/ACM_pracstise/Day1/cmake-build-debug /cygdrive/c/Users/Admin/Documents/GitHub/ACM_pracstise/Day1/cmake-build-debug/CMakeFiles/Day1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Day1.dir/depend

