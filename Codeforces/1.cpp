#include <map>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <math.h>
#include <climits>
#include <queue>
#include <iomanip>
#include <vector>
#define ll long long
#include <stdio.h>
using namespace std;
 
double a[10000];
double b[10000];
 
int main()
{
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    //for(int i=0;i<n;i++)
    //    cout<<a[i]<<" ";
    //cout<<endl;
    for(int i=0;i-1<n;i++)
    {
        int j=i+1;
        b[i]=(a[j]-a[i])/2;
    }
    if(a[0]!=0)
        b[n]=a[0];
    else
        b[n]=a[0]/2;
    if(a[n-1]!=m)
        b[n+1]=m-a[n-1];
    else b[n+1]=(m-a[n-1])/2;
    double ans=0;
    for(int i=0;i<=n+1;i++)
        ans=max(ans,b[i]);
    printf("%.10lf",ans);
    return 0;
}