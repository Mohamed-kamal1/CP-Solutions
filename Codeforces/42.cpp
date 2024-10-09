#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int n;cin >> n;
    string s; cin >> s;
 
    int a = 0, d = 0;
 
    while (n--)
    {
        if (s[n] == 'A')
            a++;
        else
            d++;
    }
 
    if (a > d)
        cout << "Anton";
    else if (d > a)
        cout << "Danik";
    else
        cout << "Friendship";
 
    return 0;
}