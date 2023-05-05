//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;



int dfs(vector<vector<int>> &g, int i, int j){
    if (i<0 || j<0 || i>=g.size() || j>=g[0].size() ||  !g[i][j]) return 0;
    // int tmp=g[i][j];
    int res=g[i][j];
    g[i][j]=0;
    res+=
    dfs(g,i+1,j)+
    dfs(g,i-1,j)+
    dfs(g,i,j+1)+
    dfs(g,i,j-1);
    return res;
}

int findMaxFish(vector<vector<int>>& grid) {
    int res=0;
    for (int i=0;i<grid.size();i++){
        for (int j=0;j<grid[0].size();j++){
            res=max(res,dfs(grid,i,j));
        }
    }
    return res;
}

int main(){
    
}