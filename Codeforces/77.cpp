#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int t;cin>>t;
    while(t--){
            int l,r;cin>>l>>r;
            int z = (int)log2(r);
            if(z>0){
                cout<<pow(2,z)-1<<'\n';
            }
            else{
                cout<<r<<'\n';
            }
 
    }
 
 
 
 
    return 0;
}