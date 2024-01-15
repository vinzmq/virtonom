cmake_minimum_required(VERSION 3.20...3.28)


set(CMAKE_CXX_STANDARD 20)
project( Test LANGUAGES CXX)




add_subdirectory(Virtolib)
add_subdirectory(googletest)
add_subdirectory(Virtolib/ut)
add_executable(test main.cpp)

target_link_libraries(test virto)

