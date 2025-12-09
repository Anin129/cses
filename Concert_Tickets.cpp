#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    long long m;
    cin >> n>> m;
    vector<long long>h(n);
    vector<long long>t(n);
    multiset<long long>ms;
    for(long long i=0; i<n; i++)
    {
        cin>>h[i];
    }
    for(long long i=0; i<n; i++)
    {
        cin>>t[i];
    }
    for(long long i =0; i<n; i++)
    {
        ms.insert(h[i]);
    }
    for(int i=0;i<m;i++)
    {
        if(ms.empty())
        {
            cout<< -1<<"\n";
            continue;
        }
        auto ub = ms.upper_bound(t[i]);
        if(ub == ms.begin())
        {
            cout<< -1 <<"\n";
            
        }
        else{
            ub--;
            cout<<*ub <<"\n";
            ms.erase(ub);

        }
    }

    }







    






    
