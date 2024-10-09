#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int t=1;
 while (t--){
  ll n, m;
  cin>>n>>m;
  int count=0;
  if(m%n!=0)count=-1;
  else{
            ll x = m/n;
            while(x!=1){
                if(x%3==0){
                    x/=3;
                    count++;
                }
                else if (x%2==0){
                    x/=2;
                    count++;
                }
                else{
                    count = -1;
                    break;
                }
            }
  }
  cout<<count;
 }
 
 
return 0;
}
 
 
 
 
 