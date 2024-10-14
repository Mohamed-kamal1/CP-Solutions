#include <bits/stdc++.h>
using namespace std;
 
void solve() {
   int k,r;
    cin >> k >> r;
    int n=1;
    while (true) {
        if ((n * k) % 10 == 0 || (n * k) % 10 == r) {
            cout << n << endl;
            return;
        }
        n++;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t=1;
    while (t--){
        solve();
    }
    return 0;
}
 
 
 