#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 100005;
 
int n, k, a[N], b[N];
 
bool check(int mx) {
    long long rem_k = k;
    for (int i = 0; i < n; ++i) {
        rem_k -= max(0ll, 1ll * mx * a[i] - b[i]);
        if (rem_k < 0) return false;
    }
    return true;
}
 
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    int l = 0, r = 2e9 + 1, ans = 0;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (check(m)) {
            ans = m;
            l = m + 1;
        } else r = m - 1;
    }
    cout << ans << '\n';
    return 0;
}