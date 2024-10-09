#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
 
    int t =1;
    while(t--){
            int n,k;cin >>n>>k;
            int a[n],b[n];
            int count=0;
 
            for(int i=0;i<n;i++)cin>>a[i];
            for(int i=0;i<n;i++)cin>>b[i];
 
            while(true){
                for(int i=0;i<n;i++){
                    if(a[i]<=b[i]){
                        b[i]-=a[i];
                    }
                    else{
                        k-=(a[i]-b[i]);
                        b[i]=0;
                    }
                }
                if(k>=0){
                    count++;
                }
                else break;
 
            }
            cout<<count;
 
    }
 
    return 0;
}