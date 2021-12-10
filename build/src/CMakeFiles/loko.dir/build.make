# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gale/tmp/loko

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gale/tmp/loko/build

# Include any dependencies generated for this target.
include src/CMakeFiles/loko.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/loko.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/loko.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/loko.dir/flags.make

src/CMakeFiles/loko.dir/lokocore.cc.o: src/CMakeFiles/loko.dir/flags.make
src/CMakeFiles/loko.dir/lokocore.cc.o: ../src/lokocore.cc
src/CMakeFiles/loko.dir/lokocore.cc.o: src/CMakeFiles/loko.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gale/tmp/loko/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/loko.dir/lokocore.cc.o"
	cd /home/gale/tmp/loko/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/loko.dir/lokocore.cc.o -MF CMakeFiles/loko.dir/lokocore.cc.o.d -o CMakeFiles/loko.dir/lokocore.cc.o -c /home/gale/tmp/loko/src/lokocore.cc

src/CMakeFiles/loko.dir/lokocore.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/loko.dir/lokocore.cc.i"
	cd /home/gale/tmp/loko/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gale/tmp/loko/src/lokocore.cc > CMakeFiles/loko.dir/lokocore.cc.i

src/CMakeFiles/loko.dir/lokocore.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/loko.dir/lokocore.cc.s"
	cd /home/gale/tmp/loko/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gale/tmp/loko/src/lokocore.cc -o CMakeFiles/loko.dir/lokocore.cc.s

# Object files for target loko
loko_OBJECTS = \
"CMakeFiles/loko.dir/lokocore.cc.o"

# External object files for target loko
loko_EXTERNAL_OBJECTS =

lib/libloko.so: src/CMakeFiles/loko.dir/lokocore.cc.o
lib/libloko.so: src/CMakeFiles/loko.dir/build.make
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_gapi.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_stitching.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_alphamat.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_aruco.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_barcode.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_bgsegm.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_bioinspired.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_ccalib.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_dnn_objdetect.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_dnn_superres.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_dpm.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_face.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_freetype.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_fuzzy.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_hdf.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_hfs.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_img_hash.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_intensity_transform.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_line_descriptor.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_mcc.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_quality.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_rapid.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_reg.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_rgbd.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_saliency.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_sfm.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_stereo.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_structured_light.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_superres.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_surface_matching.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_tracking.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_videostab.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_viz.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_wechat_qrcode.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_xfeatures2d.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_xobjdetect.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_xphoto.so.4.5.4
lib/libloko.so: /usr/local/lib/libboost_coroutine.so.1.78.0
lib/libloko.so: /usr/local/lib/libboost_context.so.1.78.0
lib/libloko.so: /usr/local/lib/libboost_container.so.1.78.0
lib/libloko.so: /usr/local/lib/libboost_timer.so.1.78.0
lib/libloko.so: /usr/local/lib/libboost_locale.so.1.78.0
lib/libloko.so: /usr/local/lib/libboost_date_time.so.1.78.0
lib/libloko.so: /usr/local/lib/libboost_math_c99.so.1.78.0
lib/libloko.so: /usr/local/lib/libboost_log_setup.so.1.78.0
lib/libloko.so: /usr/local/lib/libboost_log.so.1.78.0
lib/libloko.so: /usr/local/lib/libboost_serialization.so.1.78.0
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_shape.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_highgui.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_datasets.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_plot.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_text.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_ml.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_phase_unwrapping.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_optflow.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_ximgproc.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_video.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_videoio.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_objdetect.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_calib3d.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_dnn.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_features2d.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_flann.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_photo.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_imgproc.so.4.5.4
lib/libloko.so: /usr/local/lib/x86_64-linux-gnu/libopencv_core.so.4.5.4
lib/libloko.so: /usr/local/lib/libboost_system.so.1.78.0
lib/libloko.so: /usr/local/lib/libboost_regex.so.1.78.0
lib/libloko.so: /usr/local/lib/libboost_filesystem.so.1.78.0
lib/libloko.so: /usr/local/lib/libboost_atomic.so.1.78.0
lib/libloko.so: /usr/local/lib/libboost_thread.so.1.78.0
lib/libloko.so: /usr/local/lib/libboost_chrono.so.1.78.0
lib/libloko.so: src/CMakeFiles/loko.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gale/tmp/loko/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../lib/libloko.so"
	cd /home/gale/tmp/loko/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/loko.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/loko.dir/build: lib/libloko.so
.PHONY : src/CMakeFiles/loko.dir/build

src/CMakeFiles/loko.dir/clean:
	cd /home/gale/tmp/loko/build/src && $(CMAKE_COMMAND) -P CMakeFiles/loko.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/loko.dir/clean

src/CMakeFiles/loko.dir/depend:
	cd /home/gale/tmp/loko/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gale/tmp/loko /home/gale/tmp/loko/src /home/gale/tmp/loko/build /home/gale/tmp/loko/build/src /home/gale/tmp/loko/build/src/CMakeFiles/loko.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/loko.dir/depend
