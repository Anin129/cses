#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    queue<ll>q;
    for(ll i=1; i<=n;i++)
    {
        q.push(i);
    }
    ll f =0;
    while(!q.empty())
    {
        ll x= q.front();
        q.pop();
        if(f)
        {
            cout<<x<<" ";
            f=0;
        }
        else{
            q.push(x);
            f=1;
        }


    }
}


