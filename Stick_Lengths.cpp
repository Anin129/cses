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

    sort(a.begin(),a.end());
    long long median = a[n/2];
    long long count=0;
    for(long long i=0;i<n;i++)
    {
        count+=abs(a[i]-median);
    }
    cout<<count<<"\n";
}
