#pragma once

#define _uniqueIncreasingUint64(key, value, metadata) value

/*
return _uniqueIncreasingUint64("foo", 0, ""); // OK
...
return _uniqueIncreasingUint64("bar", 0, ""); // OK
...
return _uniqueIncreasingUint64("foo", 0, ""); // Compile time error: "_uniqueIncreasingUint64("foo", 0, ...) is used already, use _uniqueIncreasingUint64("foo", 1, ...) now."
...
return _uniqueIncreasingUint64("bar", 4, ""); // Compile time error: "_uniqueIncreasingUint64("bar", 1, ...) hasn't been used yet, use it first."
...
return _uniqueIncreasingUint64("foo", "hello", ""); // Compile time error: "_uniqueIncreasingUint64 expects a manually typed in uint64_t value."
...
return _uniqueIncreasingUint64("bar", someVariableOrCompileTimeConstant, ""); // Compile time error: "_uniqueIncreasingUint64 expects a manually typed in uint64_t value."
...
return _uniqueIncreasingUint64("foo", -8, ""); // Compile time error: "_uniqueIncreasingUint64 expects a manually typed in uint64_t value."
...
return _uniqueIncreasingUint64("foo", (uint64_t)-8, ""); // Compile time error: "_uniqueIncreasingUint64 expects a manually typed in uint64_t value."
...
return _uniqueIncreasingUint64("foo", (uint64_t)1, ""); // Compile time error: "_uniqueIncreasingUint64 expects a manually typed in uint64_t value."
...
return _uniqueIncreasingUint64("foo", 0 + 1, ""); // Compile time error: "_uniqueIncreasingUint64 expects a manually typed in uint64_t value."
...
return _uniqueIncreasingUint64(15, 0, ""); // Compile time error: "_uniqueIncreasingUint64 expects a manually typed in C string key."
...
return _uniqueIncreasingUint64("", 0, "something"); // Compile time error: "_uniqueIncreasingUint64 key cannot be empty."
...
return _uniqueIncreasingUint64("bar", 1, 16); // Compile time error:"_uniqueIncreasingUint64 expects a manually typed in C string metadata."
*/
