//
// Created by Franz on 04.01.2022.
//

#ifndef RONKOIDS_SPRITENODE_H
#define RONKOIDS_SPRITENODE_H


#include "SceneNode.h"

class SpriteNode : public SceneNode {
public:
    SpriteNode(const sf::Texture &texture);

private:
    void drawCurrent(sf::RenderTarget &target, sf::RenderStates states) const override;

    sf::Sprite sprite;
};


#endif //RONKOIDS_SPRITENODE_H
