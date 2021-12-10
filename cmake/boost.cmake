set(BOOST_ROOT /usr/local)
find_package(Boost COMPONENTS coroutine context atomic regex container
                      system filesystem thread  timer
                      locale date_time math_c99 chrono log_setup log
                      serialization REQUIRED)

include_directories( ${Boost_INCLUDE_DIRS} )                     

link_libraries( ${Boost_LIBRARIES} )
