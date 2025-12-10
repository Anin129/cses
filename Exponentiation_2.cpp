#include<bits/stdc++.h>
using namespace std;
long long power(long long a,long long n , long long mod)
{
 long long ans=1;
 if(n<0)
 {
    a=a*-1;
 }
   long long nd=n;
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
            n--;
        }

        }
        if(nd<0)
        return (1/ans)%mod;
       
        return ans%mod;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin  >> t;
    while(t--)
    {
    long long a ,b, c;
    cin  >> a >> b>> c;
    long long m =1000000007;
    long long p = power(b,c,m-1);
    long long ans = power(a,p,m);
    cout<< ans <<endl;

    }
    }