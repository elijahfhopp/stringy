> :warning: unmaintained/abandoned, but simple and public domain

> :exclamation: naive approach 

# `stringy` for C++

`stringy` makes string sanitization simple:

```C++
#include <stringy/stringy.hpp>

const char * test_string = "Heyo!\x01\x02\x03";
std::cout << stringy::make_printsafe(test_string) << "\n"; //Prints "Heyo!\x01\x02\x03"
```

Or making hex escapecode strings:

```C++
std::cout << stringy::make_hex_string(test_string) << "\n"; //Prints "\x48\x65\x79\x6f\x21\x01\x02\x03"
//Literal output is L"\\x48\\x65\\x6c\\x6c\\x6f\\x2c\\x20\\x77\\x6f\\x72\\x6c\\x64\\x21\\x01\\x02\\x03".

```

And it's header-only, too!
