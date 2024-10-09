#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int n;cin >>n;
 
    while(n%10==0)n=n/10;
    vector<int>v;
    while(n){
        v.push_back(n%10);
        n/=10;
    }
    bool p=true;
    int l =v.size();
    for(int i=0;i<l/2;i++){
       if(v[i]!=v[v.size()-1-i]){p=false; break;}
    }
    if(p)cout<<"Yes";
    else cout<<"No";
 
    return 0;
}
 