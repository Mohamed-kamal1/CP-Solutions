#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int q; cin>>q;
    while(q--){
            set <int>st;
            int n,m;
            cin>>n>>m;
            for(int i=0;i<n+m;i++){
                    int x;cin>>x;
                st.insert(x);
            }
            cout<<n+m-st.size()<<"\n";
 
    }
 
    return 0;
}