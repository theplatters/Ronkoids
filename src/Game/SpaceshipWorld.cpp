//
// Created by Franz on 03.01.2022.
//

#include "Game/SpaceshipWorld.h"

SpaceshipWorld::SpaceshipWorld(sf::RenderWindow &window, TextureHolder &textureHolder, FontHolder &fontHolder,
                               CommandQueue &commands) : World(window, textureHolder, fontHolder, commands) {
    worldView.setViewport(sf::FloatRect(0.5f, 0.f, 0.5f, 1.f));
}

void SpaceshipWorld::update() {

}

void SpaceshipWorld::draw() {

}

