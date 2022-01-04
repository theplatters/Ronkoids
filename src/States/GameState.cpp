//
// Created by Franz on 21.12.2021.
//

#include <Game/AlienWorld.h>
#include "States/GameState.h"

GameState::GameState(StateStack &stateStack, const State::Context &context) :
        State(stateStack, context), commands(),
        alienWorld(*context.window,
                   *context.textures,
                   *context.fonts, commands),
        spaceshipWorld(*context.window,
                       *context.textures,
                       *context.fonts, commands) {
}

void GameState::draw() {
    alienWorld.draw();
    spaceshipWorld.draw();
}

bool GameState::update() {
    alienWorld.update();
    spaceshipWorld.update();

    return true;
}

bool GameState::handleEvent(const sf::Event &event) {

    return true;
}
