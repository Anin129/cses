#include <bits/stdc++.h>
using namespace std;
using ll = long long;


// ll solve(ll n, vector<ll> &dp){
        
//     if(n==0)
//     {
//         return 0;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     ll ans = INT_MAX;
//     string s = to_string(n);
//     for(ll i=0; i<s.length(); i++){
//         if(s[i]=='0'){
//             continue;
//         }
//         ll pick=1+solve(n-(s[i]-'0'),dp);
//         ans =min(pick,ans);
//     }
//     return dp[n]=ans;

// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll>dp(n+1,LLONG_MAX);
    dp[0]=0;
    for(ll i=1; i<=n; i++){
        string s = to_string(i);
        for(ll j=0;j<s.length();j++){
            if(s[j]=='0'){
            continue;
         }
         dp[i]=min(dp[i],1+dp[i-(s[j]-'0')]);
        }
    

    }
    cout<<dp[n];
}
