#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
void solve(){
    int n;cin >>n;
    string s;cin >>s;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        s[i] = tolower(s[i]);
        mp[s[i]]++;
    }
    if(mp.size()==26)cout <<"YES";
    else cout <<"NO";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t=1;
    while (t--){
        solve();
    }
    return 0;
}
 
 
 