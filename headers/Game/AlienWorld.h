//
// Created by Franz on 03.01.2022.
//

#ifndef RONKOIDS_ALIENWORLD_H
#define RONKOIDS_ALIENWORLD_H


#include "World.h"

class AlienWorld : public World{
public:
    AlienWorld(sf::RenderWindow &window, TextureHolder &textureHolder, FontHolder &fontHolder, CommandQueue &commands);

    void update() override;

    void buildScene();
};


#endif //RONKOIDS_ALIENWORLD_H
