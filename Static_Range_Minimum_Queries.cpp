#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//low, high---tree node's range
//l,h ----query range
void build(ll low, ll high, vector<ll> &seg, vector<ll> &arr, ll ind)
{
    if(low==high)
    {
        seg[ind] =arr[low];
        return;
    }
    ll mid =(low+high)/2;
    build(low, mid, seg, arr, 2*ind+1);
    build(mid +1, high, seg, arr, 2*ind+2);
    seg[ind] = min(seg[2*ind+1], seg[2*ind+2]);
}

ll query(ll low, ll high, ll l, ll h, vector<ll> &seg, ll ind )
{
    if(high<l || h<low )
    {
        return INT_MAX;
    }

    else if(low>=l && high<=h)
    {
        return seg[ind];
    }
    else {
        ll mid =(low+high)/2;
        ll left = query(low, mid, l, h, seg, 2*ind+1);
        ll right = query(mid+1, high, l, h, seg, 2*ind+2);
        return min(left, right);
    }
}

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
    vector<ll>seg(4*n);
     build(0,n-1,seg,arr,0);
    while(q--)
    {
        long long l,r;
        cin>>l>>r;
        cout<<query(0, n-1, l-1, r-1, seg, 0)<<"\n";  
    }
}
