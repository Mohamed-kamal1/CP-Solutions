#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        map<int, int> mp;
        int n;
        cin >> n;
        for (int i = 0; i < n;i++){
            int x;
            cin >> x;
            mp[x]++;
        }
 
        vector<int> arr;
        for (auto p : mp)
            arr.push_back(p.second);
 
        sort(arr.begin(), arr.end());
 
        int ans = INT_MAX;
        int size = mp.size();
 
        for (int i = 0; i < size; i++)
        {
            int greater_equal_element_count = size - i;
            ans = min(ans, n - (arr[i] * greater_equal_element_count));
        }
        cout << ans << "\n";
    }
    return 0;
}