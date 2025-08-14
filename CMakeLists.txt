cmake_minimum_required(VERSION 3.2)

project(cp)
set(CMAKE_CXX_STANDARD 14)
#file(GLOB_RECURSE SOURCES_NAME "./src/*.cpp")  
add_executable(${PROJECT_NAME} main.cpp 
                              ./src/body/CP.cpp 
                              )
