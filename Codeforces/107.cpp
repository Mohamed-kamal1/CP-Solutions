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
 
     if(b>=a || (a>=0 && b>=0)){
        ans = (a+b)*n;
    }
    else{
            if(count ==0)count =1;
        ans = a*count+b;
    }
    cout<<ans<<'\n';
   }
 
 
    return 0;
}