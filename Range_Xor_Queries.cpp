#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  
    long long n,q;
    cin>>n>>q;
    vector<long long> arr(n);
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<ll>prex(n+1,0);
    prex[0]=0;
    for(ll i=1; i<=n; i++)
    {
        prex[i]= prex[i-1] ^ arr[i-1];

    }
    while(q--)
    {
        ll l, r;
        cin >> l >> r;
        cout<<(prex[r] ^ prex[l-1])<<endl;
    }
}




