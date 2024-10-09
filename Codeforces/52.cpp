#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include<algorithm>
 
vector<int> divisors;
 
void get_divisors(int g)
{
    int rt = sqrt(g);
    for(int i = 1; i <= rt; ++i) {
        if(g % i == 0) {
            divisors.push_back(i);
            divisors.push_back(g/i);
        }
    }
    if(divisors.back() == rt) divisors.pop_back();  // rt appears twice.
    sort(divisors.begin(), divisors.end());
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
     int a, b;cin>>a>>b;
    get_divisors(__gcd(b, a));
    int n;cin>>n;
    int low, high;
    while(n--) {
            cin>>low>>high;
        int idx = upper_bound(divisors.begin(), divisors.end(), high) - divisors.begin();
        printf("%d\n", ((idx > 0 && low <= divisors[idx-1])? divisors[idx-1] : -1));
    }
 
return 0;
}
 
 
 
 
 