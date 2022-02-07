project(TestQt)

cmake_minimum_required(VERSION 3.6)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_library(mymath SHARED MyMath.cpp)

add_executable(test main.cpp)
target_link_libraries(test Qt::Core Qt::Widgets)
target_link_libraries(test mymath)
