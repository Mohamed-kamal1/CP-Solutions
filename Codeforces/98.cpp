#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    string s ;
    cin >>s;
    set<char> st;
    for(int i=0;i<s.length();i++){
        st.insert(s[i]);
    }
    if(st.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else
        cout<<"IGNORE HIM!";
 
    return 0;
}