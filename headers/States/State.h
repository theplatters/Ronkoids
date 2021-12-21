//
// Created by Franz on 21.12.2021.
//

//TODO: States should inherit State

#ifndef RONKOIDS_STATE_H
#define RONKOIDS_STATE_H

#include "pch.h"
class State {

public:
    bool update(sf::Time dt);

    void draw();
};


#endif //RONKOIDS_STATE_H
