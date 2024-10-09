#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
void solve(){
    int n;cin>>n;
    int c1=0,c2=0,c3=0,c4=0;
    while (n--){
        int x;cin>>x;
        if(x==4)c4++;
        else if(x==3)c3++;
        else if(x==2)c2++;
        else c1++;
    }
    int ans=c4;
    ans+=c3;
    c1-=c3;
    ans+=c2/2;
    c2%=2;
    if(c2==1){
        ans++;
        c1-=2;
    }
    if(c1>0){
        ans+=c1/4;
        c1%=4;
        if(c1>0)ans++;
    }
    cout<<ans;
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
 
 
 