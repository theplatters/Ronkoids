cmake_minimum_required(VERSION 3.16)
project(Ronkoids)

set(CMAKE_CXX_STANDARD 20)


IF(WIN32)
    SET(CMAKE_FIND_LIBRARY_PREFIXES "")
    SET(CMAKE_FIND_LIBRARY_SUFFIXES ".lib" ".dll")
    find_library(LUA_LIB NAMES lua54 PATHS lib/lua REQUIRED)
ELSE()
    SET(CMAKE_FIND_LIBRARY_PREFIXES "")
    SET(CMAKE_FIND_LIBRARY_SUFFIXES ".lib" ".so")
    find_library(LUA_LIB NAMES liblua54 PATHS lib/lua REQUIRED)
ENDIF()

include_directories(headers lib/lua/include)

add_executable(Ronkoids src/main.cpp headers/Game/Application.h src/Game/Application.cpp headers/ResourceHolder.h headers/ResourceIdentifiers.h headers/pch.h src/pch.cpp src/Command.cpp headers/Command.h src/CommandQueue.cpp headers/CommandQueue.h src/States/StateStack.cpp headers/States/StateStack.h src/States/State.cpp headers/States/State.h src/Game/States/GameState.cpp headers/Game/States/GameState.h src/Game/World.cpp headers/Game/World.h src/Game/Player.cpp headers/Game/Player.h src/Game/SpaceshipWorld.cpp headers/Game/SpaceshipWorld.h src/Game/AlienWorld.cpp headers/Game/AlienWorld.h src/Entities/Entities.cpp headers/Entities/Entities.h src/Entities/SceneNode.cpp headers/Entities/SceneNode.h src/Game/States/LoadState.cpp headers/Game/States/LoadState.h headers/States/StateIdentifiers.h src/Entities/SpriteNode.cpp headers/Entities/SpriteNode.h src/Game/LeftPlayer.cpp headers/Game/LeftPlayer.h src/Game/RightPlayer.cpp headers/Game/RightPlayer.h src/Lua/LuaWrapper.cpp headers/Lua/LuaWrapper.h headers/Lua/LuaContext.h src/States/StateIdentifiers.cpp src/States/StateLoader.cpp src/States/StateLoader.h)

if(WIN32)
    set(SFML_DIR lib/SFML/lib/cmake/SFML)
endif()

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
target_link_libraries(Ronkoids sfml-system sfml-window sfml-graphics sfml-network sfml-audio ${LUA_LIB})


