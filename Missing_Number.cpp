#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) { 
        cin >> arr[i];
    }
    long long realSum = (n * (n + 1)) / 2;
    long long missSum = 0;

    for(int i=0;i<n;i++)
    {
        missSum+=arr[i];
    }
    cout << realSum - missSum << "\n";
}
