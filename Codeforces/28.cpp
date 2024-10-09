#include <iostream>
#include <vector>
 
int main() {
    int n;
    std::cin >> n;
    std::vector<int> gifts(n);
    std::vector<int> givers(n);
 
    for (int i = 0; i < n; ++i) {
        std::cin >> gifts[i];
        givers[gifts[i] - 1] = i + 1;
    }
 
    for (int i = 0; i < n; ++i) {
        std::cout << givers[i] << " ";
    }
 
    return 0;
}