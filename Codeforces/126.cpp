#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int n,m;cin>>n>>m;
    priority_queue<int>pq;
 
    for(int i=0;i<n;i++){
            int x;cin>>x;
            pq.push(-x);
    }
    int ans =0;
    while(m--){
        ans+= pq.top();
        pq.pop();
    }
    cout<<ans;
    return 0;
}