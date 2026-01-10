#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        ll t;
        cin >> t;
        while(t--){
            ll n, a, b;
            cin>>n>>a>>b;
            if((a+b)>n){
                cout<<"NO"<<endl;
            }
            else if((a==0 || b==0 )&& (a+b)!=0){
                cout<<"NO"<<endl;
            }
            else if(a==0 && b==0){
                cout<<"YES"<<endl;
                for(ll i=1; i<=n; i++){
                    cout<<i<<" ";
                  
                }
                cout<<endl;
                for(ll i=1; i<=n; i++){
                    cout<<i<<" ";
                  
                }
                cout<<endl;

            }
            else{
                cout<<"YES"<<endl;
                for(ll i=1; i<=n; i++){
                    cout<<i<<" ";
                  
                }
                cout<<endl;

                for(ll i=a+1; i<=a+b; i++){
                    cout<<i<<" ";

                }
                for(ll i=1; i<=a; i++){
                    cout<<i<<" ";

                }
                for(ll i=a+b+1; i<=n; i++){
                    cout<<i<<" ";
                }
                cout<<endl;
                
            }

        }
    }