#ifndef LUACOMPAT_H
#define LUACOMPAT_H

/**
 * Set LUAPB_LINK_LUA_COMPILED_IN_CXX to 1 if you compile Lua library under C++
 * (it is *Lua* library, not LuaPb); it is highly recommended to build Lua library
 * under C++, so it is safer and easier to work with Lua error handling.
 *
 * If Lua is compiled under C, it will use longjmp for error handling, longjmp will ignore
 * any destructor of object on stack, and may cause memory leak and other problem.
 *
 * If Lua is compiled under C++, it will throw C++ exception for error handling, and
 * destructor of object on stack will be called as expected.
 */

#if !LUAPB_LINK_LUA_COMPILED_IN_CXX
extern "C"
{
#endif

#include "lualib.h"
#include "lauxlib.h"

#if !LUAPB_LINK_LUA_COMPILED_IN_CXX
}
#endif

#endif  // LUACOMPAT_H