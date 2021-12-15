file(GLOB SRC ./*.cc)
add_library(lokocv SHARED ${SRC})
target_link_libraries(lokocv ${Glog_LIBS}  ${gflags_LIBS})