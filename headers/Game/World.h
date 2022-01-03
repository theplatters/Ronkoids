//
// Created by Franz on 03.01.2022.
//

#ifndef RONKOIDS_WORLD_H
#define RONKOIDS_WORLD_H

#include <CommandQueue.h>
#include "pch.h"

class World : private sf::NonCopyable{

public:
    virtual void update() = 0;
    virtual void draw();

protected:
    sf::RenderWindow& window;
    sf::View worldView;
    TextureHolder& textureHolder;
    FontHolder& fontHolder;
    sf::FloatRect mWorldBounds;
    CommandQueue& commands;

    enum Layer{
        Background,
        Air,
        LayerCount
    };


public:
    World(sf::RenderWindow &window, TextureHolder &textureHolder, FontHolder &fontHolder, CommandQueue &commands);

};


#endif //RONKOIDS_WORLD_H
