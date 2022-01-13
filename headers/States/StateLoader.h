//
// Created by franz on 12.01.22.
//

#ifndef RONKOIDS_STATELOADER_H
#define RONKOIDS_STATELOADER_H


#include "Lua/LuaContext.h"

class StateLoader {
private:
    LuaContext lua;
    std::vector<std::pair<int,std::string>> states;

    void readFromFile(const std::string& filename);

public:
    StateLoader(const std::string& filename);


};


#endif //RONKOIDS_STATELOADER_H
