#include "Game/Application.h"
#include "Lua/LuaContext.h"
#include "States/StateLoader.h"

int main() {
    StateLoader l("../scripts/states.lua");

    Application g;
    g.run();
    return 0;

}
