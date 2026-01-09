#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        ll n,k;
        cin >> n >> k;
        vector<ll>arr(n);
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        map<ll,ll>mp;
        ll l=0;
        ll r=0;
        ll ans =0;
        while(r<n){
            mp[arr[r]]++;
            if(mp.size()<=k){
                ans+=(r-l+1);
                r++;
            }
            else{
                     while(mp.size()>k)
                     {
                        mp[arr[l]]--;
                        if(mp[arr[l]]==0)
                        {
                            mp.erase(arr[l]);
                        }
                        l++;
                     }
                    
                    ans+=(r-l+1);
                    r++;

                }
            }
            cout<<ans;
        }
        
        