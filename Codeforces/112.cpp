#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int t ;cin>>t;
   while(t--){
    int n ;cin>>n;
    int ans =n+1;
    map<int,int>m;
    for(int i =0;i<n;i++){
       int x;cin >>x;
       if(m.count(x))
        ans = min(ans,i-m[x]+1);
       m[x]=i;
    }
 
    if(ans>n)ans=-1;
    cout <<ans<<"\n";
   }
 
 
    return 0;
}