#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
const int MOD = 1000000007;
const int MAX = 1000001;
bool prime[MAX];
 
void sieve ()
{
    int i,j;
    prime[0] = prime[1] = true;
 
    for (i=4; i<MAX; i+=2)
        prime[i] = true;
 
    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    sieve ();
    int t;cin>>t;
 while (t--){
 
        ll n,r;
        cin>>n;
        r = sqrt(n);
 
        if (!prime[r] && r*r == n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
 
 }
 
 
return 0;
}
 
 
 
 
 