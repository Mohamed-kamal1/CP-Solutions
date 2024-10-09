#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        cout<<(b-a%b)%b<<endl;
    }
    return 0;
}