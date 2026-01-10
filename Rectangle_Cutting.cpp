#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll r, c;
    cin >> r >> c;
    vector<vector<ll>>dp(r+1,vector<ll>(c+1,1e9));
    for(ll i=1; i<=r; i++){
        for(ll j=1; j<=c;j++){
            if(i==j){
                dp[i][j]=0;
                continue;
            }
            for(ll v=1; v<j; v++){
                dp[i][j]=min(dp[i][j],dp[i][v]+dp[i][j-v] +1);
            }
            for(ll h=1; h<i; h++){
                dp[i][j]=min(dp[i][j],dp[h][j]+dp[i-h][j] +1);
            }
        }

    }
    cout<<dp[r][c];
}
