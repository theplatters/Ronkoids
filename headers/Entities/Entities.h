//
// Created by Franz on 03.01.2022.
//

#ifndef RONKOIDS_ENTITIES_H
#define RONKOIDS_ENTITIES_H


#include "SceneNode.h"

class Entities : public SceneNode {
public:
    Entities();
    Entities(int hitpoints);

    const sf::Vector2f &getVelocity() const;

    void setVelocity(const sf::Vector2f velocity);

    int getHitpoints() const;

protected:
    int hitpoints;
    sf::Vector2f velocity;

    virtual void updateCurrent(sf::Time dt, CommandQueue &commandQueue);

};


#endif //RONKOIDS_ENTITIES_H
