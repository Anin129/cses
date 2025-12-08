#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin  >> s;
    set<string > st;


    sort(s.begin(),s.end());
    st.insert(s);
    while(next_permutation(s.begin(),s.end()))
    {
        st.insert(s);
    }
    cout<<st.size()<<"\n";
    for(auto it:st)
    {
        cout<<it<<"\n";
    }

}