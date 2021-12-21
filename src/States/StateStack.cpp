//
// Created by Franz on 21.12.2021.
//

#include "States/StateStack.h"

void StateStack::clearStates() {
    pendingChanges.emplace_back(Clear);
}

void StateStack::pushState(States::ID stateID) {
    pendingChanges.emplace_back(Push,stateID);
}

void StateStack::popState() {
    pendingChanges.emplace_back(Pop);
}

void StateStack::draw() {
    for(auto& state : stack)
        state->draw();
}

bool StateStack::isEmpty() const{
    return stack.empty();
}

void StateStack::update(sf::Time dt) {
    for (auto it = stack.rbegin(); it != stack.rend() ; it++) {
            if(!(*it)->update(dt))
                break;
    }
    applyPendingChanges();
}

//TODO: connect pendingChanges and stack here
void StateStack::applyPendingChanges() {

}

StateStack::PendingChange::PendingChange(StateStack::Action action, States::ID stateID): action(action), stateID(stateID) {

}
