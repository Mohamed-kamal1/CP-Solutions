#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
 
void solve(){
    int s,n;
    cin>> s >> n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; ++i) {
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; ++i){
        if(s>v[i].first){
            s+=v[i].second;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
 
}
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t=1;
//    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
 
 
 