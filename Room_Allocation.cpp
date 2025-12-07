#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   long long n;
   cin >>n;
   vector<vector<long long>>time(n,vector<long long>(2));
    for(long long i=0;i<n;i++)
    {
         cin>>time[i][0]>>time[i][1];
    }

    vector<vector<long long>>ans(n,vector<long long>(3));
   
    for(long long i=0;i<n;i++)
    {
        ans[i][0]=time[i][0];
        ans[i][1]=time[i][1];
        ans[i][2]=i;
        
    }

    sort(ans.begin(),ans.end());

    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq;
   int cnt=0;
   int arrTime,deptTime,ind;
   vector<int>res(n);
    for(long long i=0;i<n;i++)
    {
        arrTime=ans[i][0];
        deptTime=ans[i][1];
        ind=ans[i][2];

        if(pq.empty() || pq.top().first>=arrTime)
        {
            cnt++;
            pq.push({deptTime,cnt});
            res[ind]=cnt;
        }
        else
        {
            int vacRoom=pq.top().second;
            pq.pop();
            pq.push({deptTime,vacRoom});
            res[ind]=vacRoom;

        }
       

    }

     cout<<cnt<<endl;

        for(long long j=0;j<n;j++)
        {
            cout<<res[j]<<" ";
        }
}