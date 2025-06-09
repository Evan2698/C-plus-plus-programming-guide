cmake_minimum_required(VERSION 3.28.3)
project (example10)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 -fno-elide-constructors")
add_executable(example10 main.cpp)
