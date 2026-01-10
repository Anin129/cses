#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll n,m;
vector<vector<char>> grid;
vector<vector<ll>> dir;
vector<vector<ll>> distp, distm;
ll closestr, closestc, closestdist=LLONG_MAX;
ll pr, pc;
vector<char> ans;

void addends(vector<pair<ll,ll>> &ends)
{
    for(ll i=0; i<m;i++)
    {
        if(grid[0][i] == '.')
        {
            ends.push_back({0,i});
        }
    }           
    for(ll i=0; i<m; i++)
    {
        if(grid[n-1][i] == '.')
        {
            ends.push_back({n-1,i});
        }
    }
    for(ll i=0; i<n;i++)
    {
        if(grid[i][0] == '.')
            ends.push_back({i,0});
    }
    for(ll i=0; i<n; i++)
    {
        if(grid[i][m-1]== '.')
        {
            ends.push_back({i,m-1});
        }
    }
}


bool valid(ll i, ll j)
{
    return (i>=0 && i<n && j>=0 && j<m && grid[i][j]!= '#');
}

void bfs(vector<vector<ll>> &dist, queue<pair<ll,ll>> &q)
{
    while(!q.empty())
    {
        ll r= q.front().first;
        ll c = q.front().second;
        q.pop();
        vector<ll>dr={-1,0,1,0};
        vector<ll>dc={0,1,0,-1};

        for(ll i=0; i<4; i++)
        {
            ll newr= r+dr[i];
            ll newc= c+dc[i];
            if(valid(newr,newc) && dist[newr][newc] > dist[r][c]+1)
            {
                dist[newr][newc] = dist[r][c]+1;
                q.push({newr,newc});
                dir[newr][newc]=i;
            }
        }
    }
}

void path()
{
    ll r=closestr, c=closestc;
    string help= "URDL";
    while(r!= pr || c!=pc)
    {
        ans.push_back(help[dir[r][c]]);
        if(dir[r][c] == 0) r+=1;
        else if(dir[r][c] == 1) c-=1;
        else if(dir[r][c] == 2) r-=1;
        else c+=1;
    }
    reverse(ans.begin(), ans.end());
}

int main()
{
    cin>>n>>m;
    grid.resize(n,vector<char>(m));
    distp.resize(n,vector<ll>(m, LLONG_MAX));
    distm.resize(n,vector<ll>(m, LLONG_MAX));
    dir.resize(n,vector<ll>(m));
    queue<pair<ll,ll>> mons;
    queue<pair<ll,ll>> per;
    bool cornerA= false;
    for(ll i=0; i<n;i++)
    {
        for(ll j=0; j<m; j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]== 'A')
            {
                distp[i][j]=0;
                pr= i;
                pc=j;
                if(i==0 || j==0 || i==n-1 || j==m-1)
                    cornerA= true;
            }
            else if(grid[i][j] == 'M')
            {
                distm[i][j]=0;
                mons.push({i,j});
            }
        }
    }
    per.push({pr,pc});
    bfs(distm, mons);
    bfs(distp, per);
    vector<pair<ll,ll>> ends;
    addends(ends);
    for(auto it: ends)
    {
        ll r= it.first;
        ll c= it.second;
        if(distm[r][c] > distp[r][c] && closestdist>distp[r][c])
        {
            closestdist=distp[r][c];
            closestr=r;
            closestc=c;
        }
    }
    if(cornerA)
    {
        cout<<"YES"<<endl <<"0"<<endl;
        return 0;
    }
    if(closestdist== LLONG_MAX)
    {
        cout<<"NO"<< endl;
        return 0;
    }
    path();
    cout<<"YES"<< endl<<ans.size() <<endl;;
    for(auto it: ans)
        cout<<it;
    cout<< endl;
    return 0;
}