#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
        string s;
        cin >> s;
        if (s == "YES" || s == "YEs" || s == "YeS" || s == "Yes" || s == "yES" || s == "yEs" || s == "yeS" || s == "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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
 
 
 