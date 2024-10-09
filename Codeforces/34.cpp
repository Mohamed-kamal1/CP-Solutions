#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int n;cin >> n;
    while (n--){
        int x ; cin >> x;
        if (x == 1){
            cout << "HARD";
            return 0;
        }
    }
        cout << "EASY";
 
    return 0;
}