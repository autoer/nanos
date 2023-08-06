cmake_minimum_required(VERSION 3.25)
project(nanos)

set(CMAKE_CXX_STANDARD 11)

# CppUtest
include_directories(/opt/homebrew/Cellar/cpputest/4.0/include)
link_directories(/opt/homebrew/Cellar/cpputest/4.0/lib)

# memp module
aux_source_directory(${PROJECT_SOURCE_DIR}/src/memp SRC_MEMP)
aux_source_directory(${PROJECT_SOURCE_DIR}/unit_test/memp/ SRC_MEMP_TEST)
include_directories(${PROJECT_SOURCE_DIR}/src/memp)

add_executable(nanos main.cpp ${SRC_MEMP} ${SRC_MEMP_TEST})

target_link_libraries(nanos CppUTest CppUTestExt)
