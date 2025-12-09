#include<bits/stdc++.h>
using namespace std;



string gc(int a, int n)
{
   int grayc=a^(a>>1);
   string res="";
   for(int i= n-1;i>=0;i--)
   {
    res+=((grayc&(1<<i))?'1':'0');

   }
   return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i=0;i<1<<n;i++)
    {
           cout<<gc(i,n)<<"\n";
    }
}
    