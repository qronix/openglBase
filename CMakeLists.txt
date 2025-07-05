cmake_minimum_required(VERSION 3.31)
project(LearnOpenGL)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# GLFW
set(GLFW_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/external/glfw/include")
set(GLFW_LIBRARY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/external/glfw/lib")

# GLAD
add_library(glad STATIC external/glad/src/glad.c)


# Add include directories
include_directories(${GLFW_INCLUDE_DIR})
link_directories(${GLFW_LIBRARY_DIR})
target_include_directories(glad PUBLIC external/glad/include)
add_executable(LearnOpenGL main.cpp)

#Link GLFW
target_link_libraries(LearnOpenGL PRIVATE glad glfw3 opengl32 )