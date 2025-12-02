#include <bits/stdc++.h>
using namespace std;

int main() 
{
     ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

   long long n;
    long long target;
    cin >> n >> target;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];


map<int,int>mp;
   for(int i=0;i<n;i++)
   {
    int num=a[i];
    int morereq=target-num;
    if(mp.find(morereq)!=mp.end())
    {
        cout<<mp[morereq]+1<<" "<<i+1<<"\n";
        return 0;
    }
    mp[num]=i;


   }
    cout<<"IMPOSSIBLE\n";
}