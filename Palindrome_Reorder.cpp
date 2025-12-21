#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{   ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    ll l = s.length();
    map<char, ll> mp;
    for(ll i=0; i<l; i++)
        mp[s[i]]++;
    ll oddcnt=0;
    char oddchar;
    for(ll i=0; i<26; i++){
        if(mp['A'+i] %2 ==1){
            oddcnt++;
            oddchar='A'+i;
        }
    }
    if(l%2 == 0 && oddcnt>0){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    if(l%2==1 && oddcnt>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    string ans="";
    for(ll i=0; i<26; i++){
        ll charcount= mp['A'+i];
        if(charcount%2==1) 
            continue;
        for(ll j=0; j<charcount/2; j++)
            ans+= 'A'+i;
    }
    if(oddchar){
     ll occnt=mp[oddchar];
    
    for(ll i=0; i<occnt/2; i++)
        ans+=oddchar;
    }
    string temp=ans;
    reverse(temp.begin(), temp.end());
    if(oddchar){
        ans+=oddchar;
    }
    ans+=temp;
    cout<<ans<<endl;
    return 0;
}