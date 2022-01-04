//
// Created by Franz on 06.07.2021.
//

#ifndef TETRIS_RESOURCEHOLDER_H
#define TETRIS_RESOURCEHOLDER_H

#include "pch.h"


template<typename Resource, typename Identifier>
class ResourceHolder {
private:
    std::map<Identifier,std::unique_ptr<Resource>> resourceMap;

public:
    void load(Identifier id, const std::string &filename) {
        std::unique_ptr<Resource> resource(new Resource());
        if(!resource->loadFromFile(filename)){
            throw std::runtime_error("ResourceHolder::load - Failed to load" + filename);
        }
        auto inserted = resourceMap.insert(std::make_pair(id, std::move(resource)));
    }

    template<typename Parameter>
    void load(Identifier id, const std::string &filename, const Parameter &secondParam) {
        std::unique_ptr<Resource> resource(new Resource());
        if(!resource->loadFromFile(filename, secondParam)){
            throw std::runtime_error("ResourceHolder::load - Failed to load" + filename);
        }
        auto inserted = resourceMap.insert(std::make_pair(id, std::move(resource)));
        assert(inserted.second);
    }

    Resource& get(Identifier id) {
        auto found = resourceMap.find(id);
        return *found->second;
    }


    const Resource& get(Identifier id) const {
        auto found = resourceMap.find(id);
        return *found->second;
    }



};





#endif //TETRIS_RESOURCEHOLDER_H
