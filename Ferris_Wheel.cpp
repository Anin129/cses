#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;
    vector<long long> weights(n);
    for(int i=0; i<n; i++) {
        cin >> weights[i];
    }
    sort(weights.begin(), weights.end());

    long long i =0;
    long long j=n-1;
    long long cnt=0;
    while(i<=j)
    {
        if(weights[i]+weights[j]<=x)
        {
            i++;
            
        }
       j--;
       cnt++;
    }
    cout<<cnt<<"\n";
}
