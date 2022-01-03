//
// Created by Franz on 03.01.2022.
//

#ifndef RONKOIDS_SCENENODE_H
#define RONKOIDS_SCENENODE_H

#include <CommandQueue.h>
#include "pch.h"

class SceneNode : public sf::Transformable, public sf::Drawable, private sf::NonCopyable{
public:
    SceneNode(Category::Type type);

    typedef std::unique_ptr<SceneNode> Ptr;
    void update(sf::Time dt, CommandQueue& commands);
    void attachChild(Ptr child);
    Ptr detachChild(const SceneNode& node);


private:
    void draw(sf::RenderTarget &target,sf::RenderStates states) const override;
    virtual void drawCurrent(sf::RenderTarget &target,sf::RenderStates states) const;
    virtual void drawChildren(sf::RenderTarget &target,sf::RenderStates states) const;

    virtual void updateCurrent(sf::Time dt, CommandQueue &commands);
    void updateChildren(sf::Time dt, CommandQueue &commands);

    std::vector<Ptr> children;
    SceneNode* parent;
    Category::Type defaultCategory;


};


#endif //RONKOIDS_SCENENODE_H
