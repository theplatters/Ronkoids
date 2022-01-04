//
// Created by Franz on 20.12.2021.
//

#include <States/GameState.h>
#include <States/LoadState.h>
#include "Application.h"
#include "pch.h"

Application::Application() :
        window(sf::VideoMode(1280, 720), "ronkoids", sf::Style::Close),
        fonts(),
        textures(), states(State::Context(window,textures,fonts)) {

    states.registerState<GameState>(States::Game);
    states.registerState<LoadState>(States::Loading);
    states.pushState(States::Loading);
}

void Application::run() {
    sf::Clock clock;
    sf::Time timeSinceLastUpdate = sf::Time::Zero;

    while (window.isOpen()) {
        sf::Time dt = clock.restart();
        timeSinceLastUpdate += dt;
        while (timeSinceLastUpdate > TIME_PER_FRAME) {
            timeSinceLastUpdate -= TIME_PER_FRAME;

            processInputs();
            update(TIME_PER_FRAME);

            if (states.isEmpty())
                window.close();
        }
        render();
    }

}


void Application::update(const sf::Time dt) {
    states.update(dt);
}

void Application::render() {
    window.clear();

    states.draw();
    window.setView(window.getDefaultView());
    window.display();
}

//TODO: handle Inputs, must implement Events first
void Application::processInputs() {
    sf::Event event{};

    while(window.pollEvent(event)){
        states.handleEvent(event);

        if(event.type == sf::Event::Closed)
            window.close();
    }
}
