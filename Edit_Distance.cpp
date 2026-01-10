#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    ll n = s.length();
    ll m = t.length();
    vector<vector<ll>>dp(n+1,vector<ll>(m+1,0));
    for(ll i=0; i<=n; i++){
        dp[i][0]=i;
    }
    for(ll j=0; j<=m; j++){
        dp[0][j]=j;
    }

    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            if(s[i-1]==t[j-1]){
                dp[i][j]=dp[i-1][j-1];

            }
            else{
                dp[i][j]=1+min(dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j]));
            }
        }
    }
    cout<<dp[n][m];
}