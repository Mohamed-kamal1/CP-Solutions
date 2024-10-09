#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int n;cin >> n;
    int count =0;
    while (n--) {
        int p,q;cin >> p >> q;
        if(q-p >= 2) count++;
    }
    cout << count << endl;
    return 0;
}