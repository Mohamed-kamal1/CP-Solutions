#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
void solve(){
    string s;cin>>s;
    int n=s.size();
    bool test = true;
    if(n == 1){
        if(islower(s[0]))
            s[0] = toupper(s[0]);
        else
            s[0] = tolower(s[0]);
        cout<<s<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(islower(s[i])){
            test = false;
            break;
        }
    }
    if(test){
        for(int i=0;i<n;i++){
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            }
            else{
                s[i] = tolower(s[i]);
            }
        }
    }
    cout<<s<<endl;
 
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t=1;
    //cin >> t;
 
    while (t--){
        solve();
    }
    return 0;
}
 
 
 
 