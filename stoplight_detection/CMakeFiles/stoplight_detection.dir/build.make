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
include CMakeFiles/stoplight_detection.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stoplight_detection.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stoplight_detection.dir/flags.make

CMakeFiles/stoplight_detection.dir/main.cpp.o: CMakeFiles/stoplight_detection.dir/flags.make
CMakeFiles/stoplight_detection.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/isaac/REX-UROP/rex_practice/stoplight_detection/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stoplight_detection.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stoplight_detection.dir/main.cpp.o -c /home/isaac/REX-UROP/rex_practice/stoplight_detection/main.cpp

CMakeFiles/stoplight_detection.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stoplight_detection.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/isaac/REX-UROP/rex_practice/stoplight_detection/main.cpp > CMakeFiles/stoplight_detection.dir/main.cpp.i

CMakeFiles/stoplight_detection.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stoplight_detection.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/isaac/REX-UROP/rex_practice/stoplight_detection/main.cpp -o CMakeFiles/stoplight_detection.dir/main.cpp.s

CMakeFiles/stoplight_detection.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/stoplight_detection.dir/main.cpp.o.requires

CMakeFiles/stoplight_detection.dir/main.cpp.o.provides: CMakeFiles/stoplight_detection.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/stoplight_detection.dir/build.make CMakeFiles/stoplight_detection.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/stoplight_detection.dir/main.cpp.o.provides

CMakeFiles/stoplight_detection.dir/main.cpp.o.provides.build: CMakeFiles/stoplight_detection.dir/main.cpp.o


CMakeFiles/stoplight_detection.dir/color_filter.cpp.o: CMakeFiles/stoplight_detection.dir/flags.make
CMakeFiles/stoplight_detection.dir/color_filter.cpp.o: color_filter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/isaac/REX-UROP/rex_practice/stoplight_detection/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/stoplight_detection.dir/color_filter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stoplight_detection.dir/color_filter.cpp.o -c /home/isaac/REX-UROP/rex_practice/stoplight_detection/color_filter.cpp

CMakeFiles/stoplight_detection.dir/color_filter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stoplight_detection.dir/color_filter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/isaac/REX-UROP/rex_practice/stoplight_detection/color_filter.cpp > CMakeFiles/stoplight_detection.dir/color_filter.cpp.i

CMakeFiles/stoplight_detection.dir/color_filter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stoplight_detection.dir/color_filter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/isaac/REX-UROP/rex_practice/stoplight_detection/color_filter.cpp -o CMakeFiles/stoplight_detection.dir/color_filter.cpp.s

CMakeFiles/stoplight_detection.dir/color_filter.cpp.o.requires:

.PHONY : CMakeFiles/stoplight_detection.dir/color_filter.cpp.o.requires

CMakeFiles/stoplight_detection.dir/color_filter.cpp.o.provides: CMakeFiles/stoplight_detection.dir/color_filter.cpp.o.requires
	$(MAKE) -f CMakeFiles/stoplight_detection.dir/build.make CMakeFiles/stoplight_detection.dir/color_filter.cpp.o.provides.build
.PHONY : CMakeFiles/stoplight_detection.dir/color_filter.cpp.o.provides

CMakeFiles/stoplight_detection.dir/color_filter.cpp.o.provides.build: CMakeFiles/stoplight_detection.dir/color_filter.cpp.o


CMakeFiles/stoplight_detection.dir/findObject.cpp.o: CMakeFiles/stoplight_detection.dir/flags.make
CMakeFiles/stoplight_detection.dir/findObject.cpp.o: findObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/isaac/REX-UROP/rex_practice/stoplight_detection/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/stoplight_detection.dir/findObject.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stoplight_detection.dir/findObject.cpp.o -c /home/isaac/REX-UROP/rex_practice/stoplight_detection/findObject.cpp

CMakeFiles/stoplight_detection.dir/findObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stoplight_detection.dir/findObject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/isaac/REX-UROP/rex_practice/stoplight_detection/findObject.cpp > CMakeFiles/stoplight_detection.dir/findObject.cpp.i

CMakeFiles/stoplight_detection.dir/findObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stoplight_detection.dir/findObject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/isaac/REX-UROP/rex_practice/stoplight_detection/findObject.cpp -o CMakeFiles/stoplight_detection.dir/findObject.cpp.s

CMakeFiles/stoplight_detection.dir/findObject.cpp.o.requires:

.PHONY : CMakeFiles/stoplight_detection.dir/findObject.cpp.o.requires

CMakeFiles/stoplight_detection.dir/findObject.cpp.o.provides: CMakeFiles/stoplight_detection.dir/findObject.cpp.o.requires
	$(MAKE) -f CMakeFiles/stoplight_detection.dir/build.make CMakeFiles/stoplight_detection.dir/findObject.cpp.o.provides.build
.PHONY : CMakeFiles/stoplight_detection.dir/findObject.cpp.o.provides

CMakeFiles/stoplight_detection.dir/findObject.cpp.o.provides.build: CMakeFiles/stoplight_detection.dir/findObject.cpp.o


# Object files for target stoplight_detection
stoplight_detection_OBJECTS = \
"CMakeFiles/stoplight_detection.dir/main.cpp.o" \
"CMakeFiles/stoplight_detection.dir/color_filter.cpp.o" \
"CMakeFiles/stoplight_detection.dir/findObject.cpp.o"

# External object files for target stoplight_detection
stoplight_detection_EXTERNAL_OBJECTS =

stoplight_detection: CMakeFiles/stoplight_detection.dir/main.cpp.o
stoplight_detection: CMakeFiles/stoplight_detection.dir/color_filter.cpp.o
stoplight_detection: CMakeFiles/stoplight_detection.dir/findObject.cpp.o
stoplight_detection: CMakeFiles/stoplight_detection.dir/build.make
stoplight_detection: /usr/local/lib/libopencv_stitching.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_superres.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_videostab.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_aruco.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_bgsegm.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_bioinspired.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_ccalib.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_dnn_objdetect.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_dpm.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_face.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_freetype.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_fuzzy.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_hfs.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_img_hash.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_line_descriptor.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_optflow.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_reg.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_rgbd.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_saliency.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_stereo.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_structured_light.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_surface_matching.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_tracking.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_xfeatures2d.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_ximgproc.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_xobjdetect.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_xphoto.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_shape.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_photo.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_datasets.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_plot.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_text.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_dnn.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_ml.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_video.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_calib3d.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_features2d.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_highgui.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_videoio.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_phase_unwrapping.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_flann.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_imgcodecs.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_objdetect.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_imgproc.so.3.4.1
stoplight_detection: /usr/local/lib/libopencv_core.so.3.4.1
stoplight_detection: CMakeFiles/stoplight_detection.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/isaac/REX-UROP/rex_practice/stoplight_detection/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable stoplight_detection"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stoplight_detection.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stoplight_detection.dir/build: stoplight_detection

.PHONY : CMakeFiles/stoplight_detection.dir/build

CMakeFiles/stoplight_detection.dir/requires: CMakeFiles/stoplight_detection.dir/main.cpp.o.requires
CMakeFiles/stoplight_detection.dir/requires: CMakeFiles/stoplight_detection.dir/color_filter.cpp.o.requires
CMakeFiles/stoplight_detection.dir/requires: CMakeFiles/stoplight_detection.dir/findObject.cpp.o.requires

.PHONY : CMakeFiles/stoplight_detection.dir/requires

CMakeFiles/stoplight_detection.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stoplight_detection.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stoplight_detection.dir/clean

CMakeFiles/stoplight_detection.dir/depend:
	cd /home/isaac/REX-UROP/rex_practice/stoplight_detection && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/isaac/REX-UROP/rex_practice/stoplight_detection /home/isaac/REX-UROP/rex_practice/stoplight_detection /home/isaac/REX-UROP/rex_practice/stoplight_detection /home/isaac/REX-UROP/rex_practice/stoplight_detection /home/isaac/REX-UROP/rex_practice/stoplight_detection/CMakeFiles/stoplight_detection.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stoplight_detection.dir/depend

