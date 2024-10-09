#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int n;cin >> n;
    int a, b;
    int ans = 0, intrain = 0;
    while(n--){
        cin >> a >> b;
        intrain = intrain - a + b;
        ans = max(ans, intrain);
    }
    cout << ans;
 
    return 0;
}