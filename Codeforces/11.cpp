#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
void solve(){
    int n;cin >> n;
    int count = 0;
        if(n/100 > 0)count+=n/100,n%=100;
        if(n/20 > 0)count+=n/20,n%=20;
        if(n/10 > 0)count+=n/10,n%=10;
        if(n/5 > 0)count+=n/5,n%=5;
        count+=n;
        cout << count << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t=1;
    //cin >> t;
 
    while (t--){
        solve();
    }
    return 0;
}
 
 
 