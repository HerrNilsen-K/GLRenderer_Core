cmake_minimum_required(VERSION 3.21)
project(GLRenderer_Core)

set(CMAKE_CXX_STANDARD 20)

add_executable(GLRenderer_Core main.cpp)

find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIRS})
link_libraries(${GLEW_INCLUDE_LIBRARIES})

include_directories(../src)
find_package(OpenGL REQUIRED)

target_link_libraries(GLRenderer_Core OpenGL::GL)
target_link_libraries(GLRenderer_Core glfw)
