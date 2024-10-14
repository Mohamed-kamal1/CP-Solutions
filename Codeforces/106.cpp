#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    ll ans = 0;
    int cur = 1;
    for (int i = 0; i < m; i++) {
        if (a[i] >= cur) {
            ans += a[i] - cur;
        } else {
            ans += n - cur + a[i];
        }
        cur = a[i];
    }
    cout << ans << '\n';
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
 
 
 