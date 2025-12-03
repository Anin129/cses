#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   string s;
   cin>>s;
   int cnt=1;
    int maxi=1;
   for(int i=0;i<s.length()-1;i++)
   {
    if(s[i]==s[i+1])
    {
        cnt++;
        maxi =max(maxi,cnt);
    }
    else{
        cnt=1;
    }


   }
    cout<<maxi;
  

}