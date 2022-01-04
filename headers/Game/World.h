//
// Created by Franz on 03.01.2022.
//

#ifndef RONKOIDS_WORLD_H
#define RONKOIDS_WORLD_H

#include <CommandQueue.h>
#include <Entities/SceneNode.h>
#include "pch.h"

class World : private sf::NonCopyable {

public:
    virtual void update() = 0;

    virtual void draw();

protected:
    enum Layer {
        Background,
        Air,
        LayerCount
    };

    sf::RenderWindow &window;
    sf::View worldView;
    TextureHolder &textureHolder;
    FontHolder &fontHolder;
    CommandQueue &commands;
    std::array<SceneNode *, LayerCount> sceneLayers;
    SceneNode sceneGraph;
    sf::FloatRect worldBounds;


public:
    World(sf::RenderWindow &window, TextureHolder &textureHolder, FontHolder &fontHolder, CommandQueue &commands);

    World(sf::RenderWindow &window, const sf::View &worldView, TextureHolder &textureHolder, FontHolder &fontHolder,
          const sf::FloatRect &worldBounds, CommandQueue &commands);

};


#endif //RONKOIDS_WORLD_H
