#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        ll n;
        cin >> n;
        vector<vector<ll>>grid(n,vector<ll>(n,0));
        for(ll i=0; i<n; i++){
            for(ll j=0; j<n; j++){
                grid[i][j]=i^j;
            }
        }
        for(ll i=0; i<n; i++){
            for(ll j=0; j<n; j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
    }