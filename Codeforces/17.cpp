#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
void solve(){
    int n;cin >>n;
    vector<int> a(n);
    int max = 0,min=101;
    int max_index = 0,min_index = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > max) {
            max = a[i];
            max_index = i;
        }
        if (a[i] <= min) {
            min = a[i];
            min_index = i;
        }
    }
    int cost =0;
    if (min_index > max_index) {
        cost = max_index + n - min_index - 1;
    } else {
        cost = max_index + n - min_index - 2;
    }
    cout<< cost << endl;
 
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
 
 
 