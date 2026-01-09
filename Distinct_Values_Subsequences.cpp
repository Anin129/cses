#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll m = 1e9+7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
            ll n;
            cin >> n;
            vector<ll>arr(n);
            map<ll,ll>mp;
            for(ll i=0; i<n; i++){
                cin>>arr[i];
                mp[arr[i]]++;
            }
            ll cnt =1;
            for(auto it : mp){
                cnt= (cnt*(it.second +1))%m;
            }
            cout<<(cnt-1)%m;
        }
    
