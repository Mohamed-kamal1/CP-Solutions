#include <bits/stdc++.h>
using namespace std;
 
void solve() {
       int n,a,b,c;
       cin>>n>>a>>b>>c;
       int pieces=0;
         for(int i=0;i<=n/a;i++){
              for(int j=0;j<=n/b;j++){
                int k=(n-i*a-j*b)/c;
                if(i*a+j*b+k*c==n && k>=0){
                     pieces=max(pieces,i+j+k);
                }
              }
         }
            cout<<pieces<<endl;
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
 
 
 