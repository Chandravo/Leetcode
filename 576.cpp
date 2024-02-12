//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<vector<int>>> dp;

const int MOD = 1e9+7;
int res = 0;

int fn(int &m, int &n, int i, int j, int move){
    if (move<0) return 0;
    if (i<0 || j<0 || i>=m || j>=n){
        return 1;
    }
    if (dp[i][j][move]!=-1) return dp[i][j][move];
    dp[i][j][move]= fn (m,n, i+1, j, move-1);
    dp[i][j][move]= (dp[i][j][move] + fn (m,n, i-1, j, move-1))%MOD;
    dp[i][j][move]= (dp[i][j][move] + fn (m,n, i, j+1, move-1))%MOD;
    dp[i][j][move]= (dp[i][j][move] + fn (m,n, i, j-1, move-1))%MOD;
    return dp[i][j][move];
}

int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
    dp.resize(m, vector<vector<int>> (n, vector<int> (maxMove+1, -1)));
    fn (m,n,startRow, startColumn, maxMove);
    return dp[startRow][startColumn][maxMove];
}

int main(){
    
}