//
// Created by Franz on 03.01.2022.
//

#ifndef RONKOIDS_SCENENODE_H
#define RONKOIDS_SCENENODE_H

#include "pch.h"

class SceneNode : public sf::Transformable, public sf::Drawable, private sf::NonCopyable{
public:
    typedef std::unique_ptr<SceneNode> Ptr;

};


#endif //RONKOIDS_SCENENODE_H
