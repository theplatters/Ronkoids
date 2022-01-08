//
// Created by Franz on 05.01.2022.
//

#ifndef RONKOIDS_LEFTPLAYER_H
#define RONKOIDS_LEFTPLAYER_H


#include "Player.h"

class LeftPlayer : public Player {
public:
    LeftPlayer() = default;

protected:
    void initializeKeys() override;

    void initializeActions() override;
};


#endif //RONKOIDS_LEFTPLAYER_H
