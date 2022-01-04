//
// Created by Franz on 03.01.2022.
//

#include <Entities/SceneNode.h>
#include "Game/AlienWorld.h"

AlienWorld::AlienWorld(sf::RenderWindow &window, TextureHolder &textureHolder, FontHolder &fontHolder,
                       CommandQueue &commands)
        : World(window, textureHolder, fontHolder, commands) {
    worldView.setViewport(sf::FloatRect(0.f, 0.f, 0.5f, 1.f));
    buildScene();
}

void AlienWorld::update() {

}

void AlienWorld::draw() {
    window.setView(worldView);
    window.draw(sceneGraph);
}

void AlienWorld::buildScene() {
    for (std::size_t i = 0;i  < LayerCount; ++i) {
        SceneNode::Ptr layer(new SceneNode(Category::SceneAirLayer));
        sceneLayers[i] = layer.get();
        sceneGraph.attachChild(std::move(layer));
    }

    sf::Texture& background = textureHolder.get(Textures::BackgroundSpace);

}

