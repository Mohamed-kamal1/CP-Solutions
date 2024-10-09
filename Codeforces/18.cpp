#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
void solve(){
    int n,m;cin>>n>>m;
    string s1,s2;cin>>s1>>s2;
    int n1= s1.size(), n2= s2.size();
    int count = 0;
 
    for(int i=0;i<n1-1;i++){
        if(s1[i] != s1[i+1]){
            count++;
            }
        }
    if(count== n-1){
        cout<<"YES"<<endl;
        return ;
    }
 
    if(s2[0] != s2[n2-1]){
        cout<<"NO"<<endl;
        return ;
    }
    for(int i=1;i<n2;i++){
        if(s2[i]==s2[i-1]){
            cout<<"NO"<<endl;
            return ;
        }
    }
    for(int i=0;i<n1-1;i++){
        if(s1[i] == s1[i+1]){
            if(s1[i] == s2[0]){
                cout<<"NO"<<endl;
                return ;
            }
        }
    }
    cout<<"YES"<<endl;
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t;cin>>t;
    while (t--){
        solve();
    }
    return 0;
}
 
 
 