#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int n, h;cin >> n >> h;
    int a;
    int ans = 0;
    while(n--){
        cin >> a;
        if(a>h)
            ans += 2;
        else
            ans++;
    }
    cout << ans;
    return 0;
}