#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int n;
    cin >> n;
 
    int x = 0;
    double sum = 0;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }
    cout<<setprecision(10)<<sum/n<<endl;
 
    return 0;
}