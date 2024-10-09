#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int n;cin >> n;
    int luckyNumbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
 
    for (int luckyNumber : luckyNumbers) {
        if (n % luckyNumber == 0) {
            cout << "YES" ;
            return 0;
        }
    }
    cout << "NO" ;
 
    return 0;
}