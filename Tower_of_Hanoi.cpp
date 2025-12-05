#include <bits/stdc++.h>
using namespace std;


int TOH(int n, int src,int dest,int aux, vector<pair<int,int>>&ans) 
        {
            if(n==1)
            {
                ans.push_back({src,dest});
                return 1;
            }

            int cnt=0;
            cnt=TOH(n-1,src,aux,dest,ans);
            ans.push_back({src,dest});
            cnt+=TOH(n-1,aux,dest,src,ans);
            return cnt+1;
        }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        int n;
        cin >> n;
        vector<pair<int,int>>res;
        int ans=TOH(n,1,3,2,res);
        
        cout<<ans<<"\n";
        for(auto x:res)
        {
            cout<<x.first<<" "<<x.second<<"\n";
        }
        

    return 0;
}
