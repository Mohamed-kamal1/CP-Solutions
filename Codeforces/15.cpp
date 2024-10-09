#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
void solve(){
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int ans = 0;
    for (int i = 1; i <= d; i++){
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)ans++;
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t=1;
    while (t--){
        solve();
    }
    return 0;
}
 
 
 