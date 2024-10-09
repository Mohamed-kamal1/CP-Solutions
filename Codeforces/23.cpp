#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int n ;cin>>n;
    int arr [n];
    for(int & i : arr){
        cin>>i;
    }
    sort(arr,arr+n);
 
    for(int & i : arr){
        cout<<i<<' ';
    }
 
    return 0;
}