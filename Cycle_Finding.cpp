#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll prevup =0;

bool bellf(vector<vector<ll>> &edge, vector<ll> &d , vector<ll>&parent, ll n){
    
    for(ll i=0; i<n-1; i++){
        for(auto x : edge){
            ll u = x[0];
            ll v = x[1];
            ll wt = x[2];
            if(wt+d[u]<d[v]){
                d[v]= wt + d[u];
                parent[v]=u;
            }


        }
    }
    for(auto x : edge){
        ll u = x[0];
        ll v = x[1];
        ll wt = x[2];
        if(wt+d[u]<d[v]){
            parent[v]=u;
             prevup = v;
            return true;
            }
    }
    return false;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin>> n >>m;
    vector<vector<ll>>edge;
    for(ll i=0; i<m; i++){
        ll u, v, wt;
        cin >> u >> v >> wt;
        edge.push_back({u,v,wt});
    }
    vector<ll>parent(n+1,0);
    vector<ll>d(n+1,0);
    vector<ll>ans;
    if(bellf(edge,d,parent,n))
    {
        for(ll i=0; i<n; i++){
            prevup = parent[prevup];
        }
        ll temp = parent[prevup];
        ans.push_back(prevup);
        while(temp!=prevup){
            ans.push_back(temp);
            temp=parent[temp];
        }
        ans.push_back(prevup);
        reverse(ans.begin(), ans.end());
        cout<<"YES"<<endl;
        for(auto x : ans){
            cout<<x<<" ";
        }



    }
    else{
        cout<<"NO";
    }

}


