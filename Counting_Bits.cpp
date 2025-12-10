#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   long long n;
    cin>>n;
    long long temp= 2;
    long long ans=0;
    while(n/temp){
        ans+=(n/temp)*(temp/2);
        if(n%temp >= (temp/2))
        {
            ans+= n%temp -(temp/2)+ 1;

        }
        temp*=2;

    }
    if(n%temp >=(temp/2))
    {
        ans+= n%temp - (temp/2) +1;

    }

  
cout<<ans<<endl;



}
