//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    if (!grid.size() || !grid[0].size()) return -1;
    int res=1;
    queue<pair<int,int>> q;
    vector<vector<int>> d{{1,1}, {0,1},{1,0},{0,-1},{-1,0},{-1, -1},{1, -1},{-1, 1}};
    q.push({0,0});
    while (!q.empty()){
        int n=q.size();
        for (int i=0;i<n;i++){
            auto tmp=q.front();
            if (tmp.first==grid.size()-1 && tmp.second==grid[0].size()-1) return res;
            q.pop();
            for (int i=0;i<8;i++){
                int x = tmp.first+d[i][0];
                int y = tmp.second+d[i][1];
                if (x>=0 && y>=0 && x<grid.size() && y<grid[0].size() && grid[x][y]==0){
                    q.push({x,y});
                    grid[x][y]=1;
                }
            }
            
        }
        res++;
    }
    return -1;
}

int main(){
    vector<vector<int>> grid{{0,0,0},{1,1,0},{1,1,0}};
    cout<<shortestPathBinaryMatrix(grid);
}