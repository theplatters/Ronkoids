//
// Created by Franz on 21.12.2021.
//

//TODO: States should inherit State

#ifndef RONKOIDS_STATE_H
#define RONKOIDS_STATE_H

#include "pch.h"

class StateStack;

class State {
public:
    typedef std::unique_ptr<State> Ptr;


    struct Context {
        Context(sf::RenderWindow &window, TextureHolder &textures, FontHolder &fonts);

        sf::RenderWindow *window;
        TextureHolder *textures;
        FontHolder *fonts;
    };

    State(StateStack &stateStack, const Context &context);


    bool update(sf::Time dt);

    virtual void draw() = 0;
    virtual bool update() = 0;
    virtual bool handleEvent(const sf::Event& event) = 0;


private:
    StateStack &stateStack;
    Context context;
};


#endif //RONKOIDS_STATE_H
