#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long
 
 
 
 
void solve() {
   int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x = (k*l)/nl;
    int y = c*d;
    int z = p/np;
    cout << min(x,min(y,z))/n << endl;
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
 
 
 