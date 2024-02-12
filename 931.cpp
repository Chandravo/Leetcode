//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int res = INT_MAX;

vector<vector<int>> dir{{1,-1},{1,0},{1,1}};

void dfs1(vector<vector<int>> &mat, int i, int j, int &curr){
    if (i<0 || j<0 || i>=mat.size() || j>=mat[0].size()) return;

    curr+=mat[i][j];

    if (i==mat.size()-1){
        res = min(res, curr);
        return;
    }

    for (auto &d:dir){
        dfs1(mat, i+d[0], j+d[1], curr);
    }
    curr-=mat[i][j];
}

vector<vector<int>> dp;

int dfs(vector<vector<int>> &mat, int i, int j){
    if (i==mat.size()) return 0;
    if (i<0 || j<0 || i>=mat.size() || j>=mat[0].size()) return 0;
    if(dp[i][j]!=INT_MAX) return dp[i][j];
    dp[i][j] = min(dp[i][j], dfs(mat, i+1, j-1));
    dp[i][j] = min(dp[i][j], dfs(mat, i+1, j));
    dp[i][j] = min(dp[i][j], dfs(mat, i+1, j+1));
    dp[i][j]+=mat[i][j];
    return dp[i][j];

}

int minFallingPathSum(vector<vector<int>>& matrix) {
    dp.resize(matrix.size(), vector<int> (matrix[0].size(),INT_MAX));
    int curr = 0;
    for (int j=0;j<matrix[0].size();j++) dfs(matrix,0,j);
    return *min_element(dp[0].begin(), dp[0].end());
}

int main(){
    
}