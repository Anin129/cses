#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void dfs1(ll node, ll p, vector<ll>adj[], ll d, vector<ll> &ans, vector<ll> &subtree){
    ans[1]+=d;
    subtree[node]=1;

    for(auto v : adj[node]){
        if(v!=p){
            dfs1(v,node,adj,d+1,ans,subtree); 
            subtree[node]+=subtree[v];
        }
       

    }

}
void dfs2(ll node, ll p,vector<ll>adj[],vector<ll> &subtree,vector<ll> &ans ,ll n){

    for(auto v : adj[node]){
        if(v!=p){
            ans[v]=ans[node]-subtree[v]+(n-subtree[v]);
            dfs2(v,node,adj,subtree,ans,n);
            
        }

    }


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
    vector<ll>ans(n+1,0);
    vector<ll>subtree(n+1,0);
    dfs1(1,-1,adj,0,ans,subtree);
    dfs2(1,-1,adj,subtree,ans,n);
    for(ll i=1; i<=n; i++){
        cout<<ans[i]<<" ";

    }
}
