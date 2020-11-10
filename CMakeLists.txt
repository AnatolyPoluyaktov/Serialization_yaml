cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(laba1 LANGUAGES CXX)

add_executable(laba1 main.cpp document_generator.hpp document_generator.cpp)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_EXTENSIONS OFF)
