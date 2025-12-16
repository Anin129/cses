#include<bits/stdc++.h>
using namespace std;
using ll= long long;

bool topo(vector<ll>adj[], vector<ll> &ans, ll n)
{
    vector<ll>indeg(n+1,0);
    for(ll i=0;i<=n; i++)
    {
        for(auto v : adj[i])
        {
            indeg[v]++;
        }
    }
    queue<ll>q;
    for(ll i=0; i<=n; i++)
    {
        if(indeg[i]==0)
        {
            q.push(i);
        }

    }

    while(!q.empty())
    {
        ll node =q.front();
        q.pop();
        ans.push_back(node);
        for(auto v :adj[node])
        {
            indeg[v]--;
            if(indeg[v]==0)
            {
                q.push(v);
            }
        }

    }

    if(ans.size()-1==n)
    {
        return true;
    }
    
        return false;
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    vector<ll>adj[n+1];
    for(ll i =0; i<m; i++ )
    {
        ll u,v;
        cin>> u>> v;
        adj[u].push_back(v);
    }
    vector<ll>ans;
    if(topo(adj,ans,n))
    {
        for(ll i=1; i<=n; i++)
        {
            cout<<ans[i]<<" ";
        }
    }
    else{
        cout<<"IMPOSSIBLE";
    }
    

    }

