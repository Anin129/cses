#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
            ll n;
            cin >> n;
            vector<ll>arr(n,0);
            for(ll i=0; i<n;i++){
                cin>>arr[i];
            }
            vector<ll>temp;
            ll ans=1;
            temp.push_back(arr[0]);
            for(ll i=1; i<n; i++){
                if(temp.back()<arr[i]){
                    temp.push_back(arr[i]);
                    ans++;
                }
                else{
                    ll lbind = lower_bound(temp.begin(), temp.end(),arr[i])-temp.begin();
                    temp[lbind] = arr[i];
                }
            }
            cout<<ans;
        }
    