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
CMAKE_COMMAND = /cygdrive/c/Users/rober/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/rober/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/rober/OneDrive/Documents/Skoli/Taekniskolinn/2019 Vor/FORR3CG05DU/Lokaverkefni/FrontDesk"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/rober/OneDrive/Documents/Skoli/Taekniskolinn/2019 Vor/FORR3CG05DU/Lokaverkefni/FrontDesk/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/FrontDesk.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FrontDesk.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FrontDesk.dir/flags.make

CMakeFiles/FrontDesk.dir/main.cpp.o: CMakeFiles/FrontDesk.dir/flags.make
CMakeFiles/FrontDesk.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/rober/OneDrive/Documents/Skoli/Taekniskolinn/2019 Vor/FORR3CG05DU/Lokaverkefni/FrontDesk/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FrontDesk.dir/main.cpp.o"
	C:/cygwin64/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FrontDesk.dir/main.cpp.o -c "/cygdrive/c/Users/rober/OneDrive/Documents/Skoli/Taekniskolinn/2019 Vor/FORR3CG05DU/Lokaverkefni/FrontDesk/main.cpp"

CMakeFiles/FrontDesk.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FrontDesk.dir/main.cpp.i"
	C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/rober/OneDrive/Documents/Skoli/Taekniskolinn/2019 Vor/FORR3CG05DU/Lokaverkefni/FrontDesk/main.cpp" > CMakeFiles/FrontDesk.dir/main.cpp.i

CMakeFiles/FrontDesk.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FrontDesk.dir/main.cpp.s"
	C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/rober/OneDrive/Documents/Skoli/Taekniskolinn/2019 Vor/FORR3CG05DU/Lokaverkefni/FrontDesk/main.cpp" -o CMakeFiles/FrontDesk.dir/main.cpp.s

# Object files for target FrontDesk
FrontDesk_OBJECTS = \
"CMakeFiles/FrontDesk.dir/main.cpp.o"

# External object files for target FrontDesk
FrontDesk_EXTERNAL_OBJECTS =

FrontDesk.exe: CMakeFiles/FrontDesk.dir/main.cpp.o
FrontDesk.exe: CMakeFiles/FrontDesk.dir/build.make
FrontDesk.exe: CMakeFiles/FrontDesk.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/rober/OneDrive/Documents/Skoli/Taekniskolinn/2019 Vor/FORR3CG05DU/Lokaverkefni/FrontDesk/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FrontDesk.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FrontDesk.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FrontDesk.dir/build: FrontDesk.exe

.PHONY : CMakeFiles/FrontDesk.dir/build

CMakeFiles/FrontDesk.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FrontDesk.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FrontDesk.dir/clean

CMakeFiles/FrontDesk.dir/depend:
	cd "/cygdrive/c/Users/rober/OneDrive/Documents/Skoli/Taekniskolinn/2019 Vor/FORR3CG05DU/Lokaverkefni/FrontDesk/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/rober/OneDrive/Documents/Skoli/Taekniskolinn/2019 Vor/FORR3CG05DU/Lokaverkefni/FrontDesk" "/cygdrive/c/Users/rober/OneDrive/Documents/Skoli/Taekniskolinn/2019 Vor/FORR3CG05DU/Lokaverkefni/FrontDesk" "/cygdrive/c/Users/rober/OneDrive/Documents/Skoli/Taekniskolinn/2019 Vor/FORR3CG05DU/Lokaverkefni/FrontDesk/cmake-build-debug" "/cygdrive/c/Users/rober/OneDrive/Documents/Skoli/Taekniskolinn/2019 Vor/FORR3CG05DU/Lokaverkefni/FrontDesk/cmake-build-debug" "/cygdrive/c/Users/rober/OneDrive/Documents/Skoli/Taekniskolinn/2019 Vor/FORR3CG05DU/Lokaverkefni/FrontDesk/cmake-build-debug/CMakeFiles/FrontDesk.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/FrontDesk.dir/depend

