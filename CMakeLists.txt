cmake_minimum_required(VERSION 3.16)
project(loko CXX C)

include(cmake/option.cmake)
include(cmake/glog.cmake)
include(cmake/glog.cmake)
include(cmake/opencv.cmake)
include(cmake/boost.cmake)
include(cmake/protobuf.cmake)


include_directories( src/core src/lokocv src/lokoutils src/lokomanage src/lokoserver 
                    src/lokoprotobuf src/lokobook include)
link_directories(/usr/local/lib )

add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(test)