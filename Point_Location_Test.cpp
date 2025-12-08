#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin  >> t;
    while(t--)
    {
    long long x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    long long abx= x2-x1;
    long long aby= y2-y1;
    long long acx= x3-x1;
    long long acy= y3-y1;
    long long bcx= x3 - x2;
    long long bcy= y3 - y2;
    long long crossp=abx*acy - aby*acx;
    if(crossp ==0)
    {
        cout<<"TOUCH\n";
    }
    else if(crossp > 0)
    {
        cout<<"LEFT\n";
    }
    else
    {
        cout<<"RIGHT\n";
    }
}
}

