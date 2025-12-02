#include <bits/stdc++.h>
using namespace std;

int main() 
{
     ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    long long m;
     long long k;
    cin>>n>>m>>k;
    vector<long long> a(n);
    
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    vector<long long> b(m);
    
    for(long long i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

  

    long long cnt=0;
    long long i=0;
    long long j=0;

    
    while(i<n && j<m)
    {
        if (abs(a[i]-b[j]) <= k)
        {
            cnt++;
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout<<cnt;
}

