#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>arr(n);
    for(long long i =0; i< n; i++)
    {
        cin>>arr[i];
    }
    map<long long , long long>mp;
    
    long long i=0;
    long long j=0;
    long long maxi= LLONG_MIN;
    while(j<n)
    {
        if(mp.find(arr[j])== mp.end())
        {
            mp.insert({arr[j],j});
        }
        else
        {
            if(mp[arr[j]]>=i)
            {
                i= mp[arr[j]] +1;
            }
            mp[arr[j]]=j;
        }
        maxi=max(maxi,j-i+1);
        j++;
    }
    cout<<maxi<<endl;
}


