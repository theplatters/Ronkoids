cmake_minimum_required(VERSION 3.16)
project(Ronkoids)

set(CMAKE_CXX_STANDARD 20)


set(SFML_DIR "SFML/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

add_executable(Ronkoids
        src/main.cpp headers/Application.h
        src/Application.cpp
        headers/ResourceHolder.h
        headers/ResourceIdentifiers.h
        headers/pch.h
        src/pch.cpp
        src/Command.cpp
        headers/Command.h
        src/CommandQueue.cpp
        headers/CommandQueue.h
        src/States/StateStack.cpp
        headers/States/StateStack.h
        src/States/State.cpp
        headers/States/State.h
        src/Game/States/GameState.cpp
        headers/Game/States/GameState.h
        src/Game/World.cpp
        headers/Game/World.h
        src/Game/Player.cpp
        headers/Game/Player.h
        src/Game/SpaceshipWorld.cpp
        headers/Game/SpaceshipWorld.h
        src/Game/AlienWorld.cpp
        headers/Game/AlienWorld.h
        src/Entities/Entities.cpp
        headers/Entities/Entities.h
        src/Entities/SceneNode.cpp
        headers/Entities/SceneNode.h
        src/Game/States/LoadState.cpp
        headers/Game/States/LoadState.h
        headers/States/StateIdentifiers.h
        src/Entities/SpriteNode.cpp
        headers/Entities/SpriteNode.h src/Game/LeftPlayer.cpp headers/Game/LeftPlayer.h headers/Game/RightPlayer.cpp headers/Game/RightPlayer.h)

target_link_libraries(Ronkoids sfml-system sfml-window sfml-graphics sfml-network sfml-audio)

include_directories(headers)

