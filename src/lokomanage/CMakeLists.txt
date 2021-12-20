file(GLOB SRC ./*.cc)
add_library(lokomanage SHARED ${SRC})
target_link_libraries(lokomanage lokoutils mupdf mupdf-third ${Glog_LIBS}  ${gflags_LIBS})