#include <iostream>
#include <string>
#include "src/swap_ab.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    if (!(std::cin >> s)) return 0; 
    std::cout << swap_ab(s) << '\n';
    return 0;
}
