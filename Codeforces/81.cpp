#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 500005;
 
int n, a[N];
 
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n);
    int ans = n;
    for (int i = 0, j = n / 2; i < n / 2; ++i) {
        for (; j < n and 2 * a[i] > a[j]; ++j);
        if (j == n) break;
        --ans; ++j;
    }
    cout << ans << '\n';
    return 0;
}