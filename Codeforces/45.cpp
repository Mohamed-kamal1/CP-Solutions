#include <bits/stdc++.h>
 
 
using namespace std;
#define ll long long
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int x ,k;cin >> x >> k;
    while(k--){
        if(x%10 == 0){
            x /= 10;
        }else{
            x--;
        }
    }
    cout << x << endl;
    return 0;
}