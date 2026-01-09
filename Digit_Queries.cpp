#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        ll t;
        cin >> t;
        while(t--){
            ll x;
            cin >> x;
            ll s=1;
            ll diglen=1;
            ll cnt=9;

            while(x>(s+(diglen*cnt)-1)){
                s+=(diglen*cnt);
                diglen++;
                cnt*=10;
            }

            ll num1 = pow(10,diglen-1);
            ll gap = x-s;
            ll tnum = num1+(gap/diglen);
            string snum = to_string(tnum);
            cout<<snum[(gap%diglen)]<<endl;
        }
    }
