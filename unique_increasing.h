#pragma once

uint64_t _uniqueIncreasingUint64 (const char * key, uint64_t value);

/*
return _unique("foo", 0); // OK
...
return _unique("bar", 0); // OK
...
return _unique("foo", 0); // Compile time error: "_uniqueIncreasingUint64("foo", 0) is used already, use _uniqueIncreasingUint64("foo", 1) now."
...
return _unique("bar", 32); // Compile time error: "_uniqueIncreasingUint64("bar", 1) hasn't been used yet, use it first."
*/
