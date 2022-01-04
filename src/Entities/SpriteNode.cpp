//
// Created by Franz on 04.01.2022.
//

#include "Entities/SpriteNode.h"

SpriteNode::SpriteNode(const sf::Texture &texture) : SceneNode(Category::SceneAirLayer), sprite(texture) {

}

void SpriteNode::drawCurrent(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(sprite);
}
