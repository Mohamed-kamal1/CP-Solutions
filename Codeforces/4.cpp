#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
 
void solve(){
   int n,m;
   cin >> n >> m;
   bool right = true;
 
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
           if(i%2==0){
               cout << "#";
           }
           else{
               if(right){
                   if(j==m-1){
                       cout << "#";
                   }
                   else{
                       cout << ".";
                   }
               }
               else{
                   if(j==0){
                       cout << "#";
                   }
                   else{
                       cout << ".";
                   }
               }
           }
       }
       if(i%2==1){
           right = !right;
       }
       cout << endl;
   }
 
}
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int t=1;
//    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
 
 
 