#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k,x,a,b,c;
    cin >>n>>k;
    cin>>x>>a>>b>>c;
    vector<long long> arr(n);
    arr[0]=x;
    for(long long i=1;i<n;i++)
    {
        arr[i]= (arr[i-1]*a + b)%c;
    }
   
    long long i=0;
    long long j=0;
    long long maxi=0;
    long long sum=0;
    vector<long long> res;
    while(j<n)
    {
        sum+=arr[j];
        if(j-i+1<k)
        {
            j++;
        }
        else 
           if(j-i+1==k)
           {
            res.push_back(sum);

            sum-=arr[i];
            j++;
            i++;
           }
        }
         long long xore=0;
         for(long long i=0;i<res.size();i++)
         {
           xore=xore^res[i];
         }
            cout<<xore<<"\n";
    }
   



