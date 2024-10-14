#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long
 
 
 
 
void solve() {
    int n,k; cin >> n >> k;
    int minutes = 240 - k;
    int i=1;
    while (minutes >= 5*i && i <= n){
        minutes -= 5*i;
        i++;
    }
    cout << i-1 << endl;
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
 
 
 