//
// Created by Franz on 05.01.2022.
//

#include "RightPlayer.h"

void RightPlayer::initializeKeys() {
    keyBindings[sf::Keyboard::Left] = MoveLeft;
    keyBindings[sf::Keyboard::Up] = MoveUp;
    keyBindings[sf::Keyboard::Right] = MoveRight;
    keyBindings[sf::Keyboard::Down] = MoveDown;
    keyBindings[sf::Keyboard::Space] = Fire;
}

void RightPlayer::initializeActions() {

}
