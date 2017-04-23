luapb
=====

This is a binding of Google Protocol Buffer to Lua 

[LuaPbIntf](https://github.com/jinq0123/LuaPbIntf) is a better choice than luapb.

## Example

```
local pb = require("luapb");
pb.import("test.proto");
local msg = pb.new("lm.test");
local sz = pb.serializeToString(msg)
```

## Build

### Dependencies
* lua53
* protobuf

Use premake to generate VS solution or make file, see [build/READMEmd](build/README.md).

## Run test
1. Copy lua.exe lua.dll luapb.dll to test dir.
2. Run: lua.exe test.lua
