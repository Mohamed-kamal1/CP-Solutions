#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    char a;cin >>a;
    string s ; cin>>s;
    string key="qwertyuiopasdfghjkl;zxcvbnm,./";
    string answer;
    for(int i=0;i<s.length();i++){
            int index=key.find(s[i]);
         if(a=='R')
             answer+=key[index-1];
            else
       answer+=key[index+1];
 
    }
    cout<<answer;
 
    return 0;
}