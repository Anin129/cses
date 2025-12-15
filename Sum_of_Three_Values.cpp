#include <bits/stdc++.h>
using namespace std;
using ll=long long;
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
    vector<vector<ll>>as(n,vector<ll>(2));
    for(ll i=0; i<n; i++)
    {
        as[i][0]=arr[i];
        as[i][1]=i+1;
        
    }
    sort(as.begin(), as.end());
    for( ll i=0; i<n-2;i++)
    {
        ll j= i+1;
        ll k=n-1;
        ll sum;
        while(j<k)
        {
            sum=as[i][0] +as[j][0] + as[k][0];

            if(sum == t)
            {
                cout<<as[i][1]<<" "<<as[j][1]<<" "<<as[k][1];
                return 0;
            }
            if(sum>t)
            {
                k--;
            }
             if(sum<t)
            {
                j++;
            }


        }


    }
    cout<<"IMPOSSIBLE";

}