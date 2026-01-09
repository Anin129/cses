#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

// ll solve(ll sum, vector<ll> &arr, ll n, vector<ll> &dp){
//     if(sum==0){
//         return 1;
//     }
//     if(dp[sum]!=-1){
//         return dp[sum];
//     }
//     ll totw=0;
//     for(int i=0; i<n; i++){
//         if(sum-arr[i]>=0){
//         ll pick = solve(sum-arr[i], arr, n, dp);
//         totw+= pick ;
//     }
//     }
//     return dp[sum]=totw;
   
    
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, t;
    cin >>n >>t;
    vector<ll>arr(n);
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<ll>dp((t+1),0);
    dp[0]=1;
    for(ll sum=1; sum<=t;sum++){
        for(ll i=0; i<n; i++){
            if(sum-arr[i]>=0){
                dp[sum]= (dp[sum]+dp[sum-arr[i]])%mod;
            }
        }
    }
    cout<<dp[t]%mod;
    
}
    