//
// Created by Franz on 04.01.2022.
//

#include "Game/States/LoadState.h"

LoadState::LoadState(StateStack &stateStack, const State::Context &context) :
        State(stateStack, context),
        textureHolder(*context.textures) {

        loadTextures();
        requestStackPop();
        requestStackPush(States::Game);
}

void LoadState::loadTextures() {
    textureHolder.load(Textures::PlayerSpaceship, "..//assets//spaceship1.png");
    textureHolder.load(Textures::BackgroundSpace, "..//assets//space.png");
    textureHolder.load(Textures::BackgroundShip, "..//assets//spaceshipbg.png");

}

void LoadState::draw() {

}

bool LoadState::update() {
    return false;
}

bool LoadState::handleEvent(const sf::Event &event) {
    return false;
}
