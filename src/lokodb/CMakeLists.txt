file(GLOB SRC ./*.cc)
add_library(lokodb SHARED ${SRC})
target_link_libraries(lokodb lokoutils ${Glog_LIBS}  ${gflags_LIBS} sqlite3 )