//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int islandPerimeter(vector<vector<int>>& grid) {
    short int res=0;
    for (short int i=0;i<grid.size();i++){
        for (int j=0;j<grid[0].size();j++){
            if (grid[i][j]==1){
                res+=4;
                if (j>0 && grid[i][j-1]==1) res-=2;
                if (i>0 && grid[i-1][j]==1) res-=2;
            }
            
        }
    }  
    return res;      
}

int main(){
    
}