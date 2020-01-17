# Stringy for C++

Stringy makes string sanitization simple:

```C++
#include <stringy/stringy.hpp>

const char * test_string = "Heyo!\x01\x02\x03";
std::cout << stringy::make_printsafe(test_string) << "\n"; //Prints "Heyo!\x01\x02\x03"
```

Or making hex escapecode strings:

```C++
std::cout << stringy::make_hex_string(test_string) << "\n"; //Prints "\x48\x65\x79\x6f\x21\x01\x02\x03"
```

It's header-only, too. But, if you need it, it can also be compiled normally (no CMakeLists.txt is provided). All that is under `[root_dir]/non_headeronly/`.

## Example Code:

Here is an example that can be tried out yourself by compiling the `example.cpp` file:

```
#include "stringy.hpp"

#include <iostream>

const char * test_string = "Hello, world!\x01\x02\x03";

int main(){
    std::cout << "String in written in the code: " << "const char * test_string = \"Hello, world!\\x01\\x02\\x03\";" << "\n";
    std::cout << "Printed with no pre-processing via std::cout (may cause issues): " << test_string << "\n";
    std::cout << "String made printsafe with stringy: " << stringy::make_printsafe(test_string) << "\n";
    std::cout << "String in hex, generated with stringy: " << stringy::make_hex_string(test_string) << "\n";
    return 0;
}
```

and it outputs this:

```
String in written in the code: const char * test_string = "Hello, world!\x01\x02\x03";
Printed with no pre-processing via std::cout (may cause issues): Hello, world!
String made printsafe with stringy: Hello, world!\x01\x02\x03
String in hex, generated with stringy: \x48\x65\x6c\x6c\x6f\x2c\x20\x77\x6f\x72\x6c\x64\x21\x01\x02\x03
```