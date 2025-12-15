#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool valid(ll r, ll c,vector<vector<char>> &grid,vector<vector<bool>> &vis )
{   ll n =grid.size();
    ll m =grid[0].size();
    if(r>=0 && c>=0 && r<n && c<m && grid[r][c] !='#' && !vis[r][c])
    {
        return true;
    }
    return false;
}

bool bfs(ll r, ll c,vector<vector<bool>> &vis ,vector<vector<char>> &grid, vector<vector<char>> &dir, vector<char> &path)
{
    queue<pair<int,int>>q;
    vis[r][c]= true;
    q.push({r,c});
    while(!q.empty())
    {
        int u = q.front(). first;
        int v = q.front().second;
        q.pop();
        if(grid[u][v]=='B')
        {
            while(1){
                path.push_back(dir[u][v]);
                if(path.back()=='U')
                {
                    u++;
                }
                if(path.back()=='D')
                {
                    u--;
                }
                if(path.back()=='L')
                {
                    v++;
                }
                if(path.back()=='R')
                {
                    v--;
                }

                if((u==r) && (v==c))
                {
                    break;
                }


            }
            return true;
        }
        
        
        if(valid(u-1,v,grid,vis)){
            dir[u-1][v] ='U';
            vis[u-1][v] = true;
            q.push({u-1,v});
        }
        if(valid(u+1,v,grid,vis)){
            dir[u+1][v] ='D';
            vis[u+1][v] = true;
            q.push({u+1,v});
        }
        if(valid(u,v-1,grid,vis)){
            dir[u][v-1] ='L';
            vis[u][v-1] = true;
            q.push({u,v-1});
        }
        if(valid(u,v+1,grid,vis)){
            dir[u][v+1] ='R';
            vis[u][v+1] = true;
            q.push({u,v+1});
        }
        
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
    vector<vector<char>>grid(n,vector<char>(m));
    for(ll i =0; i<n; i++)
    {
        for(ll j =0; j<m; j++)
        {
            cin>>grid[i][j];
        }

    }

    vector<vector<bool>>vis(n,vector<bool>(m));
    vector<char> path;
    vector<vector<char>> dir(n,vector<char>(m));

    for(ll i =0; i<n; i++)
    {
        for(ll j =0; j<m; j++)
        {
            if(grid[i][j] == 'A'){
                if(bfs(i, j, vis, grid,dir,path))
                {   

                    cout<<"YES"<<endl<<path.size()<<endl;
                    reverse(path.begin(),path.end());
                    for(auto v : path)
                    {
                        cout<<v;
                    }
                }
                else{
                    cout<<"NO";
                }

            }
        }

    }
}



    