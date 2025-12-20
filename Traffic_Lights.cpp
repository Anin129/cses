#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll x, n;
    cin>>x >> n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    set<pair<ll, ll>>st;
    st.insert({0,x});
    multiset<ll>mt;
    mt.insert(x);
    for( ll i=0; i<n; i++)
    {
        ll p =v[i];
        auto it = st.upper_bound({p,0});
        it--;
        ll s =it->first;
        ll e =it->second;
        st.erase(it);
        mt.erase(mt.find(e-s));
        st.insert({s,p});
        st.insert({p,e});
        mt.insert(p-s);
        mt.insert(e-p);

        cout<<*mt.rbegin()<<" ";

    }
}