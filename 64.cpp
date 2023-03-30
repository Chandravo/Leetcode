//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// int res=INT_MAX;

// void helper(vector<vector<int>> &grid, int i, int j, int sum){
//     if (i==grid.size()-1 && j==grid[1].size()-1){
//         sum+=grid[i][j];
//         res=min(res,sum);
//         return;
//     }
//     sum+=grid[i][j];
//     if (i<grid.size()-1) helper(grid,i+1,j,sum);
//     if (j<grid[0].size()-1) helper(grid,i,j+1,sum);
// }

int helper(vector<vector<int>> &grid, vector<vector<int>> &dp, int i, int j){
    // if (i==grid.size()-1 && j==grid[1].size()-1){
    //     sum+=grid[i][j];
    //     return sum;
    // }
    if (dp[i][j]!=-1){
        return dp[i][j];
    }
    dp[i][j]=grid[i][j];
    if (i==grid.size()-1){ 
        dp[i][j]+=helper(grid,dp,i,j+1);
        
    }
    else if (j==grid[0].size()-1) {
        dp[i][j]+=helper(grid,dp,i+1,j);
        
    }
    else {
        dp[i][j]+=min(helper(grid,dp,i+1,j),helper(grid,dp,i,j+1));
        
    }
    return dp[i][j];
}


int minPathSum(vector<vector<int>>& grid) {
    vector<vector<int>> dp(grid.size(),vector<int> (grid[0].size(),INT_MAX));
    dp[grid.size()-1][grid[0].size()-1]=grid[grid.size()-1][grid[0].size()-1];
    // for (int i=0;i<dp.size();i++){
    //     for (int j=0;j<dp[0].size();j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // helper(grid,dp,0,0);

    for (int i=grid.size()-1;i>=0;i--){
        for (int j=grid[0].size()-1;j>=0;j--){
            if (i==grid.size()-1 && j==grid[0].size()-1) continue;
            else if (i==grid.size()-1) dp[i][j]=grid[i][j]+dp[i][j+1];
            else if (j==grid[0].size()-1) dp[i][j]=grid[i][j]+dp[i+1][j];
            else dp[i][j]=grid[i][j]+min(dp[i+1][j],dp[i][j+1]);
        }
    }
    return dp[0][0];
}

int main(){
    vector<vector<int>> v{{1,2,3},{4,5,6}};
    cout<<minPathSum(v)<<endl;
}