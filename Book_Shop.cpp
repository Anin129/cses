#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
            ll n, x;
            cin >> n >>x;
            vector<ll>price(n,0);
            vector<ll>page(n,0);
            for(ll i =0; i<n; i++){
                cin>> price[i];
            }
            for(ll i =0; i<n; i++){
                cin>> page[i];
            }
            vector<ll>prev(x+1,0);
            vector<ll>curr(x+1,0);
            for(ll i=1; i<=n;i++){
                for(ll sum =0; sum<=x; sum++){
                    ll take =0;
                    if(sum-price[i-1]>=0){
                         take = page[i-1]+prev[sum-price[i-1]];
                    }
                    ll nottake = prev[sum];
                    curr[sum]=max(take,nottake);
                }
                prev=curr;
                
            }
            cout<<curr[x];
        }
    