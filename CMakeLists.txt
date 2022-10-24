cmake_minimum_required(VERSION 3.12)

project(game)

file(GLOB_RECURSE SOURCES src/*.cpp src/*.h[pp])

add_subdirectory(external/raylib)

add_executable(${PROJECT_NAME} ${SOURCES})

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

target_link_directories(${PROJECT_NAME} PUBLIC lib/)

target_link_libraries(${PROJECT_NAME} raylib)

target_include_directories(${PROJECT_NAME} PUBLIC include/)
target_include_directories(${PROJECT_NAME} PUBLIC external/raylib/src/)