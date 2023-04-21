//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool helper(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j){
    if (i<0 || j<0 || i>=grid1.size() || j>=grid1[0].size() || grid2[i][j]!=1) return true;
    
    grid2[i][j]=0;
    bool res=true;
    if (grid1[i][j]!=1) res=false;

    res = helper(grid1,grid2,i+1,j) && res;
    res = helper(grid1,grid2,i-1,j) && res;
    res = helper(grid1,grid2,i,j+1) && res;
    res = helper(grid1,grid2,i,j-1) && res;

    return res;
}

int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
    int res=0;
    for (int i=0;i<grid1.size();i++){
        for (int j=0;j<grid1[i].size();j++){
            if (grid2[i][j]) {
                if (helper(grid1,grid2,i,j)) {
                    res++;
                    cout<<i<<" "<<j<<endl;
                }
            }
        }
    }
    return res;
}

int main(){
    
}