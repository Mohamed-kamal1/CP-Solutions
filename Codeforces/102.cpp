#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long
 
 
 
 
void solve() {
  int n;cin>>n;
    vector<int> ans;
    int count = 0;
    while (n > 0){
        int power = (int) (pow(10,count));
        int temp = n%10;
        n /= 10;
        if (temp){
            ans.push_back(temp * power);
        }
        count++;
    }
    cout<<ans.size()<<endl;
    for (int an : ans){
        cout<<an<<" ";
    }
    cout<<endl;
 
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t=1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
 
 
 