//
// Created by Franz on 03.01.2022.
//

#include "Entities/SceneNode.h"
void SceneNode::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();

    drawCurrent(target,states);
    drawChildren(target,states);
}

void SceneNode::drawCurrent(sf::RenderTarget &target, sf::RenderStates states) const{

}

void SceneNode::drawChildren(sf::RenderTarget &target, sf::RenderStates states) const{
    for (const auto &item : children){
        item->draw(target,states);
    }
}

void SceneNode::update(sf::Time dt, CommandQueue &commands) {
    updateCurrent(dt,commands);
    updateChildren(dt,commands);
}

void SceneNode::updateCurrent(sf::Time dt, CommandQueue &commands) {

}

void SceneNode::updateChildren(sf::Time dt, CommandQueue &commands) {
    for (const auto &item : children) item->update(dt,commands);
}

void SceneNode::attachChild(SceneNode::Ptr child) {
    child->parent = this;
    children.push_back(std::move(child));
}

SceneNode::Ptr SceneNode::detachChild(const SceneNode &node) {
    auto found = std::find_if(children.begin(), children.end(), [&](auto& p){return p.get() == &node;});
    Ptr result = std::move(*found);
    result->parent = nullptr;
    children.erase(found);
    return result;
}

SceneNode::SceneNode(Category::Type type) : defaultCategory(type), parent(nullptr), children(){

}

