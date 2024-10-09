#include <iostream>
#include <string>
#include <algorithm>
 
int main() {
    std::string guest, host, pile;
    std::cin >> guest >> host >> pile;
 
    std::string combined = guest + host;
 
    if (combined.length() != pile.length()) {
        std::cout << "NO" << std::endl;
        return 0;
    }
 
    std::sort(combined.begin(), combined.end());
    std::sort(pile.begin(), pile.end());
 
    if (combined == pile) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
 
    return 0;
}