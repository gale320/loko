find_package(gflags REQUIRED)
find_package(Glog REQUIRED)

include_directories( ${Glog_INCLUDE_DIRS} ${gflags_INCLUDE_DIRS} )
link_libraries( ${Glog_LIBS}  ${gflags_LIBS} )
