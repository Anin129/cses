#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve( ll col, vector<ll>&leftr, vector<ll>&updia, vector<ll>&downdia, vector<vector<char>>&board, ll &ways){


    if(col==8){
        ways++;
        return;
    }
    for(ll r=0; r<8; r++){
        if(board[r][col]!='*' && leftr[r]==0 && updia[r+col]==0 && downdia[7+col-r]==0){
            leftr[r]=1;
            updia[r+col]=1;
            downdia[7+col-r]=1;
            solve(col+1,leftr,updia,downdia,board,ways);
            leftr[r]=0;
            updia[r+col]=0;
            downdia[7+col-r]=0;

        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        vector<vector<char>>board(8,vector<char>(8,0));
        for(ll i=0; i<8; i++){
            for(ll j=0; j<8; j++){
                cin>>board[i][j];
            }
        }
        vector<ll>leftr(8,0);
        vector<ll>updia(17,0);
        vector<ll>downdia(17,0);
        ll ways =0;
        solve(0,leftr,updia,downdia,board,ways);
        cout<<ways;
    }
