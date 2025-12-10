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
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    long long smsum=0;
    long long maxel = arr[n-1];
    for(int i = 0; i<n-1; i++)
    {
        smsum+= arr[i];
    }
    long long ans;
    long long waitt;
    if(maxel > smsum)
    {
        waitt = maxel - smsum;
        ans = waitt + (maxel + smsum);
    }
    else{
        ans = maxel + smsum ;
    }
    cout<<ans;
}


