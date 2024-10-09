#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
void solve(){
    int n;cin>>n;
    vector<int> h(n);
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>h[i]>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)continue;
            if(h[i]==a[j])ans++;
        }
    }
    cout<<ans<<endl;
 
 
}
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t=1;
    //cin >> t;
 
    while (t--){
        solve();
    }
    return 0;
}
 
 
 