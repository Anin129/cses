#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,t;
    cin>>n >>t;
    vector<pair<ll,ll>>v;
    for(ll i=0; i<n; i++)
    {   ll a;
        cin>>a;
        v.push_back({a,i});
    }
    sort(v.begin(),v.end());
    ll sum;
    for(ll i =0; i<=n-4; i++)
    {
        for(ll j=i+1;j<=n-3; j++)
        {   ll k=j+1;
            ll l=n-1;
            while(k<l)
            {
                sum= v[i].first+v[j].first+v[k].first+v[l].first;
                if(sum==t)
                {
                    cout<<v[i].second +1<<" "<<v[j].second +1<<" "<<v[k].second+1<<" "<<v[l].second+1;
                    return 0;
                }
                else if(sum<t)
                {
                    k++;
                }
                else if(sum>t)
                {
                    l--;
                }

            }
        }
    }
    cout<<"IMPOSSIBLE";

}

