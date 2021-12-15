file(GLOB SRC ./*.c )
add_executable(test01 ${SRC})

target_link_libraries(test01 mupdf mupdf-third  m pthread)