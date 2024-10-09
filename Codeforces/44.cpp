#include <bits/stdc++.h>
 
 
using namespace std;
#define ll long long
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    string s;cin>>s;
    int n=s.size();
    int count=1;
 
    for (int i = 1;i<n;i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            count=1;
        }
        if(count==7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
        return 0;
}