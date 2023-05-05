//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &grid, int i, int j, queue<pair<int,int>> &q){
    if (i<0 || j<0 || i>=grid.size() || j>=grid.size() || grid[i][j]!=1) return;
    grid[i][j]=2;
    q.push({i,j});
    dfs(grid,i+1,j,q);
    dfs(grid,i-1,j,q);
    dfs(grid,i,j+1,q);
    dfs(grid,i,j-1,q);
}

int shortestBridge(vector<vector<int>>& grid) {
    vector<vector<int>> dir{{1,0},{0,1},{-1,0},{0,-1}};
    queue<pair<int,int>> q;
    bool f=false;
    for (int i=0;i<grid.size();i++){
        for (int j=0;j<grid.size();j++){
            if (grid[i][j]){
                dfs(grid,i,j,q);
                f=true;
                break;
            }
        }
        if (f) break;
    }
    int res=0;
    // for (int i=0;i<grid.size();i++){
    //     for (int j=0;j<grid.size();j++){
    //         cout<<grid[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    while (!q.empty()){
        // cout<<"lol"<<endl;
        int n=q.size();
        // cout<<"n = "<<n<<endl;
        for (int i=0;i<n;i++){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for (int j=0;j<4;j++){
                int nx=x+dir[j][0];
                int ny=y+dir[j][1];
                if (min(nx,ny)>=0 && max(nx,ny)<grid.size()){
                    if (grid[nx][ny]==1) return res;
                    if (grid[nx][ny]==0){
                        // cout<<nx<<" "<<ny<<endl;
                        q.push({nx,ny});
                        grid[nx][ny]=2;
                    }
                }
            }
        }
        // cout<<"here"<<endl;
        res++;
        // cout<<"res = "<<res<<endl;
        
    }
    return 0;
}

int main(){
    
}