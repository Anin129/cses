#include <bits/stdc++.h>
using namespace std;
using ll = long long;



ll d_bfs(ll node,vector<ll> &dist,vector<ll>adj[],ll &maxd){
    queue<ll>q;
    dist[node]=0;
    q.push(node);
    ll far_node=node;
    while(!q.empty()){
        ll node = q.front();
        q.pop();
        for(auto v : adj[node]){
            if(dist[v]==-1)
            {
                q.push(v);
                dist[v] = dist[node] + 1;
                if(dist[v]>maxd){
                    maxd = dist[v];
                
                far_node=v;
                }
               
            }
        }
    }
    return far_node;
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
    ll maxdist = 0;
    ll st_node = d_bfs(1,dist,adj,maxdist);
    ll newmax = maxdist;
    vector<ll>dist2(n+1,-1);
    ll end_node = d_bfs(st_node,dist2 ,adj, newmax);
    cout<<newmax;

}