cmake_minimum_required(VERSION 3.16)

project(triangle)
set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME}
	src/main.cpp
)

target_link_libraries(${PROJECT_NAME} walnut)