 
#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define ld long double
 
string tostr(int n) {stringstream rr;rr<<n;return rr.str();}
 
const int mod=1e9+7;
const int mxn=5e5+9;
const ld eps=1e-9;
ll a[mxn],n,range,k,d[mxn],tmp[mxn];
bool yo(ll x)
{
    ll i,j,sum=0,add;
    for(i=0;i<=n+1;i++) tmp[i]=d[i];
    for(i=1;i<=n;i++){
        tmp[i]+=tmp[i-1];
        if(tmp[i]<x){
            add=x-tmp[i];
            sum+=add;
            tmp[i]+=add;
            tmp[min(n+1,i+2*range+1)]-=add;
        }
        if(sum>k) return 0;
    }
    if(sum>k) return 0;
    else return 1;
}
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    ll i,j,m,ans=0,l,r,mid;
    cin>>n>>range>>k;
    for(i=1;i<=n;i++) cin>>a[i],d[max(1LL,i-range)]+=a[i],d[min(n+1,i+range+1)]-=a[i];
    l=0,r=3e18;
    while(l<=r){
        mid=l+(r-l)/2;
        if(yo(mid)) ans=mid,l=mid+1;
        else r=mid-1;
    }
    cout<<ans<<"\n";
    return 0;
}