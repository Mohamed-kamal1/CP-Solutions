#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
void solve(){
    string s;cin>>s;
    string ans;
    int x = 0;
    for(int i=0;i<s.size();i++){
        if((i<s.size()-2) && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            if(x==1){
                ans+=" ";
                x=0;
            }
        }
        else{
            ans+=s[i];
            x=1;
        }
    }
    cout<<ans<<endl;
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
 
 
 