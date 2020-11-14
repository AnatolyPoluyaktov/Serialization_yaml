cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(laba1 LANGUAGES CXX)

add_executable(laba1 main.cpp document_generator.hpp document_generator.cpp)
find_package(yaml-cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE  yaml-cpp)

find_package(PkgConfig REQUIRED)
pkg_check_modules(fyaml REQUIRED IMPORTED_TARGET libfyaml)

target_link_libraries(${PROJECT_NAME} PRIVATE PkgConfig::fyaml)


target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_EXTENSIONS OFF)
