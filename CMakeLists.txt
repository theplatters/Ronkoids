cmake_minimum_required(VERSION 3.16)
project(Ronkoids)

set(CMAKE_CXX_STANDARD 20)


add_executable(Ronkoids src/main.cpp headers/Game.h src/Game.cpp)

set(SFML_STATIC_LIBARIES TRUE)
set(SFML_DIR /SFML-2.5.1/lib/cmake/SFML)

find_package(SFML COMPONENTS system window graphics audio REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/headers ${PROJECT_SOURCE_DIR}/src)
include_directories(/SFML-2.5.1/include /src /headers)
target_link_libraries(Ronkoids sfml-system sfml-window sfml-graphics sfml-audio)
