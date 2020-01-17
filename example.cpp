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