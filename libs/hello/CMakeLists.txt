add_library(hello hello.cpp hello.hpp)
target_include_directories(hello PUBLIC ${CMAKE_CURRENT_LIST_DIR})
