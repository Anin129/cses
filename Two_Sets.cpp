#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll sum = (n*(n+1))/2;
    if(sum%2==1)
    {
        cout<<"NO";
    }
    else{
        vector<ll>v1;
        vector<ll>v2;
        ll hsum =sum/2;
        for(ll i=n; i>=1;i--)
        {
            if(i<=hsum)
            {
                v1.push_back(i);
                hsum-=i;
                
                
            }
            else{
                v2.push_back(i);
                
            }

        }
        cout<<"YES"<<endl;
        cout<<v1.size()<<endl;
        for(auto x : v1){
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<v2.size()<<endl;
        for(auto x : v2){
            cout<<x<<" ";
        }
        cout<<endl;

    }
}
