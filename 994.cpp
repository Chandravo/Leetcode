//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dir {{0,1},{0,-1},{1,0},{-1,0}};

int orangesRotting(vector<vector<int>>& grid) {
    int numo= 0;
    queue<pair<int,int>> q; 

    for (int i=0;i<grid.size();i++){
        for (int j=0;j<grid[0].size();j++){
            if (grid[i][j]==1) numo++;
            if (grid[i][j]==2) q.push({i,j});
        }
    }        
    int minutes = 0;
    while (!q.empty()){
        int n = q.size();
        for (int i=0;i<n;i++){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for (auto &j:dir){
                int nx = x+j.first;
                int ny = y+j.second;
                if (nx<0 || ny<0 || nx>=grid.size() || ny>=grid[0].size()) continue;
                cout<<nx<<' '<<ny<<endl;
                if (grid[nx][ny]==1) {
                    grid[nx][ny] = 2;
                    q.push({nx,ny});
                    numo--;
                }
            }
        }
        minutes++;
    }
    if (numo==0) return minutes;
    else return -1;

}

int main(){
    vector<vector<int>> grid{{2, 1, 1}, {1, 1, 0}, {0, 1, 1}};
    cout<<orangesRotting(grid)<<endl;
}