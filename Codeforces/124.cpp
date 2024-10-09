#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int n,m;cin>>n>>m;
    priority_queue<int>pq;
 
    int ans=0;
    for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x<0){
                if(m){
                    ans-=x;
                    m--;
                }
            }
    }
 
    cout<<ans;
    return 0;
}