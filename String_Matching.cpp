#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

  string txt,pattern;
  cin>>txt>>pattern;
  int n=txt.length();
    int m=pattern.length();
  vector<int>lps(m,0);
  int i=1;
  lps[0]=0;
  int l=0;
  while(i<m)
  {
    if(pattern[i]==pattern[l])
    {
        l++;
        
        lps[i]=l;
        i++;
    }
    else{
        if(l!=0)
        {
            l=lps[l-1];

        }
        else{
            l=0;
            i++;
        }
    }
  }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<lps[i]<<" ";
    // }

    int cnt=0;
     i=0;
    int j=0;
    while(i<n)
    {
        if(pattern[j]==txt[i])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            cnt++;
            j=lps[j-1];

        }
        else{
            if( pattern[j]!=txt[i])
            {
                if(j!=0)
                {
                    j=lps[j-1];
                }
                else
                {
                    i++;
                }
            }

        }
    }
    cout<<cnt;

}
