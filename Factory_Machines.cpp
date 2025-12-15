#include <bits/stdc++.h>
using namespace std;
using ll=long long;

bool check(ll mid, vector<ll>arr, ll t)
{   ll sum =0;
    ll n= arr.size();
    for(ll i=0; i<n; i++)
    {
        sum+=(mid/arr[i]);
        if(sum>=t)
        {
            return true;
        }
    }
            return false;
        
    }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, t;
    cin >>n >>t;
    vector<ll>arr(n);
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ll l =1;
    ll h = t*(*min_element(arr.begin(),arr.end()));
    ll ans;
    while(l<=h)
    {
        ll mid =(h -l)/2 + l;
        if(check(mid,arr,t))
        {
            ans =mid;
            h = mid -1;
        }
        else
        {
            l =mid+1;
        }

    }
    cout<<ans;
}

