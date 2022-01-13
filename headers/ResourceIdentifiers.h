//
// Created by Franz on 06.07.2021.
//

#ifndef TETRIS_RESOURCEIDENTIFIERS_H
#define TETRIS_RESOURCEIDENTIFIERS_H

#include "ResourceHolder.h"


//TODO same as StateIdentifiers, we need to move this to game and make
namespace Textures {
    enum ID {
        PlayerSpaceship,
        EnemySpaceship,
        BackgroundSpace,
        BackgroundShip,
        LayerCount
    };
};

namespace Category {
    enum Type {
        None = 0,
        SceneAirLayer = 1 << 0,
        PlayerAircraft = 1 << 1,
        EnemyAircraft = 1 << 2,
        AlliedProjectile = 1 << 3,
        EnemyProjectile = 1 << 4
    };
}

namespace Fonts {
    enum ID {

    };
}


template<typename Resource, typename Identifier>
class ResourceHolder;

typedef ResourceHolder<sf::Texture, Textures::ID> TextureHolder;
typedef ResourceHolder<sf::Font, Fonts::ID> FontHolder;


#endif //TETRIS_RESOURCEIDENTIFIERS_H
