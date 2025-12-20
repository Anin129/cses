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
    vector<ll>arr(n);
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    unordered_map<ll,ll>mp;
    vector<ll>pref(n+1);
    mp[0]++;
    ll ans =0;
    for(ll i=0; i<n; i++)
    {
        pref[i+1] = ((pref[i]+arr[i])%n+n)%n;
        ans+=mp[pref[i+1]];
        mp[pref[i+1]]++;
        
    }
    cout<<ans<<endl;
    return 0;
}

    