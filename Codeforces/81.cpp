#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    string s;cin>>s;
    int n =s.length();
 
    for(int i=0;i<n;i++){
            if(s.at(i)=='0'){
                s.replace(i,1,"");
                break;
            }
    }
    if(n==s.length()){
        s.replace(n-1,1,"");
    }
    cout<<s;
 
 
 
    return 0;
}