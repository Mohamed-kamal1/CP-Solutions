#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long
 
 
 
 
void solve() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int max_val = max(x1, max(x2, x3));
    int min_val = min(x1, min(x2, x3));
    cout << max_val - min_val << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t=1;
//    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
 
 
 