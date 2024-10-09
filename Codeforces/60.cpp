#include <bits/stdc++.h>
using namespace std;
#define ll long long
   const int inf=0x3f3f3f3f;
 
const int N=1e5+100;
 
int cnt[30];
 
void solve(int num)
{
 for(int i=0;i<30;i++)
  cnt[i]+=((num>>i)&1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
 
 
    int t=1;
    while(t--){
 
 
 
 
 
 
 
 int n;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
  int num;
  cin>>num;
  solve(num);
 }
 ll ans=0;
 for(int i=1;i<=n;i++)
 {
  ll num=0;
  for(int j=0;j<30;j++)
  {
   if(cnt[j])
   {
    cnt[j]--;
    num|=(1<<j);
   }
  }
  ans+=num*num;
 }
 cout<<ans;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}
 
 
    return 0;
}