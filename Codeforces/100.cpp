#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
 
    int t =1;
    while(t--){
        string s ;cin >>s;
        int m ; cin >>m;
        while(m--){
            int l,r; cin>>l>>r;
            int count =0;
            for(int i=l-1;i<r;i++){
                if (i+1<r && s.at(i)==(s.at(i+1)))count++;
            }
            cout<<count<<'\n';
        }
    }
 
    return 0;
}