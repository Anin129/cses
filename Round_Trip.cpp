#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll sn;
ll en;
bool dfs(ll node, ll p, vector<ll>adj[], vector<bool> &vis,  vector<ll> &par)
{
    vis[node]=true;
    par[node]=p;
    
    for(auto v : adj[node])
    {   
        if(!vis[v])
        {
            if(dfs(v,node, adj,vis,par))
            return true;
        }
        else{
            if(v!=p){
                sn = v;
                en = node;
                return true;
            }
        }
        


    }
    return false;
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, m;
    cin>>n >>m;
    vector<ll>adj[n+1];
    for(ll i=0; i<m; i++)
    {
        ll u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    vector<bool>vis(n+1,false);
    vector<ll>par(n+1);
    vector<ll>ans;
    ll f=0;
    for(ll i=1; i<=n; i++){
        if(!vis[i] && dfs(i,-1,adj, vis,par)){
            ll tempn = en;
            ans.push_back(sn);
            while(tempn != sn){
                ans.push_back(tempn);
                tempn=par[tempn];
            }
            ans.push_back(sn);
        cout<<ans.size()<<endl;
        for(auto v : ans){
            cout<<v<<" ";
        
        }
        return 0;
    }   
    
}
cout<<"IMPOSSIBLE";
}

