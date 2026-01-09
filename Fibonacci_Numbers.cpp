#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll m = 1e9 +7;
void multiply(vector<vector<ll>>&mat1, vector<vector<ll>>&mat2){
    ll a = (mat1[0][0]*mat2[0][0] + mat1[0][1]*mat2[1][0])%m;
    ll b = (mat1[0][0]*mat2[0][1] + mat1[0][1]*mat2[1][1])%m;
    ll c = (mat1[1][0]*mat2[0][0] + mat1[1][1]*mat2[1][0])%m;
    ll d = (mat1[1][0]*mat2[0][1] + mat1[1][1]*mat2[1][1])%m;
    mat1[0][0]=a;
    mat1[0][1]=b;
    mat1[1][0]=c;
    mat1[1][1]=d;
}

void pow(vector<vector<ll>>&mat1, ll n){
    if(n==0 || n==1){
        return;
    }
    vector<vector<ll>>v={{1,1},{1,0}};
    pow(mat1,n/2);
    multiply(mat1,mat1);
    if(n%2!=0)
    multiply(mat1,v);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   long long n;
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    vector<vector<ll>>mat1={{1,1},{1,0}};
    pow(mat1,n-1);
    cout<<mat1[0][0];
}