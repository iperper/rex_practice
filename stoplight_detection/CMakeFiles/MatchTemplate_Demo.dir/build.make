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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/isaac/REX-UROP/rex_practice/stoplight_detection

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/isaac/REX-UROP/rex_practice/stoplight_detection

# Include any dependencies generated for this target.
include CMakeFiles/MatchTemplate_Demo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MatchTemplate_Demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MatchTemplate_Demo.dir/flags.make

CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o: CMakeFiles/MatchTemplate_Demo.dir/flags.make
CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o: MatchTemplate_Demo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/isaac/REX-UROP/rex_practice/stoplight_detection/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o -c /home/isaac/REX-UROP/rex_practice/stoplight_detection/MatchTemplate_Demo.cpp

CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/isaac/REX-UROP/rex_practice/stoplight_detection/MatchTemplate_Demo.cpp > CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.i

CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/isaac/REX-UROP/rex_practice/stoplight_detection/MatchTemplate_Demo.cpp -o CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.s

CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o.requires:

.PHONY : CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o.requires

CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o.provides: CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o.requires
	$(MAKE) -f CMakeFiles/MatchTemplate_Demo.dir/build.make CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o.provides.build
.PHONY : CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o.provides

CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o.provides.build: CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o


# Object files for target MatchTemplate_Demo
MatchTemplate_Demo_OBJECTS = \
"CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o"

# External object files for target MatchTemplate_Demo
MatchTemplate_Demo_EXTERNAL_OBJECTS =

MatchTemplate_Demo: CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o
MatchTemplate_Demo: CMakeFiles/MatchTemplate_Demo.dir/build.make
MatchTemplate_Demo: /usr/local/lib/libopencv_stitching.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_superres.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_videostab.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_aruco.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_bgsegm.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_bioinspired.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_ccalib.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_dnn_objdetect.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_dpm.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_face.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_freetype.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_fuzzy.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_hfs.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_img_hash.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_line_descriptor.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_optflow.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_reg.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_rgbd.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_saliency.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_stereo.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_structured_light.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_surface_matching.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_tracking.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_xfeatures2d.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_ximgproc.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_xobjdetect.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_xphoto.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_shape.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_photo.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_datasets.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_plot.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_text.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_dnn.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_ml.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_video.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_calib3d.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_features2d.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_highgui.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_videoio.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_phase_unwrapping.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_flann.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_imgcodecs.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_objdetect.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_imgproc.so.3.4.1
MatchTemplate_Demo: /usr/local/lib/libopencv_core.so.3.4.1
MatchTemplate_Demo: CMakeFiles/MatchTemplate_Demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/isaac/REX-UROP/rex_practice/stoplight_detection/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MatchTemplate_Demo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MatchTemplate_Demo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MatchTemplate_Demo.dir/build: MatchTemplate_Demo

.PHONY : CMakeFiles/MatchTemplate_Demo.dir/build

CMakeFiles/MatchTemplate_Demo.dir/requires: CMakeFiles/MatchTemplate_Demo.dir/MatchTemplate_Demo.cpp.o.requires

.PHONY : CMakeFiles/MatchTemplate_Demo.dir/requires

CMakeFiles/MatchTemplate_Demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MatchTemplate_Demo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MatchTemplate_Demo.dir/clean

CMakeFiles/MatchTemplate_Demo.dir/depend:
	cd /home/isaac/REX-UROP/rex_practice/stoplight_detection && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/isaac/REX-UROP/rex_practice/stoplight_detection /home/isaac/REX-UROP/rex_practice/stoplight_detection /home/isaac/REX-UROP/rex_practice/stoplight_detection /home/isaac/REX-UROP/rex_practice/stoplight_detection /home/isaac/REX-UROP/rex_practice/stoplight_detection/CMakeFiles/MatchTemplate_Demo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MatchTemplate_Demo.dir/depend

