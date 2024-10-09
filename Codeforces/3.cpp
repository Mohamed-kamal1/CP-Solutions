#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
 
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    if(s[n-1]=='A')cout<<'A'<<'\n';
    else cout<<'B'<<'\n';
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
 
 
 