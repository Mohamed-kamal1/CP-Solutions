#include <bits/stdc++.h>
using namespace std;
 
void solve() {
   int a,b;
    cin >> a >> b;
    int ans = 0;
    int mi = min(a,b);
    ans += mi;
    a -= mi;
    b -= mi;
    cout << ans <<endl;
    cout<<(a/2 + b/2) << endl;
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
 
 
 