#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll bfs(ll node,vector<ll> &dist, vector<ll> adj[]){
    dist[node]=0;
    queue<ll>q;
    ll endpt = node;
    q.push(node);
    ll maxdist =0;
    while(!q.empty()){
        ll u = q.front();
        q.pop();
        for(auto v : adj[u]){
            if(dist[v]==-1)
            {q.push(v);
            dist[v]=dist[u]+1;
            if(dist[v]>maxdist){
                maxdist = dist[v];
                endpt = v;
            }
            
        }

        }

        
    }
    return endpt;
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   long long n;
    cin>>n;
    vector<ll> adj[n+1];
    for(ll i=0;i<n-1;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll>dist(n+1,-1);
    ll u = bfs(1,dist,adj);
    vector<ll>dist1(n+1,-1);
    ll v =bfs(u, dist1,adj);
    vector<ll>dist2(n+1,-1);
    ll fv = bfs(v, dist2, adj);
    for(ll i=1; i<=n; i++){
        cout<<(max(dist1[i],dist2[i]))<<" ";
    }
}
