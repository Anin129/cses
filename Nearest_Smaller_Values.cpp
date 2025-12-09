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
    vector<long long>res(n,0);
    stack<pair<long long, long long>>s;

    for(long long i= 0;i<n; i++)
    {
        while(!s.empty() && s.top().first >= a[i])
        {
            s.pop();
            
        }
        if(!s.empty())
        {
            res[i]=s.top().second+1;
        }
        s.push({a[i],i});
    }

    for(long long i=0; i<n; i++)
    {
        cout<<res[i]<<" ";
    }

}