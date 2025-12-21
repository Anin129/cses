#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll func(ll i,ll sum1, ll sum2, vector<ll>&arr, ll n){
    if(i==n){
        return abs(sum1-sum2);
    }

        ll pick =func(i+1, sum1+arr[i], sum2, arr, n);
        ll notpick =func(i+1,sum1, sum2+arr[i], arr, n);
        ll ans= min(pick, notpick);
        return ans;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<func(0,0,0,arr,n);
    
}