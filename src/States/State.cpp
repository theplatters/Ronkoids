//
// Created by Franz on 21.12.2021.
//

#include "States/State.h"

bool State::update(sf::Time dt) {
    return false;
}




State::State(StateStack &stateStack, const State::Context &context) : stateStack(stateStack), context(context) {}

State::Context::Context(sf::RenderWindow &window, TextureHolder &textures, FontHolder &fonts) : window(&window),
                                                                                                textures(&textures),
                                                                                                fonts(&fonts) {

}
