#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    string s;cin>>s;
 
    for(int i=0;i<s.length();i++){
            if(s.at(i)=='0'){
                s.replace(i,1,"");
                break;
            }
    }
    cout<<s;
 
 
 
    return 0;
}