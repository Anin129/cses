#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>v(n);
    vector<ll>count(1e6,0);
    for( ll i=0; i<n; i++){
        cin>>v[i];
        count[v[i]]++;

    }
    ll f=0;
    ll ans =0;
    for(ll i=1e6; i>=1; i--){
        ll cnt =0;
        for(ll j=i; j<=1e6; j+=i){
            
                cnt+=count[j];
            }
        
        if(cnt>=2){
            ans = i;
            break;
        }
    }

    
    cout<<ans;
}