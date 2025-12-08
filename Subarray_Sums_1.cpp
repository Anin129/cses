#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    long long t;
    cin >> t;
    vector<long long>arr(n);
    map<long long, long long>mp;
  

    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    long long sum=0;
    long long rem;
    long long cnt=0;
    mp[0]=1;
    for(long long i = 0;i<n;i++)
    {
        sum+= arr[i];
        rem=sum-t;
        cnt+=mp[rem];
         mp[sum]++ ;
    }

    cout<<cnt<<"\n";
}