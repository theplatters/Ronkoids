//
// Created by Franz on 03.01.2022.
//

#include "Entities/Entities.h"

void Entities::updateCurrent(sf::Time dt, CommandQueue &commandQueue) {
    move(velocity * dt.asSeconds());
}

Entities::Entities() : Entities(1) {}

Entities::Entities(int hitpoints) : SceneNode(Category::SceneAirLayer), hitpoints(hitpoints), velocity() {}

const sf::Vector2f &Entities::getVelocity() const {
    return velocity;
}

void Entities::setVelocity(const sf::Vector2f vel) {
    Entities::velocity = vel;
}

int Entities::getHitpoints() const {
    return hitpoints;
}

