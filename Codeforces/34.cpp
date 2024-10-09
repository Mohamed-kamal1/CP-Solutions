#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    string s;
    cin >> s;
    int pointer = 0;
 
 
    for (char letter : s) {
        if (letter == "hello"[pointer])pointer++;
 
 
        if (pointer == 5) {
            cout << "YES" << endl;
            return 0;
        }
    }
    if (pointer < 5) {
        cout << "NO" << endl;
    }
    return 0;
}