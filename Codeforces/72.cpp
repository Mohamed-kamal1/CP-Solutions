#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
 
    int t =1;
    while(t--){
       int n,m;
       int type,l,r;
       cin>>n;
       ll arr[n+5];
       ll sum1[n+5],sum2[n+5];
       for(int i=1;i<=n;i++){
        cin>>arr[i-1];
        sum1[i] =sum1[i-1] +arr[i-1];
       }
       sort(arr,arr+n);
       for(int i=1;i<=n;++i)
        sum2[i]=sum2[i-1]+arr[i-1];
 
          cin>>m;
    for(int i=0;i<m;++i)
    {
        cin>>type>>l>>r;
        cout<<(type==1?sum1[r]-sum1[l-1]:sum2[r]-sum2[l-1])<<endl;
    }
    }
 
    return 0;
}