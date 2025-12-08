#include<bits/stdc++.h>
using namespace std;

 vector<long long>divisors(1e6 + 1,0 );
    void countDivisors()
    {
    for(long long i =1; i<= 1e6; i++)
      for(long long j =i; j<= 1e6; j+=i)
        {
            divisors[j]++;
        }
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    countDivisors();
    while(t--)
    {
        long long n;
        cin >> n;
        cout << divisors[n] << "\n";       
    }
}
