file(GLOB SRC ./*.cc)
add_library(lokocv2qt SHARED ${SRC})
target_link_libraries(lokocv2qt ${Glog_LIBS}  ${gflags_LIBS})