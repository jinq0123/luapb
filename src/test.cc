#include "LuaPB.h"
#include <lua.hpp>
#include <stdio.h>
#include <stdint.h>
#include <luabind/luabind.hpp>


void send_message(const char * str, uint32_t size)
{
    printf("c++  is %s:%u", str, size);
}

int main()
{
    lua_State * L = luaL_newstate();
    luaL_openlibs(L);
    luaL_requiref(L, "pb", luaopen_pb, 1);

    luabind::open(L);

    luabind::module(L)
    [
        luabind::def("send_message", &send_message)
    ];
    if(luaL_dofile(L, "test/test1.lua"))
    {
        printf("can not load file error:%s\n",  lua_tostring(L, -1));
        lua_pop(L,1);
    }
    luabind::call_function<void>(L,"test_fun");
    luabind::call_function<void>(L,"testfun2");
    return 0;
}
