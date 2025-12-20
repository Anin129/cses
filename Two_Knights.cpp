#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll ways(ll k){
    ll tot =k*k*(k*k-1)/2;
    ll attack= 4*(k-1)*(k-2);
    return tot -attack;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
         cout<<ways(i)<<endl;;
    }
}
