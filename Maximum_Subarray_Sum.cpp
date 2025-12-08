#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    vector<long long>arr(n);

    for(long long i=0 ;i<n; i++)
    {
        cin>>arr[i];
    }
    long long sum=0;
    long long maxsum=LLONG_MIN;
    for(long long i =0; i<n; i++)
    {
       sum+=arr[i];
       maxsum=max(sum,maxsum);
       if(sum<0)
       {
        sum=0;
       }


    }
    cout<<maxsum<<"\n";
}