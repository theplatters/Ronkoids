//
// Created by Franz on 20.12.2021.
//

#ifndef RONKOIDS_APPLICATION_H
#define RONKOIDS_APPLICATION_H

#include <States/StateStack.h>
#include "pch.h"
#include "ResourceHolder.h"
#include "ResourceIdentifiers.h"

class Application {
private:
    StateStack states;
    sf::RenderWindow window;
    TextureHolder textures;
    FontHolder fonts;


public:
    const sf::Time TIME_PER_FRAME = sf::seconds(1.f / 60.f);;

    Application();

    void run();

    void processInputs();

    void update(sf::Time dt);

    void render();
};


#endif //RONKOIDS_APPLICATION_H
