#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int q; cin>>q;
    map<string,int>m;
    while(q--){
        string name;cin>>name;
        if(!m.count(name)){
                cout<<"OK\n";
            m.emplace(name,1);
        }
        else{
            string s = name + to_string(m[name]) ;
            m[name]++;
            cout<<s<< "\n";
        }
    }
 
    return 0;
}