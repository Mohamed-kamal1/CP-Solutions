#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int arr [4];
    for(int & i : arr){
        cin>>i;
    }
    int count = 0;
    for(int i = 0; i<4;i++){
        for(int j= i+1;j<4;j++){
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}