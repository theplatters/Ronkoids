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

StateStack::PendingChange::PendingChange(StateStack::Action action, States::ID stateID): action(action), stateID(stateID) {

}
