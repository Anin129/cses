#include<bits/stdc++.h>
using namespace std;


void dfs(long long r, long long c, long long n, long long m, vector<vector<bool>> &vis, vector<vector<char>> &grid)
{
    vis[r][c]=true;
    int dr[] = {-1, 0, 1, 0};
    int dc[]= {0, 1, 0, -1};
    for( int i =0; i<4; i++)
    {
        long long row= r+dr[i];
        long long col= c+dc[i];
        if(row>=0 && row<n && col>=0 && col<m && grid[row][col]!= '#' ){
            if(!vis[row][col])
            {
                dfs(row, col, n, m, vis, grid);
            }
        }
    
        
    }

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, m;
    cin>>n >>m;
    vector<vector<char>>grid(n,vector<char>(m));
    for(long long i =0; i<n; i++)
    {
        for(long long j=0; j<m; j++)
        {
            cin>>grid[i][j];
        }
    }
    vector<vector<bool>>vis(n, vector<bool>(m, false));
    long long count =0;

    for(long long i =0; i<n; i++)
    {
        for(long long j =0; j<m; j++)
        {
            if(!vis[i][j] && grid[i][j]== '.')
            {
                dfs(i, j, n, m, vis, grid);
                {
                    count++;
                }
            }
        }

    }
    cout<<count<<endl;
    return 0;
}

