//
// Created by Franz on 03.01.2022.
//

#ifndef RONKOIDS_SPACESHIPWORLD_H
#define RONKOIDS_SPACESHIPWORLD_H


#include "World.h"

class SpaceshipWorld : public World{
private:
    void buildScene();
public:
    SpaceshipWorld(sf::RenderWindow &window, TextureHolder &textureHolder, FontHolder &fontHolder,
                   CommandQueue &commands);

    void update() override;


};


#endif //RONKOIDS_SPACESHIPWORLD_H
