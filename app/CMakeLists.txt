file(GLOB SRC ./*.cc)
add_executable(loko  ${SRC})

target_link_libraries(loko lokocore lokoutils lokobook gflags glog)