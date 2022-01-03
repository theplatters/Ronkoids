//
// Created by Franz on 03.01.2022.
//

#include "Game/AlienWorld.h"

AlienWorld::AlienWorld(sf::RenderWindow &window, TextureHolder &textureHolder, FontHolder &fontHolder,
                       CommandQueue &commands) : World(window, textureHolder, fontHolder, commands) {
    worldView.setViewport(sf::FloatRect(0.f, 0.f, 0.5f, 1.f));
}

void AlienWorld::update() {

}

void AlienWorld::draw() {

}

