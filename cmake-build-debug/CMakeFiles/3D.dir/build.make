# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\Cpp\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Cpp\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Cpp\3D

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Cpp\3D\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/3D.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/3D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3D.dir/flags.make

CMakeFiles/3D.dir/main.cpp.obj: CMakeFiles/3D.dir/flags.make
CMakeFiles/3D.dir/main.cpp.obj: CMakeFiles/3D.dir/includes_CXX.rsp
CMakeFiles/3D.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cpp\3D\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/3D.dir/main.cpp.obj"
	E:\Cpp\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\3D.dir\main.cpp.obj -c E:\Cpp\3D\main.cpp

CMakeFiles/3D.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3D.dir/main.cpp.i"
	E:\Cpp\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Cpp\3D\main.cpp > CMakeFiles\3D.dir\main.cpp.i

CMakeFiles/3D.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3D.dir/main.cpp.s"
	E:\Cpp\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Cpp\3D\main.cpp -o CMakeFiles\3D.dir\main.cpp.s

CMakeFiles/3D.dir/Camera.cpp.obj: CMakeFiles/3D.dir/flags.make
CMakeFiles/3D.dir/Camera.cpp.obj: CMakeFiles/3D.dir/includes_CXX.rsp
CMakeFiles/3D.dir/Camera.cpp.obj: ../Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cpp\3D\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/3D.dir/Camera.cpp.obj"
	E:\Cpp\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\3D.dir\Camera.cpp.obj -c E:\Cpp\3D\Camera.cpp

CMakeFiles/3D.dir/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3D.dir/Camera.cpp.i"
	E:\Cpp\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Cpp\3D\Camera.cpp > CMakeFiles\3D.dir\Camera.cpp.i

CMakeFiles/3D.dir/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3D.dir/Camera.cpp.s"
	E:\Cpp\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Cpp\3D\Camera.cpp -o CMakeFiles\3D.dir\Camera.cpp.s

# Object files for target 3D
3D_OBJECTS = \
"CMakeFiles/3D.dir/main.cpp.obj" \
"CMakeFiles/3D.dir/Camera.cpp.obj"

# External object files for target 3D
3D_EXTERNAL_OBJECTS =

3D.exe: CMakeFiles/3D.dir/main.cpp.obj
3D.exe: CMakeFiles/3D.dir/Camera.cpp.obj
3D.exe: CMakeFiles/3D.dir/build.make
3D.exe: ../SFML/lib/libsfml-graphics-d.a
3D.exe: ../SFML/lib/libsfml-window-d.a
3D.exe: ../SFML/lib/libsfml-system-d.a
3D.exe: CMakeFiles/3D.dir/linklibs.rsp
3D.exe: CMakeFiles/3D.dir/objects1.rsp
3D.exe: CMakeFiles/3D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Cpp\3D\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 3D.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\3D.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3D.dir/build: 3D.exe

.PHONY : CMakeFiles/3D.dir/build

CMakeFiles/3D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\3D.dir\cmake_clean.cmake
.PHONY : CMakeFiles/3D.dir/clean

CMakeFiles/3D.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Cpp\3D E:\Cpp\3D E:\Cpp\3D\cmake-build-debug E:\Cpp\3D\cmake-build-debug E:\Cpp\3D\cmake-build-debug\CMakeFiles\3D.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/3D.dir/depend
