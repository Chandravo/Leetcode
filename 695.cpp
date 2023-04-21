//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int helper(vector<vector<int>> &grid, int i, int j){
    if (i<0 || j<0 || i>=grid.size() || j>=grid[i].size() || grid[i][j]!=1) return 0;
    grid[i][j]=-1;
    return 1+
    helper(grid,i-1,j)+
    helper(grid,i+1,j)+
    helper(grid,i,j-1)+
    helper(grid,i,j+1);
}

int maxAreaOfIsland(vector<vector<int>>& grid) {
    int res=0;
    for (int i=0;i<grid.size();i++){
        for (int j=0;j<grid[i].size();j++){
            if (grid[i][j]==1){
                
                res=max(res,helper(grid,i,j));
            }
        }
    }        
    return res;
}

int main(){
    
}