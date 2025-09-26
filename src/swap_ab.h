#pragma once
#include <string>

inline std::string swap_ab(const std::string& s) {
    std::string out;
    out.reserve(s.size());
    for (char ch : s) {
        if (ch == 'a') out.push_back('b');
        else if (ch == 'b') out.push_back('a');
        else out.push_back(ch);
    }
    return out;
}
