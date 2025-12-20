#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool comp(pair<ll,ll>a,pair<ll,ll>b){
    if(a.second!=b.second)
    {
     return a.second<b.second;
        
    }
   
    return b.first>a.first;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<pair<ll, ll>>v;
    for(ll i=0;i<n;i++){

        ll a,b;
        cin >>a >>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),comp);
    ll cnt=1;
    ll endt = v[0].second;
    for(ll i=1;i<n;i++){
        if(endt<=v[i].first){
            cnt++;
            endt = v[i].second;

        }
       
    }
    cout<<cnt;

}