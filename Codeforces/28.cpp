#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    ll n,k;cin >>n>>k;
    if(k > (n + 1) / 2)cout<<2 * (k - (n + 1) / 2);
    else cout<<2*k-1;
 
    return 0;
}