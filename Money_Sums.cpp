#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        ll n;
        cin >> n;
        vector<ll>arr(n);
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        set<ll>st;
        st.insert(0);
        ll sum =0;
        for(ll i =0; i<n; i++){
            set<ll>temp=st;
            for(auto x : st){
                sum=arr[i]+x;
                temp.insert(sum);
            }
            st=temp;
             

        }
        st.erase(0);
        cout<<st.size()<<endl;

        for(auto x : st){
            cout<<x<<" ";
        }
    }
