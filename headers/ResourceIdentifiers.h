//
// Created by Franz on 06.07.2021.
//

#ifndef TETRIS_RESOURCEIDENTIFIERS_H
#define TETRIS_RESOURCEIDENTIFIERS_H

#include "ResourceHolder.h"

namespace Textures{
    enum ID {

    };
};

namespace Category
{
    enum Type
    {

    };
}

namespace Fonts{
    enum ID{

    };
}





template <typename Resource, typename Identifier>
class ResourceHolder;
typedef ResourceHolder<sf::Texture, Textures::ID> TextureHolder;
typedef ResourceHolder<sf::Font, Fonts::ID>	FontHolder;



#endif //TETRIS_RESOURCEIDENTIFIERS_H
