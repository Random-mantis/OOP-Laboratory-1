#include "swap_ab.h"
#include <string>
#include <iostream>

std::string swap_ab(const std::string s) {
     
    std::string out;
    out.reserve(s.size());
    for (int i = 0; i < s.size() / sizeof(char); i++) {
        if (s[i] == 'a'){ out.push_back('b');}
        else if (s[i] == 'b') { out.push_back('a');}
        else { out.push_back(s[i]);}
    }
    std::cout << out << std::endl; 
    return out;
}
