//
// Created by Franz on 05.01.2022.
//

#ifndef RONKOIDS_RIGHTPLAYER_H
#define RONKOIDS_RIGHTPLAYER_H


#include "Player.h"

class RightPlayer : public Player{
public:
    RightPlayer() = default;

protected:
    void initializeKeys() override;

    void initializeActions() override;

};


#endif //RONKOIDS_RIGHTPLAYER_H
