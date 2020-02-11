#include <string>

namespace stringy {

inline std::string hex_char(const char unsafe);
inline std::string printsafe_char(const char unsafe);

std::string make_hex_string(const char * input_str);
std::string make_hex_string(const char * input_str, int string_length);

std::string make_printsafe(const char * input_str);
std::string make_printsafe(const char * input_str, int string_length);
std::string make_printsafe(std::string input_str);

} //stringy
