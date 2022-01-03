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
    State::Context context;
    std::map<States::ID, std::function<State::Ptr()>> factories;

public:

    explicit StateStack(const State::Context &context);

    template<class T>
    void registerState(States::ID id) {
        factories[id] = [this](){
            return State::Ptr(new T(*this,context));
        };
    }

    State::Ptr createState(States::ID stateID);

    void update(sf::Time dt);

    void clearStates();

    void pushState(States::ID stateID);

    void popState();

    void draw();

    [[nodiscard]] bool isEmpty() const;

    void applyPendingChanges();

    void handleEvent(sf::Event event);
};


#endif //RONKOIDS_STATESTACK_H
