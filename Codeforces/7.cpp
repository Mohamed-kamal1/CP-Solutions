#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
void solve(){
    int n; cin >> n;
    int ans = 0;
    while (n--){
        string s; cin >> s;
        if(s == "Tetrahedron")ans+=4;
        if(s == "Cube")ans+=6;
        if(s == "Octahedron")ans+=8;
        if(s == "Dodecahedron")ans+=12;
        if(s == "Icosahedron")ans+=20;
    }
    cout << ans << endl;
}
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t=1;
    //cin >> t;
 
    while (t--){
        solve();
    }
    return 0;
}
 
 
 