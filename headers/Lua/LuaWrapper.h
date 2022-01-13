//
// Created by Franz on 08.01.2022.
//

#ifndef RONKOIDS_LUAWRAPPER_H
#define RONKOIDS_LUAWRAPPER_H

#include "pch.h"

extern "C" {
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}

class LuaWrapper {
private:
    lua_State *l;

public:
    void executeFromFile(std::string filename);

    LuaWrapper(const LuaWrapper&) = delete;
    LuaWrapper& operator=(const LuaWrapper&) = delete;

    LuaWrapper();

    virtual ~LuaWrapper();

private:
    bool isError();
};


#endif //RONKOIDS_LUAWRAPPER_H
