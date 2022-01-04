//
// Created by Franz on 04.01.2022.
//

#ifndef RONKOIDS_STATEIDENTIFIERS_H
#define RONKOIDS_STATEIDENTIFIERS_H

//TODO we need to find a way to make this seperate from the engine, so that State.h includes something else

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

#endif //RONKOIDS_STATEIDENTIFIERS_H
