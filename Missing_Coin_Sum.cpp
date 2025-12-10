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
    sort(arr.begin(),arr.end());
    long long sum =0;
    long long ans =0;
    for(long long i= 0; i<n; i++)
    {    
        
     
        if((sum+1)<arr[i])
        {
            ans=sum+1;
            break;
        }

        else{
               sum+=arr[i];
               ans=sum+1;
        }
    }
    cout<<ans<<endl;
}


