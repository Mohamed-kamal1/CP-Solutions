#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
 
 
            ll t;
            int count=0;
            int n;cin>>n>>t;
            int a[n];
            for(int i=0;i<n;i++)cin>>a[i];
          //  sort(a,a+n);
            for(int i=0;i<n && t>0 ;i++){
                    if(t-a[i]>=0){
                        t-=a[i];
                        count++;
                    }
            }
            cout<<count;
 
 
 
 
    return 0;
}