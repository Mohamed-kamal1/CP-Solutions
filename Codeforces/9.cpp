#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int evenCount = 0, oddCount = 0;
    int evenIndex, oddIndex;
 
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
 
        if (num % 2 == 0) {
            evenCount++;
            evenIndex = i;
        } else {
            oddCount++;
            oddIndex = i;
        }
 
        if (evenCount > 1 && oddCount == 1) {
            cout << oddIndex << endl;
            break;
        } else if (oddCount > 1 && evenCount == 1) {
            cout << evenIndex << endl;
            break;
        }
    }
 
    return 0;
}