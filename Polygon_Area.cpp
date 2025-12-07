#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  
    long long n;
    cin>>n;

    vector<pair<long long,long long>> vertex(n);
    for(long long i=0;i<n;i++)
    {
        cin>>vertex[i].first>>vertex[i].second;
    }

    long long area=0;
    long long px,py,qx,qy;
    for(int i=0;i<n;i++)
    {
        px=vertex[i].first;
        py=vertex[i].second;
        qx=vertex[(i+1)%n].first;
        qy=vertex[(i+1)%n].second;
        area+=px*qy - py*qx;
    }
    cout<<llabs(area)<<"\n";
}