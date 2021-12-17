file(GLOB SRC ./*.cc)
add_library(lokoutils SHARED ${SRC})
target_link_libraries(lokoutils ${Glog_LIBS}  ${gflags_LIBS})