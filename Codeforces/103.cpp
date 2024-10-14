#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long
 
 
 
 
void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    int ans=0, officers = 0;
    for (int i=0; i<n; i++){
        if (a[i] == -1) {
           ans++;
           if(officers>0){
               ans--;
               officers--;
           }
        }
        else{
            officers+=a[i];
        }
    }
    cout << ans << endl;
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
 
 
 