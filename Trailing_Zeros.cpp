#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin  >> n;
    long long i=5;
    long long ans=0;
    while(i<=1e9)
    {
        ans+=n/i;
        i=i*5;
    }
    cout<<ans<<"\n";
     
}