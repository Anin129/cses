#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        ll n;
        cin >> n;
        vector<ll>a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        set<ll>st;
        ll l=0;
        ll r=0;
        ll ans =0;
        while(r<n){
            if(st.find(a[r])==st.end()){
                ans+=(r-l+1);
                st.insert(a[r]);
                r++;
            }
            else{
                while(st.find(a[r])!=st.end()){
                    st.erase(a[l]);
                    l++;

                }
            }
        }
        cout<<ans;
    }
