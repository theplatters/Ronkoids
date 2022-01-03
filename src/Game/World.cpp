//
// Created by Franz on 03.01.2022.
//

#include "Game/World.h"

World::World(sf::RenderWindow &window, TextureHolder &textureHolder, FontHolder &fontHolder, CommandQueue &commands)
        : window(window), textureHolder(textureHolder), fontHolder(fontHolder), commands(commands) {}

void World::draw() {
    window.setView(worldView);
}
