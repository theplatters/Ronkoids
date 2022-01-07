//
// Created by Franz on 05.01.2022.
//

#include "Game/LeftPlayer.h"

void LeftPlayer::initializeKeys() {
    keyBindings[sf::Keyboard::A] = MoveLeft;
    keyBindings[sf::Keyboard::W] = MoveUp;
    keyBindings[sf::Keyboard::S] = MoveRight;
    keyBindings[sf::Keyboard::D] = MoveDown;
    keyBindings[sf::Keyboard::Space] = Fire;
}

void LeftPlayer::initializeActions() {

}
