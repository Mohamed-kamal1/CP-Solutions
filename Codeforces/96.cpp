#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
   map<string,string>mp;
   int q;cin>>q;
   string s[q];
   for(int i=0;i<q;i++)
        cin>>s[i];
 
 for (int i=q-1;i>=0;i--) {
    if(mp[s[i]]==""){
        cout<<s[i]<<'\n';
    }
    mp[s[i]]=s[i];
  }     return 0;
}