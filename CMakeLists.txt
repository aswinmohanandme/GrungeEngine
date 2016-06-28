cmake_minimum_required(VERSION 3.5)
project(GrungeEngine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -framework OpenGL")

set(SOURCE_FILES  src/graphics/Window.cpp src/graphics/Window.h main.cpp)

include_directories(tests/catch src/graphics)
add_executable(GrungeEngine ${SOURCE_FILES})

# Link GFLW
target_link_libraries(GrungeEngine glfw3 glew)