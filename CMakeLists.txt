cmake_minimum_required(VERSION 3.16)
project(Ronkoids)

set(CMAKE_CXX_STANDARD 20)


add_executable(Ronkoids src/main.cpp headers/Application.h src/Application.cpp headers/ResourceHolder.h headers/ResourceIdentifiers.h headers/pch.h src/pch.cpp src/Command.cpp headers/Command.h src/CommandQueue.cpp headers/CommandQueue.h src/States/StateStack.cpp headers/States/StateStack.h src/States/State.cpp headers/States/State.h)

include_directories(headers c:/SFML/include)

target_precompile_headers(Ronkoids PUBLIC headers/pch.h)
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
set(SFML_ROOT c:/SFML)
find_package(SFML REQUIRED system window graphics)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(Ronkoids ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif()

if(WIN32)
    file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})

    file(GLOB BINARY_DEP_DLLS "${SFML_INCLUDE_DIR}/../bin/*.dll")
    file(COPY ${BINARY_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
    file(GLOB MINGW_DEP_DLLS "C:/mingw64/bin/*.dll")
    file(COPY ${MINGW_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
endif()
