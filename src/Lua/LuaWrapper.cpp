//
// Created by Franz on 08.01.2022.
//

#include "Lua/LuaWrapper.h"

LuaWrapper::LuaWrapper() {
    l = luaL_newstate();
    luaL_openlibs(l);
}

LuaWrapper::~LuaWrapper() {
    lua_close(l);
}

void LuaWrapper::executeFromFile(std::string filename) {
}

bool LuaWrapper::isError() {
    return false;
}
