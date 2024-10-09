#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
void solve(){
    int n; cin >> n;
    if(n == 0 || n == 1 || n == 2){
        cout << 0 << endl;
        return;
    }
    if(n %2 == 0)cout << n/2 -1<< endl;
    else cout << n/2 << endl;
 
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
 
 
 