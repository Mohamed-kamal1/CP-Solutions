#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    string s ;
    getline(cin,s);
    set<char>st;
    for(int i=1;i<s.length()-1;i=i+3){
        st.insert(s[i]);
    }
    cout<<st.size();
 
 
    return 0;
}