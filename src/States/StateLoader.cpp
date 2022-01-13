//
// Created by franz on 12.01.22.
//

#include <fstream>
#include "StateLoader.h"
#include <iostream>

void StateLoader::readFromFile(const std::string& filename) {
    std::ifstream i{filename.c_str()};
    lua.executeCode(i);
}

StateLoader::StateLoader(const std::string& filename) {
    readFromFile(filename);
    states = lua.readVariable<std::vector<std::pair<int,std::string>>>("states");
    std::cout << states.size();
    std::for_each(states.begin(), states.end(), [](auto el){std::cout << el.second;});
}
