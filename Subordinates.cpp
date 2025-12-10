#include <bits/stdc++.h>
using namespace std;

void dfs(int i, map<long long, long long> &mp ,vector<int> adj[])
{
    for(auto it: adj[i])
    {
        dfs(it, mp, adj);
        mp[i]+= mp[it]+1;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   long long n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i< n;i++)
    {
        cin >> arr[i];
    }
    vector<int> adj[n+1];
    for(int i=0;i<n-1;i++)
    {
        
        adj[arr[i]].push_back(i+2);
        
    }
    map<long long, long long>mp;
    dfs(1, mp ,adj);
    for(auto it: mp)
    {
        cout<< it.second << " ";
    }
    }




