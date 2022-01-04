//
// Created by Franz on 03.01.2022.
//

#ifndef RONKOIDS_PLAYER_H
#define RONKOIDS_PLAYER_H

#include <Command.h>
#include "pch.h"

class Player : private sf::NonCopyable{
public:

    explicit Player();

    enum Action{
        MoveLeft,
        MoveRight,
        MoveUp,
        MoveDown,
        Fire,
        ActionCount
    };

protected:
    std::map<sf::Keyboard::Key, Action> keyBindings;
    std::map<Action, Command> actionBinding;
    virtual void initializeKeys() = 0;
    virtual void initializeActions() = 0;
};


#endif //RONKOIDS_PLAYER_H
