#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long st, et;
     map< long long , long long>mp;
    for(long long i =0; i< n; i++)
    {
        cin>>st>>et;
        mp.insert({st, 1});
        mp.insert({et, -1});
    }

     long long currp=0;
     long long maxi = 0;
    for(auto it : mp)
    {
        currp+= it.second;
        maxi= max(maxi, currp);
    }

    cout<< maxi <<endl;
}

   