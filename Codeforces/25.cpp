#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    string s1,s2;cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
        cout<<(s1[i] ^ s2[i]);
 
    return 0;
}