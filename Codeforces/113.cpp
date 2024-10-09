#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int t ;cin>>t;
   while(t--){
            int mine=200000;
    int n ;cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin >>a[i];
    }
    for(int i = 0;i<n;i++){
            int temp=1;
        for(int j=i+1;j<n;j++){
            temp++;
            if(a[j]==a[i]){
                if(temp<mine)mine=temp;
                    break;
            }
        }
        if (mine==200000)mine=-1;
    }
    cout <<mine<<"\n";
   }
 
 
    return 0;
}