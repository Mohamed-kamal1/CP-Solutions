#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int n,m; cin>>n>>m;
    int arr[m];
    int ans =10000;
    for(int i=0;i<m;i++){
        cin >>arr[i];
    }
    sort(arr,arr+m);
    for(int i=0;i<=m-n;i++){
           ans = min(ans,abs(arr[i]-arr[i+n-1]));
    }
    cout<<ans;
    return 0;
}