#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
 
    long long n;cin >> n;
    long long ans ;
    if(n%2==0){
        ans =n/2;
    }
    else ans = -(n+1)/2;
 
        cout << ans;
 
    return 0;
}