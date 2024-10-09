#include <bits/stdc++.h>
 
 
using namespace std;
#define ll long long
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int x; cin >> x;
    int steps = 0;
    for (int i = 5; i > 0;i--){
        steps += x / i;
        x %= i;
        if (x == 0) break;
    }
    cout<<steps<<endl;
        return 0;
}