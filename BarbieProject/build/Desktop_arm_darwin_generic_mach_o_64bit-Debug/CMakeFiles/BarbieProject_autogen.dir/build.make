# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/MacBookPro/Documents/pro/barbie/BarbieProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/MacBookPro/Documents/pro/barbie/BarbieProject/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug

# Utility rule file for BarbieProject_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/BarbieProject_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/BarbieProject_autogen.dir/progress.make

CMakeFiles/BarbieProject_autogen: BarbieProject_autogen/timestamp

BarbieProject_autogen/timestamp: /opt/homebrew/share/qt/libexec/moc
BarbieProject_autogen/timestamp: /opt/homebrew/share/qt/libexec/uic
BarbieProject_autogen/timestamp: CMakeFiles/BarbieProject_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/MacBookPro/Documents/pro/barbie/BarbieProject/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target BarbieProject"
	/opt/homebrew/Cellar/cmake/3.29.3/bin/cmake -E cmake_autogen /Users/MacBookPro/Documents/pro/barbie/BarbieProject/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles/BarbieProject_autogen.dir/AutogenInfo.json Debug
	/opt/homebrew/Cellar/cmake/3.29.3/bin/cmake -E touch /Users/MacBookPro/Documents/pro/barbie/BarbieProject/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/BarbieProject_autogen/timestamp

BarbieProject_autogen: BarbieProject_autogen/timestamp
BarbieProject_autogen: CMakeFiles/BarbieProject_autogen
BarbieProject_autogen: CMakeFiles/BarbieProject_autogen.dir/build.make
.PHONY : BarbieProject_autogen

# Rule to build all files generated by this target.
CMakeFiles/BarbieProject_autogen.dir/build: BarbieProject_autogen
.PHONY : CMakeFiles/BarbieProject_autogen.dir/build

CMakeFiles/BarbieProject_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BarbieProject_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BarbieProject_autogen.dir/clean

CMakeFiles/BarbieProject_autogen.dir/depend:
	cd /Users/MacBookPro/Documents/pro/barbie/BarbieProject/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/MacBookPro/Documents/pro/barbie/BarbieProject /Users/MacBookPro/Documents/pro/barbie/BarbieProject /Users/MacBookPro/Documents/pro/barbie/BarbieProject/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug /Users/MacBookPro/Documents/pro/barbie/BarbieProject/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug /Users/MacBookPro/Documents/pro/barbie/BarbieProject/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles/BarbieProject_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/BarbieProject_autogen.dir/depend

