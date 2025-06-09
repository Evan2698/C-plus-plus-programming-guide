cmake_minimum_required(VERSION 3.28.3)
project (example09)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 -fno-elide-constructors")
add_executable(example09 main.cpp)
