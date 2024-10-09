#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int n;cin >>n;
    int x ; cin >>x;
 
    while(n--){
        int a; cin>>a;
        int b;cin>>b;
        if(7-a == x || a == x|| b==x ||7-b == x){
            cout<<"NO";
            return 0;
        }
 
    }
    cout<<"YES";
 
 
 
 
   return 0;
}