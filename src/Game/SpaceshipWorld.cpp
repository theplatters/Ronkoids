//
// Created by Franz on 03.01.2022.
//

#include <Entities/SpriteNode.h>
#include "Game/SpaceshipWorld.h"

SpaceshipWorld::SpaceshipWorld(sf::RenderWindow &window, TextureHolder &textureHolder, FontHolder &fontHolder,
                               CommandQueue &commands) : World(window, window.getDefaultView(), textureHolder,
                                                               fontHolder,
                                                               {0, 0, window.getDefaultView().getSize().x, window.getDefaultView().getSize().y},
                                                               commands) {
    worldView.setViewport(sf::FloatRect(0.5f, 0.f, 0.5f, 1.f));
    buildScene();
}

void SpaceshipWorld::update() {

}

void SpaceshipWorld::buildScene() {
    for (std::size_t i = 0; i < LayerCount; ++i) {
        SceneNode::Ptr layer(new SceneNode(Category::SceneAirLayer));
        sceneLayers[i] = layer.get();
        sceneGraph.attachChild(std::move(layer));
    }

    sf::Texture &background = textureHolder.get(Textures::BackgroundShip);

    std::unique_ptr<SpriteNode> backgroundSprite(new SpriteNode(background));
    backgroundSprite->setPosition(worldBounds.left, worldBounds.top);
    sceneLayers[Background]->attachChild(std::move(backgroundSprite));
}

