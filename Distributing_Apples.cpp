#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll M =1e9 +7;
const ll s =1e6;

ll pow(ll a, ll n){
    ll ans=1;
    while(n!=0){
        if(n%2==0){
        a=(a*a)%M;
        n=n/2;
    }
    else{
        ans=(ans*a)%M;
        n--;
    }

    }
    return ans;
    
}

ll inverse(ll a){
    return pow(a,M-2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin>>n >> m;
    vector<ll>fact(2*s+1);
    fact[0]=1;
    for(ll i=1;i<=2*s-1;i++){
        fact[i]=(fact[i-1]*i)%M;
    }
    vector<ll>ivfact(s+1);
    ivfact[s]=inverse(fact[s]);
    for(ll i=s-1;i>=0;i--){
        ivfact[i]=(ivfact[i+1]*(i+1))%M;
    }

    cout<<((fact[m+n-1]*ivfact[m])%M*ivfact[n-1])%M;
}

