//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int res = 0;
int MOD = 1e9;
vector<vector<int>> dp;

int dfs(vector<vector<int>> &mat, int i, int j){
    if (i<0 || j<0 || i>=mat.size() || j>=mat[0].size()) return 0;
    if (dp[i][j]!=0) return dp[i][j];
    if (dp[i][j]==0)dp[i][j] = 1;
    if (i>0 && mat[i][j]>mat[i-1][j]) dp[i][j] = (dp[i][j]%MOD + ((dfs(mat, i-1,j))%MOD+1)%MOD)%MOD;
    if (j>0 && mat[i][j]>mat[i][j-1]) dp[i][j] = (dp[i][j]%MOD + ((dfs(mat, i,j-1))%MOD+1)%MOD)%MOD;
    if (i<mat.size()-1 && mat[i][j]>mat[i+1][j]) dp[i][j] = (dp[i][j]%MOD + ((dfs(mat, i+1,j))%MOD+1)%MOD)%MOD;
    if (j<mat[0].size()-1 && mat[i][j]>mat[i][j+1]) dp[i][j] = (dp[i][j]%MOD + ((dfs(mat, i,j+1))%MOD+1)%MOD)%MOD;
    return dp[i][j];
}

int countPaths(vector<vector<int>>& mat) {
    int m = mat.size(), n = mat[0].size();
    dp.resize(m, vector<int> (n,0));
    for (int i=0;i<m;i++){
        for (int j = 0;j<n;j++){
            res = max(dfs(mat,i,j), res);
        }
    }
    return res;

}

int main(){
    
}