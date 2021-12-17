file(GLOB SRC ./*.cc)
add_library(lokobook SHARED ${SRC})
target_link_libraries(lokobook lokoutils mupdf mupdf-third ${Glog_LIBS}  ${gflags_LIBS})