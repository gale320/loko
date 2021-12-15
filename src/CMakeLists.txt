file(GLOB SRC ./*.cc)
add_library(lokolib SHARED ${SRC})
target_link_libraries(lokolib ${Glog_LIBS}  ${gflags_LIBS})
