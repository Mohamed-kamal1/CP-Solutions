#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t;cin>>t;
    while (t--){
 
        int n;cin>>n;
        vector<int> v(2);
        map<int,int> mp;
        for (int i=0;i<n;i++){
            int x;cin>>x;
            mp[x]++;
        }
        if(mp.size()>=3){
            cout<<"No"<<endl;
            continue;
        }
        if(mp.size()==1){
            cout<<"Yes"<<endl;
            continue;
        }
        int i=0;
        for(auto it:mp){
            v[i]=it.second;
            i++;
        }
        abs(v[0]-v[1])>=2?cout<<"No"<<endl:cout<<"Yes"<<endl;
 
 
 
    }
    return 0;
}
 
 