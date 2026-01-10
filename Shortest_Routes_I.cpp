#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dij(ll v , ll s, vector<pair<ll,ll>> adj[],vector<ll> &d){
    set<pair<ll,ll>>st;
    st.insert({s,v});
    d[v]=s;
    while(!st.empty()){
        auto it = *(st.begin());
        ll node = it.second;
        ll dist = it.first;
        st.erase(it);
        for(auto v : adj[node])
         {
            ll c = v.first;
            ll l = v.second;
            if((l+dist)<d[c]){
                if(d[c]!=LLONG_MAX){
                    st.erase({d[c],c});
                }
                d[c]=l+dist;
                st.insert({dist+l,c});

            }


        }


    }
   

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin>> n >>m;
    vector<pair<ll,ll>>adj[n+1];
    for(ll i=0;i<m;i++){
        ll a, b, w;
        cin >> a>>b>>w;
        adj[a].push_back({b,w});

    }
    vector<ll>d(n+1,LLONG_MAX);
    dij(1,0,adj,d);
    for(ll i=1; i<=n;i++){
        cout<<d[i]<<" ";

    }
}