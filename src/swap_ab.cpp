#include "swap_ab.h"
#include <string>
#include <iostream>

std::string swap_ab(const std::string s) {
    std::string out;
    out.reserve(s.size());
    for (char ch : s) {
        if (ch == 'a'){ std::cout << 'b'; out.push_back('b');}
        else if (ch == 'b') { std::cout << 'a'; out.push_back('a');}
        else { std::cout << ch; out.push_back(ch);}
    }
    std::cout << std::endl;
    return out;
}
