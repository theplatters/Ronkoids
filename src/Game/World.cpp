//
// Created by Franz on 03.01.2022.
//

#include "Game/World.h"

World::World(sf::RenderWindow &window, TextureHolder &textureHolder, FontHolder &fontHolder, CommandQueue &commands)
        : window(window), textureHolder(textureHolder), fontHolder(fontHolder), commands(commands),
          sceneGraph(Category::SceneAirLayer),
          sceneLayers() {}

void World::draw() {
    window.setView(worldView);
    window.draw(sceneGraph);
}

World::World(sf::RenderWindow &window, const sf::View &worldView, TextureHolder &textureHolder, FontHolder &fontHolder,
             const sf::FloatRect &worldBounds, CommandQueue &commands) : window(window), worldView(worldView),
                                                                          textureHolder(textureHolder),
                                                                          fontHolder(fontHolder),
                                                                          worldBounds(worldBounds),
                                                                          commands(commands),sceneGraph(Category::SceneAirLayer),
                                                                          sceneLayers()  {}
