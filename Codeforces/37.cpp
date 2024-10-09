#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int y;cin>>y;
    int x ;
    while (true){
        x = ++y;
        int a ,b,c,d;
        a = x%10;x/=10;
        b = x%10;x/=10;
        c = x%10;x/=10;
        d = x%10;x/=10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) break;
    }
    cout<<y<<endl;
 
    return 0;
}