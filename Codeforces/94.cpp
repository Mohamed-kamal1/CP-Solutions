#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int t,cur=0,last=1;
    cin >> t;
    map<int, int> mp;
    priority_queue<pair<int,int>>pq;
 
    while(t--){
        int q ;cin>>q;
        switch(q){
        case 1:{
            int m;cin>>m;
            cur++;
            pq.emplace(m,-cur);
            break;
        }
        case 2:{
            for(int i=last ;i<=cur;i++){
                if(!mp[i]){
                    cout<<i<<" ";
                    last=i;
                    mp[i]=1;
                    break;
                }
            }
            break;
        }
        case 3:{
            while(mp[-pq.top().second]){
                pq.pop();
            }
            cout<<-pq.top().second<<" ";
            mp[-pq.top().second]=1;
            pq.pop();
            break;
        }
        }
    }
    return 0;
}