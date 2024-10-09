#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int x;cin>>x;
    int ans =0;
    while(x){
            if(x%2==1)ans++;
    x/=2;
    }
    cout<<ans;
 
 
    return 0;
}