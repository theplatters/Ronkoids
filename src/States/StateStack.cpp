//
// Created by Franz on 21.12.2021.
//

#include "States/StateStack.h"

#include <ranges>

void StateStack::clearStates() {
    pendingChanges.emplace_back(Clear);
}

void StateStack::pushState(States::ID stateID) {
    pendingChanges.emplace_back(Push, stateID);
}

void StateStack::popState() {
    pendingChanges.emplace_back(Pop);
}


bool StateStack::isEmpty() const {
    return stack.empty();
}


void StateStack::applyPendingChanges() {
    for (PendingChange change : pendingChanges) {
        switch (change.action) {
            case Push:
                stack.push_back(createState(change.stateID));
                break;
            case Pop:
                stack.pop_back();
                break;
            case Clear:
                stack.clear();
                break;
        }
    }
}

void StateStack::draw() {
    for (auto &state : stack)
        state->draw();
}


void StateStack::update(sf::Time dt) {
    for (auto it = stack.rbegin(); it != stack.rend(); it++) {
        if (!(*it)->update(dt))
            break;
    }
    applyPendingChanges();
}

void StateStack::handleEvent(const sf::Event event) {
    for (auto itr = stack.rbegin(); itr != stack.rend(); ++itr) {
        if (!(*itr)->handleEvent(event))
            break;
    }
}

StateStack::StateStack(const State::Context &context) : context(context) {

}

State::Ptr StateStack::createState(States::ID stateID) {
    auto found = factories.find(stateID);
    if (found == factories.end()) {
        //TODO throw exception
    }

    return found->second();
}

StateStack::PendingChange::PendingChange(StateStack::Action action, States::ID stateID) : action(action),
                                                                                          stateID(stateID) {

}
