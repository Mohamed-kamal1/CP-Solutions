#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int t;cin >>t;
 
    while(t--){
        int n,d ; cin >>n>>d;
        int arr[n];
        int i=0;
        int min1= 10,min2=100;
        stack<int> s;
        while(i<n){
            cin>>arr[i];
            if(arr[i] < min1){
                min2=min1;
                min1=arr[i];
            }
            else if(arr[i]<min2){
                min2=arr[i];
            }
            if(arr[i]>d){
                    s.push(arr[i]);
            }
            i++;
        }
 
            if(d <min1+min2 && s.size())cout<<"NO\n";
            else cout<<"YES\n";
 
    }
 
 
 
 
   return 0;
}