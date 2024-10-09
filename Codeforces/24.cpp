#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int n ;cin>>n;
    string ans;
    bool h = true;
    while(n--){
        ans += "I ";
        if(h)ans+="hate ";
        else ans+="love ";
        h = !h;
        if(n!=0)ans+="that ";
        else ans+="it";
    }
    cout<<ans;
    return 0;
}