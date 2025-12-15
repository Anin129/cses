#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >>n ;
    vector<ll>arr(n);
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    multiset<ll>mt;
    ll cnt =0;
    for(int i=0;i<n;i++)
    {
        auto ub =mt.upper_bound(arr[i]);
        if(ub == mt.end())
        {
            cnt++;
            mt.insert(arr[i]);
        }
        else
        {
            mt.erase(ub);
            mt.insert(arr[i]);
        }
    }
    cout<<cnt;
}