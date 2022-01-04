//
// Created by Franz on 04.01.2022.
//

#ifndef RONKOIDS_LOADSTATE_H
#define RONKOIDS_LOADSTATE_H


#include "State.h"

class LoadState : public State{
private:
    TextureHolder& textureHolder;

    void loadTextures();
public:
    LoadState(StateStack &stateStack, const Context &context);

    void draw() override;

    bool update() override;

    bool handleEvent(const sf::Event &event) override;
};


#endif //RONKOIDS_LOADSTATE_H
