#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
#define int long long int
#define double double_t
#define INF 1e18
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n,a,b;
        cin >> n>>a>>b;
        string str;
        cin>>str;
        int count = 0;
        for (int i = 0; i < str.length(); ++i) {
            if (str[i]!=str[i+1]){
                count++;
            }
        }
        int maxi = a*n + ((b>=0) ? (b*n) : (b*(count/2+1)));
        cout<<maxi;
        cout << "\n";
    }
}