#include <iostream>
#include <vector>
 
int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
 
    int maxLength = 1;  // Minimum subsegment length is 1
    int currentLength = 1;
 
    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i-1]) {
            currentLength++;
        } else {
            currentLength = 1;
        }
 
        maxLength = std::max(maxLength, currentLength);
    }
 
    std::cout << maxLength << std::endl;
    
    return 0;
}