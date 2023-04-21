//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

void helper(vector<vector<char>> &b, int i,int j){
    if (i<0 || j<0 || i>=b.size() || j>=b[0].size() || b[i][j]!='O') return ;
    b[i][j]='!';
    helper(b,i+1,j);
    helper(b,i-1,j);
    helper(b,i,j+1);
    helper(b,i,j-1);

}

void solve(vector<vector<char>>& b) {
    int m=b.size(),n=b[0].size();
    for (int i=0;i<m;i++){
        if (b[i][0]=='O') helper(b,i,0);
        if (b[i][n-1]=='O') helper(b,i,n-1);
    }
    for (int i=0;i<n;i++){
        if (b[0][i]=='O') helper(b,0,i);
        if (b[m-1][i]=='O') helper(b,m-1,i);
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (b[i][j]=='!') b[i][j]='O';
            else b[i][j]='X';
        }
    }
    
}

int main(){
    
}

