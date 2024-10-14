#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long
 
 
 
 
void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    int max = a[0], min = a[0];
    int count = 0;
    for (int i=1; i<n; i++){
        if(a[i] > max){
            max = a[i];
            count++;
        }
        if(a[i] < min){
            min = a[i];
            count++;
        }
 
    }
    cout << count << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t=1;
//    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
 
 
 