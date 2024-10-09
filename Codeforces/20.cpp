#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int a,b,c;cin>>a>>b>>c;
    cout<<max({a+b+c, a+b*c, a*b+c, (a+b)*c, a*(b+c), a*b*c});
    return 0;
}