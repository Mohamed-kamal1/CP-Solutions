#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s,t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    int ans = n + m;
    for(int i = 0 ,j=0; i < n && j < m ; i++ , j++){
        if (s[i] == t[j]){
            ans--;
        }
        else{
            break;
        }
    }
    ans++;
    ans  = min(ans, n+m);
    cout << ans << endl;
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
 
 
 