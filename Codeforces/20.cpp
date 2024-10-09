#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int n ;cin>>n;
    set<int> s{};
    int p;cin>>p;
    while(p--) {
        int a;cin>>a;
        s.insert(a);
    }
    cin>>p;
    while(p--) {
        int a;cin>>a;
        s.insert(a);
    }
    if(s.size()==n)
        cout<< "I become the guy.";
    else
        cout<<"Oh, my keyboard!";
 
    return 0;
}