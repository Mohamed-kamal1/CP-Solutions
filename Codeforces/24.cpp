#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    string s;cin>>s;
    for(char i : s){
        if(i=='H' || i == 'Q' || i == '9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}