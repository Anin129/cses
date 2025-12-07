#include <bits/stdc++.h>
using namespace std;

int partitions(vector<long long> &a, long long mid)
{
    int parti=1;
    long long sum=0;

    for(int i=0;i<a.size();i++)
    {
        if(sum+a[i]>mid)
        {
            parti++;
            sum=a[i];
        }
        else
        {
            sum+=a[i];
        }
    }

    return parti;
}

long long min_max_subarray(vector<long long> &a ,int k)
{
    long long l=*max_element(a.begin(),a.end());
    long long h=accumulate(a.begin(),a.end(),0ll);
    long long mid;


    while(l<=h)
    {
        mid=(l+h)/2;
        int parti=partitions(a,mid);

        if(parti>k)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;

        }

    }
    return l;
    
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin >>n>>k;
    vector<long long> arr(n);
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<min_max_subarray(arr,k)<<endl;
}



