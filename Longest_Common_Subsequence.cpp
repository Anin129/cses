#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >>m;
    vector<ll>a(n);
    vector<ll>b(m);
    for(ll i=0;i<n; i++){
        cin>>a[i];
    }
    for(ll i=0;i<m; i++){
        cin>>b[i];
    }
    vector<vector<ll>>dp(n+1,vector<ll>(m+1,0));

    for(ll i=1; i<=n; i++){
        for(ll j=1;j<=m; j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    vector<ll>ans;
    ll i=n;
    ll j=m;
    while(i>0 && j>0){
        if(a[i-1]==b[j-1]){
            ans.push_back(a[i-1]);
            i--;
            j--;

        }
        else{
            if(dp[i][j-1] > dp[i-1][j]){
                j--;
            }
            else{
                i--;
            }
        }
    }
    reverse(ans.begin(),ans.end());

    cout<<ans.size()<<endl;
    for(auto x : ans){
        cout<<x<<" ";
    }
}