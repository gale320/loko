file(GLOB SRC ./*.cc)
add_library(lokocore SHARED ${SRC})
target_link_libraries(lokocore lokoutils lokobook ${Glog_LIBS}  ${gflags_LIBS})
