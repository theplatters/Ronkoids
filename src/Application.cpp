//
// Created by Franz on 20.12.2021.
//

#include "Application.h"
#include "pch.h"


void Application::run() {
    sf::Clock clock;
    sf::Time timeSinceLastUpdate = sf::Time::Zero;

    while(window.isOpen()){
        sf::Time dt = clock.restart();
        timeSinceLastUpdate += dt;
        while(timeSinceLastUpdate > TIME_PER_FRAME){
            timeSinceLastUpdate -= TIME_PER_FRAME;

            processInputs();
            update(TIME_PER_FRAME);

            if(states.isEmpty())
                window.close();
        }
        render();
    }

}

Application::Application() {}

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

}
