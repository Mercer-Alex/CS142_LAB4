# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\amerc\Documents\CS Projects\CS142_LAB4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\amerc\Documents\CS Projects\CS142_LAB4\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/MultipathAdventure.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/MultipathAdventure.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MultipathAdventure.dir/flags.make

CMakeFiles/MultipathAdventure.dir/main.cpp.obj: CMakeFiles/MultipathAdventure.dir/flags.make
CMakeFiles/MultipathAdventure.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\amerc\Documents\CS Projects\CS142_LAB4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MultipathAdventure.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MultipathAdventure.dir\main.cpp.obj -c "C:\Users\amerc\Documents\CS Projects\CS142_LAB4\main.cpp"

CMakeFiles/MultipathAdventure.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MultipathAdventure.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\amerc\Documents\CS Projects\CS142_LAB4\main.cpp" > CMakeFiles\MultipathAdventure.dir\main.cpp.i

CMakeFiles/MultipathAdventure.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MultipathAdventure.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\amerc\Documents\CS Projects\CS142_LAB4\main.cpp" -o CMakeFiles\MultipathAdventure.dir\main.cpp.s

# Object files for target MultipathAdventure
MultipathAdventure_OBJECTS = \
"CMakeFiles/MultipathAdventure.dir/main.cpp.obj"

# External object files for target MultipathAdventure
MultipathAdventure_EXTERNAL_OBJECTS =

MultipathAdventure.exe: CMakeFiles/MultipathAdventure.dir/main.cpp.obj
MultipathAdventure.exe: CMakeFiles/MultipathAdventure.dir/build.make
MultipathAdventure.exe: CMakeFiles/MultipathAdventure.dir/linklibs.rsp
MultipathAdventure.exe: CMakeFiles/MultipathAdventure.dir/objects1.rsp
MultipathAdventure.exe: CMakeFiles/MultipathAdventure.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\amerc\Documents\CS Projects\CS142_LAB4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MultipathAdventure.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MultipathAdventure.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MultipathAdventure.dir/build: MultipathAdventure.exe
.PHONY : CMakeFiles/MultipathAdventure.dir/build

CMakeFiles/MultipathAdventure.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MultipathAdventure.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MultipathAdventure.dir/clean

CMakeFiles/MultipathAdventure.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\amerc\Documents\CS Projects\CS142_LAB4" "C:\Users\amerc\Documents\CS Projects\CS142_LAB4" "C:\Users\amerc\Documents\CS Projects\CS142_LAB4\cmake-build-debug" "C:\Users\amerc\Documents\CS Projects\CS142_LAB4\cmake-build-debug" "C:\Users\amerc\Documents\CS Projects\CS142_LAB4\cmake-build-debug\CMakeFiles\MultipathAdventure.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/MultipathAdventure.dir/depend

