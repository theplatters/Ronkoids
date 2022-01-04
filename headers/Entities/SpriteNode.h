//
// Created by Franz on 04.01.2022.
//

#ifndef RONKOIDS_SPRITENODE_H
#define RONKOIDS_SPRITENODE_H


#include "SceneNode.h"

class SpriteNode : public SceneNode{
public:
    SpriteNode(const sf::Texture& texture);
private:

    sf::Sprite sprite;
};


#endif //RONKOIDS_SPRITENODE_H
