Skip to content
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@Mohamed-kamal1 
JayantGoel001
/
CodeForces
Public
Fork your own copy of JayantGoel001/CodeForces
Code
Issues
Pull requests
Actions
Projects
Security
Insights
CodeForces/Maximum Cost Deletion.cpp
@JayantGoel001
JayantGoel001 Initial Commit
Latest commit a15f2e4 on Jul 15, 2021
 History
 1 contributor
51 lines (48 sloc)  1.14 KB
 
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
 
int GCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}
 
int power(int x, int y, int MOD = INF) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x) % MOD, y / 2) % MOD;
    } else {
        return (x * power((x * x) % MOD, (y - 1) / 2) % MOD) % MOD;
    }
}
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
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About