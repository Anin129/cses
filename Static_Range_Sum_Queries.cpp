#include <bits/stdc++.h>
using namespace std;

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
    vector<long long> prefix(n+1,0);
    prefix[0]=0;
    for(int i=1;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i-1];

        
    }
    while(q--)
    {
        long long l,r;
        cin>>l>>r;
        cout<<prefix[r]-prefix[l-1]<<"\n";

        
    }
}
