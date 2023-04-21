//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

void helper(vector<vector<char>> &grid, int i, int j){
    if (i<0 || j<0 || i>=grid.size() || j>=grid[i].size() || grid[i][j]!='1') return;
    grid[i][j]='2';
    helper(grid,i-1,j);
    helper(grid,i+1,j);
    helper(grid,i,j-1);
    helper(grid,i,j+1);
}

int numIslands(vector<vector<char>>& grid) {
    int res=0;
    for (int i=0;i<grid.size();i++){
        for (int j=0;j<grid[i].size();j++){
            if (grid[i][j]=='1'){
                helper(grid,i,j);
                res++;
            }
        }
    }        
    return res;
}

int main(){
    vector<vector<char>> grid{
        {'1','1','1','1','0'},
        {'1','1','0','1','0'},  
        {'1','1','0','0','0'},  
        {'0','0','0','0','0'}  
    };
    cout<<numIslands(grid)<<endl;
}