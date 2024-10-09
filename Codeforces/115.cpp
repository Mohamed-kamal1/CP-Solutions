#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int t; cin>>t;
 
    while(t--){
        string b,s;
        int n;
        cin>>n>>b;
        for(int i=0; i<n; i++){
            if(i > 0){
                if(b[i] == '1'){
                    if(b[i-1] == '1' && s[i-1] == '1'){
                        s += '0';
                    }
                    else{
                        s += '1';
                    }
                }
                else{
                    if(s[i-1] == '0' && b[i-1] == '1'){
                        s += '0';
                    }
                    else if(s[i-1] == '1' && b[i-1] == '0'){
                        s += '0';
                    }
                    else if(s[i-1] == '1' && b[i-1] == '1'){
                        s += '1';
                    }
                    else if(s[i-1] == '0' && b[i-1] == '0'){
                        s += '1';
                    }
                    else{
                        s += '0';
                    }
                }
            }
            else{
                s += '1';
            }
        }
        cout<<s<<endl;
    }
 
 
    return 0;
}