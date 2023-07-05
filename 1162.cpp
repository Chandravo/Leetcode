//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;


// int helper(vector<vector<int>> &g, int i, int j, int &res, vector<vector<int>> &dp){
//     if (i<0 || j<0 || i>=g.size() || j>=g.size() || g[i][j]==2) return INT_MIN;
//     // cout<<"HELLO"<<endl;
//     if (g[i][j]==1) return 0;
//     if (dp[i][j]!=-1) return dp[i][j];
//     // cout<<"HI"<<endl;
//     g[i][j]=2;
//     int temp;
//     temp=max(dp[i][j],1+helper(g,i+1,j,res,dp));
//     temp=max(dp[i][j],1+helper(g,i-1,j,res,dp));
//     temp=max(dp[i][j],1+helper(g,i,j+1,res,dp));
//     temp=max(dp[i][j],1+helper(g,i,j-1,res,dp));
//     dp[i][j]=temp;
//     res=max(res,dp[i][j]);
//     // cout<<res<<" "<<i<<" "<<j<<endl;
//     g[i][j]=0;
//     return dp[i][j];
// }

// int maxDistance(vector<vector<int>>& grid) {
//     int n=grid.size();
//     int res=-1;
//     vector<vector<int>> dp(n, vector<int>(n, -1));
//     for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             if (grid[i][j]==0 && dp[i][j]==-1) {
//                 helper(grid,i,j,res,dp); 
//             }
//         }
//     }
//     cout<<endl<<endl;
//     for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return res-1;
// }

int maxDistance(vector<vector<int>>& grid) {
    int n=grid.size();
    queue<pair<int,int>> q;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (grid[i][j]==1){
                q.push({i+1,j});
                q.push({i-1,j});
                q.push({i,j+1});
                q.push({i,j-1});
            }
        }
    }
    int s=0;
    while (q.size()){
        int m=q.size();
        s++;
        for (int i=0;i<m;i++){
            int x=q.front().first,y=q.front().second;
            q.pop();
            if (x>=0 && y>=0 && x<n && y<n && grid[x][y]==0){
                grid[x][y]=s;
                q.push({x+1,y});
                q.push({x-1,y});
                q.push({x,y+1});
                q.push({x,y-1});
            }
        }
    }
    return s==1? -1:s-1;
}

int main(){
    vector<vector<int>> grid {{1,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    cout<<maxDistance(grid)<<endl;
}