file(GLOB SRC ./*.cc)
add_library(lokobook SHARED ${SRC})
target_link_libraries(lokobook ${Glog_LIBS}  ${gflags_LIBS})