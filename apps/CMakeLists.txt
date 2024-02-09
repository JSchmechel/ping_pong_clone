add_executable(ping_pong ping_pong.cpp)

# include_directories(${CMAKE_SOURCE_DIR}/libs/hello/)
target_link_libraries(ping_pong hello)
