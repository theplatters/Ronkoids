//
// Created by Franz on 21.12.2021.
//

#ifndef RONKOIDS_STATESTACK_H
#define RONKOIDS_STATESTACK_H

#include <stack>
#include "pch.h"
#include "State.h"

namespace States {
    enum ID {
        None,
        Title,
        Menu,
        Game,
        Loading,
        Settings,
        Pause,
        GameOver,
        Win
    };
}

class StateStack {
public:
    enum Action {
        Push,
        Pop,
        Clear,
    };
private:
    struct PendingChange {
        explicit PendingChange(Action action, States::ID stateID = States::None);

        Action action;
        States::ID stateID;
    };

    std::vector<std::unique_ptr<State>> stack;
    std::vector<PendingChange> pendingChanges;

public:


    void clearStates();

    void pushState(States::ID stateID);

    void popState();
};


#endif //RONKOIDS_STATESTACK_H
