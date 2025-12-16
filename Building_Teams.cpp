#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool bfs(ll node, vector<ll> &vis, vector<ll>adj[])
{
    vis[node]=1;
    queue<ll>q;
    q.push(node);
    while(!q.empty())
    {
        ll u = q.front();
        q.pop();
        for(auto v : adj[u])
        {
            if(vis[v]== -1)
            {
                q.push(v);
                if(vis[u]==1)
                {
                    vis[v]=2;
                }
                else{
                    vis[v]=1;
                }
            }
            if(vis[u]==vis[v])
            {
                return false;
            }
        }
    }
    return true;

}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
ll n, m;
cin>>n >>m;
vector<ll>adj[n+1];
for(ll i=0; i<m; i++)
{
    ll u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
vector<ll>vis(n+1,-1);
ll f=0;
for(ll i=1; i<=n; i++)
{
    if(vis[i]==-1)
    {
        if(bfs(i,vis,adj))
        {
            f=1;
        }
        else{
            f=0;
            break;
        }
    }

}
if(f)
{
    for(ll i=1;i<=n;i++)
    {
        cout<<vis[i]<<" ";
    }
}
else{
    cout<<"IMPOSSIBLE";
}
        
    
}