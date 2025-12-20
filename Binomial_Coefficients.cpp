#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll M = 1e9 + 7;
const ll s = 1e6 ;

ll pow(ll a, ll n){
    ll ans =1;
    while(n!=0)
    {
        if(n %2 ==0)
        {
            n= n/2;
            a =(a*a)%M;
        }
        else{
            ans = (ans * a)%M;
            n--;
        }

    }
    return ans;
}

ll inv(ll a){
    return pow(a,M-2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<ll>fact(s+1);
fact[0]=1;
for(ll i=1; i<=s; i++)
{
    fact[i] = (i*fact[i-1])%M;
}
vector<ll>ivfact(s+1);
ivfact[s]=inv(fact[s]);
for(ll i=s-1; i>=0; i--)
{
    ivfact[i]=((i+1) * ivfact[i+1])%M;
}
    ll n;
    cin >> n;
    while(n--){
    ll a,b;
    cin >>a >> b;
    cout<<((fact[a]*ivfact[b])%M*ivfact[a-b])%M<<endl;
    }
}
    
    

