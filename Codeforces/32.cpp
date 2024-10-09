#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int n;cin >> n;
 
    vector<int> coins(n);
 
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
 
    sort(coins.begin(), coins.end());
 
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += coins[i];
    }
 
    int your_sum = 0;
    int twin_sum = total_sum;
 
    for (int i = n - 1; i >= 0; i--) {
        your_sum += coins[i];
        twin_sum -= coins[i];
        if (your_sum > twin_sum) {
            cout << n - i << endl;
            break;
        }
    }
    return 0;
}