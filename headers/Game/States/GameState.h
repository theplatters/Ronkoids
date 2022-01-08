//
// Created by Franz on 21.12.2021.
//

#ifndef RONKOIDS_GAMESTATE_H
#define RONKOIDS_GAMESTATE_H


#include <CommandQueue.h>
#include <Game/SpaceshipWorld.h>
#include <Game/AlienWorld.h>
#include <Game/LeftPlayer.h>
#include <Game/RightPlayer.h>
#include "States/State.h"
#include "Game/World.h"
#include "Game/Player.h"

class GameState : public State{
private:
    AlienWorld alienWorld;
    SpaceshipWorld spaceshipWorld;
    CommandQueue commands;
    TextureHolder& textures;
    LeftPlayer leftPlayer;
    RightPlayer rightPlayer;
    //TODO add players
public:
    GameState(StateStack &stateStack, const Context &context);

    void draw() override;

    bool update() override;

    bool handleEvent(const sf::Event &event) override;
};


#endif //RONKOIDS_GAMESTATE_H
