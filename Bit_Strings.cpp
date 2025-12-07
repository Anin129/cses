#include <bits/stdc++.h>
using namespace std;

long long power(long long a,long long n)
{   const long long mod=1000000007;
    long long no=n;
    long long ans=1;
    while(n>0)
    {
        if(n%2==0)
        {
            a=(a*a)%mod;
            n=n/2;
        }
        else
        {
            ans=(ans*a)%mod;
            n=n-1;
        }
    }
    return ans%mod;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    long long n;
    cin >>n;
    cout<<power(2,n)<<endl;
}
