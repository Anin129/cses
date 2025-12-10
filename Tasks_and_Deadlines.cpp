#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    long long a, d;
   
    multimap<long long, long long>mp;
    for(int i=0; i<n; i++)
    {
         cin  >> a >> d;
         mp.insert({a,d});

    }
    long long curt=0; 
    long long rew=0;
    for(auto it : mp)
    {
        curt+= it.first;
        rew+= (it.second - curt);
    }

    cout<<rew;
}


