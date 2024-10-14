#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long
 
 
 
 
void solve() {
   int a,b,c;
    cin >> a >> b >> c;
    int maxi = max(a,max(b,c));
    if (maxi - a - b - c == -1*maxi)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t=1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
 
 
 