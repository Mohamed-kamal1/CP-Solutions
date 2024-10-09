#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
   int t;cin >>t;
   while(t--){
    int n,a,b;cin>>n>>a>>b;
    string s ;cin >>s;
    int count =0;
    int ans=0;
    for(int i=0; i<n-2;i++){
        if(s[i]!=s[i+1])count++;
    }
        ans = a*n + ((b>=0) ? (b*n) : (b*(count/2+1)));
    cout<<ans<<'\n';
   }
 
 
    return 0;
}