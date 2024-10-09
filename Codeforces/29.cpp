#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int n;cin >> n;
    vector<string> v(n);
    int count =1;
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
    for(int i=1;i<n;i++){
        if(v[i-1] != v[i]){
            count++;
        }
    }
    cout << count << endl;
 
    return 0;
}