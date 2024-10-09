#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    string s,t;
    cin >> s>>t;
    string temp = s;
    reverse(temp.begin(), temp.end());
    if (t == temp)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}