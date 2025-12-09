#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin  >> n;
    vector<long long>a(n);
    for(long long i=0;i<n;i++)
    {
        cin >> a[i];
    }
    map<long long,long long>mpp;
    for(long long i=0;i<n;i++)
    {
        mpp[a[i]]=i;
    }
    long long cnt=1;
    for(long long i=1; i<=n; i++)
    {
        if(mpp[i]<mpp[i-1])
        {
            cnt++;
        }
    }
    cout<<cnt<<"\n";
}