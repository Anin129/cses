#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool valid(ll i,ll j, ll n, ll m){
    if(i>=0 && i<n && j>=0 && j<m){
        return true;
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
    vector<vector<char>>grid(n,vector<char>(m));
    for(ll i=0;i<n; i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>grid[i][j];

        }
    }
    vector<vector<char>>ans(n,vector<char>(m));
    for(ll i=0;i<n; i++)
    {
        for(ll j=0;j<m;j++)
        {
            set<char>st;
            st.insert(grid[i][j]);
            if(valid(i-1,j, n, m)){
                st.insert(ans[i-1][j]);
            }
            if(valid(i, j-1, n, m)){
                st.insert(ans[i][j-1]);
            }
            for(char c ='A'; c<='D'; c++){
                if(st.find(c) ==st.end())
                {
                    ans[i][j] =c;
                    break;
                }
            }
           
        }
    }
    for(ll i=0;i<n; i++)
    {
        for(ll j=0;j<m;j++)
        {
            cout<<ans[i][j];

        }
        cout<<endl;
    }

}

