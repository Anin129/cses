#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void FW(vector<vector<ll>> &wt, ll n){
    for(ll i =1; i<=n; i++){
        for(ll j =1; j<=n; j++){

            if(i==j){
                wt[i][j]=0;
            }
        }
    }

        for(ll k =1; k<=n; k++){
            for(ll i=1; i<=n; i++){
                for(ll j=1; j<=n; j++){
                    if(wt[i][k]==LLONG_MAX || wt[k][j]==LLONG_MAX )
                    {
                        continue;
                    }
                    wt[i][j] = min(wt[i][j],(wt[i][k]+wt[k][j]));
                }
            }
        }

        for(ll i =1; i<=n; i++){
        for(ll j =1; j<=n; j++){

            if((wt[i][j]==LLONG_MAX))
            wt[i][j]=-1;

        }
    
}
    }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m, q;
    cin>> n >>m >> q;
    vector<vector<ll>>wt(n+1,vector<ll>(n+1,LLONG_MAX));
    for(ll i=0; i<m; i++){
        ll a, b , c;
        cin >>a >> b >>c;
        wt[a][b]=min(c,wt[a][b]);
        wt[b][a]=min(c,wt[b][a]);
    }

    FW(wt,n);
    while(q--){
        ll s, e;
        cin >> s >> e;
        cout<<wt[s][e]<<endl;


    }
}