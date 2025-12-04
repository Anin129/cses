#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    long long t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
          long long m=2*a-b;
          long long n=2*b-a;
          if(m>=0 && m%3==0 && n>=0 && n%3==0)
          {
              cout<<"YES\n";
          }
          else
          {
              cout<<"NO\n";
          }
        
    }
}
